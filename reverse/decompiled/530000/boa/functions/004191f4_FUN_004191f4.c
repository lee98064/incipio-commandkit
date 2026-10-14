/* FUN_004191f4 @ 004191f4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004191f4(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  int local_2d0 [3];
  undefined2 local_2c4;
  undefined4 local_2c0 [8];
  undefined1 auStack_2a0 [32];
  uint local_280 [11];
  uint local_254 [11];
  undefined1 auStack_228 [100];
  uint local_1c4 [50];
  undefined1 auStack_fc [204];
  uint local_30;
  
  local_2d0[1] = 0;
  local_2d0[2] = 0;
  local_2c4 = 0;
  local_2e8 = 0;
  (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_1c4);
  local_2e0 = local_1c4[0];
  (*(code *)PTR_apmib_get_0046aadc)(0xab,local_1c4);
  local_2d8 = local_1c4[0];
  iVar2 = tcpipLanHandler(param_1,auStack_228);
  if (iVar2 < 0) {
    (*(code *)PTR_apmib_set_0046aa28)(0xaa,&local_2e0);
    (*(code *)PTR_apmib_set_0046aa28)(0xab,&local_2d8);
    FUN_00413750(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_228);
    pcVar4 = 
    "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
    ;
  }
  else {
    FUN_00413dc4(0xaa);
    (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_1c4);
    local_2dc = local_1c4[0];
    (*(code *)PTR_apmib_get_0046aadc)(0xab,local_1c4);
    local_2d4 = local_1c4[0];
    if ((local_2d8 & local_2e0) != (local_1c4[0] & local_2dc)) {
      (*(code *)PTR_apmib_get_0046aadc)(0x125,local_2d0);
      puVar1 = PTR_pMib_0046ac00;
      iVar2 = 1;
      while (iVar2 <= local_2d0[0]) {
        (*(code *)PTR_memset_0046a87c)(local_254,0,0x2a);
        local_280[0] = CONCAT13((char)iVar2,local_280[0]._1_3_);
        iVar2 = iVar2 + 1;
        (*(code *)PTR_apmib_get_0046aadc)(0x8126,local_280);
        (*(code *)PTR_memcpy_0046ab5c)(local_254,local_280,0x2a);
        if (((local_2dc ^ local_280[0]) & local_2d4) != 0) {
          local_254[0] = ~local_2d4 & local_280[0] | local_2d4 & local_2dc;
          local_2e4 = 0;
          local_30 = local_254[0];
          (*(code *)PTR_mib_search_by_id_0046a964)
                    (PTR_mib_root_table_0046ac1c,0x8126,local_2d0 + 1,&local_2e8,&local_2e4);
          (*(code *)PTR_update_tblentry_0046aa78)
                    (*(undefined4 *)puVar1,local_2e4,local_2d0[0],local_2e8,local_280,local_254);
        }
      }
      FUN_00413dc4();
    }
    (*(code *)PTR_run_init_script_0046a844)("bridge");
    pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c)
    ;
    iVar2 = (*(code *)PTR_memcmp_0046a8d0)(&local_2e0,&local_2dc,4);
    puVar1 = PTR_run_init_script_0046a844;
    if (iVar2 == 0) {
      *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
      if (*pcVar4 == '\0') {
        (*(code *)PTR_strcpy_0046ac60)(pcVar4,"/wizard.htm");
      }
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar4);
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                );
      (*(code *)PTR_req_format_write_0046a95c)
                (param_1,
                 "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                 ,pcVar4);
      (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
      (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
      return;
    }
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    (*(code *)puVar1)(&DAT_0044d9f4);
    (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_2c0);
    uVar3 = (*(code *)PTR_inet_ntoa_0046a854)(local_2c0[0]);
    (*(code *)PTR_strcpy_0046ac60)(auStack_2a0,uVar3);
    (*(code *)PTR_strcpy_0046ac60)
              (auStack_fc,
               "<h4>Change setting successfully!<BR><BR>Do not turn off or reboot the Device during this time.</h4>"
              );
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><head><script language=JavaScript><!--\n");
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "var count = %d;function get_by_id(id){with(document){return getElementById(id);}}\n"
               ,0x19);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"function do_count_down(){get_by_id(\"show_sec\").innerHTML = count\n");
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "if(count == 0) {parent.location.href=\'http://%s/home.htm?t=\'+new Date().getTime(); return false;}\n"
               ,auStack_2a0);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"if (count > 0) {count--;setTimeout(\'do_count_down()\',1000);}}");
    (*(code *)PTR_req_format_write_0046a95c)(param_1,"//-->\n");
    (*(code *)PTR_req_format_write_0046a95c)(param_1,"</script></head>");
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<body onload=\"do_count_down();\"><blockquote><h4>%s</h4>\n",auStack_fc);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<P align=left><h4>Please wait <B><SPAN id=show_sec></SPAN></B>&nbsp;seconds ...</h4></P>"
              );
    pcVar4 = "</blockquote></body></html>";
  }
  (*(code *)PTR_req_format_write_0046a95c)(param_1,pcVar4);
  return;
}

