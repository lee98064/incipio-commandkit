/* json_object_new_array @ 00437364 */

int json_object_new_array(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(5);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x72dc;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x6f0c;
    uVar2 = (*(code *)PTR_array_list_new_00613544)(PTR_LAB_006114b4 + 0x727c);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}

