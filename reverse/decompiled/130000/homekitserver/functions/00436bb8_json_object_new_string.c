/* json_object_new_string @ 00436bb8 */

int json_object_new_string(undefined4 param_1)

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
    uVar2 = (*(code *)PTR_strdup_006117fc)(param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    uVar2 = (*(code *)PTR_strlen_006130b4)(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  }
  return iVar1;
}

