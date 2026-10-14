/* FUN_004086c0 @ 004086c0 */

undefined4 FUN_004086c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined2 local_24;
  
  iVar1 = (*(code *)PTR_socket_00423260)(2,1,0);
  if (iVar1 != -1) {
    iVar2 = FUN_0040865c(iVar1,param_1,0x8b01,auStack_38);
    if (-1 < iVar2) {
      local_24 = 0x2c;
      local_28 = param_2;
      iVar2 = FUN_0040865c(iVar1,param_1,0x8b37,auStack_38);
      if (-1 < iVar2) {
        (*(code *)PTR_close_004230cc)(iVar1);
        return 0;
      }
    }
    (*(code *)PTR_close_004230cc)(iVar1);
  }
  return 0xffffffff;
}

