#define _GNU_SOURCE
#include "ck_common.h"
#include "ck_ota.h"
#include "ck_store.h"
#include "ck_meter.h"
#include "ck_led.h"
#include "ck_protocol.h"
#include "ck_matter_control.h"
#include "ck_energy.h"
#include "password_script.h"
#include "update_page.h"
#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <net/if.h>
#include <poll.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/statfs.h>
#include <sys/time.h>
#include <sys/types.h>
#include <time.h>
#include <unistd.h>
static int sendall(int fd, const void *p, size_t n) {
  const char *b = p;
  while (n) {
    ssize_t r = send(fd, b, n, MSG_NOSIGNAL);
    if (r < 0 && errno == EINTR)
      continue;
    if (r <= 0)
      return -1;
    b += r;
    n -= (size_t)r;
  }
  return 0;
}
static void reply(int fd, int status, const char *type, const char *body) {
  char h[384];
  size_t n = strlen(body);
  int len = snprintf(
      h, sizeof(h),
      "HTTP/1.1 %d %s\r\nContent-Type: %s\r\nContent-Length: "
      "%zu\r\nConnection: close\r\nCache-Control: "
      "no-store\r\nX-Content-Type-Options: nosniff\r\nContent-Security-Policy: "
      "default-src 'self'; script-src 'self' 'unsafe-inline'; style-src 'self' "
      "'unsafe-inline'; connect-src 'self' https:; frame-ancestors "
      "'none'\r\n\r\n",
      status, status == 200 ? "OK" : "Error", type, n);
  if (len > 0 && len < (int)sizeof(h)) {
    sendall(fd, h, (size_t)len);
    sendall(fd, body, n);
  }
}
static void json(int fd, int status, const char *body) {
  reply(fd, status, "application/json; charset=utf-8", body);
}
#include "ck_web_auth.h"
static void protocol_get(int fd) {
  char b[256];const char *selected=ck_protocol_selected(),*active=ck_protocol_active();
  snprintf(b,sizeof(b),"{\"selected\":\"%s\",\"active\":\"%s\",\"restart_pending\":%s}",selected,active,access(ck_path(CK_PROTOCOL_PENDING),F_OK)?"false":"true");
  json(fd,200,b);
}
static void management_reboot(void) {
#ifndef CK_TESTING
  pid_t child=fork();if(!child) { for(int f=0;f<128;f++)close(f);sleep(2);execl("/bin/reboot","reboot",(char *)NULL);_exit(127); }
#endif
}
static int operation_begin(void) {
  int lock=ck_transfer_lock();if(lock<0)return -1;
  if(!access(ck_path("/var/run/ck-ota/queued"),F_OK) || !access(ck_path(CK_PROTOCOL_PENDING),F_OK) ||
     !access(ck_path("/var/run/ck-network-changing"),F_OK) ||
     !access(ck_path("/var/run/ck-factory-pending"),F_OK) || mkdir(ck_path(CK_MATTER_LOCK),0700)) { close(lock);return -1; }
  return lock;
}
static void operation_end(int lock) { rmdir(ck_path(CK_MATTER_LOCK));close(lock); }
static void protocol_set(int fd,const char *mode) {
  if(!ck_protocol_valid(mode)){json(fd,400,"{\"error\":\"protocol\"}");return;}
  int lock=operation_begin();if(lock<0){json(fd,409,"{\"error\":\"busy\"}");return;}
  if(!strcmp(mode,ck_protocol_active()) && !strcmp(mode,ck_protocol_selected())) {
    operation_end(lock);json(fd,200,"{\"status\":\"unchanged\"}");return;
  }
  int error=ck_atomic(ck_path(CK_PROTOCOL_PENDING),mode,strlen(mode),0600);
  if(!error)error=ck_store_set(CK_PROTOCOL_KEY,mode,strlen(mode));
  if(error){unlink(ck_path(CK_PROTOCOL_PENDING));operation_end(lock);json(fd,503,"{\"error\":\"storage\"}");return;}
  close(lock);json(fd,200,"{\"status\":\"restarting\"}");management_reboot();
}
static void matter_queue(int fd,char action,int lock) {
  char id[65],command[67];
  if(web_random(id)){operation_end(lock);json(fd,503,"{}");return;}
  command[0]=action;command[1]=' ';memcpy(command+2,id,64);command[66]='\n';
  if(ck_atomic(ck_path(CK_MATTER_REQUEST),command,sizeof(command),0600)) { operation_end(lock);json(fd,503,"{}");return; }
  close(lock);char b[128];snprintf(b,sizeof(b),"{\"request_id\":\"%s\",\"result\":\"queued\"}",id);json(fd,202,b);
}
static int matter_ready(void) {
  char b[512];FILE *f=fopen(ck_path(CK_MATTER_STATE),"r");long stamp=0;int ok=0;
  if(f){if(fgets(b,sizeof(b),f) && sscanf(b,"{\"updated_s\":%ld,",&stamp)==1 && stamp<=web_now() && web_now()-stamp<=5)ok=1;fclose(f);}
  return ok;
}
static void admin_action(int fd,const char *path,const char *body,unsigned length) {
  int lock=operation_begin();if(lock<0){json(fd,409,"{\"error\":\"busy\"}");return;}
  if(!strcmp(path,"/admin/led") || !strcmp(path,"/admin/led-find") || !strcmp(path,"/admin/led-time")) {
    int r=-2;
    if(!strcmp(path,"/admin/led"))r=ck_led_save_config(body);
    else if(!strcmp(path,"/admin/led-find"))r=length?-2:ck_led_find();
    else {
      char *end=NULL;errno=0;unsigned long long utc=strtoull(body,&end,10);
      if(length>=10 && length<=11 && body[0]>='1' && body[0]<='9' && !errno && end && !*end)r=ck_led_set_time(utc,0);
    }
    operation_end(lock);json(fd,r==-2?400:r?503:200,r?"{\"error\":\"led_settings\"}":"{\"result\":\"complete\"}");return;
  }
  if(!strcmp(path,"/admin/energy-reset")) {
    if(!strcmp(ck_protocol_active(),"matter")) {
      if(!matter_ready()){operation_end(lock);json(fd,503,"{\"error\":\"protocol_not_ready\"}");return;}
      matter_queue(fd,'E',lock);return;
    }
    if(strcmp(ck_protocol_active(),"homekit")){operation_end(lock);json(fd,503,"{\"error\":\"protocol_not_ready\"}");return;}
    int r=ck_energy_reset();operation_end(lock);json(fd,r?503:200,r?"{\"error\":\"storage\"}":"{\"result\":\"complete\"}");return;
  }
  if(!strcmp(path,"/admin/factory-reset")) {
    if(ck_factory_request()){operation_end(lock);json(fd,503,"{\"error\":\"storage\"}");return;}
    close(lock);json(fd,200,"{\"status\":\"restarting\"}");management_reboot();return;
  }
  if(!strcmp(path,"/admin/reboot")) {
    if(ck_atomic(ck_path(CK_PROTOCOL_PENDING),"reboot",6,0600)){operation_end(lock);json(fd,503,"{}");return;}
    close(lock);json(fd,200,"{\"status\":\"restarting\"}");management_reboot();return;
  }
  if(!strcmp(path,"/admin/open-commissioning") || !strcmp(path,"/admin/pairing-reset")) {
    if(!strcmp(ck_protocol_active(),"matter") && matter_ready()) { matter_queue(fd,!strcmp(path,"/admin/pairing-reset")?'R':'O',lock);return; }
    if(!strcmp(path,"/admin/pairing-reset") && !strcmp(ck_protocol_active(),"homekit")) {
      if(ck_store_set("control/homekit-reset","1",1) || ck_atomic(ck_path(CK_PROTOCOL_PENDING),"homekit",7,0600)) {
        operation_end(lock);json(fd,503,"{}");return;
      }
      close(lock);json(fd,200,"{\"status\":\"restarting\"}");management_reboot();return;
    }
    operation_end(lock);json(fd,503,"{\"error\":\"protocol_not_ready\"}");return;
  }
  if(!strcmp(path,"/admin/wifi")) {
    uint8_t request[104];
    if(length!=208 || ck_unhex(body,104,request) || memcmp(request,"CKW1",4) || request[4]<1 || request[4]>32 || request[5]>64 || request[6]>1 || request[7] ||
       (request[6] && request[5]<8) || (!request[6] && request[5])) {operation_end(lock);json(fd,400,"{}");return;}
    int error=ck_atomic(ck_path("/var/run/ck-setup-request.bin"),request,sizeof(request),0600);
    if(!error)error=ck_atomic(ck_path("/var/run/ck-network-changing"),"1",1,0600);
    if(!error)error=ck_atomic(ck_path("/var/run/ck-admin-wifi"),"1",1,0600);
    if(error)unlink(ck_path("/var/run/ck-network-changing"));
    memset(request,0,sizeof(request));operation_end(lock);json(fd,error?503:202,error?"{}":"{\"result\":\"queued\"}");return;
  }
  operation_end(lock);json(fd,404,"{}");
}
static void handle(int fd, int server) {
  char request[4096], method[12], path[80], version[16],
      host[128] = "", origin[160] = "", digest[80] = "", proof[132] = "", cookie[512]="", csrf[80]="", login[132]="";
  unsigned n = 0, base = 0, length = 0, seen = 0;
  time_t start = time(NULL);
  while (!base && n < sizeof(request) - 1 && time(NULL) - start < 10) {
    ssize_t r = recv(fd, request + n, sizeof(request) - 1 - n, 0);
    if (r <= 0)
      return;
    n += (unsigned)r;
    request[n] = 0;
    char *end = strstr(request, "\r\n\r\n");
    if (end)
      base = (unsigned)(end - request) + 4;
  }
  if (!base || sscanf(request, "%11s %79s %15s", method, path, version) != 3 ||
      strcmp(version, "HTTP/1.1")) {
    json(fd, 400, "{\"error\":\"request\"}");
    return;
  }
  char *line = strstr(request, "\r\n");
  if (!line)
    return;
  line += 2;
  while (line < request + base - 2) {
    char *end = strstr(line, "\r\n"), *colon = strchr(line, ':');
    if (!end || !colon || colon > end) {
      json(fd, 400, "{}");
      return;
    }
    *colon = 0;
    *end = 0;
    char *value = colon + 1;
    while (*value == ' ' || *value == '\t')
      value++;
    unsigned bit = 0;
    char *out = NULL;
    size_t cap = 0;
    if (!strcasecmp(line, "Host")) {
      bit = 1;
      out = host;
      cap = sizeof(host);
    } else if (!strcasecmp(line, "Origin")) {
      bit = 2;
      out = origin;
      cap = sizeof(origin);
    } else if (!strcasecmp(line, "X-CK-SHA256")) {
      bit = 8;
      out = digest;
      cap = sizeof(digest);
    } else if(!strcasecmp(line,"Cookie")) { bit=64;out=cookie;cap=sizeof(cookie);
    } else if(!strcasecmp(line,"X-CK-CSRF")) { bit=128;out=csrf;cap=sizeof(csrf);
    } else if(!strcasecmp(line,"X-CK-Login")) { bit=256;out=login;cap=sizeof(login);
    } else if (!strcasecmp(line,"X-CK-Proof")) {
      bit=32;out=proof;cap=sizeof(proof);
    } else if (!strcasecmp(line, "Content-Length")) {
      bit = 16;
      char *tail;
      unsigned long count = strtoul(value, &tail, 10);
      if (!*value || *value < '0' || *value > '9' || *tail ||
          count > CK_ROOTFS_SIZE + 256) {
        json(fd, 400, "{}");
        return;
      }
      length = (unsigned)count;
    } else if (!strcasecmp(line, "Transfer-Encoding")) {
      json(fd, 400, "{}");
      return;
    }
    if (bit && (seen & bit)) {
      json(fd, 400, "{}");
      return;
    }
    seen |= bit;
    if (out) {
      if (strlen(value) >= cap) {
        json(fd, 400, "{}");
        return;
      }
      strcpy(out, value);
    }
    line = end + 2;
  }
  uint8_t supplied_hash[32];
  if (*digest &&
      (strlen(digest) != 64 || ck_unhex(digest, 32, supplied_hash))) {
    json(fd, 400, "{\"error\":\"checksum_header\"}");
    return;
  }
  struct sockaddr_in peer;
  socklen_t peer_size = sizeof(peer);
  if (getpeername(fd, (struct sockaddr *)&peer, &peer_size)) {
    json(fd, 403, "{}");
    return;
  }
  uint32_t remote = ntohl(peer.sin_addr.s_addr);
  if ((remote & 0xff000000u) != 0x0a000000u &&
      (remote & 0xfff00000u) != 0xac100000u &&
      (remote & 0xffff0000u) != 0xc0a80000u &&
      (remote & 0xffff0000u) != 0xa9fe0000u &&
      (remote & 0xff000000u) != 0x7f000000u) {
    json(fd, 403, "{\"error\":\"lan_only\"}");
    return;
  }
  /* Numeric Host must be this listening socket, blocking DNS rebinding. */
  struct sockaddr_in local;
  socklen_t localn = sizeof(local);
  char expected[160], ip[INET_ADDRSTRLEN];
  if (getsockname(fd, (struct sockaddr *)&local, &localn) ||
      !inet_ntop(AF_INET, &local.sin_addr, ip, sizeof(ip)))
    return;
  snprintf(expected, sizeof(expected), "%s:%u", ip, ntohs(local.sin_port));
  if (strcmp(host, expected)) {
    json(fd, 403, "{\"error\":\"host\"}");
    return;
  }
  if (*origin) {
    snprintf(expected, sizeof(expected), "http://%s", host);
    if (strcmp(origin, expected)) {
      json(fd, 403, "{\"error\":\"origin\"}");
      return;
    }
  }
  struct web_session *session=web_session(cookie,remote);
  if(!strcmp(method,"POST") && strcmp(path,"/upload")) {
    if(length>512){json(fd,400,"{}");return;}
    while(n-base<length && n<sizeof(request)-1) {
      ssize_t got=recv(fd,request+n,length-(n-base),0);if(got<=0)break;n+=(unsigned)got;
    }
    if(n-base!=length || memchr(request+base,0,length)){json(fd,400,"{}");return;}
    request[n]=0;
  }
  if(!strcmp(method,"GET") && !length && n==base && !strcmp(path,"/auth/challenge")){web_challenge(fd,remote);return;}
  if(!strcmp(method,"POST") && !length && !strcmp(path,"/auth/login")){web_login(fd,remote,login);return;}
  if(!strcmp(method,"GET") && !length && n==base && !strcmp(path,"/auth/session")) {
    char b[256];snprintf(b,sizeof(b),"{\"authenticated\":%s,\"configured\":%s,\"storage_ready\":%s,\"csrf\":\"%s\"}",session?"true":"false",web_credential_state==0?"true":"false",web_storage_ready?"true":"false",session?session->csrf:"");json(fd,200,b);return;
  }
  if(!strcmp(method,"POST")) {
    if(!web_storage_ready){json(fd,503,"{\"error\":\"storage\"}");return;}
    if(!web_authorized(session,csrf)){json(fd,401,"{\"error\":\"login_required\"}");return;}
    if(!strcmp(path,"/auth/logout")){memset(session,0,sizeof(*session));json(fd,200,"{\"authenticated\":false}");return;}
    if(!strcmp(path,"/auth/password")) {
      uint8_t record[CK_ADMIN_BYTES];
      if(length!=120 || ck_unhex(request+base,60,record) || !ck_admin_valid(record)){json(fd,400,"{}");return;}
      int lock=operation_begin();if(lock<0){memset(record,0,sizeof(record));json(fd,409,"{}");return;}
      int r=ck_store_set(CK_ADMIN_KEY,record,sizeof(record));memset(record,0,sizeof(record));
      operation_end(lock);
      if(!r)memset(web_sessions,0,sizeof(web_sessions));json(fd,r?503:200,r?"{\"error\":\"storage\"}":"{\"result\":\"login_again\"}");return;
    }
    if(!strcmp(path,"/protocol")){protocol_set(fd,request+base);return;}
    if(!strncmp(path,"/admin/",7)) {
      if(strcmp(path,"/admin/wifi") && strcmp(path,"/admin/led") && strcmp(path,"/admin/led-time") && length){json(fd,400,"{}");return;}
      admin_action(fd,path,request+base,length);return;
    }
  }
  if (!strcmp(method, "GET") && length == 0 && n == base) {
    if (!strcmp(path, "/")) {
      reply(fd, 200, "text/html; charset=utf-8", ck_update_page);
      return;
    }
    if(!strcmp(path,"/password.js")){reply(fd,200,"application/javascript",ck_password_script);return;}
    if(!strcmp(path,"/admin/led")) {
      if(!session){json(fd,401,"{}");return;}char b[768];
      if(ck_led_status(b,sizeof(b))){json(fd,503,"{\"error\":\"storage\"}");return;}json(fd,200,b);return;
    }
    if(!strcmp(path,"/admin/onboarding")) {
      if(!session){json(fd,401,"{}");return;}
      char manual[12]={0},b[48];
      if(ck_exact_file(ck_path("/var/run/matter-manual-code"),manual,11)){json(fd,503,"{}");return;}
      for(unsigned i=0;i<11;i++)if(manual[i]<'0'||manual[i]>'9'){json(fd,503,"{}");return;}
      snprintf(b,sizeof(b),"{\"manual_code\":\"%s\"}",manual);json(fd,200,b);return;
    }
    if(!strcmp(path,"/protocol")){protocol_get(fd);return;}
    if(!strcmp(path,"/admin/state")) {
      if(!session){json(fd,401,"{}");return;}
      char state[512]="null",b[768],energy[32]="null";FILE *f=fopen(ck_path(CK_MATTER_STATE),"r");
      if(f){if(!fgets(state,sizeof(state),f) || strncmp(state,"{\"updated_s\":",13))strcpy(state,"null");fclose(f);}
      uint64_t total=0;uint32_t fraction=0;
      if(ck_energy_load(&total,&fraction)>=0)snprintf(energy,sizeof(energy),"\"%llu\"",(unsigned long long)total);
      snprintf(b,sizeof(b),"{\"matter\":%s,\"energy_mwh\":%s}",state,energy);
      json(fd,200,b);return;
    }
    if (!strcmp(path, "/status")) {
      char b[512], label[32] = {0};
      uint8_t meta[12];
      if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, 12)) {
        json(fd, 503, "{}");
        return;
      }
      FILE *f = fopen(ck_path("/etc/ck-version"), "r");
      if (f) {
        if (!fgets(label, sizeof(label), f))
          label[0] = 0;
        fclose(f);
      }
      label[strcspn(label, "\r\n")] = 0;
      uint8_t floor_bytes[4]={0};size_t floor_size=4;
      if(ck_store_try_get("ota/floor",floor_bytes,&floor_size) || floor_size!=4)memset(floor_bytes,0,4);
      snprintf(b, sizeof(b),
               "{\"software_version\":%u,\"variant\":%u,\"version\":\"%s\","
               "\"rescue\":%s,\"healthy\":%s,\"confirmed_version\":%u,\"max_"
               "size\":%u}",
               ck_be32(meta + 8), ck_be32(meta + 4), label,
               access(ck_path("/var/run/ck-rescue"), F_OK) ? "false" : "true",
               access(ck_path("/var/run/ck-update-healthy"), F_OK) ? "false"
                                                                   : "true",
               ck_be32(floor_bytes), CK_ROOTFS_SIZE + 256);
      json(fd, 200, b);
      return;
    }
    if (!strcmp(path, "/measurements")) {
      struct timespec now;
      char b[512];
      if (clock_gettime(CLOCK_MONOTONIC, &now) ||
          ck_meter_json(b, sizeof(b), (uint64_t)now.tv_sec * 1000 + now.tv_nsec / 1000000))
        json(fd, 503, "{}");
      else
        json(fd, 200, b);
      return;
    }
    json(fd, 404, "{}");
    return;
  }
  if (strcmp(method, "POST") ||
      (!strcmp(path, "/upload") ? length != CK_ROOTFS_SIZE + 256
                                : strcmp(path, "/apply") || length)) {
    json(fd, 400, "{}");
    return;
  }
  if (!strcmp(path, "/apply")) {
    (void)server;
    if (n != base || ck_ota_queue(*digest ? digest : NULL)) {
      json(fd, 409, "{\"error\":\"no_verified_image\"}");
      return;
    }
    json(fd, 200, "{\"status\":\"restarting\"}");
    return;
  }
  if (n - base > length) {
    json(fd, 400, "{}");
    return;
  }
  int transfer = ck_download_begin();
  if (transfer < 0) {
    json(fd, 409, "{\"error\":\"busy_or_low_memory\"}");
    return;
  }
  const char *file = ck_path("/var/run/ck-ota/upload.ota");
  int out =
      open(file, O_WRONLY | O_CREAT | O_EXCL | O_NOFOLLOW | O_CLOEXEC, 0600);
  if (out < 0) {
    close(transfer);
    json(fd, 409, "{\"error\":\"busy\"}");
    return;
  }
  unsigned got = n - base;
  int error = ck_write_all(out, request + base, got);
  uint8_t buf[4096];
  while (!error && got < length && time(NULL) - start < 120) {
    unsigned take = length - got;
    if (take > sizeof(buf))
      take = sizeof(buf);
    ssize_t r = recv(fd, buf, take, 0);
    if (r <= 0) {
      error = -1;
      break;
    }
    error = ck_write_all(out, buf, (size_t)r);
    got += (unsigned)r;
  }
  if (got != length)
    error = -1;
  if (fsync(out))
    error = -1;
  if (close(out))
    error = -1;
  int in = open(file, O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
  uint8_t hash[32];
  char actual[65];
  if (in < 0 || ck_hash_fd(in, 0, length, hash))
    error = -1;
  else {
    ck_hex(hash, 32, actual);
    if (*digest && strcmp(actual, digest))
      error = -1;
  }
  if (in >= 0)
    close(in);
  if (!error)
    error = ck_ota_stage(file);
  unlink(file);
  close(transfer);
  json(fd, error ? 422 : 200,
       error ? "{\"error\":\"package_rejected\"}"
             : "{\"status\":\"verified\"}");
}
int main(int argc, char **argv) {
  unsigned port = 18082;
  const char *interface = "br0";
#ifdef CK_TESTING
  if (argc == 3) {
    port = (unsigned)atoi(argv[1]);
    interface = argv[2];
  }
#else
  (void)argc;
  (void)argv;
  struct statfs fs;
  if (statfs("/var", &fs) || ((unsigned long)fs.f_type != 0x858458f6UL &&
                              (unsigned long)fs.f_type != 0x01021994UL))
    return 2;
#endif
  signal(SIGPIPE, SIG_IGN);
  signal(SIGCHLD, SIG_IGN);
  int sock = socket(AF_INET, SOCK_STREAM, 0), one = 1;
  if (sock < 0)
    return 4;
#ifdef CK_TESTING
  int loopback = !strcmp(interface, "lo");
#else
  int loopback = 0;
#endif
  if (!loopback && setsockopt(sock, SOL_SOCKET, SO_BINDTODEVICE, interface,
                              strlen(interface) + 1))
    return 5;
  setsockopt(sock, SOL_SOCKET, SO_REUSEADDR, &one, sizeof(one));
  struct sockaddr_in addr = {0};
  addr.sin_family = AF_INET;
  addr.sin_port = htons((uint16_t)port);
  if (loopback)
    addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK);
  if (bind(sock, (struct sockaddr *)&addr, sizeof(addr)) || listen(sock, 2))
    return 6;
  unsigned bound_index = if_nametoindex(interface);
  if (!bound_index)
    return 7;
  for (;;) {
    if (if_nametoindex(interface) != bound_index)
      return 7;
    struct pollfd ready = {sock, POLLIN, 0};
    if (poll(&ready, 1, 1000) <= 0)
      continue;
    int fd = accept(sock, NULL, NULL);
    if (fd < 0) {
      if (errno == EINTR)
        continue;
      return 7;
    }
    struct timeval timeout = {5, 0};
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &timeout, sizeof(timeout));
    setsockopt(fd, SOL_SOCKET, SO_SNDTIMEO, &timeout, sizeof(timeout));
    handle(fd, sock);
    /* Preserve an error response when a client was already sending a body. */
    shutdown(fd, SHUT_WR);
    timeout.tv_sec = 0;
    timeout.tv_usec = 100000;
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &timeout, sizeof(timeout));
    char discard[4096];
    unsigned drained = 0;
    ssize_t got;
    while (drained < CK_ROOTFS_SIZE + 256 &&
           (got = recv(fd, discard, sizeof(discard), 0)) > 0)
      drained += (unsigned)got;
    close(fd);
  }
}
