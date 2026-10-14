/* SHA512_Update_compat @ 0040c11c */

undefined4 SHA512_Update_compat(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == 0) break;
    iVar2 = param_1[0x12];
    uVar1 = 0x80U - iVar2;
    if (param_3 <= 0x80U - iVar2) {
      uVar1 = param_3;
    }
    if ((iVar2 == 0) && (0x7f < param_3)) {
      FUN_004086fc(param_1,param_2);
      uVar1 = param_1[1] + 0x400;
      param_2 = param_2 + 0x80;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x80;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_004332a8)((int)(param_1 + 0x13) + iVar2,param_2,uVar1);
      iVar2 = param_1[0x12];
      param_2 = param_2 + uVar1;
      param_1[0x12] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x80) {
        FUN_004086fc(param_1,param_1 + 0x13);
        uVar1 = param_1[1] + 0x400;
        param_1[0x12] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}

