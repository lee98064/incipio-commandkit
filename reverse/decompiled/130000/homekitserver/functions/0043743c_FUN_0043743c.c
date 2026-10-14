/* FUN_0043743c @ 0043743c */

int FUN_0043743c(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 5) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

