/* Disposable full-system VM fixture. /dev/mtdblock0 is a regular RAM file. */
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/reboot.h>
#include <sys/wait.h>
#include <unistd.h>
static int run(char *const a[]) {
  int st = 0;
  pid_t p = fork();
  if (p == 0) {
    execv(a[0], a);
    _exit(127);
  }
  if (p < 0 || waitpid(p, &st, 0) < 0)
    return -1;
  printf("MIB_RETURN %s=%d\n", a[1], st);
  return st;
}
static int same_protected(void) {
  unsigned char a[4096], b[4096];
  int x = open("/dev/mtdblock0", O_RDONLY), y = open("/before.bin", O_RDONLY),
      bad = 0;
  for (int off = 0; off < 0x130000; off += 4096) {
    if (read(x, a, 4096) != 4096 || read(y, b, 4096) != 4096) {
      bad = 1;
      break;
    }
    if ((off < 0xc000 || off >= 0x10000) && memcmp(a, b, 4096))
      bad = 1;
  }
  close(x);
  close(y);
  return !bad;
}
int main(void) {
  setvbuf(stdout, 0, _IONBF, 0);
  mount("proc", "/proc", "proc", 0, 0);
  int bad = 0;
  char *ap[] = {"/bin/ck-wificfg", "ap", "/ap.bin", 0};
  char *sta[] = {"/bin/ck-wificfg", "station", "/station.bin", 0};
  char *get[] = {"/bin/ck-wificfg", "status", 0};
  char *commit[] = {"/bin/ck-wificfg", "commit", 0};
  bad |= run(ap);
  bad |= run(get);
  if (!same_protected())
    bad = 1;
  bad |= run(sta);
  bad |= run(get);
  if (!same_protected())
    bad = 1;
  char *open_sta[] = {"/bin/ck-wificfg", "station", "/station-open.bin", 0};
  bad |= run(open_sta);
  bad |= run(get);
  if (!same_protected()) bad = 1;
  bad |= run(commit);
  bad |= run(get);
  if (!same_protected())
    bad = 1;
  puts(bad ? "MIB_SYSTEM_COMPLETE FAIL"
           : "MIB_SYSTEM_COMPLETE PASS; changes restricted to current settings "
             "0xc000-0xffff");
  sync();
  reboot(RB_AUTOBOOT);
  for (;;)
    pause();
}
