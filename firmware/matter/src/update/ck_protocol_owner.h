/* Included only in the existing updater executable, sharing its journal and
 * crypto code instead of duplicating a static runtime in this small rootfs. */
#include "ck_protocol.h"
#include <sys/file.h>
#include <arpa/inet.h>
static int protocol_online(void) {
  char b[32]; FILE *f=fopen(ck_path("/var/run/ck-setup-state"),"r");
  int ready=f && fgets(b,sizeof(b),f) && !strcmp(b,"state=online\n");
  if(f) fclose(f);
  return ready;
}
static int protocol_station_saved(void) {
  char b[10];
  return !ck_exact_file(ck_path("/var/run/ck-setup-boot"),b,sizeof(b)) && !memcmp(b,"configured",10);
}
static int hap_alive(pid_t pid) {
  char path[96], name[32];
  if(pid<=1 || kill(pid,0)) return 0;
  snprintf(path,sizeof(path),"/proc/%ld/status",(long)pid);
  FILE *f=fopen(ck_path(path),"r");
  int ok=f && fscanf(f,"Name: %31s",name)==1 && !strcmp(name,"homekitserver");
  if(f) fclose(f);
  return ok;
}
static int hap_listening(void) {
  struct sockaddr_in6 a; memset(&a,0,sizeof(a));
  a.sin6_family=AF_INET6; a.sin6_port=htons(52739); a.sin6_addr=in6addr_loopback;
  int fd=socket(AF_INET6,SOCK_STREAM,0);
  if(fd<0) return 0;
  fcntl(fd,F_SETFL,O_NONBLOCK);
  int result=connect(fd,(struct sockaddr *)&a,sizeof(a));
  if(result && errno==EINPROGRESS) {
    struct pollfd p={fd,POLLOUT,0}; int error=1; socklen_t n=sizeof(error);
    if(poll(&p,1,100)>0 && !getsockopt(fd,SOL_SOCKET,SO_ERROR,&error,&n)) result=error;
  }
  close(fd); return result==0;
}
static int run_protocol(void) {
  /* Deliberately inherited through exec/fork, including the vendor daemon.
   * If this supervisor dies, a surviving MCU owner retains the lock. A PID1
   * respawn cannot start another stack next to an orphaned daemon. */
  int lock=open(ck_path("/var/lock/ck-protocol-owner.lock"),O_RDWR|O_CREAT|O_NOFOLLOW,0600);
  if(lock<0 || flock(lock,LOCK_EX|LOCK_NB)) { if(lock>=0) close(lock); sleep(5); return 1; }
  const char *mode=ck_protocol_active();
  if(!strcmp(mode,"unavailable") && access(ck_path(CK_PROTOCOL_ACTIVE),F_OK)) {
    mode=ck_protocol_selected();
    if(ck_atomic(ck_path(CK_PROTOCOL_ACTIVE),mode,strlen(mode),0600)) return 1;
  }
  fprintf(stderr,"PROTOCOL_BOOT: %s\n",mode);
  if(strcmp(mode,"homekit")) {
    if(strcmp(mode,"matter")) {
      /* Preserve physical controls on invalid preferences, without advertising
       * either network protocol or choosing a replacement identity. */
      ck_atomic(ck_path("/var/run/ck-rescue"),"",0,0600);
    }
    execl(ck_path("/bin/matter-test-start"),"matter-test-start",(char *)NULL);
    return 127;
  }
  /* Station/DHCP service is independent of both protocols. Never start WAC,
   * which could replace credentials or take over the MCU. */
  /* A saved station may be temporarily offline. HAP can bind to the wildcard
   * interface and own the MCU before DHCP, keeping physical controls alive. */
  while(access(ck_path("/dev/ttyACM0"),F_OK)) sleep(2);
  unlink(ck_path("/var/run/homekitserver.pid"));
  pid_t launcher=fork();
  if(launcher<0) return 1;
  if(!launcher) {
    int out=open("/dev/null",O_WRONLY);
    if(out>=0) { dup2(out,1);dup2(out,2);close(out); }
    execl(ck_path("/bin/homekitserver"),"homekitserver",(char *)NULL); _exit(127);
  }
  int status;
  while(waitpid(launcher,&status,0)<0) if(errno!=EINTR) return 1;
  /* The stock parent writes its forked child's PID and exits. Never retry a
   * daemon launch automatically: incomplete PID handoff must fail closed. */
  pid_t daemon=0;
  FILE *f=fopen(ck_path("/var/run/homekitserver.pid"),"r");
  long id=0; if(f) { if(fscanf(f,"%ld",&id)!=1) id=0; fclose(f); }
  if(id>1 && id<=2147483647) daemon=(pid_t)id;
  unsigned ready=0; int confirmed=0;
  for(;;) {
    if(!WIFEXITED(status) || WEXITSTATUS(status) || !hap_alive(daemon)) {
      ck_atomic(ck_path("/var/run/ck-rescue"),"",0,0600);
      fprintf(stderr,"HOMEKIT_STOPPED: reboot required; no alternate MCU owner started\n");
      for(;;) pause();
    }
    if(!confirmed && protocol_online() && hap_listening()) {
      if(++ready>=15) {
        uint8_t meta[12];
        if(!ck_exact_file(ck_path("/etc/ck-update.meta"),meta,12) &&
           !ck_store_confirm(ck_be32(meta+8)) &&
           !ck_atomic(ck_path("/var/run/ck-update-healthy"),"",0,0600)) confirmed=1;
      }
    } else if(!confirmed) ready=0;
    sleep(2);
  }
}
static int protocol_boot(void) {
  if(!access(ck_path(CK_PROTOCOL_ACTIVE),F_OK)) return 0;
  if(factory_finish()) return 1;
  const char *mode=ck_protocol_selected();
  return ck_atomic(ck_path(CK_PROTOCOL_ACTIVE),mode,strlen(mode),0600) ? 1 : 0;
}
