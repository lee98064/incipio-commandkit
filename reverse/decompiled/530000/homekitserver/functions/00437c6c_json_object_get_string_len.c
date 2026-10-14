/* json_object_get_string_len @ 00437c6c */

int json_object_get_string_len(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 6) {
    iVar1 = param_1[7];
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

