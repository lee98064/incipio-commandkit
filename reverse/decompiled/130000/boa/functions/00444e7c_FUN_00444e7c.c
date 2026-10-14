/* FUN_00444e7c @ 00444e7c */

void FUN_00444e7c(undefined4 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1e0 [8];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [100];
  undefined1 auStack_13c [300];
  
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"username",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"newpass",&DAT_0044b32c);
  if ((*pcVar2 == '\0') || (*pcVar3 != '\0')) {
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xb6,pcVar2);
    if (iVar4 == 0) {
      pcVar2 = "ERROR: Set user name to MIB database failed.";
    }
    else {
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xb7,pcVar3);
      if (iVar4 != 0) {
        FUN_00444434();
        (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
        (*(code *)PTR_strcpy_0046ac60)
                  (auStack_13c,
                   "Change setting successfully!<br><br>Do not turn off or reboot the Router during this time."
                  );
        (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_1e0);
        uVar5 = (*(code *)PTR_inet_ntoa_0046a854)(local_1e0[0]);
        (*(code *)PTR_strcpy_0046ac60)(auStack_1c0,uVar5);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<html><head><script language=JavaScript><!--\n");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "var count = %d;function get_by_id(id){with(document){return getElementById(id);}}\n"
                   ,0x14);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"function do_count_down(){get_by_id(\"show_sec\").innerHTML = count\n");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "if(count == 0) {parent.location.href=\'http://%s/home.htm?t=\'+new Date().getTime(); return false;}\n"
                   ,auStack_1c0);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"if (count > 0) {count--;setTimeout(\'do_count_down()\',1000);}}");
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"//-->\n");
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</script></head>");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<body onload=\"do_count_down();\"><blockquote><h4>%s</h4>\n",auStack_13c
                  );
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<P align=left><h4>Please wait <B><SPAN id=show_sec></SPAN></B>&nbsp;seconds ...</h4></P>"
                  );
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</blockquote></body></html>");
        puVar1 = PTR_run_init_script_0046a844;
        *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
        (*(code *)puVar1)(&DAT_0044d9f4);
        return;
      }
      pcVar2 = "ERROR: Set user password to MIB database failed.";
    }
  }
  else {
    pcVar2 = "ERROR: Password cannot be empty.";
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_1a0,pcVar2);
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_1a0);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

