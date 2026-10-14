/* getInAddr @ 0041f87c */

undefined4 getInAddr(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar1 == -1) {
    return 0;
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_0046ac40)(iVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_0041f9d4;
  }
  if (param_2 == 4) {
    iVar2 = (*(code *)PTR_ioctl_0046ac40)(iVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_0046ab5c)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_0041f9d4;
    }
  }
  else if (param_2 == 0) {
    iVar2 = (*(code *)PTR_ioctl_0046ac40)(iVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_0041f9b8:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_0041f9d4;
    }
  }
  else if ((param_2 == 2) &&
          (iVar2 = (*(code *)PTR_ioctl_0046ac40)(iVar1,0x891b,auStack_38), -1 < iVar2))
  goto LAB_0041f9b8;
  uVar3 = 0;
LAB_0041f9d4:
  (*(code *)PTR_close_0046a694)(iVar1);
  return uVar3;
}

