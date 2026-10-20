/* Small vendor-ABI helper. All changes go through the original libapmib;
 * no manual flash offsets, no MCU/LED/MFi operations, no shell inputs. */
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
extern int apmib_init(void), apmib_get(int, void *), apmib_set(int, void *),
    apmib_update(int);
static int failures;
static void integer(int id, int value) {
  if (!apmib_set(id, &value))
    failures++;
}
static void text(int id, const char *value) {
  if (!apmib_set(id, (void *)value))
    failures++;
}
static int load(const char *path, unsigned char b[104]) {
  int fd = open(path, O_RDONLY | O_NOFOLLOW);
  unsigned char extra;
  int n = 0, r;
  if (fd < 0)
    return -1;
  while (n < 104 && (r = read(fd, b + n, 104 - n)) > 0)
    n += r;
  r = read(fd, &extra, 1);
  close(fd);
  if (n != 104 || r != 0 || memcmp(b, "CKW1", 4) || b[4] < 1 || b[4] > 32 ||
      b[5] > 64 || b[6] > 1 || b[7])
    return -1;
  if ((b[6] == 0 && b[5] != 0) || (b[6] == 1 && (b[5] < 8 || b[5] > 64)))
    return -1;
  for (int i = 0; i < b[4]; i++)
    if (b[8 + i] < 32 || b[8 + i] == 127)
      return -1;
  for (int i = 0; i < b[5]; i++)
    if (b[40 + i] < 32 || b[40 + i] > 126)
      return -1;
  if (b[5] == 64)
    for (int i = 0; i < 64; i++)
      if (!strchr("0123456789abcdefABCDEF", b[40 + i]))
        return -1;
  return 0;
}
int main(int argc, char **argv) {
  unsigned char b[104];
  char ssid[33] = {0}, psk[65] = {0};
  if (argc == 3 && strcmp(argv[1], "validate") == 0)
    return load(argv[2], b) ? 2 : 0;
  if (!apmib_init())
    return 3;
  if (argc == 2 && strcmp(argv[1], "status") == 0) {
    int mode = 0, c = 0;
    if (!apmib_get(59, &mode) || !apmib_get(688, &c))
      return 4;
    printf("mode=%d\nconfigured=%d\n", mode, c);
    return 0;
  }
  if (argc == 2 && strcmp(argv[1], "unconfigure") == 0) {
    integer(688,0);text(1,"");text(30,"");integer(25,0);integer(36,0);
    if(failures || !apmib_update(4)) return 5;
    int configured=1;char check_ssid[33]={0},check_psk[65]={0};
    if(!apmib_get(688,&configured) || !apmib_get(1,check_ssid) || !apmib_get(30,check_psk)) return 5;
    return configured || check_ssid[0] || check_psk[0] ? 5 : 0;
  }
  if (argc == 2 && strcmp(argv[1], "commit") == 0) {
    int configured = 0;
    if (!apmib_get(688, &configured))
      return 4;
    if (configured == 1)
      return 0;
    integer(688, 1);
    return failures || !apmib_update(4) ? 5 : 0;
  }
  if (argc != 3 || (strcmp(argv[1], "ap") && strcmp(argv[1], "station")))
    return 2;
  if (load(argv[2], b))
    return 2;
  int ap = strcmp(argv[1], "ap") == 0;
  if (ap && (b[6] != 1 || b[5] == 64))
    return 2;
  memcpy(ssid, b + 8, b[4]);
  memcpy(psk, b + 40, b[5]);
  /* IDs independently recovered from this libapmib's 60-byte tables. */
  integer(59, ap ? 0 : 1);
  text(1, ssid);
  integer(22, 0);
  integer(20, 0);
  integer(25, b[6] ? 4 : 0);
  integer(28, 2);
  integer(29, 2);
  integer(38, 2);
  integer(36, b[5] == 64 ? 1 : 0);
  text(30, psk);
  integer(250, 0);
  integer(173, ap ? 2 : 0);
  integer(688, 0);
  integer(270, 1); /* WPS off; configured after real DHCP. */
  if (ap) {
    integer(105, 0);
    unsigned char ip[4] = {192, 168, 1, 254}, mask[4] = {255, 255, 255, 0},
                  first[4] = {192, 168, 1, 100}, last[4] = {192, 168, 1, 150};
    if (!apmib_set(170, ip) || !apmib_set(171, mask) ||
        !apmib_set(174, first) || !apmib_set(175, last))
      failures++;
  }
  volatile unsigned char *wipe = b;
  for (unsigned i = 0; i < sizeof(b); i++)
    wipe[i] = 0;
  for (unsigned i = 0; i < sizeof(psk); i++)
    ((volatile char *)psk)[i] = 0;
  if (failures)
    return 5;
  return apmib_update(4) ? 0 : 5;
}
