/* FUN_80402fc8 @ 80402fc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80402fc8(void)

{
  uint *puVar1;
  
  puVar1 = (uint *)&DAT_bb804104;
  do {
    *puVar1 = *puVar1 | 0x2000000;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (uint *)0xbb804118);
  FUN_80402ea4(999,1,0x10,0x1fff,0xc000);
  if (_DAT_b8000000 == -0x7e692000) {
    FUN_80402ea4(999,0,0x18,0x7fff,0);
  }
  else {
    FUN_80402ea4(999,0,0x16,0xff8f,0x40);
    FUN_80402ea4(999,0,0x15,0xff00,0xc2);
    FUN_80402ea4(999,1,0x13,0xfffe,0);
    FUN_80402ea4(999,0,0x16,0xfff7,0);
  }
  _DAT_bb804000 = _DAT_bb804000 & 0xfff3fff0 | 0x80005;
  puVar1 = (uint *)&DAT_bb804104;
  do {
    *puVar1 = *puVar1 & 0xfdffffff;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (uint *)0xbb804118);
  return 0;
}

