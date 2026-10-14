/* FUN_00400c58 @ 00400c58 */

void FUN_00400c58(void)

{
  if (PTR___register_frame_info_00416314 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00416314)
              (PTR___DT_MIPS_BASE_ADDRESS_00416274 + 0x61d0,PTR_DAT_00416268 + 0x6348);
  }
  if (*(int *)(PTR_DAT_00416268 + 0x61e4) != 0) {
    if (PTR__Jv_RegisterClasses_00416288 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00416288)(PTR_DAT_00416268 + 0x61e4);
      return;
    }
  }
  return;
}

