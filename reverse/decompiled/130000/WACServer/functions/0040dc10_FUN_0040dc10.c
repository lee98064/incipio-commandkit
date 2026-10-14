/* FUN_0040dc10 @ 0040dc10 */

void FUN_0040dc10(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = param_1[1] + param_2[1];
    *param_1 = (uint)(uVar2 < (uint)param_1[1]) + *param_1 + *param_2;
    param_1[1] = uVar2;
    uVar2 = param_1[3] + param_2[3];
    iVar1 = iVar1 + 2;
    param_1[2] = (uint)(uVar2 < (uint)param_1[3]) + param_1[2] + param_2[2];
    param_1[3] = uVar2;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (iVar1 != 10);
  return;
}

