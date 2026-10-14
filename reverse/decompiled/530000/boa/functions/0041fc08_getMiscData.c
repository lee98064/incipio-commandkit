/* getMiscData @ 0041fc08 */

undefined4 getMiscData(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  uVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  iVar2 = FUN_0041fba4(uVar1,param_1,0x8b01,auStack_38);
  uVar3 = 0xffffffff;
  if (-1 < iVar2) {
    local_24 = 0x20;
    local_28 = param_2;
    iVar2 = FUN_0041fba4(uVar1,param_1,0x8b48,auStack_38);
    if (iVar2 < 0) {
      uVar3 = 0xffffffff;
    }
    else {
      (*(code *)PTR_close_0046a694)(uVar1);
      uVar3 = 0;
    }
  }
  return uVar3;
}

