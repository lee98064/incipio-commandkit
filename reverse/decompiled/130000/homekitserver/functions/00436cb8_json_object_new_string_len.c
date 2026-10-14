/* json_object_new_string_len @ 00436cb8 */

int json_object_new_string_len(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x6b30;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6a54;
    uVar2 = (*(code *)PTR_malloc_006132d8)(param_2 + 1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    (*(code *)PTR_memcpy_006137d0)(*(undefined4 *)(iVar1 + 0x18),param_1,param_2);
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + param_2) = 0;
    *(int *)(iVar1 + 0x1c) = param_2;
  }
  return iVar1;
}

