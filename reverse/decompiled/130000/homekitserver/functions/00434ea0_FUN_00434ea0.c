/* FUN_00434ea0 @ 00434ea0 */

bool FUN_00434ea0(int *param_1,int param_2)

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

