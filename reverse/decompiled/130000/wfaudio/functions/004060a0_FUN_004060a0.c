/* FUN_004060a0 @ 004060a0 */

uint FUN_004060a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_38 [16];
  short local_28;
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_socket_00423260)(2,1,0);
  uVar3 = 0;
  if (iVar1 != -1) {
    local_18 = auStack_38;
    (*(code *)PTR_strcpy_004232f4)(local_18,param_1);
    iVar2 = (*(code *)PTR_ioctl_004232e4)(iVar1,0x8913,local_18);
    if (iVar2 < 0) {
      (*(code *)PTR_close_004230cc)(iVar1);
    }
    else {
      uVar3 = (int)local_28 & 1;
      (*(code *)PTR_printf_004232d4)("SIOCGIFFLAGS result of %s=%x\n",param_1,(int)local_28);
    }
  }
  return uVar3;
}

