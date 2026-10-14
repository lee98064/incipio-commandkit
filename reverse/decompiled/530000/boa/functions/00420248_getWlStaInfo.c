/* getWlStaInfo @ 00420248 */

undefined4 getWlStaInfo(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar1 != -1) {
    iVar2 = FUN_0041fba4(iVar1,param_1,0x8b01,auStack_38);
    if (-1 < iVar2) {
      local_24 = 0xc30;
      local_28 = param_2;
      (*(code *)PTR_memset_0046a87c)(param_2,0,0xc30);
      iVar2 = FUN_0041fba4(iVar1,param_1,0x8b30,auStack_38);
      if (-1 < iVar2) {
        (*(code *)PTR_close_0046a694)(iVar1);
        return 0;
      }
    }
    (*(code *)PTR_close_0046a694)(iVar1);
  }
  return 0xffffffff;
}

