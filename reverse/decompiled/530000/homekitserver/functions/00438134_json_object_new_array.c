/* json_object_new_array @ 00438134 */

int json_object_new_array(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(5);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612348 + -0x7f54;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x7cdc;
    uVar2 = (*(code *)PTR_array_list_new_006143e8)(PTR_LAB_00612348 + -0x7fb4);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}

