/* FUN_00434fb4 @ 00434fb4 */

undefined4 FUN_00434fb4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_00600b98 != -1) {
    iVar1 = (*(code *)PTR_mq_close_006126c4)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_00600b98 = -1;
      iVar1 = (*(code *)PTR_mq_unlink_00614128)("/mqphytrexread");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

