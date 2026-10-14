/* getInAddr @ 0040642c */

undefined4 getInAddr(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar1 = (*(code *)PTR_socket_00423548)(2,1,0);
  if (iVar1 == -1) {
    return 0;
  }
  (*(code *)PTR_strcpy_004235e0)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_00406584;
  }
  if (param_2 == 3) {
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_0042357c)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_00406584;
    }
  }
  else if (param_2 == 0) {
    iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_00406568:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_00406584;
    }
  }
  else if ((param_2 == 1) &&
          (iVar2 = (*(code *)PTR_ioctl_004235d0)(iVar1,0x891b,auStack_38), -1 < iVar2))
  goto LAB_00406568;
  uVar3 = 0;
LAB_00406584:
  (*(code *)PTR_close_004233ac)(iVar1);
  return uVar3;
}

