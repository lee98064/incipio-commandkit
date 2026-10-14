/* json_object_new_int64 @ 004371d0 */

int json_object_new_int64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x6e8c;
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = param_1;
  }
  return iVar1;
}

