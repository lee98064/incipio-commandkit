#define _GNU_SOURCE
#include "ck_common.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <unistd.h>
#ifndef CK_TESTING
#include <mtd/mtd-user.h>
#include <sys/ioctl.h>
#include <sys/sysmacros.h>
#endif

int ck_flash_open(struct ck_flash *f, unsigned part, int writable) {
  static const unsigned bases[] = {0,        0x130000, 0x3e0000,
                                   0x400000, 0x530000, 0x7e0000};
  static const unsigned sizes[] = {0x130000, 0x2b0000, 0x20000,
                                   0x130000, 0x2b0000, 0x20000};
  struct stat st;
  char path[64];
  f->fd = -1;
  if (part > 5 || (writable && part != 1))
    return -1;
#ifdef CK_TESTING
  const char *fixture = getenv("CK_FLASH_FILE");
  if (!fixture)
    return -1;
  f->fd =
      open(fixture, (writable ? O_RDWR : O_RDONLY) | O_NOFOLLOW | O_CLOEXEC);
  if (f->fd < 0)
    return -1;
  if (fstat(f->fd, &st) || !S_ISREG(st.st_mode) || st.st_size != 0x800000)
    goto fail;
  f->base = bases[part];
  (void)path;
#else
  (void)bases;
  struct mtd_info_user info;
  int matched = 0;
  for (unsigned candidate = 0; candidate < 2; candidate++) {
    if (candidate == 0)
      snprintf(path, sizeof(path), "/dev/mtd%u", part);
    else {
      /* Vendor images contain sequential minor numbers; mainline MTD uses
       * minor=2*partition and odd minors are read-only aliases. Probe the
       * existing node first, then a private canonical node, and verify
       * geometry. */
      if (mkdir("/var/run/ck-mtd", 0700) && errno != EEXIST)
        goto fail;
      if (lstat("/var/run/ck-mtd", &st) || !S_ISDIR(st.st_mode) ||
          st.st_uid != 0 || (st.st_mode & 077))
        goto fail;
      snprintf(path, sizeof(path), "/var/run/ck-mtd/%u", part);
      if (mknod(path, S_IFCHR | 0600, makedev(90, 2 * part)) && errno != EEXIST)
        goto fail;
      if (lstat(path, &st) || !S_ISCHR(st.st_mode) ||
          st.st_rdev != makedev(90, 2 * part))
        goto fail;
    }
    f->fd = open(path, (writable ? O_RDWR : O_RDONLY) | O_NOFOLLOW | O_CLOEXEC |
                           O_SYNC);
    if (f->fd < 0)
      continue;
    if (!fstat(f->fd, &st) && S_ISCHR(st.st_mode) &&
        !ioctl(f->fd, MEMGETINFO, &info) && info.type == MTD_NORFLASH &&
        info.size == sizes[part] && info.erasesize == CK_ERASE_SIZE) {
      matched = 1;
      break;
    }
    close(f->fd);
    f->fd = -1;
  }
  if (!matched)
    goto fail;
  if (writable) {
    char bank[32] = {0};
    int fd = open("/proc/bootbank", O_RDONLY | O_CLOEXEC);
    int n = fd < 0 ? -1 : (int)read(fd, bank, sizeof(bank) - 1);
    if (fd >= 0)
      close(fd);
    if (n < 1 || bank[0] != '1' ||
        (n > 1 && bank[1] != '\n' && bank[1] != '\0'))
      goto fail;
    /* Never infer a writable mapping from a device number alone. */
    FILE *fp = fopen("/proc/mtd", "r");
    char line[160];
    int found = 0;
    if (!fp)
      goto fail;
    while (fgets(line, sizeof(line), fp)) {
      unsigned size, erase;
      char name[64];
      if (sscanf(line, "mtd1: %x %x \"%63[^\"]\"", &size, &erase, name) == 3 &&
          size == CK_PART_SIZE && erase == CK_ERASE_SIZE &&
          !strcmp(name, "root fs(bank1)"))
        found = 1;
    }
    fclose(fp);
    if (!found)
      goto fail;
  }
  f->base = 0;
#endif
  f->size = sizes[part];
  f->part = part;
  f->writable = writable;
  return 0;
fail:
  close(f->fd);
  f->fd = -1;
  return -1;
}
int ck_flash_read(struct ck_flash *f, unsigned at, void *p, unsigned n) {
  if (at > f->size || n > f->size - at ||
      lseek(f->fd, f->base + at, SEEK_SET) < 0)
    return -1;
  return ck_read_all(f->fd, p, n);
}
int ck_flash_write(struct ck_flash *f, unsigned at, const void *p, unsigned n) {
  if (at > f->size || n > f->size - at ||
      lseek(f->fd, f->base + at, SEEK_SET) < 0)
    return -1;
#ifdef CK_TESTING
  /* NOR programming can only clear bits. */
  uint8_t old[4096];
  const uint8_t *in = p;
  for (unsigned pos = 0; pos < n;) {
    unsigned take = n - pos > sizeof(old) ? sizeof(old) : n - pos;
    if (ck_flash_read(f, at + pos, old, take))
      return -1;
    for (unsigned i = 0; i < take; i++)
      if ((old[i] & in[pos + i]) != in[pos + i])
        return -1;
    pos += take;
  }
  if (lseek(f->fd, f->base + at, SEEK_SET) < 0)
    return -1;
#endif
  return ck_write_all(f->fd, p, n);
}
int ck_flash_erase(struct ck_flash *f, unsigned at, unsigned n) {
  if (at % CK_ERASE_SIZE || n % CK_ERASE_SIZE || at > f->size ||
      n > f->size - at)
    return -1;
#ifdef CK_TESTING
  uint8_t erased[CK_ERASE_SIZE];
  memset(erased, 255, sizeof(erased));
  for (unsigned i = 0; i < n; i += sizeof(erased)) {
    if (lseek(f->fd, f->base + at + i, SEEK_SET) < 0 ||
        ck_write_all(f->fd, erased, sizeof(erased)))
      return -1;
  }
  return 0;
#else
  struct erase_info_user erase = {at, n};
  return ioctl(f->fd, MEMERASE, &erase);
#endif
}
int ck_flash_sync(struct ck_flash *f) {
  int result;
  do {
    result = fsync(f->fd);
  } while (result && errno == EINTR);
#ifndef CK_TESTING
  if (result && errno == EINVAL && f->writable) {
    /* Linux 2.6.30 mtdchar has no .fsync callback: fsync returns EINVAL.
     * Its .release callback calls mtd->sync for writable descriptors.
     * Open and validate a replacement first, then close the original to
     * perform that barrier. Callers seek explicitly before every I/O and
     * still independently read back data before committing a record.
     * Never treat a real I/O error or a different device as synchronized. */
    struct stat original, replacement;
    struct ck_flash next;
    if (fstat(f->fd, &original) || !S_ISCHR(original.st_mode) ||
        major(original.st_rdev) != 90 ||
        ck_flash_open(&next, f->part, f->writable))
      return -1;
    if (fstat(next.fd, &replacement) ||
        replacement.st_rdev != original.st_rdev) {
      close(next.fd);
      return -1;
    }
    result = close(f->fd);
    f->fd = next.fd;
  }
#endif
  return result;
}
static int lock_flash(int nonblocking) {
  int fd = open(ck_path("/var/lock/ck-flash.lock"),
                O_RDWR | O_CREAT | O_NOFOLLOW | O_CLOEXEC, 0600);
  if (fd >= 0 && flock(fd, LOCK_EX | (nonblocking ? LOCK_NB : 0)) == 0)
    return fd;
  if (fd >= 0)
    close(fd);
  return -1;
}
int ck_lock(void) { return lock_flash(0); }
int ck_try_lock(void) { return lock_flash(1); }
void ck_unlock(int fd) {
  if (fd >= 0) {
    flock(fd, LOCK_UN);
    close(fd);
  }
}
