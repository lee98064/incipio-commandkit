/* FUN_00448704 @ 00448704 */

void FUN_00448704(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [256];
  
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"nextwebpage",&DAT_0044b32c);
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"btdownloaddir",&DAT_0044b32c);
  uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"btuploaddir",&DAT_0044b32c);
  (*(code *)PTR_char_replace_0046a81c)(uVar2,0x5c,0x2f);
  (*(code *)PTR_char_replace_0046a81c)(uVar3,0x5c,0x2f);
  iVar4 = (*(code *)PTR_dirExits_0046a7f4)(uVar2);
  if ((iVar4 == 0) || (iVar4 = (*(code *)PTR_dirExits_0046a7f4)(uVar3), iVar4 == 0)) {
    FUN_00447f50(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n","Directory Not Exists!!!");
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
    return;
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x2a8,uVar3);
  (*(code *)PTR_apmib_set_0046aa28)(0x2a9,uVar2);
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"totalulimit",&DAT_0044b32c);
  if (iVar4 != 0) {
    local_128 = (*(code *)PTR_atoi_0046a73c)(iVar4);
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x2aa,&local_128);
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"totaldlimit",&DAT_0044b32c);
  if (iVar4 != 0) {
    local_124 = (*(code *)PTR_atoi_0046a73c)(iVar4);
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x2ab,&local_124);
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"refreshtime",&DAT_0044b32c);
  if (iVar4 != 0) {
    local_120 = (*(code *)PTR_atoi_0046a73c)(iVar4);
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x2ac,&local_120);
  iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"bt_enabled",&DAT_0044b32c);
  if (iVar4 != 0) {
    local_11c = (*(code *)PTR_atoi_0046a73c)(iVar4);
  }
  (*(code *)PTR_apmib_set_0046aa28)(0x2ad,&local_11c);
  (*(code *)PTR_apmib_update_0046aa2c)(4);
  iVar4 = (*(code *)PTR_fork_0046a8c8)();
  if (iVar4 != 0) {
    (*(code *)PTR_waitpid_0046ac48)(iVar4,0,0);
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar1);
    return;
  }
  (*(code *)PTR_snprintf_0046abe4)(auStack_118,100,"%s/%s",&DAT_0044d824,"bt.sh");
  (*(code *)PTR_execl_0046ab4c)(auStack_118,"bt.sh",0);
  (*(code *)PTR_exit_0046a75c)(1);
  return;
}

