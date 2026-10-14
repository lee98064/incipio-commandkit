/* getWlJoinResult @ 0041ff90 */

undefined4 getWlJoinResult(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  uVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  iVar2 = FUN_0041fba4(uVar1,param_1,0x8b01,auStack_38);
  if (-1 < iVar2) {
    local_24 = 1;
    local_28 = param_2;
    iVar2 = FUN_0041fba4(uVar1,param_1,0x8b36,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_close_0046a694)(uVar1);
      return 0;
    }
  }
  (*(code *)PTR_close_0046a694)(uVar1);
  return 0xffffffff;
}

