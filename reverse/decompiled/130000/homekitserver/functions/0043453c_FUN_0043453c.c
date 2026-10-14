/* FUN_0043453c @ 0043453c */

undefined4 FUN_0043453c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd08 == -1) {
    DAT_005ffd08 = (*(code *)PTR_mq_open_006126f8)("/mqphytrexread",1);
    uVar1 = 0;
    if (DAT_005ffd08 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

