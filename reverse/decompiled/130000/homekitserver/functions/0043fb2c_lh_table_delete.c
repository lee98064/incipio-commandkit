/* lh_table_delete @ 0043fb2c */

undefined4 lh_table_delete(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (*(code *)PTR_lh_table_delete_entry_006120e0)(param_1,iVar1);
  }
  return uVar2;
}

