/* FUN_00434f54 @ 00434f54 */

void FUN_00434f54(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1[8] != 0) {
    (*(code *)param_1[8])(param_1,param_1[9]);
  }
  param_1[9] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    if (*param_1 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x00435020 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&_gp + *(int *)(PTR_PTR_006114b0 + *param_1 * 4 + -0x25ec)))();
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

