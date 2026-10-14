/* FUN_00435c70 @ 00435c70 */

bool FUN_00435c70(int *param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    bVar1 = param_2 == 0;
  }
  else {
    bVar1 = *param_1 == param_2;
  }
  return bVar1;
}

