/* FUN_00401ac8 @ 00401ac8 */

void FUN_00401ac8(void)

{
  if (PTR___register_frame_info_004232b4 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004232b4)
              (PTR_s_s__0040ffd4_0x2c_004230b4 + 0x2200,PTR_DAT_004230a8 + 0x3328);
  }
  if (*(int *)(PTR_DAT_004230a8 + 0x2214) != 0) {
    if (PTR__Jv_RegisterClasses_004230e4 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_004230e4)(PTR_DAT_004230a8 + 0x2214);
      return;
    }
  }
  return;
}

