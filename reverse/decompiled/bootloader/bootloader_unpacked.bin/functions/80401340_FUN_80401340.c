/* FUN_80401340 @ 80401340 */

void FUN_80401340(undefined4 param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_5c8;
  undefined1 local_5c7;
  undefined2 local_5c6;
  undefined2 local_5c4;
  undefined2 local_5c2;
  undefined1 local_5c0;
  undefined1 local_5bf;
  undefined2 local_5be;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined2 local_5b4;
  undefined2 local_5b2;
  short local_5b0;
  undefined2 local_5ae;
  undefined2 local_5ac;
  ushort local_5aa;
  undefined1 auStack_5a8 [1432];
  
  uVar1 = (uint)param_2;
  if (uVar1 << 9 == DAT_8040ee58 + 0x200) {
    DAT_8040efa0 = 1;
    uVar2 = 0;
  }
  else if (DAT_8040ee58 < uVar1 << 9) {
    uVar2 = (1 - uVar1) * 0x200 + DAT_8040ee58;
    DAT_8040efa0 = 1;
  }
  else {
    uVar2 = 0x200;
  }
  local_5ac = 3;
  FUN_80406a54(auStack_5a8,(uVar1 - 1) * 0x200 + DAT_8040e5d8,uVar2);
  local_5c8 = 0x45;
  local_5c7 = 0;
  uVar1 = (uVar2 & 0xffff) + 0x20;
  local_5c6 = (undefined2)uVar1;
  local_5c4 = 0;
  local_5c2 = 0;
  local_5c0 = 0x3c;
  local_5bf = 0x11;
  local_5be = 0;
  local_5bc = DAT_80410050;
  local_5b8 = DAT_8041005c;
  local_5aa = param_2;
  local_5be = FUN_80400ebc(&local_5c8,0x14);
  local_5b4 = DAT_8040ee50;
  local_5b2 = DAT_8040ee52;
  local_5b0 = (short)uVar2 + 0xc;
  local_5ae = 0;
  FUN_80407434();
  FUN_80402380(0,0x800,&DAT_80410060,&local_5c8,uVar1 & 0xffff);
  return;
}

