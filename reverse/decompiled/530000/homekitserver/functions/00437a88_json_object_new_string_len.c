/* json_object_new_string_len @ 00437a88 */

int json_object_new_string_len(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612344 + 0x7900;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x7824;
    uVar2 = (*(code *)PTR_malloc_00614174)(param_2 + 1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    (*(code *)PTR_memcpy_00614674)(*(undefined4 *)(iVar1 + 0x18),param_1,param_2);
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_2) = 0;
    *(int *)(iVar1 + 0x1c) = param_2;
  }
  return iVar1;
}

