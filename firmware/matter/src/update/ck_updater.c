#define _GNU_SOURCE
#include "ck_common.h"
#include "ck_ota.h"
#include "ck_store.h"
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/reboot.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/wait.h>
#include <unistd.h>
static int other_processes(void) {
  DIR *dir = opendir("/proc");
  if (!dir)
    return 1;
  struct dirent *e;
  int found = 0;
  while ((e = readdir(dir))) {
    char *end;
    long pid = strtol(e->d_name, &end, 10);
    if (*end || pid <= 1)
      continue;
    char p[80], line[256];
    snprintf(p, sizeof(p), "/proc/%ld/status", pid);
    FILE *f = fopen(p, "r");
    if (!f) {
      found = 1;
      break;
    }
    int user = 0;
    while (fgets(line, sizeof(line), f))
      if (!strncmp(line, "VmSize:", 7))
        user = 1;
    fclose(f);
    if (user) {
      found = 1;
      break;
    }
  }
  closedir(dir);
  return found;
}
static int apply(int simulation) {
  struct ck_image im;
  const char *path = ck_path("/var/run/ck-ota/image.ota");
  if (!simulation && getpid() != 1)
    return 2;
  if (ck_ota_verify(path, &im))
    return 3;
  fputs("CK_UPDATE: image verified\n", stderr);
  int image = open(path, O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
  struct ck_flash flash;
  if (image < 0 || ck_flash_open(&flash, 1, 1)) {
    if (image >= 0)
      close(image);
    return 4;
  }
  int lock = ck_lock();
  if (lock < 0) {
    close(image);
    close(flash.fd);
    return 5;
  }
#if !defined(CK_TESTING) || defined(CK_TEST_PID1)
  if (simulation)
    return 7;
  /* Every process including PID1 must leave the live SquashFS before erase. */
  signal(SIGTERM, SIG_IGN);
  signal(SIGINT, SIG_IGN);
  signal(SIGQUIT, SIG_IGN);
  kill(-1, SIGTERM);
  sleep(2);
  kill(-1, SIGKILL);
  sleep(1);
  while (waitpid(-1, NULL, WNOHANG) > 0) {
  }
  if (other_processes())
    return 8;
  fputs("CK_UPDATE: userspace quiesced\n", stderr);
  if (unlink(path))
    return 9;
  const char *ramroot = ck_path("/var/run/ck-ota/root");
  if (mkdir(ramroot, 0700) && access(ramroot, F_OK))
    return 9;
  if (mount("ramfs", ramroot, "ramfs", MS_NOSUID | MS_NODEV, NULL))
    return 10;
  char old[128];
  snprintf(old, sizeof(old), "%s/old", ramroot);
  if (mkdir(old, 0700) || mount(NULL, "/", NULL, MS_REC | MS_PRIVATE, NULL) ||
      chdir(ramroot) || syscall(SYS_pivot_root, ".", "old") || chdir("/") ||
      umount2("/old", MNT_DETACH))
    return 11;
  fputs("CK_UPDATE: old root detached\n", stderr);
#else
  (void)other_processes;
#endif
  /* Keep a RAM copy of the journal for an independent preservation check. */
  uint8_t *journal = malloc(2 * CK_SLOT_SIZE);
  uint8_t *after = malloc(2 * CK_SLOT_SIZE);
  uint8_t *payload = malloc(CK_ROOTFS_SIZE);
  if (!journal || !after || !payload ||
      ck_flash_read(&flash, CK_JOURNAL_OFFSET, journal, 2 * CK_SLOT_SIZE) ||
      lseek(image, 256, SEEK_SET) < 0 ||
      ck_read_all(image, payload, CK_ROOTFS_SIZE))
    return 6;
  close(image);
#ifdef CK_TESTING
  if (simulation)
    unlink(path);
#endif
  /* Invalidate the magic first; commit the header only after all body sectors.
   */
  int result = 0;
  if (ck_flash_erase(&flash, 0, CK_ERASE_SIZE))
    result = -1;
  for (unsigned at = CK_ERASE_SIZE; !result && at < CK_ROOTFS_SIZE;
       at += CK_ERASE_SIZE) {
#ifdef CK_TESTING
    const char *fail = getenv("CK_FAIL_OTA_AFTER");
    if (fail && at / CK_ERASE_SIZE >= (unsigned)strtoul(fail, NULL, 10)) {
      result = -1;
      break;
    }
#endif
    if (ck_flash_erase(&flash, at, CK_ERASE_SIZE) ||
        ck_flash_write(&flash, at, payload + at, CK_ERASE_SIZE))
      result = -1;
  }
  if (!result && (ck_flash_sync(&flash) ||
                  ck_flash_write(&flash, 0, payload, CK_ERASE_SIZE) ||
                  ck_flash_sync(&flash)))
    result = -1;
  uint8_t digest[32];
  if (!result && (ck_hash_fd(flash.fd, flash.base, CK_ROOTFS_SIZE, digest) ||
                  !ck_equal(digest, im.header + 32, 32)))
    result = -1;
  if (ck_flash_read(&flash, CK_JOURNAL_OFFSET, after, 2 * CK_SLOT_SIZE) ||
      !ck_equal(journal, after, 2 * CK_SLOT_SIZE))
    result = -1;
  free(journal);
  free(after);
  free(payload);
  ck_unlock(lock);
  close(flash.fd);
  fprintf(stderr, "CK_UPDATE: readback result=%d\n", result);
#if !defined(CK_TESTING) || defined(CK_TEST_PID1)
  /* After quiescing PID1, always reboot; a partial image is deliberately
   * invalid. */
  sync();
  reboot(RB_AUTOBOOT);
  fprintf(stderr, "CK_UPDATE: reboot failed errno=%d\n", errno);
  for (;;)
    pause();
#else

#endif
  return result ? 12 : 0;
}
int main(int argc, char **argv) {
  if (argc == 3 && !strcmp(argv[1], "--verify")) {
    struct ck_image im;
    int r = ck_ota_verify(argv[2], &im);
    puts(r ? "rejected" : "verified");
    return r ? 1 : 0;
  }
  if (argc == 3 && !strcmp(argv[1], "--stage"))
    return ck_ota_stage(argv[2]) ? 1 : 0;
  if ((argc == 2 || argc == 3) && !strcmp(argv[1], "--queue")) {
    uint8_t digest[32];
    if (argc == 3 && (strlen(argv[2]) != 64 || ck_unhex(argv[2], 32, digest))) return 2;
    return ck_ota_queue(argc == 3 ? argv[2] : NULL) ? 1 : 0;
  }
  if (argc == 2 && !strcmp(argv[1], "--pid1")) {
    int result = apply(0);
    fprintf(stderr, "CK_UPDATE: preflight failed code=%d\n", result);
#if !defined(CK_TESTING) || defined(CK_TEST_PID1)
    if (getpid() == 1) {
      sync();
      reboot(RB_AUTOBOOT);
      for (;;)
        pause();
    }
#endif
    return result;
  }
#ifdef CK_TESTING
  if (argc == 2 && !strcmp(argv[1], "--simulate"))
    return apply(1);
#endif
  if (argc == 2 && !strcmp(argv[1], "--import"))
    return ck_store_import() ? 1 : 0;
  if (argc == 2 && !strcmp(argv[1], "--boot"))
    return ck_store_boot();
  if (argc == 2 && !strcmp(argv[1], "--confirm")) {
    uint8_t meta[12];
    if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, 12))
      return 1;
    return ck_store_confirm(ck_be32(meta + 8)) ? 1 : 0;
  }
  fputs("ck-updater: --verify FILE | --stage FILE | --queue | --import | "
        "--boot | --confirm\n",
        stderr);
  return 2;
}
