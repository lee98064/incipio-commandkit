/* FUN_00432524 @ 00432524 */

undefined4 FUN_00432524(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (DAT_00615058 != -1) {
    (*(code *)PTR_tcsetattr_006124e0)(DAT_00615058,0x540e,PTR_serial_options_orig_00611dd8);
    (*(code *)PTR_close_0061276c)(DAT_00615058);
    uVar1 = 0;
  }
  return uVar1;
}

