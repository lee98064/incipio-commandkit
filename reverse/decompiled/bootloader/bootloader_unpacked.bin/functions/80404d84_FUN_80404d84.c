/* FUN_80404d84 @ 80404d84 */

void FUN_80404d84(uint param_1,uint param_2,uint param_3,uint *param_4,uint *param_5,int *param_6,
                 uint *param_7,int *param_8,uint *param_9)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    trap(0x1c00);
  }
  if (param_2 + param_1 < (param_1 / param_3 + 1) * param_3) {
    *param_4 = param_1;
    *param_5 = param_2;
    *param_6 = 0;
    *param_7 = 0;
    *param_8 = 0;
    *param_9 = 0;
    return;
  }
  *param_4 = param_1;
  if (param_3 == 0) {
    trap(0x1c00);
  }
  uVar1 = param_3 - param_1 % param_3;
  if (param_3 == uVar1) {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  *param_6 = uVar1 + *param_4;
  uVar2 = (param_2 - uVar1) / param_3;
  if (param_3 == 0) {
    trap(0x1c00);
  }
  *param_7 = uVar2;
  *param_8 = uVar2 * param_3 + *param_6;
  *param_9 = (param_2 - uVar1) % param_3;
  return;
}

