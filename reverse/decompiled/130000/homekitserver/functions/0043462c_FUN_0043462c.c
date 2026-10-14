/* FUN_0043462c @ 0043462c */

undefined4 FUN_0043462c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd00 == -1) {
    DAT_005ffd00 = (*(code *)PTR_mq_open_006126f8)("/mqphytrexwrite",0);
    uVar1 = 0;
    if (DAT_005ffd00 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

