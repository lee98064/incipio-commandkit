#ifndef CK_ENERGY_H
#define CK_ENERGY_H
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Two dedicated 4 KiB append pages, outside configuration snapshot payloads.
 * Returns 0 for a verified checkpoint, 1 for erased storage, -1 on failure.
 */
int ck_energy_load(uint64_t *mwh, uint32_t *remainder);
int ck_energy_save(uint64_t mwh, uint32_t remainder);
#ifdef __cplusplus
}
#endif
#endif
