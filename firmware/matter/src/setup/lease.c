/* Publish one validated DHCP lease marker atomically on the RAM filesystem.
 * Original BusyBox lacks mv. Fixed paths only; no Flash, network or MCU I/O.
 */
#define diag_main unused_diag_main
#include "../matter_diag.c"
#undef diag_main

static int valid_ip(const char *ip) {
  unsigned part = 0, digits = 0, octets = 0, first = 0;
  if (slen(ip) > 15 || equal(ip, "192.168.1.254")) return 0;
  for (const char *p = ip;; p++) {
    if (*p >= '0' && *p <= '9') {
      if (++digits > 3) return 0;
      part = part * 10 + (unsigned)(*p - '0');
      if (part > 255) return 0;
    } else if (*p == '.' || *p == 0) {
      if (!digits || ++octets > 4) return 0;
      if (octets == 1) first = part;
      if (*p == 0) return octets == 4 && first > 0 && first != 127 && first < 224;
      part = digits = 0;
    } else return 0;
  }
}

int diag_main(int argc, char **argv) {
  static const char tmp[] = "/var/run/ck-wifi-bound.tmp";
  static const char final[] = "/var/run/ck-wifi-bound";
  int fd, rc;
  if (argc != 2 || !valid_ip(argv[1])) return 2;
  /* o32 O_WRONLY|O_CREAT|O_TRUNC|O_NOFOLLOW. Directory is root-owned. */
  fd = S3(4005, P(tmp), 0x20301, 0600);
  if (fd < 0) return 3;
  used = 0; append("bound "); append(argv[1]); append("\n");
  rc = write_all(fd, report, (int)used);
  close_fd(fd);
  if (rc || S2(4038, P(tmp), P(final)) < 0) {
    S1(4010, P(tmp));
    return 4;
  }
  return 0;
}
