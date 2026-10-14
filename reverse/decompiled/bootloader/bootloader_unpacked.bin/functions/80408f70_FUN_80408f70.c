/* FUN_80408f70 @ 80408f70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408f70(void)

{
  char *local_10;
  undefined *local_c;
  
  if ((_DAT_b800000c & 0xf) == 0xd) {
    local_10 = s_hinit_8040dd34;
    local_c = &DAT_8040daec;
    FUN_80408c7c(0,0,1);
    FUN_804089c0(2,&local_10);
    DAT_8040ee7c = _DAT_b8b10018 & 0x4fff0000 | 0xb0000000;
    *(undefined4 *)(DAT_8040ee7c + 0x44) = 0;
  }
  return;
}

