/* FUN_0044448c @ 0044448c */

void FUN_0044448c(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_120 [8];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [204];
  
  uVar5 = *(ushort *)(PTR_csHeader_0046aaf4 + 4) + 0x6a;
  if (*(ushort *)(PTR_csHeader_0046aaf4 + 4) + 0x6a < 0x6aa0) {
    uVar5 = 0x6aa0;
  }
  iVar1 = (*(code *)PTR_malloc_0046ab14)(uVar5);
  if (iVar1 == 0) {
    (*(code *)PTR_strcpy_0046ac60)(auStack_e0,"Allocate buffer failed!");
  }
  else {
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"save-cs",&DAT_0044b32c);
    uVar5 = 4;
    if (*pcVar2 == '\0') {
      uVar5 = 0;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,&DAT_0044fc7c,&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      uVar5 = 4;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"save-hs",&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      uVar5 = uVar5 | 1;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"save-ds",&DAT_0044b32c);
    if (*pcVar2 != '\0') {
      uVar5 = uVar5 | 2;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"save-all",&DAT_0044b32c);
    if ((*pcVar2 != '\0') || (uVar5 != 0)) {
      (*(code *)PTR_printf_0046ac28)("%s:%d\n","formSaveConfig",0x291);
      (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,"/config.dat");
      return;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"reset",&DAT_0044b32c);
    if ((*pcVar2 != '\0') && (iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"Reset"), iVar3 == 0)) {
      iVar3 = (*(code *)PTR_apmib_updateDef_0046aaf0)();
      if (iVar3 != 0) {
        DAT_0046f460 = 0x28;
        (*(code *)PTR_strcpy_0046ac60)
                  (auStack_e0,
                   "Reload setting successfully!<br><br>The Router is booting.<br>Do not turn off or reboot the Device during this time.<br>"
                  );
        (*(code *)PTR_apmib_reinit_0046aa6c)();
        FUN_00444434();
        (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_120);
        uVar4 = (*(code *)PTR_inet_ntoa_0046a854)(local_120[0]);
        (*(code *)PTR_strcpy_0046ac60)(auStack_100,uVar4);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<html><head><script language=JavaScript><!--\n");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "var count = %d;function get_by_id(id){with(document){return getElementById(id);}}\n"
                   ,DAT_0046f460);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"function do_count_down(){get_by_id(\"show_sec\").innerHTML = count\n");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "if(count == 0) {parent.location.href=\'http://%s/home.htm?t=\'+new Date().getTime(); return false;}\n"
                   ,auStack_100);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"if (count > 0) {count--;setTimeout(\'do_count_down()\',1000);}}");
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"//-->\n");
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</script></head>");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<body onload=\"do_count_down();\"><blockquote><h4>%s</h4>\n",auStack_e0)
        ;
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<P align=left><h4>Please wait <B><SPAN id=show_sec></SPAN></B>&nbsp;seconds ...</h4></P>"
                  );
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</blockquote></body></html>");
        DAT_0046f450 = 1;
        (*(code *)PTR_system_0046ab18)("reboot");
        return;
      }
      (*(code *)PTR_free_0046a680)(0);
      (*(code *)PTR_strcpy_0046ac60)(auStack_e0,"Write default to current setting failed!\n");
      (*(code *)PTR_free_0046a680)(iVar1);
    }
  }
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_e0);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

