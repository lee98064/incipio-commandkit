/* getWlSiteSurveyRequest @ 0041fe80 */

undefined4 getWlSiteSurveyRequest(undefined4 param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  byte local_40 [4];
  undefined1 auStack_3c [16];
  byte *local_2c;
  undefined2 local_28;
  
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar1 != -1) {
    iVar2 = FUN_0041fba4(iVar1,param_1,0x8b01,auStack_3c);
    if (-1 < iVar2) {
      local_2c = local_40;
      local_28 = 1;
      iVar2 = FUN_0041fba4(iVar1,param_1,0x8b33,auStack_3c);
      if (-1 < iVar2) {
        (*(code *)PTR_close_0046a694)(iVar1);
        if (local_40[0] == 0xff) {
          *param_2 = 0xffffffff;
        }
        else {
          *param_2 = (uint)local_40[0];
        }
        return 0;
      }
    }
    (*(code *)PTR_close_0046a694)(iVar1);
  }
  return 0xffffffff;
}

