/* FUN_00400c38 @ 00400c38 */

void FUN_00400c38(void)

{
  if (PTR___register_frame_info_00415f20 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00415f20)
              (PTR___DT_MIPS_BASE_ADDRESS_00415e84 + 0x5de0,PTR_DAT_00415e78 + 0x5f58);
  }
  if (*(int *)(PTR_DAT_00415e78 + 0x5df4) != 0) {
    if (PTR__Jv_RegisterClasses_00415e98 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00415e98)(PTR_DAT_00415e78 + 0x5df4);
      return;
    }
  }
  return;
}

