/* FUN_00401eb8 @ 00401eb8 */

void FUN_00401eb8(void)

{
  if (PTR___register_frame_info_004332c0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004332c0)
              (PTR_t_in_1800__00433064 + 0x2b00,PTR_DAT_00433058 + 0x3328);
  }
  if (*(int *)(PTR_DAT_00433058 + 0x3010) != 0) {
    if (PTR__Jv_RegisterClasses_004330b0 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_004330b0)(PTR_DAT_00433058 + 0x3010);
      return;
    }
  }
  return;
}

