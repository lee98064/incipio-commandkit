/* FUN_004341e4 @ 004341e4 */

undefined4 FUN_004341e4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_005ffd08 != -1) {
    iVar1 = (*(code *)PTR_mq_close_00611838)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_005ffd08 = -1;
      iVar1 = (*(code *)PTR_mq_unlink_0061328c)("/mqphytrexread");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

