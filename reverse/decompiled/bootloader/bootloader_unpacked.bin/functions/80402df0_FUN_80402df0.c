/* FUN_80402df0 @ 80402df0 */

void FUN_80402df0(int param_1)

{
  int iVar1;
  uint local_28 [2];
  
  iVar1 = 0;
  do {
    FUN_80402d78(iVar1,0x18,local_28);
    if (param_1 == 1) {
      FUN_80402a40(iVar1,0x18,local_28[0] | 0x8000);
    }
    else {
      FUN_80402a40(iVar1,0x18,local_28[0] & 0xffff7fff);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  return;
}

