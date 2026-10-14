/* FUN_80402380 @ 80402380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80402380(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
                 ushort param_5)

{
  DAT_8040efbc = *param_3;
  DAT_8040efc0 = *(undefined1 *)(param_3 + 1);
  DAT_8040efc1 = *(undefined1 *)((int)param_3 + 5);
  DAT_8040efc2 = _DAT_8040e8f0;
  DAT_8040efc6 = DAT_8040e8f4;
  DAT_8040efc7 = DAT_8040e8f5;
  DAT_8040efc8 = (undefined1)((param_2 & 0xffff) >> 8);
  DAT_8040efc9 = (undefined1)(param_2 & 0xffff);
  FUN_80406a54(&DAT_8040efca,param_4,(uint)param_5);
  FUN_80403e2c(&DAT_8040efbc,param_5 + 0xe);
  return;
}

