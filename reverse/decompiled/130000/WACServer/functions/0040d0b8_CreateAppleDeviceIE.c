/* CreateAppleDeviceIE @ 0040d0b8 */

undefined4
CreateAppleDeviceIE(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   byte param_5,byte param_6,byte param_7,byte param_8,char param_9,byte param_10,
                   char param_11,char param_12,undefined4 *param_13,undefined4 *param_14)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte local_168;
  byte bStack_167;
  undefined1 local_166;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 auStack_160 [2];
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 auStack_150 [256];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  byte *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  local_40 = (byte *)(uint)param_5;
  local_3c = (uint)param_6;
  local_38 = (uint)param_7;
  local_34 = (uint)param_8;
  local_30 = (uint)param_10;
  if (((param_13 == (undefined4 *)0x0) || (param_14 == (undefined4 *)0x0)) || (param_4 == 0)) {
    uVar3 = 0xffffe5cf;
  }
  else {
    local_163 = 0xe0;
    local_162 = 0x4c;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_164 = 0;
    FUN_0040cdcc(auStack_150,0xa04000);
    iVar2 = FUN_0040cf34(&DAT_0041d7f0,3,auStack_160);
    if (iVar2 != 0) {
      local_162 = local_15c;
      local_163 = local_15d;
      local_164 = local_15e;
    }
    local_168 = 0;
    local_166 = 0;
    if (local_40 != (byte *)0x0) {
      local_168 = 0x40;
    }
    bStack_167 = 0;
    if (local_3c != 0) {
      local_168 = local_168 | 0x80;
    }
    if (local_38 != 0) {
      bStack_167 = 0x80;
    }
    if (local_34 != 0) {
      local_168 = local_168 | 0x20;
    }
    if (local_30 != 0) {
      bStack_167 = bStack_167 | 2;
    }
    if (param_11 != '\0') {
      bStack_167 = bStack_167 | 1;
    }
    if (param_12 != '\0') {
      local_166 = 0x40;
    }
    if (param_9 != '\0') {
      local_168 = local_168 | 0x10;
    }
    local_40 = &local_168;
    uVar3 = (*(code *)PTR_memrlen_00433254)(local_40,3);
    FUN_0040ce50(auStack_150,0,local_40,uVar3);
    FUN_0040ce50(auStack_150,1,param_1,0xffffffff);
    FUN_0040ce50(auStack_150,2,param_3,0xffffffff);
    FUN_0040ce50(auStack_150,3,param_2,0xffffffff);
    FUN_0040ce50(auStack_150,4,&local_164,3);
    FUN_0040ce50(auStack_150,7,param_4,6);
    uVar3 = FUN_0040cd70(auStack_150);
    uVar4 = (*(code *)PTR_malloc_00433280)(local_50);
    puVar1 = PTR_memcpy_004332a8;
    *param_13 = uVar4;
    (*(code *)puVar1)(uVar4,auStack_150,local_50);
    *param_14 = local_50;
  }
  return uVar3;
}

