/* json_object_get_object @ 004367e4 */

int json_object_get_object(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 4) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

