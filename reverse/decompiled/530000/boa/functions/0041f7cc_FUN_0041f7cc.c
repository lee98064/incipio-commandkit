/* FUN_0041f7cc @ 0041f7cc */

ushort FUN_0041f7cc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined1 auStack_38 [16];
  ushort local_28;
  undefined1 *local_18;
  
  uVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  local_18 = auStack_38;
  (*(code *)PTR_strcpy_0046ac60)(local_18,param_1);
  uVar3 = 0;
  iVar2 = (*(code *)PTR_ioctl_0046ac40)(uVar1,0x8913,local_18);
  if (-1 < iVar2) {
    uVar3 = local_28 & 1;
  }
  (*(code *)PTR_close_0046a694)(uVar1);
  return uVar3;
}

