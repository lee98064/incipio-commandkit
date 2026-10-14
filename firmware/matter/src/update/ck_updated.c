#define _GNU_SOURCE
#include "ck_common.h"
#include "ck_ota.h"
#include "ck_store.h"
#include "ck_meter.h"
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
static void handle(int fd, int server) {
  char request[4096], method[12], path[80], version[16],
      host[128] = "", origin[160] = "", digest[80] = "";
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
  if (!strcmp(method, "GET") && length == 0 && n == base) {
    if (!strcmp(path, "/")) {
      reply(fd, 200, "text/html; charset=utf-8", ck_update_page);
      return;
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
      snprintf(b, sizeof(b),
               "{\"software_version\":%u,\"variant\":%u,\"version\":\"%s\","
               "\"rescue\":%s,\"healthy\":%s,\"confirmed_version\":%u,\"max_"
               "size\":%u}",
               ck_be32(meta + 8), ck_be32(meta + 4), label,
               access(ck_path("/var/run/ck-rescue"), F_OK) ? "false" : "true",
               access(ck_path("/var/run/ck-update-healthy"), F_OK) ? "false"
                                                                   : "true",
               ck_store_floor(), CK_ROOTFS_SIZE + 256);
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
