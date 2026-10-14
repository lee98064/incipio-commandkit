/* FUN_0043f5a8 @ 0043f5a8 */

undefined4 FUN_0043f5a8(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (6 < param_1)) {
    (*(code *)PTR_mc_error_00614208)
              (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x107c,param_1,7);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(PTR_DAT_0061234c + param_1 * 4 + 0xc10);
  }
  return uVar1;
}

