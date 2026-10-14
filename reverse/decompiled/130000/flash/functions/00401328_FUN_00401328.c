/* FUN_00401328 @ 00401328 */

void FUN_00401328(void)

{
  if (PTR___register_frame_info_004235b4 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004235b4)
              (PTR_LAB_00423444 + 0x33b0,PTR_DAT_00423438 + 0x35e8);
  }
  if (*(int *)(PTR_DAT_00423438 + 0x33c4) != 0) {
    if (PTR__Jv_RegisterClasses_0042346c != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_0042346c)(PTR_DAT_00423438 + 0x33c4);
      return;
    }
  }
  return;
}

