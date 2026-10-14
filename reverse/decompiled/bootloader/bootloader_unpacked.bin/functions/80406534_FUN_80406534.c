/* FUN_80406534 @ 80406534 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80406534(void)

{
  undefined4 uVar1;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [12];
  
  FUN_80407bdc();
  FUN_80407c84();
  FUN_80407c3c();
  FUN_80407c1c();
  FUN_80407b20();
  FUN_80406480();
  if ((_DAT_b800000c & 0xf) == 0xd) {
    FUN_80408f70();
  }
  DAT_8040ee6c = 0;
  uVar1 = FUN_8040880c(auStack_28,auStack_18);
  FUN_80407ee8(uVar1,DAT_8040ee6c,auStack_28);
  return;
}

