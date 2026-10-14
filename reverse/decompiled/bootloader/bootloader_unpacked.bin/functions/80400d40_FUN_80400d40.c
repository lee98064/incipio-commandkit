/* FUN_80400d40 @ 80400d40 */

void FUN_80400d40(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 & 1) != 0) {
      FUN_80400cc4(iVar1,param_2);
    }
    iVar1 = iVar1 + 1;
    param_1 = (int)param_1 >> 1;
  } while (iVar1 != 0x20);
  return;
}

