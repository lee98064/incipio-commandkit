/* FUN_00448238 @ 00448238 */

void FUN_00448238(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_s2;
  undefined4 unaff_s4;
  undefined1 auStack_98 [128];
  
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"nextwebpage",&DAT_0044b32c);
  iVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"clientindex",&DAT_0044b32c);
  if (iVar2 != 0) {
    unaff_s2 = (*(code *)PTR_atoi_0046a73c)(iVar2);
  }
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"selectedfiles",&DAT_0044b32c);
  iVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"selectednum",&DAT_0044b32c);
  if (iVar2 != 0) {
    unaff_s4 = (*(code *)PTR_atoi_0046a73c)(iVar2);
  }
  (*(code *)PTR_bt_setfiles_0046aaf8)(unaff_s2,unaff_s4,uVar3);
  (*(code *)PTR_sleep_0046ab0c)(1);
  (*(code *)PTR_strcpy_0046ac60)(auStack_98,uVar1);
  iVar2 = (*(code *)PTR_strlen_0046a714)(auStack_98);
  (*(code *)PTR_sprintf_0046a808)(auStack_98 + iVar2,"?ctorrent=%d",unaff_s2);
  (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,auStack_98);
  return;
}

