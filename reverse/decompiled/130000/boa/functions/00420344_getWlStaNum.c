/* getWlStaNum @ 00420344 */

undefined4 getWlStaNum(undefined4 param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ushort local_40 [2];
  undefined1 auStack_3c [16];
  ushort *local_2c;
  undefined2 local_28;
  
  iVar2 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar2 != -1) {
    iVar3 = FUN_0041fba4(iVar2,param_1,0x8b01,auStack_3c);
    if (-1 < iVar3) {
      local_2c = local_40;
      local_28 = 2;
      iVar3 = FUN_0041fba4(iVar2,param_1,0x8b31,auStack_3c);
      puVar1 = PTR_close_0046a694;
      if (-1 < iVar3) {
        *param_2 = (uint)local_40[0];
        (*(code *)puVar1)(iVar2);
        return 0;
      }
    }
    (*(code *)PTR_close_0046a694)(iVar2);
  }
  return 0xffffffff;
}

