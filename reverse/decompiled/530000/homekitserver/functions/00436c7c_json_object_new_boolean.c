/* json_object_new_boolean @ 00436c7c */

int json_object_new_boolean(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6bc4;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}

