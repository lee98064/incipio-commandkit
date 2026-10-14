/* FUN_80404c30 @ 80404c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_80404c30(void)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = DAT_8040a790;
  local_c = DAT_8040a794;
  local_8 = DAT_8040a798;
  local_4 = DAT_8040a79c;
  return *(undefined2 *)((int)&local_10 + ((_DAT_b8000008 & 0x1c00) >> 9));
}

