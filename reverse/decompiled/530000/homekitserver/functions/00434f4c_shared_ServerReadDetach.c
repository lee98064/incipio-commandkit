/* shared_ServerReadDetach @ 00434f4c */

undefined4 shared_ServerReadDetach(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_00600b94 != -1) {
    iVar2 = (*(code *)PTR_mq_close_006126c4)();
    if (iVar2 == 0) {
      DAT_00600b94 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

