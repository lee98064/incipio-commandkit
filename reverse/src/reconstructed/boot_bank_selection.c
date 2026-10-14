/* Behavioral reconstruction, not vendor source. MIPS BE/o32 bootloader.
 * Authoritative instructions: reverse/asm/boot_804086b0.s and boot_80407aa8.s.
 * Helpers below retain the observed boundaries; no Flash write occurs here. */
#include <stdint.h>

typedef struct {
    uint8_t signature[4];
    uint32_t start_address;
    uint32_t mark;             /* image header +8, CPU-native big-endian */
    uint32_t payload_length;
} image_header;

extern int find_bank_header(image_header *, uint32_t bank_offset, uint32_t *where);
extern int check_image_header(image_header *, image_header *, uint32_t bank_offset);
extern uint32_t boot_bank;     /* RAM 0x8040fdb0 */
extern uint32_t bank_mark;     /* RAM 0x8040fdb4 */

/* RAM 0x80407aa8 */
static uint32_t normalize_mark(int found, const image_header *h) {
    if (!found) return UINT32_C(0x80000000);
    return h->mark & UINT32_C(0x80000000) ? h->mark : UINT32_C(0x80000001);
}

/* RAM 0x804086b0. Names and structures reconstructed from register/data use. */
int select_boot_bank(int full_validation) {
    image_header h1, h2, scratch;
    uint32_t where1, where2;
    int found1 = find_bank_header(&h1, 0, &where1);
    int found2 = find_bank_header(&h2, UINT32_C(0x00400000), &where2);
    uint32_t m1 = normalize_mark(found1, &h1);
    uint32_t m2 = normalize_mark(found2, &h2);
    int prefer2 = m1 < m2;       /* unsigned sltu, 0x80408724 */
    uint32_t primary_offset = prefer2 ? UINT32_C(0x00400000) : 0;
    uint32_t fallback_offset = prefer2 ? 0 : UINT32_C(0x00400000);
    uint32_t fallback_mark = prefer2 ? m1 : m2;
    boot_bank = prefer2 ? 2 : 1;
    bank_mark = prefer2 ? m2 : m1;
    if (!full_validation) return found1 != 0 || found2 != 0;
    if (check_image_header(&h2, &scratch, primary_offset)) return 1;
    if (!check_image_header(&h2, &scratch, fallback_offset)) return 0;
    boot_bank = prefer2 ? 1 : 2;
    bank_mark = fallback_mark;
    return 1;
}
