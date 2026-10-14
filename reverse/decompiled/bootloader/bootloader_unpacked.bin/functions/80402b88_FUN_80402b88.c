/* FUN_80402b88 @ 80402b88 */

/* WARNING: Removing unreachable block (ram,0x80402d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402b88(byte *param_1,uint param_2)

{
  uint uVar1;
  undefined1 local_30 [32];
  
  uVar1 = FUN_804029e0(param_1,0);
  if (((uVar1 < 0x100) && (param_2 < 4)) &&
     ((uint)param_1[5] ==
      (((byte)(param_1[1] ^ *param_1 ^ param_1[2] ^ param_1[3] ^ param_1[4]) ^ uVar1) & 0xff))) {
    FUN_80406a30(local_30,0,0x20);
    do {
    } while ((_DAT_bb804418 & 0x80000) == 0);
    do {
    } while ((_DAT_bb804d00 & 1) != 0);
    do {
    } while( true );
  }
  return 0xffffffff;
}

