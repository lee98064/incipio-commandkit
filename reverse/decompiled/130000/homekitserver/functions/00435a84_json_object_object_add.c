/* json_object_object_add @ 00435a84 */

void json_object_object_add(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(*(undefined4 *)(param_1 + 0x18),param_2);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = (*(code *)PTR_strdup_006117fc)(param_2);
    (*(code *)PTR_lh_table_insert_006139a8)(uVar3,uVar2,param_3);
  }
  else {
    if (*(int *)(iVar1 + 4) != 0) {
      (*(code *)PTR_json_object_put_00611694)(*(int *)(iVar1 + 4));
    }
    *(undefined4 *)(iVar1 + 4) = param_3;
  }
  return;
}

