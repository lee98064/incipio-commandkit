/* CreateAppleDeviceIE @ 0040d218 */

undefined4
CreateAppleDeviceIE(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                   byte param_5,byte param_6,byte param_7,char param_8,char param_9,char param_10,
                   char param_11,char param_12,undefined4 *param_13,undefined4 *param_14)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte local_160;
  byte bStack_15f;
  undefined1 local_15e;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 auStack_158 [2];
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 auStack_148 [256];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  byte *local_38;
  uint local_34;
  uint local_30;
  
  local_38 = (byte *)(uint)param_5;
  local_34 = (uint)param_6;
  local_30 = (uint)param_7;
  if (((param_13 == (undefined4 *)0x0) || (param_14 == (undefined4 *)0x0)) ||
     (param_4 == (undefined1 *)0x0)) {
    uVar3 = 0xffffe5cf;
  }
  else {
    local_15b = 0xe0;
    local_15a = 0x4c;
    local_15c = 0;
    (*(code *)PTR_printf_004332e4)
              ("[AppleIE: mac here... =%02X:%02X:%02X:%02X:%02X:%02X \n",*param_4,param_4[1],
               param_4[2],param_4[3],param_4[4],param_4[5]);
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    FUN_0040cf2c(auStack_148,0xa04000);
    iVar2 = FUN_0040d094(&DAT_0041da48,3,auStack_158);
    if (iVar2 != 0) {
      local_15a = local_154;
      local_15b = local_155;
      local_15c = local_156;
    }
    local_160 = 0;
    local_15e = 0;
    if (local_38 != (byte *)0x0) {
      local_160 = 0x40;
    }
    bStack_15f = 0;
    if (local_34 != 0) {
      local_160 = local_160 | 0x80;
    }
    if (local_30 != 0) {
      bStack_15f = 0x80;
    }
    if (param_8 != '\0') {
      local_160 = local_160 | 0x20;
    }
    if (param_10 != '\0') {
      bStack_15f = bStack_15f | 2;
    }
    if (param_11 != '\0') {
      bStack_15f = bStack_15f | 1;
    }
    if (param_9 != '\0') {
      local_160 = local_160 | 0x10;
    }
    if (param_12 != '\0') {
      local_15e = 0x40;
    }
    local_38 = &local_160;
    uVar3 = (*(code *)PTR_memrlen_00433254)(local_38,3);
    FUN_0040cfb0(auStack_148,0,local_38,uVar3);
    FUN_0040cfb0(auStack_148,1,param_1,0xffffffff);
    FUN_0040cfb0(auStack_148,2,param_3,0xffffffff);
    FUN_0040cfb0(auStack_148,3,param_2,0xffffffff);
    FUN_0040cfb0(auStack_148,4,&local_15c,3);
    FUN_0040cfb0(auStack_148,7,param_4,6);
    uVar3 = FUN_0040ced0(auStack_148);
    uVar4 = (*(code *)PTR_malloc_00433280)(local_48);
    puVar1 = PTR_memcpy_004332a8;
    *param_13 = uVar4;
    (*(code *)puVar1)(uVar4,auStack_148,local_48);
    *param_14 = local_48;
  }
  return uVar3;
}

