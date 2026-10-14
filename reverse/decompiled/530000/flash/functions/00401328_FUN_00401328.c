/* FUN_00401328 @ 00401328 */

void FUN_00401328(void)

{
  if (PTR___register_frame_info_004235e4 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004235e4)
              (PTR_LAB_00423474 + 0x33e0,PTR_DAT_00423468 + 0x3618);
  }
  if (*(int *)(PTR_DAT_00423468 + 0x33f4) != 0) {
    if (PTR__Jv_RegisterClasses_0042349c != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_0042349c)(PTR_DAT_00423468 + 0x33f4);
      return;
    }
  }
  return;
}

