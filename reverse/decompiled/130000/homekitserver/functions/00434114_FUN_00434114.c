/* FUN_00434114 @ 00434114 */

undefined4 FUN_00434114(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_005ffd00 != -1) {
    iVar2 = (*(code *)PTR_mq_close_00611838)();
    if (iVar2 == 0) {
      DAT_005ffd00 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

