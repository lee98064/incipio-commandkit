#define _GNU_SOURCE
#include "ck_store.h"
#include "ck_common.h"
#include "ck_identity_init.h"
#include "ck_matter_control.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#ifndef CK_TESTING
#include <sys/sysmacros.h>
#endif
#define HEADER 64u
#define PAYLOAD_MAX (CK_SLOT_SIZE - HEADER)
static uint8_t snapshots[2][CK_SLOT_SIZE];
static uint8_t work[CK_SLOT_SIZE];
static int auto_policy(void) {
  char policy[8];
  return !ck_exact_file(ck_path("/etc/ck-identity-policy"), policy, sizeof(policy)) &&
         !memcmp(policy, "auto-v1\n", sizeof(policy));
}
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
static int initial_marker(const uint8_t *p) {
  return !memcmp(p, CK_INIT_MARKER, CK_INIT_MARKER_SIZE) &&
         erased(p + CK_INIT_MARKER_SIZE, CK_SLOT_SIZE - CK_INIT_MARKER_SIZE);
}
static int load(struct ck_flash *f, int *active, uint64_t *seq, unsigned *n) {
  if (ck_flash_read(f, CK_JOURNAL_OFFSET, snapshots, sizeof(snapshots)))
    return -1;
  int a = valid(snapshots[0]), b = valid(snapshots[1]);
  if (!a && !b) {
    if (!(auto_policy() && initial_marker(snapshots[1])) &&
        !erased(snapshots[0], sizeof(snapshots))) {
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
  if (a && b && sa == sb && !ck_equal(snapshots[0], snapshots[1], HEADER + ck_be32(snapshots[0]+16)))
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
  if (seq == UINT64_MAX || n > CK_STORE_PAYLOAD_MAX)
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
static int get_value(const char *key,void *value,size_t *size,int nonblocking) {
  int lock = nonblocking ? ck_try_lock() : ck_lock(), result = -1, active;
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
int ck_store_get(const char *key,void *value,size_t *size) { return get_value(key,value,size,0); }
int ck_store_try_get(const char *key,void *value,size_t *size) { return get_value(key,value,size,1); }
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
  if (n - old + (remove ? 0 : 4 + k + size) > CK_STORE_PAYLOAD_MAX)
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
int ck_store_factory_clear(void) {
  int lock=ck_lock(),result=-1,active; unsigned n,out=0; uint64_t seq; struct ck_flash f;
  if(lock<0) return -1;
  if(ck_flash_open(&f,1,1)) goto done;
  if(load(&f,&active,&seq,&n) || active<0) goto closed;
  for(unsigned at=0;at<n;) {
    unsigned k=work[HEADER+at],v=(unsigned)work[HEADER+at+2]<<8|work[HEADER+at+3],size=4+k+v;
    const uint8_t *key=work+HEADER+at+4;
    int keep=(k>=9 && !memcmp(key,"identity/",9) && !(k==18 && !memcmp(key,"identity/onboarded",18))) ||
             (k>=4 && !memcmp(key,"ota/",4));
    if(keep) { memmove(work+HEADER+out,work+HEADER+at,size);out+=size; }
    at+=size;
  }
  const char *key="config/needs-setup";unsigned k=(unsigned)strlen(key);
  if(out+5+k>CK_STORE_PAYLOAD_MAX) goto closed;
  work[HEADER+out]=k;work[HEADER+out+1]=0;work[HEADER+out+2]=0;work[HEADER+out+3]=1;
  memcpy(work+HEADER+out+4,key,k);work[HEADER+out+4+k]=1;
  result=save(&f,active,seq,out+5+k);
closed:close(f.fd);
done:ck_unlock(lock);return result;
}
int ck_store_reset_matter(const char request_id[65]) {
  if (!request_id || strlen(request_id) != 64) return -1;
  for (unsigned i = 0; i < 64; ++i)
    if (!((request_id[i] >= '0' && request_id[i] <= '9') ||
          (request_id[i] >= 'a' && request_id[i] <= 'f'))) return -1;
  int lock = ck_lock(), result = -1, active;
  unsigned n, out = 0;
  uint64_t seq;
  struct ck_flash f;
  if (lock < 0) return -1;
  if (ck_flash_open(&f, 1, 1)) goto done;
  if (load(&f, &active, &seq, &n) || active < 0) goto closed;
  for (unsigned at = 0; at < n;) {
    unsigned k = work[HEADER+at], v = (unsigned)work[HEADER+at+2] << 8 | work[HEADER+at+3];
    unsigned size = 4+k+v;
    const uint8_t *key = work+HEADER+at+4;
    int remove = (k >= 7 && !memcmp(key,"matter/",7)) ||
        (k == 17 && !memcmp(key,"platform/chip_kvs",17)) ||
        (k == sizeof(CK_MATTER_RESET_KEY)-1 && !memcmp(key,CK_MATTER_RESET_KEY,k));
    if (!remove) { memmove(work+HEADER+out,work+HEADER+at,size); out += size; }
    at += size;
  }
  const unsigned k = sizeof(CK_MATTER_RESET_KEY)-1;
  if (out+4+k+64 > CK_STORE_PAYLOAD_MAX) goto closed;
  work[HEADER+out] = k; work[HEADER+out+1] = 0;
  work[HEADER+out+2] = 0; work[HEADER+out+3] = 64;
  memcpy(work+HEADER+out+4,CK_MATTER_RESET_KEY,k);
  memcpy(work+HEADER+out+4+k,request_id,64);
  result = save(&f,active,seq,out+4+k+64);
closed:
  close(f.fd);
done:
  ck_unlock(lock);
  return result;
}
static void wipe(void *p, size_t n) {
  volatile uint8_t *v = p;
  while (n--) *v++ = 0;
}
static int entropy(uint8_t seed[32], int wait) {
  const char *path = "/dev/random";
#ifdef CK_TESTING
  const char *fixture = getenv("CK_TEST_SEED_FILE");
  if (fixture) path = fixture;
#endif
  int fd = open(path, O_RDONLY | O_NONBLOCK | O_NOFOLLOW | O_CLOEXEC);
  struct stat st;
  if (fd < 0) return -1;
  if (fstat(fd, &st)
#ifndef CK_TESTING
      || !S_ISCHR(st.st_mode) || major(st.st_rdev) != 1 || minor(st.st_rdev) != 8
#else
      || (fixture ? !S_ISREG(st.st_mode) : !S_ISCHR(st.st_mode))
#endif
      ) { close(fd); return -1; }
  size_t n = 0;
  while (n < 32) {
    ssize_t got = read(fd, seed + n, 32 - n);
    if (got > 0) { n += (size_t)got; continue; }
    if (got < 0 && errno == EINTR) continue;
    if (got < 0 && errno != EAGAIN) { close(fd); wipe(seed,32); return -1; }
    if (!wait) { close(fd); wipe(seed,32); return CK_ENTROPY_PENDING; }
    /* Keep partial credited entropy in this process's RAM, without holding
     * up rcS, networking or the independent MCU worker. No weak fallback. */
    usleep(250000);
  }
  close(fd);
  return 0;
}
static unsigned append_entry(unsigned n, const char *key, const void *value, unsigned size) {
  unsigned k = (unsigned)strlen(key);
  work[HEADER+n] = (uint8_t)k; work[HEADER+n+1] = 0;
  work[HEADER+n+2] = (uint8_t)(size >> 8); work[HEADER+n+3] = (uint8_t)size;
  memcpy(work+HEADER+n+4,key,k); memcpy(work+HEADER+n+4+k,value,size);
  return n+4+k+size;
}
static int initialize_auto(int wait) {
  struct ck_flash f;
  int lock = ck_lock(), result = -1, active;
  uint64_t seq;
  unsigned n;
  uint8_t seed[32] = {0}, device[32], diag[32], trusted[32], flag = 1;
  char diag_text[65];
  if (lock < 0) return -1;
  if (ck_flash_open(&f,1,1)) goto done;
  if (load(&f,&active,&seq,&n)) goto closed;
  if (active < 0) {
    /* Only the public first-install container can authorize formatting a
     * new identity. Unknown journal bytes and erased OTA state are refused. */
    if (!initial_marker(snapshots[1]) ||
        ck_exact_file(ck_path("/etc/ck-update.pub"),trusted,32)) goto closed;
    result = entropy(seed,wait);
    if (result) goto closed;
    ck_hmac(seed,"commandkit/device/v1",20,device);
    ck_hmac(seed,"commandkit/diagnostics/v1",25,diag);
    ck_hex(diag,32,diag_text); diag_text[64] = '\n';
    n = append_entry(0,"identity/device",device,32);
    n = append_entry(n,"identity/diag",diag_text,65);
    n = append_entry(n,"identity/update",trusted,32);
    n = append_entry(n,"identity/auto",&flag,1);
    result = save(&f,-1,0,n);
    if (result) goto closed;
  }
  /* Retire the initialization permission before exporting any credential.
   * A later corrupt journal must fail closed instead of changing identity. */
  if (initial_marker(snapshots[1])) {
    uint8_t zero[8] = {0}, check[8];
#ifdef CK_TESTING
    if (getenv("CK_FAIL_INIT_RETIRE")) { result = -1; goto closed; }
#endif
    if (ck_flash_write(&f,CK_JOURNAL_OFFSET+CK_SLOT_SIZE,zero,8) || ck_flash_sync(&f) ||
        ck_flash_read(&f,CK_JOURNAL_OFFSET+CK_SLOT_SIZE,check,8) ||
        !ck_equal(zero,check,8)) { result = -1; goto closed; }
  }
  result = 0;
closed:
  close(f.fd);
done:
  wipe(seed,sizeof(seed)); wipe(device,sizeof(device)); wipe(diag,sizeof(diag));
  wipe(diag_text,sizeof(diag_text));
  ck_unlock(lock);
  return result;
}
static int migrate(const char *name, const char *source, const char *dest,
                   size_t expected) {
  uint8_t b[128];
  size_t n = sizeof(b);
  int r = ck_store_get(name, b, &n);
  if (r == 1) {
    if (ck_exact_file(ck_path(source), b, expected) ||
        ck_store_set(name, b, expected)) {
      fprintf(stderr, "CK_STORE_IMPORT_WRITE_FAILED key=%s\n", name);
      return -1;
    }
    n = expected;
  } else if (r) {
    fprintf(stderr, "CK_STORE_IMPORT_READ_FAILED key=%s result=%d\n", name, r);
    return -1;
  }
  if (n != expected)
    return -1;
  r = ck_atomic(ck_path(dest), b, n, 0600);
  memset(b, 0, sizeof(b));
  return r;
}
static int import_identity(int wait) {
  uint8_t meta[12];
  if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, 12) ||
      ck_be32(meta) != 0x434b0004)
    return -1;
  unsigned variant = ck_be32(meta + 4);
  if (variant == 1 && auto_policy() &&
      access(ck_path("/etc/matter-device.key"),F_OK) != 0) {
    int result = initialize_auto(wait);
    if (result) return result;
  }
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
  uint8_t flag;
  size_t size = 1;
  if(!access(ck_path("/etc/ck-admin-policy"),F_OK)) {
    uint8_t admin[60];size_t length=sizeof(admin);
    int admin_state=ck_store_get("admin/credential",admin,&length);
    if(admin_state==1 || !ck_store_get("config/needs-setup",&flag,&size)) {
      if(ck_atomic(ck_path("/var/run/ck-first-setup"),"1",1,0600)) return -1;
    } else if(admin_state) return -1;
    memset(admin,0,sizeof(admin));
  }
  size=1;
  if (!ck_store_get("identity/auto",&flag,&size) && size == 1 && flag == 1) {
    size = 1;
    int r = ck_store_get("identity/onboarded",&flag,&size);
    if (r == 1) {
      if (ck_atomic(ck_path("/var/run/ck-first-setup"),"1",1,0600)) return -1;
    } else if (r || size != 1 || flag != 1) return -1;
  }
  return 0;
}
int ck_store_import(void) { return import_identity(0); }
int ck_store_import_wait(void) { return import_identity(1); }
int ck_store_onboarded(void) {
  if(ck_store_delete("config/needs-setup")) return -1;
  unlink(ck_path("/var/run/ck-first-setup"));
  unlink(ck_path("/var/run/ck-admin-enroll-ok"));
  uint8_t flag;
  size_t size = 1;
  int r = ck_store_get("identity/auto",&flag,&size);
  if (r == 1) return 0;
  if (r || size != 1 || flag != 1) return -1;
  if (ck_store_set("identity/onboarded",&flag,1)) return -1;
  unlink(ck_path("/var/run/ck-first-setup"));
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
  uint8_t meta[12];
  if (ck_exact_file(ck_path("/etc/ck-update.meta"), meta, sizeof(meta)) ||
      ck_be32(meta) != 0x434b0004 ||
      (ck_be32(meta + 4) != 1 && ck_be32(meta + 4) != 2))
    return -1;
  uint32_t running = ck_be32(meta + 8);
  if (running > ck_be32(b)) {
    /* A region-only programmer recovery preserves an older pending OTA.
     * Adopt the newer running image, keeping its usual health confirmation.
     * Delete attempts first: interruption before updating pending retries
     * this branch, rather than inheriting an exhausted old retry count. */
    uint32_t floor = ck_store_floor();
    if (floor == UINT32_MAX || running < floor ||
        ck_store_delete("ota/attempts"))
      return -1;
    ck_put32(b, running);
    if (ck_store_set("ota/pending", b, sizeof(b)))
      return -1;
  }
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
