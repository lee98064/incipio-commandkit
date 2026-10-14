/* json_object_new_string @ 00437988 */

int json_object_new_string(undefined4 param_1)

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
    uVar2 = (*(code *)PTR_strdup_00612688)(param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    uVar2 = (*(code *)PTR_strlen_00613f4c)(param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  }
  return iVar1;
}

