/* FUN_0043e7d8 @ 0043e7d8 */

undefined4 FUN_0043e7d8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (6 < param_1)) {
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1f1c,param_1,7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(PTR_DAT_006114b8 + param_1 * 4 + -0x280);
  }
  return uVar1;
}

