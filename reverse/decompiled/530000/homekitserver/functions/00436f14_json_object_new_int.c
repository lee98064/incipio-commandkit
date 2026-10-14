/* json_object_new_int @ 00436f14 */

int json_object_new_int(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6e8c;
    *(int *)(iVar1 + 0x1c) = param_1;
    *(int *)(iVar1 + 0x18) = param_1 >> 0x1f;
  }
  return iVar1;
}

