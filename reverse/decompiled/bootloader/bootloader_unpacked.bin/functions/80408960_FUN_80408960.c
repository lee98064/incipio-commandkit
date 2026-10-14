/* FUN_80408960 @ 80408960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80408960(void)

{
  if ((_DAT_b800000c & 0xf) == 0xd) {
    return (*(uint *)(DAT_8040ee7c + 0x44) ^ 1) & 1;
  }
  return (uint)((_DAT_b800350c & 0x20) == 0);
}

