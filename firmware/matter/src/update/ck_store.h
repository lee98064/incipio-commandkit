#ifndef CK_STORE_H
#define CK_STORE_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Synchronous, bounded dual-snapshot journal. No success before flash readback.
 */
int ck_store_get(const char *key, void *value, size_t *size);
int ck_store_try_get(const char *key, void *value, size_t *size);
int ck_store_set(const char *key, const void *value, size_t size);
int ck_store_delete(const char *key);
/* Atomic removal of SDK operational data, with a restart/open-window receipt.
 * Identity, platform configuration, OTA state and the energy ring are kept. */
int ck_store_reset_matter(const char request_id[65]);
int ck_store_factory_clear(void);
int ck_store_import(void);
int ck_store_import_wait(void);
int ck_store_onboarded(void);
int ck_store_boot(void);
int ck_store_confirm(uint32_t version);
uint32_t ck_store_floor(void);
#ifdef __cplusplus
}
#endif
#endif
