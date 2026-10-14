/* FUN_80404ff4 @ 80404ff4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80404ff4(uint param_1,int param_2,int param_3)

{
  do {
  } while ((_DAT_b8001208 & 0x8000000) == 0);
  _DAT_b8001208 =
       ((param_1 & 0xff) + 1) * 0x40000000 | param_2 << 0x1c | 0x8050000 | param_3 << 0x19;
  return;
}

