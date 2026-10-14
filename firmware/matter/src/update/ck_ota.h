#ifndef CK_OTA_H
#define CK_OTA_H
#include <stdint.h>
struct ck_image {
  uint8_t header[256];
  unsigned version, length;
};
int ck_ota_verify(const char *path, struct ck_image *image);
int ck_ota_stage(const char *path);
int ck_ota_queue(const char *expected_hash);
#endif
