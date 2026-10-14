/* lh_table_lookup_ex @ 0043f6a8 */

undefined4 lh_table_lookup_ex(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_lh_table_lookup_entry_006122a0)(param_1,param_2);
  if (iVar1 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = 0;
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(iVar1 + 4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

