/* json_object_get_string @ 00437bcc */

int json_object_get_string(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else if (*param_1 == 6) {
    iVar1 = param_1[6];
  }
  else {
    iVar1 = (*(code *)PTR_json_object_to_json_string_00612474)(param_1);
  }
  return iVar1;
}

