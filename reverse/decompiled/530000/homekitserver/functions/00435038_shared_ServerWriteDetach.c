/* shared_ServerWriteDetach @ 00435038 */

undefined4 shared_ServerWriteDetach(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (DAT_00600b9c != -1) {
    iVar1 = (*(code *)PTR_mq_close_006126c4)();
    uVar2 = 0xffffffff;
    if (iVar1 == 0) {
      DAT_00600b9c = -1;
      iVar1 = (*(code *)PTR_mq_unlink_00614128)("/mqphytrexwrite");
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

