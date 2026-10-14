/* FUN_0042006c @ 0042006c */

undefined4 FUN_0042006c(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_38 [16];
  undefined1 *local_28;
  undefined2 local_24;
  
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    iVar3 = FUN_0041fba4(iVar1,param_1,0x8b01,auStack_38);
    uVar2 = 0xffffffff;
    if (-1 < iVar3) {
      local_24 = 0xac;
      local_28 = param_2;
      iVar3 = FUN_0041fba4(iVar1,param_1,0x8b35,auStack_38);
      if (iVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else {
        (*(code *)PTR_close_0046a694)(iVar1);
        uVar2 = 0;
        *param_3 = *local_28;
      }
    }
  }
  return uVar2;
}

