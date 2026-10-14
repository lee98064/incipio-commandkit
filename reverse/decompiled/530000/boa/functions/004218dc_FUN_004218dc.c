/* FUN_004218dc @ 004218dc */

int FUN_004218dc(undefined4 param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  param_3 = param_3 + -1;
  iVar2 = 0;
  while( true ) {
    iVar1 = (*(code *)PTR_recv_0046ac18)(param_1,param_2 + iVar2,1,0);
    param_3 = param_3 + -1;
    if (iVar1 == -1) {
      (*(code *)PTR_puts_0046ab3c)("error in readline (recv)");
      return -1;
    }
    if (iVar1 == 0) break;
    iVar2 = iVar2 + iVar1;
    if ((param_2[iVar2 + -1] == '\n') || (param_3 == 0)) {
      param_2[iVar2] = 0;
      if (iVar2 < 2) {
        iVar2 = 0;
      }
      return iVar2;
    }
  }
  return iVar2;
}

