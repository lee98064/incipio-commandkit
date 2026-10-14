/* FUN_0042286c @ 0042286c */

undefined4 FUN_0042286c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined4 *local_28;
  undefined1 *local_18;
  
  local_40 = 0;
  local_48 = param_2;
  local_44 = param_3;
  local_3c = param_4;
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar1 < 0) {
    (*(code *)PTR_perror_0046ab44)("fatal error socket\n");
    uVar2 = 0xfffffffd;
  }
  else {
    local_18 = auStack_38;
    (*(code *)PTR_strcpy_0046ac60)(local_18,param_1);
    local_28 = &local_48;
    iVar3 = (*(code *)PTR_ioctl_0046ac40)(iVar1,0x89f0,local_18);
    if (iVar3 < 0) {
      (*(code *)PTR_perror_0046ab44)("device ioctl:");
      (*(code *)PTR_close_0046a694)(iVar1);
      uVar2 = 0xffffffff;
    }
    else {
      (*(code *)PTR_close_0046a694)(iVar1);
      uVar2 = 0;
    }
  }
  return uVar2;
}

