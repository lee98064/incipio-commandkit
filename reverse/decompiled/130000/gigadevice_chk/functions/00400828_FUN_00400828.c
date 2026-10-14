/* FUN_00400828 @ 00400828 */

void FUN_00400828(void)

{
  if (PTR___register_frame_info_00410f38 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_00410f38)
              (PTR___DT_MIPS_BASE_ADDRESS_00410ef4 + 0xea0,PTR_DAT_00410ee8 + 0xf58);
  }
  if (*(int *)(PTR_DAT_00410ee8 + 0xeb4) != 0) {
    if (PTR__Jv_RegisterClasses_00410f08 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_00410f08)(PTR_DAT_00410ee8 + 0xeb4);
      return;
    }
  }
  return;
}

