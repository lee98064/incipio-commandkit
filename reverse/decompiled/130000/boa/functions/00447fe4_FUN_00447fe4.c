/* FUN_00447fe4 @ 00447fe4 */

void FUN_00447fe4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_98 [132];
  
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"filename",&DAT_0044b32c);
  (*(code *)PTR_char_replace_0046a81c)(uVar2,0x5c,0x2f);
  iVar3 = (*(code *)PTR_strrchr_0046aa24)(uVar2,0x2f);
  if (iVar3 == 0) {
    (*(code *)PTR_puts_0046ab3c)("ERROR, filename NULL");
  }
  else {
    iVar4 = (*(code *)PTR_apmib_get_0046aadc)(0x2a8,auStack_98);
    if (iVar4 == 0) {
      FUN_00447f50(param_1);
      pcVar5 = "Get seeds directory failed";
    }
    else {
      iVar4 = (*(code *)PTR_dirExits_0046a7f4)(auStack_98);
      if (iVar4 != 0) {
        (*(code *)PTR_strcat_0046a9c8)(auStack_98,iVar3);
        (*(code *)PTR_bt_saveTorrentfile_0046abbc)
                  (auStack_98,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
        (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar1);
        return;
      }
      FUN_00447f50(param_1);
      pcVar5 = "Seeds Directory Not Exists";
    }
    (*(code *)PTR_req_format_write_0046a95c)(param_1,"<html><body><blockquote><h4>%s</h4>\n",pcVar5)
    ;
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  return;
}

