/* FUN_0043334c @ 0043334c */

undefined4 FUN_0043334c(undefined4 param_1,int param_2,int param_3,char param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_80 [2];
  uint local_78;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 auStack_4c [52];
  
  iVar2 = (*(code *)PTR_tcgetattr_00612368)(param_1,auStack_4c);
  if (iVar2 != 0) {
    pcVar3 = "SetupSerial 1";
    goto LAB_004335dc;
  }
  (*(code *)PTR_memset_0061223c)(local_80,0,0x34);
  uVar1 = local_78 & 0xffffffcf;
  if (param_3 == 7) {
    local_78 = uVar1 | 0x8a0;
  }
  else {
    local_78 = uVar1 | 0x880;
    if (param_3 == 8) {
      local_78 = uVar1 | 0x8b0;
    }
  }
  if (param_4 == 'N') {
    local_78 = local_78 & 0xfffffeff;
  }
  else if (param_4 == 'O') {
    local_78 = local_78 | 0x300;
    local_80[0] = local_80[0] | 0x10;
  }
  else if (param_4 == 'E') {
    local_78 = local_78 & 0xfffffdff | 0x100;
    local_80[0] = local_80[0] | 0x10;
  }
  if (param_2 == 0x12c0) {
    (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xc);
    uVar4 = 0xc;
  }
  else if (param_2 < 0x12c1) {
    if (param_2 == 0x960) {
      (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xb);
      uVar4 = 0xb;
    }
    else {
LAB_00433528:
      (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0xd);
      uVar4 = 0xd;
    }
  }
  else {
    if ((param_2 == 0x2580) || (param_2 != 0x1c200)) goto LAB_00433528;
    (*(code *)PTR_cfsetispeed_00612e1c)(local_80,0x1002);
    uVar4 = 0x1002;
  }
  (*(code *)PTR_cfsetospeed_00612ab8)(local_80,uVar4);
  if (param_5 == 1) {
    local_78 = local_78 & 0xffffffbf;
  }
  else if (param_5 == 2) {
    local_78 = local_78 | 0x40;
  }
  local_6a = 0;
  local_6b = 0;
  (*(code *)PTR_tcflush_00612100)(param_1,0);
  iVar2 = (*(code *)PTR_tcsetattr_006124e0)(param_1,0x540e,local_80);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_006117e4)("set done!");
    return 0;
  }
  pcVar3 = "com set error";
LAB_004335dc:
  (*(code *)PTR_perror_006121c8)(pcVar3);
  return 0xffffffff;
}

