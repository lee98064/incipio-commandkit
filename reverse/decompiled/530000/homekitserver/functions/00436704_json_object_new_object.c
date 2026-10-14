/* json_object_new_object @ 00436704 */

int json_object_new_object(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_00612344 + 0x5bc0))(4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_00612344 + 0x667c;
    *(undefined **)(iVar1 + 8) = PTR_LAB_00612344 + 0x615c;
    uVar2 = (*(code *)PTR_lh_kchar_table_new_00612f6c)(0x10,0,PTR_LAB_00612344 + 0x65e8);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}

