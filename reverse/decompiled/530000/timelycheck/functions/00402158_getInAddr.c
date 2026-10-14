/* getInAddr @ 00402158 */

undefined4 getInAddr(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR_socket_0042b19c)(2,1,0);
  (*(code *)PTR_strcpy_0042b208)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_004022b4;
  }
  if (param_2 == 8) {
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_0042b1c8)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_004022b4;
    }
  }
  else if (param_2 == 2) {
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_00402298:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_004022b4;
    }
  }
  else {
    if (param_2 == 4) {
      uVar3 = 0x891b;
    }
    else {
      uVar3 = 0x8917;
    }
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,uVar3,auStack_38);
    if (-1 < iVar2) goto LAB_00402298;
  }
  uVar3 = 0;
LAB_004022b4:
  (*(code *)PTR_close_0042b098)(uVar1);
  return uVar3;
}

