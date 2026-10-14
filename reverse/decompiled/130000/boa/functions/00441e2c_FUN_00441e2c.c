/* FUN_00441e2c @ 00441e2c */

void FUN_00441e2c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_a0 [144];
  
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysCmd",&DAT_0044b32c);
  if (*pcVar2 != '\0') {
    (*(code *)PTR_snprintf_0046abe4)(auStack_a0,0x8c,"%s 2>&1 > %s",pcVar2,"/tmp/syscmd.log");
    (*(code *)PTR_system_0046ab18)(auStack_a0);
  }
  (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar1);
  return;
}

