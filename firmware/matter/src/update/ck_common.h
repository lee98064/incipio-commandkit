#ifndef CK_COMMON_H
#define CK_COMMON_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
#define CK_ROOTFS_START 0x130000u
#define CK_ROOTFS_SIZE 0x290000u
#define CK_JOURNAL_OFFSET 0x290000u
#define CK_SLOT_SIZE 0x10000u
#define CK_PART_SIZE 0x2b0000u
#define CK_ERASE_SIZE 0x1000u
#define CK_STORE_PAYLOAD_MAX (CK_SLOT_SIZE - CK_ERASE_SIZE - 64u)
#define CK_OTA_HEADER 256u
const char *ck_path(const char *path);
uint32_t ck_be32(const uint8_t *p);
uint64_t ck_be64(const uint8_t *p);
void ck_put32(uint8_t *p, uint32_t n);
void ck_put64(uint8_t *p, uint64_t n);
int ck_read_all(int fd, void *p, size_t size);
int ck_write_all(int fd, const void *p, size_t size);
int ck_atomic(const char *path, const void *p, size_t size, unsigned mode);
int ck_exact_file(const char *path, void *p, size_t size);
void ck_sha256(const void *data, size_t n, uint8_t out[32]);
void ck_sha256_pair(const void *a, size_t an, const void *b, size_t bn,
                    uint8_t out[32]);
int ck_hash_fd(int fd, unsigned offset, unsigned size, uint8_t out[32]);
int ck_hash_pair(int a, unsigned ao, unsigned an, int b, unsigned bo,
                 unsigned bn, uint8_t out[32]);
void ck_hmac(const uint8_t key[32], const void *data, size_t size,
             uint8_t out[32]);
void ck_hex(const uint8_t *in, size_t n, char *out);
int ck_unhex(const char *in, size_t n, uint8_t *out);
int ck_equal(const void *a, const void *b, size_t size);
struct ck_flash {
  int fd;
  unsigned base, size;
};
int ck_flash_open(struct ck_flash *f, unsigned part, int writeable);
int ck_flash_read(struct ck_flash *f, unsigned at, void *p, unsigned n);
int ck_flash_write(struct ck_flash *f, unsigned at, const void *p, unsigned n);
int ck_flash_erase(struct ck_flash *f, unsigned at, unsigned n);
int ck_flash_sync(struct ck_flash *f);
int ck_lock(void);
void ck_unlock(int fd);
int ck_download_begin(void);
int ck_transfer_lock(void);
int ck_ram_storage(void);
#ifdef __cplusplus
}
#endif
#endif
