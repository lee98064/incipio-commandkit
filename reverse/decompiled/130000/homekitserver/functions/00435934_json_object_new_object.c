/* json_object_new_object @ 00435934 */

int json_object_new_object(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(PTR_LAB_006114b4 + 0x4df0))(4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined **)(iVar1 + 4) = PTR_LAB_006114b4 + 0x58ac;
    *(undefined **)(iVar1 + 8) = PTR_LAB_006114b4 + 0x538c;
    uVar2 = (*(code *)PTR_lh_kchar_table_new_006120dc)(0x10,0,PTR_LAB_006114b4 + 0x5818);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return iVar1;
}

