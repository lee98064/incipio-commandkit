/* Linux 2.6.30 mtdchar semantics, backed only by private regular files. */
#define _GNU_SOURCE
#include <errno.h>
#include <fcntl.h>
#include <mtd/mtd-user.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <unistd.h>
#include "../firmware/matter/src/update/ck_common.h"

static unsigned char mtd_fds[4096];
static unsigned opens, releases, unsupported_syncs;

static int is_mtd(int fd) {
  return fd >= 0 && fd < (int)sizeof(mtd_fds) && mtd_fds[fd];
}

int legacy_open(const char *path, int flags, ...) {
  mode_t mode = 0;
  if (flags & O_CREAT) {
    va_list args;
    va_start(args, flags);
    mode = va_arg(args, int);
    va_end(args);
  }
  int mtd = !strcmp(path, "/dev/mtd1");
  char local[1024];
  if (mtd || !strcmp(path, "/proc/bootbank")) {
    snprintf(local, sizeof(local), "%s/%s", getenv("CK_TEST_ROOT"),
             mtd ? "partition.bin" : "bootbank");
    path = local;
  } else if (strncmp(path, getenv("CK_TEST_ROOT"),
                     strlen(getenv("CK_TEST_ROOT")))) {
    errno = EACCES; /* Never open a real device, even if a test changes. */
    return -1;
  }
  int fd = open(path, flags, mode);
  if (mtd && fd >= 0) {
    if (fd >= (int)sizeof(mtd_fds)) {
      close(fd);
      errno = EMFILE;
      return -1;
    }
    mtd_fds[fd] = 1;
    opens++;
  }
  return fd;
}

FILE *legacy_fopen(const char *path, const char *mode) {
  if (strcmp(path, "/proc/mtd")) {
    errno = EACCES;
    return NULL;
  }
  char local[1024];
  snprintf(local, sizeof(local), "%s/mtd", getenv("CK_TEST_ROOT"));
  return fopen(local, mode);
}

int legacy_fstat(int fd, struct stat *st) {
  int result = fstat(fd, st);
  if (!result && is_mtd(fd)) {
    st->st_mode = S_IFCHR | 0600;
    st->st_rdev = makedev(90, getenv("CK_MTD_REOPEN_BAD") && opens > 1 ? 4 : 2);
  }
  return result;
}

int legacy_ioctl(int fd, unsigned long request, ...) {
  va_list args;
  va_start(args, request);
  void *arg = va_arg(args, void *);
  va_end(args);
  if (!is_mtd(fd)) {
    errno = ENOTTY;
    return -1;
  }
  if (request == MEMGETINFO) {
    struct mtd_info_user *info = arg;
    memset(info, 0, sizeof(*info));
    info->type = MTD_NORFLASH;
    info->size = CK_PART_SIZE;
    info->erasesize = CK_ERASE_SIZE;
    return 0;
  }
  if (request == MEMERASE) {
    const struct erase_info_user *erase = arg;
    unsigned char erased[CK_ERASE_SIZE];
    memset(erased, 255, sizeof(erased));
    for (unsigned at = 0; at < erase->length; at += sizeof(erased))
      if (pwrite(fd, erased, sizeof(erased), erase->start + at) != sizeof(erased))
        return -1;
    return 0;
  }
  errno = ENOTTY;
  return -1;
}

int legacy_fsync(int fd) {
  if (!is_mtd(fd))
    return fsync(fd);
  const char *behavior = getenv("CK_MTD_SYNC");
  if (behavior && !strcmp(behavior, "modern"))
    return fsync(fd);
  unsupported_syncs++;
  errno = behavior && !strcmp(behavior, "io-error") ? EIO : EINVAL;
  return -1;
}

int legacy_close(int fd) {
  if (is_mtd(fd)) {
    /* mtdchar's release callback synchronizes writable devices. */
    int result = fsync(fd);
    mtd_fds[fd] = 0;
    releases++;
    if (result) {
      close(fd);
      return -1;
    }
  }
  return close(fd);
}

int legacy_sync_once(void) {
  struct ck_flash flash;
  if (ck_flash_open(&flash, 1, 1))
    return -2;
  int result = ck_flash_sync(&flash);
  legacy_close(flash.fd);
  return result;
}
unsigned legacy_opens(void) { return opens; }
unsigned legacy_releases(void) { return releases; }
unsigned legacy_unsupported_syncs(void) { return unsupported_syncs; }
void legacy_reset(void) { opens = releases = unsupported_syncs = 0; }
