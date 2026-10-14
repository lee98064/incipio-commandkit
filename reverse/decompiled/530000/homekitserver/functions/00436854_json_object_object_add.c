/* json_object_object_add @ 00436854 */

void json_object_object_add(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_00613130)(*(undefined4 *)(param_1 + 0x18),param_2);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = (*(code *)PTR_strdup_00612688)(param_2);
    (*(code *)PTR_lh_table_insert_00614850)(uVar3,uVar2,param_3);
  }
  else {
    if (*(int *)(iVar1 + 4) != 0) {
      (*(code *)PTR_json_object_put_00612524)(*(int *)(iVar1 + 4));
    }
    *(undefined4 *)(iVar1 + 4) = param_3;
  }
  return;
}

