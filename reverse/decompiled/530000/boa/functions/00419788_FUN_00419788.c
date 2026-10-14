/* FUN_00419788 @ 00419788 */

void FUN_00419788(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  undefined1 auStack_148 [6];
  undefined1 auStack_142 [34];
  undefined1 local_120 [44];
  undefined1 auStack_f4 [100];
  uint local_90 [26];
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addRsvIP",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteSelRsvIP",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteAllRsvIP",&DAT_0044b32c);
  (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_90);
  local_154 = local_90[0];
  (*(code *)PTR_apmib_get_0046aadc)(0xab,local_90);
  local_150 = local_90[0];
  pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"static_dhcp",&DAT_0044b32c);
  if (*pcVar4 == '\0') {
LAB_004198c4:
    if (*pcVar1 == '\0') {
LAB_00419afc:
      if (*pcVar2 == '\0') {
LAB_00419c44:
        if ((*pcVar3 == '\0') ||
           (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x40129,&local_14c), iVar5 != 0)) {
LAB_00419c80:
          FUN_00413dc4();
          (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"submit-url",&DAT_0044b32c);
          *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
          if (*pcVar1 == '\0') {
            (*(code *)PTR_strcpy_0046ac60)(pcVar1,"/wizard.htm");
          }
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar1);
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                     ,pcVar1);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
          (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
          return;
        }
        pcVar1 = "Delete all table error!";
      }
      else {
        iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x125,&local_160);
        if (iVar5 == 0) {
LAB_00419b28:
          pcVar1 = "Get entry number error!";
        }
        else {
          iVar5 = local_160;
          do {
            while( true ) {
              if (iVar5 < 1) goto LAB_00419c44;
              (*(code *)PTR_snprintf_0046abe4)(auStack_f4,0x14,"select%d",iVar5);
              (*(code *)PTR_memset_0046a87c)(local_120,0,0x2a);
              uVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_f4,&DAT_0044b32c);
              iVar7 = (*(code *)PTR_strcmp_0046a824)(uVar6,"ON");
              if (iVar7 == 0) break;
              iVar5 = iVar5 + -1;
            }
            local_120[0] = (undefined1)iVar5;
            iVar7 = (*(code *)PTR_apmib_get_0046aadc)(0x8126,local_120);
            if (iVar7 == 0) {
              pcVar1 = "Get table entry error!";
              goto LAB_004199ec;
            }
            iVar7 = (*(code *)PTR_apmib_set_0046aa28)(0x20128,local_120);
            iVar5 = iVar5 + -1;
          } while (iVar7 != 0);
          pcVar1 = "Delete table entry error!";
        }
      }
    }
    else {
      (*(code *)PTR_memset_0046a87c)(&local_14c,0,0x2a);
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"hostname",&DAT_0044b32c)
      ;
      if (*pcVar1 != '\0') {
        (*(code *)PTR_strcpy_0046ac60)(auStack_142,pcVar1);
      }
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ip_addr",&DAT_0044b32c);
      if (*pcVar1 != '\0') {
        (*(code *)PTR_inet_aton_0046a89c)(pcVar1,&local_158);
        local_14c = local_158;
      }
      pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"mac_addr",&DAT_0044b32c)
      ;
      if (*pcVar1 == '\0') goto LAB_00419c80;
      iVar5 = (*(code *)PTR_strlen_0046a714)(pcVar1);
      if (iVar5 == 0xc) {
        iVar5 = FUN_00413e1c(pcVar1,auStack_148);
        if (iVar5 != 0) {
          iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x125,&local_160);
          if (iVar5 == 0) goto LAB_00419b28;
          if (local_160 + 1 < 0x15) {
            if (((local_158 ^ local_154) & local_150) == 0) {
              iVar5 = FUN_004137e4(&local_158,auStack_148);
              if (iVar5 < 1) {
                (*(code *)PTR_apmib_set_0046aa28)(0x20128,&local_14c);
                iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x10127,&local_14c);
                if (iVar5 != 0) goto LAB_00419afc;
                pcVar1 = "Add table entry error!";
              }
              else if (iVar5 == 1) {
                pcVar1 = "This IP address has been setted!";
              }
              else {
                if (iVar5 != 2) goto LAB_00419dc4;
                pcVar1 = "This MAC address has been setted!";
              }
            }
            else {
              pcVar1 = "Cannot add new entry because the ip is not the same subnet as LAN network!";
            }
          }
          else {
            pcVar1 = "Cannot add new entry because table is full!";
          }
          goto LAB_004199ec;
        }
      }
      pcVar1 = "Error! Invalid MAC address.";
    }
  }
  else {
    local_15c = (uint)(*pcVar4 != '0');
    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x124,&local_15c);
    if (iVar5 != 0) goto LAB_004198c4;
    pcVar1 = "Set static DHCP mib error!";
  }
LAB_004199ec:
  (*(code *)PTR_strcpy_0046ac60)(auStack_f4,pcVar1);
LAB_00419dc4:
  FUN_00413750(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_f4);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

