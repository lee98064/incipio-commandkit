/* FUN_00401b38 @ 00401b38 */

void FUN_00401b38(void)

{
  if (PTR___register_frame_info_004235a0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004235a0)
              (PTR_s_nal_SIGTERM____0040ffd4_0x2c_00423394 + 0x24e0,PTR_DAT_00423388 + 0x3608);
  }
  if (*(int *)(PTR_DAT_00423388 + 0x24f4) != 0) {
    if (PTR__Jv_RegisterClasses_004233c4 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_004233c4)(PTR_DAT_00423388 + 0x24f4);
      return;
    }
  }
  return;
}

