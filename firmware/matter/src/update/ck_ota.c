#define _GNU_SOURCE
#include "ck_ota.h"
#include "../vendor/monocypher/monocypher-ed25519.h"
#include "ck_common.h"
#include "ck_store.h"
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/file.h>
#include <sys/stat.h>
#include <unistd.h>
static int compatibility(const uint8_t *h) {
  struct ck_flash a, b;
  uint8_t hash[32];
  int r = -1;
  if (ck_flash_open(&a, 0, 0))
    return -1;
  if (!ck_hash_fd(a.fd, a.base + 0x10000, 0x120000, hash) &&
      ck_equal(hash, h + 64, 32))
    r = 0;
  close(a.fd);
  if (r)
    return -1;
  if (ck_flash_open(&a, 3, 0))
    return -1;
  if (ck_flash_open(&b, 4, 0)) {
    close(a.fd);
    return -1;
  }
  r = ck_hash_pair(a.fd, a.base + 0x10000, 0x120000, b.fd, b.base, CK_PART_SIZE,
                   hash);
  if (!r && !ck_equal(hash, h + 96, 32))
    r = -1;
  close(a.fd);
  close(b.fd);
  return r;
}
int ck_ota_verify(const char *path, struct ck_image *im) {
  struct stat st;
  uint8_t public_key[32], meta[12], hash[32], root[96], buffer[4096];
  int fd = open(path, O_RDONLY | O_NOFOLLOW | O_CLOEXEC), result = -1;
  if (fd < 0)
    return -1;
  if (fstat(fd, &st) || !S_ISREG(st.st_mode) ||
      st.st_size < (off_t)CK_OTA_HEADER || ck_read_all(fd, im->header, 256))
    goto done;
  uint8_t *h = im->header;
  if (memcmp(h, "CKOTA1\r\n", 8) || ck_be32(h + 8) != 1 ||
      ck_be32(h + 12) != 0x434b0004 || ck_be32(h + 28))
    goto done;
  im->version = ck_be32(h + 20);
  im->length = ck_be32(h + 24);
  if (!im->version || im->length != CK_ROOTFS_SIZE ||
      st.st_size != (off_t)(256 + im->length))
    goto done;
  if (ck_exact_file(ck_path("/etc/ck-update.pub"), public_key, 32) ||
      !ck_equal(h + 128, public_key, 32) ||
      crypto_ed25519_check(h + 192, public_key, h, 192))
    goto done;
  if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, 12) ||
      ck_be32(meta) != 0x434b0004 || ck_be32(meta + 4) != ck_be32(h + 16) ||
      im->version <= ck_be32(meta + 8) || im->version <= ck_store_floor())
    goto done;
  if (!memchr(h + 160, 0, 32) || !h[160])
    goto done;
  for (unsigned i = 160; i < 192 && h[i]; i++)
    if (!((h[i] >= 'a' && h[i] <= 'z') || (h[i] >= 'A' && h[i] <= 'Z') ||
          (h[i] >= '0' && h[i] <= '9') || h[i] == '.' || h[i] == '-'))
      goto done;
  if (ck_hash_fd(fd, 256, im->length, hash) || !ck_equal(hash, h + 32, 32))
    goto done;
  if (lseek(fd, 256, SEEK_SET) < 0 || ck_read_all(fd, root, sizeof(root)) ||
      memcmp(root, "hsqs", 4))
    goto done;
  unsigned extent = ck_be32(root + 8);
  if (extent > CK_ROOTFS_SIZE - 0x282)
    goto done;
  extent += 0x282;
  uint64_t used = 0;
  for (int i = 7; i >= 0; i--)
    used = (used << 8) | root[40 + i];
  if (extent < 96 || extent > im->length || extent % 2 || used < 96 ||
      used > extent)
    goto done;
  if (lseek(fd, 256, SEEK_SET) < 0)
    goto done;
  unsigned remaining = extent, sum = 0;
  while (remaining) {
    unsigned n = remaining > sizeof(buffer) ? sizeof(buffer) : remaining;
    if (ck_read_all(fd, buffer, n))
      goto done;
    for (unsigned i = 0; i < n; i += 2)
      sum += ((unsigned)buffer[i] << 8) | buffer[i + 1];
    remaining -= n;
  }
  if ((sum & 65535) || compatibility(h))
    goto done;
  /* An OTA-ready device must already have migrated identity and trust. */
  size_t n = 32;
  uint8_t trusted[32];
  if (ck_store_get("identity/update", trusted, &n) || n != 32 ||
      !ck_equal(trusted, public_key, 32))
    goto done;
  struct ck_flash target;
  if (ck_flash_open(&target, 1, 1))
    goto done;
  close(target.fd);
  result = 0;
done:
  close(fd);
  return result;
}
static int cp(const char *from, const char *to, unsigned mode) {
  int in = open(from, O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
  if (in < 0)
    return -1;
  int out =
      open(to, O_CREAT | O_EXCL | O_WRONLY | O_NOFOLLOW | O_CLOEXEC, mode);
  if (out < 0) {
    close(in);
    return -1;
  }
  uint8_t buffer[4096];
  ssize_t n;
  int r = 0;
  while ((n = read(in, buffer, sizeof(buffer))) != 0) {
    if (n < 0 && errno == EINTR)
      continue;
    if (n < 0 || ck_write_all(out, buffer, (size_t)n)) {
      r = -1;
      break;
    }
  }
  if (fsync(out))
    r = -1;
  close(in);
  if (close(out))
    r = -1;
  if (r)
    unlink(to);
  return r;
}
static int manager_lock(void) {
  int fd = open(ck_path("/var/lock/ck-update.lock"),
                O_CREAT | O_RDWR | O_NOFOLLOW | O_CLOEXEC, 0600);
  if (fd >= 0 && flock(fd, LOCK_EX) == 0)
    return fd;
  if (fd >= 0)
    close(fd);
  return -1;
}
int ck_ota_stage(const char *path) {
  int lock = manager_lock();
  if (lock < 0)
    return -1;
  if (!access(ck_path("/var/run/ck-ota/queued"), F_OK)) {
    close(lock);
    return -1;
  }
  struct ck_image im;
  if (ck_ota_verify(path, &im)) {
    close(lock);
    return -1;
  }
  char dest[1024];
  snprintf(dest, sizeof(dest), "%s", ck_path("/var/run/ck-ota/image.ota"));
  if (!strcmp(path, dest)) {
    close(lock);
    return 0;
  }
  if (!strcmp(path, ck_path("/var/run/ck-ota/upload.ota")) ||
      !strcmp(path, ck_path("/var/run/ck-ota/matter.ota"))) {
    int result = rename(path, dest);
    if (!result)
      result = ck_ota_verify(dest, &im);
    close(lock);
    return result;
  }
  unlink(ck_path("/var/run/ck-ota/staging.ota"));
  int r = cp(path, ck_path("/var/run/ck-ota/staging.ota"), 0600);
  if (!r)
    r = rename(ck_path("/var/run/ck-ota/staging.ota"), dest);
  if (!r)
    r = ck_ota_verify(dest, &im);
  if (r)
    unlink(ck_path("/var/run/ck-ota/staging.ota"));
  close(lock);
  return r;
}
int ck_ota_queue(const char *expected_hash) {
  if (ck_ram_storage())
    return -1;
  int lock = manager_lock();
  if (lock < 0)
    return -1;
  int result = -1;
  int transfer = ck_transfer_lock();
  if (transfer < 0) {
    close(lock);
    return -1;
  }
  if (!access(ck_path("/var/run/ck-ota/queued"), F_OK)) {
    close(transfer);
    close(lock);
    return -1;
  }
  struct ck_image im;
  if (ck_ota_verify(ck_path("/var/run/ck-ota/image.ota"), &im))
    goto done;
  if (expected_hash) {
    uint8_t digest[32];
    char actual[65];
    int fd = open(ck_path("/var/run/ck-ota/image.ota"),
                  O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
    if (fd < 0)
      goto done;
    int r = ck_hash_fd(fd, 0, CK_OTA_HEADER + CK_ROOTFS_SIZE, digest);
    close(fd);
    ck_hex(digest, 32, actual);
    if (r || strcmp(expected_hash, actual))
      goto done;
  }
  /* PID1's restart action executes this fixed static binary from RAM. */
  unlink(ck_path("/var/run/ck-ota/apply"));
  if (cp(ck_path("/bin/ck-updater"), ck_path("/var/run/ck-ota/apply"), 0700))
    goto done;
  uint8_t version[4];
  ck_put32(version, im.version);
  if (ck_store_set("ota/pending", version, 4) ||
      ck_store_delete("ota/attempts") ||
      ck_atomic(ck_path("/var/run/ck-ota/queued"), version, 4, 0600))
    goto done;
#ifndef CK_TESTING
  pid_t child = fork();
  if (child < 0)
    goto done;
  if (child == 0) {
    close(lock);
    for (int fd = 0; fd < 128; fd++)
      close(fd);
    sleep(2);
    kill(1, SIGQUIT);
    _exit(0);
  }
#endif
  result = 0;
done:
  if (result)
    unlink(ck_path("/var/run/ck-ota/queued"));
  close(lock);
  close(transfer);
  return result;
}
