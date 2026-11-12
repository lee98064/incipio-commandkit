#define _GNU_SOURCE
#include "ck_common.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/file.h>
#include <sys/statfs.h>
#include <unistd.h>
typedef uint32_t u32;
typedef uint8_t u8;
typedef size_t usize;
static void copy(void *d, const void *s, size_t n) {
  volatile uint8_t *a = d;
  const volatile uint8_t *b = s;
  while (n--)
    *a++ = *b++;
}
static void zero(void *d, size_t n) { memset(d, 0, n); }
/* SHA-256 / HMAC, RFC 6234 / RFC 4231. No dynamic allocation. */
typedef struct {
  u32 h[8], count;
  u8 b[64];
  unsigned fill;
} Sha;
static const u32 K[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
    0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
    0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
    0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
    0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
    0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
static u32 rr(u32 x, unsigned n) { return (x >> n) | (x << (32 - n)); }
static void block(Sha *s) {
  u32 w[64], a, b, c, d, e, f, g, h, t1, t2;
  unsigned i;
  for (i = 0; i < 16; i++) {
    const volatile u8 *p = s->b + i * 4;
    w[i] = ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3];
  }
  for (i = 16; i < 64; i++) {
    u32 x = w[i - 15], y = w[i - 2];
    w[i] = w[i - 16] + (rr(x, 7) ^ rr(x, 18) ^ (x >> 3)) + w[i - 7] +
           (rr(y, 17) ^ rr(y, 19) ^ (y >> 10));
  }
  a = s->h[0];
  b = s->h[1];
  c = s->h[2];
  d = s->h[3];
  e = s->h[4];
  f = s->h[5];
  g = s->h[6];
  h = s->h[7];
  for (i = 0; i < 64; i++) {
    t1 = h + (rr(e, 6) ^ rr(e, 11) ^ rr(e, 25)) + ((e & f) ^ (~e & g)) + K[i] +
         w[i];
    t2 = (rr(a, 2) ^ rr(a, 13) ^ rr(a, 22)) + ((a & b) ^ (a & c) ^ (b & c));
    h = g;
    g = f;
    f = e;
    e = d + t1;
    d = c;
    c = b;
    b = a;
    a = t1 + t2;
  }
  s->h[0] += a;
  s->h[1] += b;
  s->h[2] += c;
  s->h[3] += d;
  s->h[4] += e;
  s->h[5] += f;
  s->h[6] += g;
  s->h[7] += h;
}
static void sha_init(Sha *s) {
  static const u32 iv[8] = {0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
                            0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19};
  copy(s->h, iv, 32);
  s->count = s->fill = 0;
}
static void sha_add(Sha *s, const void *p, usize n) {
  const u8 *b = p;
  s->count += (u32)n;
  while (n--) {
    s->b[s->fill++] = *b++;
    if (s->fill == 64) {
      block(s);
      s->fill = 0;
    }
  }
}
static void sha_end(Sha *s, u8 *out) {
  u32 len = s->count * 8;
  unsigned i;
  s->b[s->fill++] = 128;
  if (s->fill > 56) {
    while (s->fill < 64)
      s->b[s->fill++] = 0;
    block(s);
    s->fill = 0;
  }
  while (s->fill < 60)
    s->b[s->fill++] = 0;
  for (i = 0; i < 4; i++)
    s->b[60 + i] = (u8)(len >> (24 - i * 8));
  block(s);
  for (i = 0; i < 32; i++)
    out[i] = (u8)(s->h[i / 4] >> (24 - (i % 4) * 8));
}
static void hmac(const u8 *k, unsigned kn, const void *p, usize n, u8 *out) {
  Sha s;
  u8 pad[64], inner[32];
  unsigned i;
  zero(pad, 64);
  copy(pad, k, kn);
  for (i = 0; i < 64; i++)
    pad[i] ^= 0x36;
  sha_init(&s);
  sha_add(&s, pad, 64);
  sha_add(&s, p, n);
  sha_end(&s, inner);
  for (i = 0; i < 64; i++)
    pad[i] ^= 0x36 ^ 0x5c;
  sha_init(&s);
  sha_add(&s, pad, 64);
  sha_add(&s, inner, 32);
  sha_end(&s, out);
  zero(pad, 64);
  zero(inner, 32);
}
static void hex(const u8 *b, unsigned n, char *out) {
  const char *t = "0123456789abcdef";
  unsigned i;
  for (i = 0; i < n; i++) {
    out[2 * i] = t[b[i] >> 4];
    out[2 * i + 1] = t[b[i] & 15];
  }
  out[2 * n] = 0;
}
static int unhex(const char *p, u8 *out, unsigned n) {
  unsigned i, j;
  for (i = 0; i < n; i++) {
    out[i] = 0;
    for (j = 0; j < 2; j++) {
      char c = *p++;
      int v = c >= '0' && c <= '9'   ? c - '0'
              : c >= 'a' && c <= 'f' ? c - 'a' + 10
                                     : -1;
      if (v < 0)
        return -1;
      out[i] = (u8)((out[i] << 4) | v);
    }
  }
  return 0;
}

const char *ck_path(const char *path) {
#ifdef CK_TESTING
  static char paths[64][1024], names[64][128], previous[1024];
  static unsigned count;
  const char *root = getenv("CK_TEST_ROOT");
  if (root) {
    if (strcmp(previous, root)) {
      if (strlen(root) >= sizeof(previous))
        abort();
      strcpy(previous, root);
      count = 0;
    }
    for (unsigned i = 0; i < count; i++)
      if (!strcmp(names[i], path))
        return paths[i];
    if (count >= 64 || strlen(path) >= 128)
      abort();
    strcpy(names[count], path);
    if (snprintf(paths[count], 1024, "%s%s", root, path) >= 1024)
      abort();
    return paths[count++];
  }
#endif
  return path;
}
int ck_transfer_lock(void) {
  int fd = open(ck_path("/var/lock/ck-transfer.lock"),
                O_CREAT | O_RDWR | O_NOFOLLOW | O_CLOEXEC, 0600);
  if (fd < 0)
    return -1;
  if (flock(fd, LOCK_EX | LOCK_NB)) {
    close(fd);
    return -1;
  }
  return fd;
}
int ck_ram_storage(void) {
#ifndef CK_TESTING
  struct statfs fs;
  if (statfs("/var", &fs) || ((unsigned long)fs.f_type != 0x858458f6UL &&
                              (unsigned long)fs.f_type != 0x01021994UL))
    return -1;
#endif
  return 0;
}
int ck_download_begin(void) {
  int fd = ck_transfer_lock();
  if (fd < 0)
    return -1;
  if (ck_ram_storage() || !access(ck_path("/var/run/ck-ota/queued"), F_OK) ||
      !access(ck_path("/var/run/ck-protocol-pending"),F_OK) || !access(ck_path("/var/run/ck-factory-pending"),F_OK) ||
      !access(ck_path("/var/run/ck-network-changing"),F_OK) ||
      !access(ck_path("/var/run/ck-matter-request.lock"),F_OK)) {
    close(fd);
    return -1;
  }
#ifndef CK_TESTING
  FILE *info = fopen("/proc/meminfo", "r");
  char line[128];
  unsigned free_kb = 0;
  if (info) {
    while (fgets(line, sizeof(line), info))
      if (sscanf(line, "MemFree: %u", &free_kb) == 1)
        break;
    fclose(info);
  }
  if (free_kb < 4096) {
    close(fd);
    return -1;
  }
#endif
  /* One transfer, one RAM image; the active rootfs is unaffected. */
  unlink(ck_path("/var/run/ck-ota/image.ota"));
  return fd;
}
uint32_t ck_be32(const uint8_t *p) {
  return (uint32_t)p[0] << 24 | (uint32_t)p[1] << 16 | (uint32_t)p[2] << 8 |
         p[3];
}
uint64_t ck_be64(const uint8_t *p) {
  return (uint64_t)ck_be32(p) << 32 | ck_be32(p + 4);
}
void ck_put32(uint8_t *p, uint32_t n) {
  for (int i = 0; i < 4; i++)
    p[i] = (uint8_t)(n >> (24 - i * 8));
}
void ck_put64(uint8_t *p, uint64_t n) {
  ck_put32(p, (uint32_t)(n >> 32));
  ck_put32(p + 4, (uint32_t)n);
}
int ck_read_all(int fd, void *p, size_t n) {
  uint8_t *b = p;
  while (n) {
    ssize_t r = read(fd, b, n);
    if (r < 0 && errno == EINTR)
      continue;
    if (r <= 0)
      return -1;
    b += r;
    n -= (size_t)r;
  }
  return 0;
}
int ck_write_all(int fd, const void *p, size_t n) {
  const uint8_t *b = p;
  while (n) {
    ssize_t r = write(fd, b, n);
    if (r < 0 && errno == EINTR)
      continue;
    if (r <= 0)
      return -1;
    b += r;
    n -= (size_t)r;
  }
  return 0;
}
int ck_atomic(const char *path, const void *p, size_t n, unsigned mode) {
  char temp[1024];
  if (snprintf(temp, sizeof(temp), "%s.tmp.%ld", path, (long)getpid()) >=
      (int)sizeof(temp))
    return -1;
  int fd =
      open(temp, O_CREAT | O_EXCL | O_WRONLY | O_NOFOLLOW | O_CLOEXEC, mode);
  if (fd < 0)
    return -1;
  int r = ck_write_all(fd, p, n);
  if (!r)
    r = fsync(fd);
  if (close(fd))
    r = -1;
  if (!r)
    r = rename(temp, path);
  if (r)
    unlink(temp);
  return r;
}
int ck_exact_file(const char *path, void *p, size_t n) {
  int fd = open(path, O_RDONLY | O_NOFOLLOW | O_CLOEXEC);
  if (fd < 0)
    return -1;
  int r = ck_read_all(fd, p, n);
  uint8_t extra;
  if (read(fd, &extra, 1) != 0)
    r = -1;
  close(fd);
  return r;
}
void ck_sha256(const void *p, size_t n, uint8_t out[32]) {
  Sha s;
  sha_init(&s);
  sha_add(&s, p, n);
  sha_end(&s, out);
}
void ck_sha256_pair(const void *a, size_t an, const void *b, size_t bn,
                    uint8_t out[32]) {
  Sha s;
  sha_init(&s);
  sha_add(&s, a, an);
  sha_add(&s, b, bn);
  sha_end(&s, out);
}
int ck_hash_pair(int a, unsigned ao, unsigned an, int b, unsigned bo,
                 unsigned bn, uint8_t out[32]) {
  Sha s;
  uint8_t buffer[4096];
  int fds[2] = {a, b};
  unsigned offsets[2] = {ao, bo}, sizes[2] = {an, bn};
  sha_init(&s);
  for (unsigned i = 0; i < 2; i++) {
    if (lseek(fds[i], offsets[i], SEEK_SET) < 0)
      return -1;
    while (sizes[i]) {
      unsigned take = sizes[i] > sizeof(buffer) ? sizeof(buffer) : sizes[i];
      if (ck_read_all(fds[i], buffer, take))
        return -1;
      sha_add(&s, buffer, take);
      sizes[i] -= take;
    }
  }
  sha_end(&s, out);
  return 0;
}
int ck_hash_fd(int fd, unsigned off, unsigned n, uint8_t out[32]) {
  Sha s;
  uint8_t b[4096];
  if (lseek(fd, off, SEEK_SET) < 0)
    return -1;
  sha_init(&s);
  while (n) {
    unsigned take = n > sizeof(b) ? sizeof(b) : n;
    if (ck_read_all(fd, b, take))
      return -1;
    sha_add(&s, b, take);
    n -= take;
  }
  sha_end(&s, out);
  return 0;
}
int ck_hash_factory_kernel(int fd, unsigned off, uint8_t out[32]) {
  /* The factory web uploader rewrites only the bank-selection mark. All
   * executable bytes, the length and the padding/checksum remain hashed. */
  Sha s;
  uint8_t b[4096];
  unsigned remaining = 0x120000;
  if (lseek(fd, off, SEEK_SET) < 0 || ck_read_all(fd, b, 16) ||
      memcmp(b, "cr6c", 4) || ck_be32(b + 4) != 0x80500000 ||
      ck_be32(b + 8) < 0x80000002 || ck_be32(b + 12) != 0x11fff0)
    return -1;
  ck_put32(b + 8, 0x8000004d);
  sha_init(&s);
  sha_add(&s, b, 16);
  remaining -= 16;
  while (remaining) {
    unsigned take = remaining > sizeof(b) ? sizeof(b) : remaining;
    if (ck_read_all(fd, b, take))
      return -1;
    sha_add(&s, b, take);
    remaining -= take;
  }
  sha_end(&s, out);
  return 0;
}
void ck_hmac(const uint8_t k[32], const void *p, size_t n, uint8_t out[32]) {
  hmac(k, 32, p, n, out);
}
void ck_hex(const uint8_t *p, size_t n, char *out) { hex(p, (unsigned)n, out); }
int ck_unhex(const char *p, size_t n, uint8_t *out) {
  return unhex(p, out, (unsigned)n);
}
int ck_equal(const void *a, const void *b, size_t n) {
  const uint8_t *x = a, *y = b;
  unsigned diff = 0;
  while (n--)
    diff |= *x++ ^ *y++;
  return diff == 0;
}
