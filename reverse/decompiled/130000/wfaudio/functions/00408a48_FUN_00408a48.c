/* FUN_00408a48 @ 00408a48 */

undefined4 FUN_00408a48(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined4 *local_28;
  undefined2 local_24;
  
  iVar2 = (*(code *)PTR_socket_00423260)(2,1,0);
  if (iVar2 != -1) {
    iVar3 = FUN_0040865c(iVar2,param_1,0x8b01,auStack_38);
    if (-1 < iVar3) {
      local_3c = 0xa5;
      if (param_3 != 1) {
        local_3c = 0;
      }
      local_40 = 0;
      local_28 = &local_40;
      local_24 = 8;
      iVar3 = FUN_0040865c(iVar2,param_1,0x8bc9,auStack_38);
      puVar1 = PTR_close_004230cc;
      if (-1 < iVar3) {
        param_2[1] = local_3c;
        *param_2 = local_40;
        (*(code *)puVar1)(iVar2);
        return 0;
      }
    }
    (*(code *)PTR_close_004230cc)(iVar2);
  }
  return 0xffffffff;
}

