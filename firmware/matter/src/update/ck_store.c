#define _GNU_SOURCE
#include "ck_store.h"
#include "ck_common.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define HEADER 64u
#define PAYLOAD_MAX (CK_SLOT_SIZE - HEADER)
static uint8_t snapshots[2][CK_SLOT_SIZE];
static uint8_t work[CK_SLOT_SIZE];
static int erased(const uint8_t *p, size_t n) {
  while (n--)
    if (*p++ != 255)
      return 0;
  return 1;
}
static int valid(const uint8_t *p) {
  uint8_t hash[32];
  unsigned n = ck_be32(p + 16);
  if (memcmp(p, "CKSTORE1", 8) || ck_be32(p + 60) != 0x434b4f4b ||
      n > PAYLOAD_MAX)
    return 0;
  ck_sha256_pair(p + 8, 12, p + HEADER, n, hash);
  if (!ck_equal(hash, p + 20, 32))
    return 0;
  unsigned at = 0;
  while (at < n) {
    if (n - at < 4)
      return 0;
    unsigned k = p[HEADER + at],
             v = (unsigned)p[HEADER + at + 2] << 8 | p[HEADER + at + 3];
    if (!k || k > 96 || p[HEADER + at + 1] || 4 + k + v > n - at)
      return 0;
    for (unsigned i = 0; i < k; i++) {
      unsigned c = p[HEADER + at + 4 + i];
      if (c < 33 || c > 126)
        return 0;
    }
    at += 4 + k + v;
  }
  return at == n;
}
static int load(struct ck_flash *f, int *active, uint64_t *seq, unsigned *n) {
  if (ck_flash_read(f, CK_JOURNAL_OFFSET, snapshots, sizeof(snapshots)))
    return -1;
  int a = valid(snapshots[0]), b = valid(snapshots[1]);
  if (!a && !b) {
    if (!erased(snapshots[0], sizeof(snapshots))) {
      uint8_t bootstrap[65];
      /* An interrupted very first import has no previous snapshot. Recover
       * only our own first-generation header with an erased second slot and
       * the original personalized bootstrap still present in this rootfs. */
      if (memcmp(snapshots[0], "CKSTORE1", 8) ||
          ck_be64(snapshots[0] + 8) != 1 ||
          !erased(snapshots[1], CK_SLOT_SIZE) ||
          ck_exact_file(ck_path("/etc/matter-diag.key"), bootstrap, 65))
        return -1; /* never format unknown vendor bytes */
    }
    *active = -1;
    *seq = 0;
    *n = 0;
    return 0;
  }
  uint64_t sa = ck_be64(snapshots[0] + 8), sb = ck_be64(snapshots[1] + 8);
  if (a && b && sa == sb && !ck_equal(snapshots[0], snapshots[1], CK_SLOT_SIZE))
    return -1;
  *active = (!a || (b && sb > sa)) ? 1 : 0;
  *seq = ck_be64(snapshots[*active] + 8);
  *n = ck_be32(snapshots[*active] + 16);
  memcpy(work + HEADER, snapshots[*active] + HEADER, *n);
  return 0;
}
static int entry(const char *key, unsigned n, unsigned *at, unsigned *size) {
  size_t k = strlen(key);
  if (!k || k > 96)
    return -1;
  unsigned pos = 0;
  while (pos < n) {
    unsigned len = work[HEADER + pos],
             v = (unsigned)work[HEADER + pos + 2] << 8 | work[HEADER + pos + 3];
    if (len == k && !memcmp(work + HEADER + pos + 4, key, k)) {
      *at = pos;
      *size = v;
      return 1;
    }
    pos += 4 + len + v;
  }
  *at = n;
  *size = 0;
  return 0;
}
static int save(struct ck_flash *f, int active, uint64_t seq, unsigned n) {
  if (seq == UINT64_MAX)
    return -1;
  uint8_t digest[32], commit[4];
  memset(work, 255, HEADER);
  memcpy(work, "CKSTORE1", 8);
  ck_put64(work + 8, seq + 1);
  ck_put32(work + 16, n);
  ck_sha256_pair(work + 8, 12, work + HEADER, n, digest);
  memcpy(work + 20, digest, 32);
  unsigned dest = CK_JOURNAL_OFFSET + (active == 0 ? CK_SLOT_SIZE : 0);
  unsigned erase_size =
      (HEADER + n + CK_ERASE_SIZE - 1) / CK_ERASE_SIZE * CK_ERASE_SIZE;
  if (ck_flash_erase(f, dest, erase_size))
    return -1;
#ifdef CK_TESTING
  if (getenv("CK_FAIL_STORE") &&
      !strcmp(getenv("CK_FAIL_STORE"), "after-erase"))
    return -1;
#endif
  if (ck_flash_write(f, dest, work, HEADER + n) || ck_flash_sync(f))
    return -1;
  uint8_t *verify = snapshots[active == 0 ? 1 : 0];
  if (ck_flash_read(f, dest, verify, HEADER + n) ||
      !ck_equal(work, verify, HEADER + n))
    return -1;
#ifdef CK_TESTING
  if (getenv("CK_FAIL_STORE") &&
      !strcmp(getenv("CK_FAIL_STORE"), "before-commit"))
    return -1;
#endif
  ck_put32(commit, 0x434b4f4b);
  if (ck_flash_write(f, dest + 60, commit, 4) || ck_flash_sync(f) ||
      ck_flash_read(f, dest, verify, CK_SLOT_SIZE) || !valid(verify))
    return -1;
  return 0;
}
int ck_store_get(const char *key, void *value, size_t *size) {
  int lock = ck_lock(), result = -1, active;
  unsigned n, at, v;
  uint64_t seq;
  struct ck_flash f;
  if (lock < 0)
    return -1;
  if (ck_flash_open(&f, 1, 0))
    goto done;
  if (load(&f, &active, &seq, &n))
    goto closed;
  int found = entry(key, n, &at, &v);
  if (found < 0)
    goto closed;
  if (!found) {
    result = 1;
    goto closed;
  }
  if (*size < v) {
    *size = v;
    result = 2;
    goto closed;
  }
  if (v)
    memcpy(value, work + HEADER + at + 4 + strlen(key), v);
  *size = v;
  result = 0;
closed:
  close(f.fd);
done:
  ck_unlock(lock);
  return result;
}
static int change(const char *key, const void *value, size_t size, int remove) {
  size_t k = strlen(key);
  if (!k || k > 96 || size > 65535 || (!value && size))
    return -1;
  for (size_t i = 0; i < k; i++)
    if ((unsigned char)key[i] < 33 || (unsigned char)key[i] > 126)
      return -1;
  int lock = ck_lock(), result = -1, active;
  unsigned n, at, v;
  uint64_t seq;
  struct ck_flash f;
  if (lock < 0)
    return -1;
  if (ck_flash_open(&f, 1, 1))
    goto done;
  if (load(&f, &active, &seq, &n))
    goto closed;
  int found = entry(key, n, &at, &v);
  if (found < 0)
    goto closed;
  if ((remove && !found) ||
      (found && !remove && v == size &&
       !memcmp(work + HEADER + at + 4 + k, value, size))) {
    result = 0;
    goto closed;
  }
  unsigned old = found ? (unsigned)(4 + k + v) : 0;
  if (n - old + (remove ? 0 : 4 + k + size) > PAYLOAD_MAX)
    goto closed;
  if (found) {
    memmove(work + HEADER + at, work + HEADER + at + old, n - at - old);
    n -= old;
  }
  if (!remove) {
    work[HEADER + n] = (uint8_t)k;
    work[HEADER + n + 1] = 0;
    work[HEADER + n + 2] = (uint8_t)(size >> 8);
    work[HEADER + n + 3] = (uint8_t)size;
    memcpy(work + HEADER + n + 4, key, k);
    if (size)
      memcpy(work + HEADER + n + 4 + k, value, size);
    n += (unsigned)(4 + k + size);
  }
  result = save(&f, active, seq, n);
closed:
  close(f.fd);
done:
  ck_unlock(lock);
  return result;
}
int ck_store_set(const char *k, const void *v, size_t n) {
  return change(k, v, n, 0);
}
int ck_store_delete(const char *k) { return change(k, NULL, 0, 1); }
static int migrate(const char *name, const char *source, const char *dest,
                   size_t expected) {
  uint8_t b[128];
  size_t n = sizeof(b);
  int r = ck_store_get(name, b, &n);
  if (r == 1) {
    if (ck_exact_file(ck_path(source), b, expected) ||
        ck_store_set(name, b, expected))
      return -1;
    n = expected;
  } else if (r)
    return -1;
  if (n != expected)
    return -1;
  r = ck_atomic(ck_path(dest), b, n, 0600);
  memset(b, 0, sizeof(b));
  return r;
}
int ck_store_import(void) {
  uint8_t meta[12];
  if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, 12) ||
      ck_be32(meta) != 0x434b0004)
    return -1;
  unsigned variant = ck_be32(meta + 4);
  if (variant == 1) {
    if (migrate("identity/device", "/etc/matter-device.key",
                "/var/lib/ck-state/device.key", 32))
      return -1;
  } else if (variant == 2) {
    if (migrate("identity/setup-ap", "/etc/ck-setup-ap.bin",
                "/var/lib/ck-state/setup-ap.bin", 104))
      return -1;
  } else
    return -1;
  if (migrate("identity/diag", "/etc/matter-diag.key",
              "/var/lib/ck-state/diag.key", 65) ||
      migrate("identity/update", "/etc/ck-update.pub",
              "/var/lib/ck-state/update.pub", 32))
    return -1;
  uint8_t trusted[32], current[32];
  if (ck_exact_file(ck_path("/var/lib/ck-state/update.pub"), trusted, 32) ||
      ck_exact_file(ck_path("/etc/ck-update.pub"), current, 32) ||
      !ck_equal(trusted, current, 32))
    return -1;
  return 0;
}
uint32_t ck_store_floor(void) {
  uint8_t b[4];
  size_t n = 4;
  int r = ck_store_get("ota/floor", b, &n);
  return r == 1 ? 0 : r || n != 4 ? UINT32_MAX : ck_be32(b);
}
int ck_store_confirm(uint32_t v) {
  uint32_t floor = ck_store_floor();
  uint8_t b[4];
  size_t pending_n = 4;
  int pending = ck_store_get("ota/pending", b, &pending_n);
  if (v < floor ||
      (pending != 1 && (pending || pending_n != 4 || ck_be32(b) != v)))
    return -1;
  ck_put32(b, v);
  if (ck_store_set("ota/floor", b, 4) || ck_store_delete("ota/pending") ||
      ck_store_delete("ota/attempts"))
    return -1;
  return 0;
}
int ck_store_boot(void) {
  uint8_t b[4];
  size_t n = 4;
  int r = ck_store_get("ota/pending", b, &n);
  if (r == 1)
    return 0;
  if (r || n != 4)
    return -1;
  n = 4;
  uint32_t count = 0;
  r = ck_store_get("ota/attempts", b, &n);
  if (!r && n == 4)
    count = ck_be32(b);
  else if (r != 1)
    return -1;
  if (count >= 3)
    return 1;
  ck_put32(b, count + 1);
  return ck_store_set("ota/attempts", b, 4);
}
