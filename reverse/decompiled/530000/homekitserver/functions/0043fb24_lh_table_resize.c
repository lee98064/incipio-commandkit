/* lh_table_resize @ 0043fb24 */

void lh_table_resize(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = (*(code *)PTR_lh_table_new_00613700)(param_2,param_1[7],0,param_1[0xc],param_1[0xd]);
  for (local_10 = (undefined4 *)param_1[8]; local_10 != (undefined4 *)0x0;
      local_10 = (undefined4 *)local_10[2]) {
    (*(code *)PTR_lh_table_insert_00614850)(iVar1,*local_10,local_10[1]);
  }
  (*(code *)PTR_free_0061286c)(param_1[10]);
  param_1[10] = *(undefined4 *)(iVar1 + 0x28);
  *param_1 = param_2;
  param_1[8] = *(undefined4 *)(iVar1 + 0x20);
  param_1[9] = *(undefined4 *)(iVar1 + 0x24);
  param_1[3] = param_1[3] + 1;
  (*(code *)PTR_free_0061286c)(iVar1);
  return;
}

