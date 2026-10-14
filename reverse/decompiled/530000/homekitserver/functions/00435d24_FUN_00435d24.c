/* FUN_00435d24 @ 00435d24 */

void FUN_00435d24(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1[8] != 0) {
    (*(code *)param_1[8])(param_1,param_1[9]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    if (*param_1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00435df0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&_gp + *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 +
                                *param_1 * 4 + -0x174c)))();
      return;
    }
  }
  else {
    param_1[2] = param_2;
    param_1[9] = param_3;
    param_1[8] = param_4;
  }
  return;
}

