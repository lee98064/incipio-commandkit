/* shared_ServerReadDetach @ 0043417c */

undefined4 shared_ServerReadDetach(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffffff;
  if (DAT_005ffd04 != -1) {
    iVar2 = (*(code *)PTR_mq_close_00611838)();
    if (iVar2 == 0) {
      DAT_005ffd04 = -1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

