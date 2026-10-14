/* FUN_0043d120 @ 0043d120 */

void FUN_0043d120(undefined4 param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  uint local_290;
  uint local_28c;
  uint local_288;
  undefined1 auStack_284 [16];
  undefined1 auStack_274 [20];
  char local_260 [80];
  undefined1 local_210 [212];
  undefined1 auStack_13c [260];
  char *local_38;
  char *local_34;
  char *local_30;
  int *local_2c;
  
  puVar2 = PTR_wlan_idx_0046a93c;
  (*(code *)PTR_memset_0046a87c)(auStack_13c,0,0x100);
  local_2a0 = -1;
  iVar3 = wlanHandler(param_1,auStack_13c,&local_2a0,*(undefined4 *)puVar2);
  if (-1 < iVar3) {
    iVar3 = *(int *)puVar2;
    (*(code *)PTR_sprintf_0046a808)(auStack_274,"mode%d",iVar3);
    pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_274,&DAT_0044b32c);
    if (*pcVar4 == '\0') {
      (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_28c);
      pcVar4 = local_260;
      (*(code *)PTR_sprintf_0046a808)(pcVar4,"%d",local_28c);
    }
    iVar5 = *pcVar4 + -0x30;
    if (*pcVar4 == 0) {
LAB_0043d38c:
      if (iVar3 == 0) {
        uVar9 = 0x40839;
        uVar12 = 0x20838;
        uVar6 = 0x834;
        uVar11 = 0x8836;
        uVar10 = 0x835;
      }
      else {
        uVar9 = 0x4084b;
        uVar12 = 0x2084a;
        uVar6 = 0x844;
        uVar11 = 0x8848;
        uVar10 = 0x847;
      }
      pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"wlProfileEnabled",&DAT_0044b32c);
      local_38 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"addWlProfile",&DAT_0044b32c);
      local_34 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"addRptProfile",&DAT_0044b32c);
      local_30 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"delSelWlProfile",&DAT_0044b32c);
      pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"delAllWlProfile",&DAT_0044b32c);
      piVar8 = &local_298;
      if (*pcVar4 == '\0') {
        local_298 = 0;
      }
      else {
        local_2c = piVar8;
        local_298 = (*(code *)PTR_atoi_0046a73c)(pcVar4);
        piVar8 = local_2c;
      }
      (*(code *)PTR_apmib_set_0046aa28)(uVar6,piVar8);
      if (*local_38 != '\0') {
        (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"wps_client_profile");
        addWlProfileHandler(0,auStack_13c,*(undefined4 *)PTR_wlan_idx_0046a93c);
      }
      puVar2 = PTR_wlan_idx_0046a93c;
      if (*local_34 != '\0') {
        (*(code *)PTR_sprintf_0046a808)
                  (auStack_284,"wlan%d-vxd",*(undefined4 *)PTR_wlan_idx_0046a93c);
        (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_284);
        (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"wps_client_profile");
        addWlProfileHandler(0,auStack_13c,*(undefined4 *)puVar2);
        (*(code *)PTR_sprintf_0046a808)(auStack_284,"wlan%d",*(undefined4 *)puVar2);
        (*(code *)PTR_SetWlan_idx_0046ab70)(auStack_284);
      }
      if (*local_30 == '\0') {
LAB_0043d6b4:
        if ((*pcVar7 == '\0') ||
           (iVar3 = (*(code *)PTR_apmib_set_0046aa28)(uVar9,local_210), iVar3 != 0)) {
          iVar3 = local_2a0;
          bVar1 = false;
          if (local_2a0 != 1) {
LAB_0043d7b4:
            if ((local_2a0 != 1) &&
               ((*(code *)PTR_apmib_get_0046aadc)(0x19,&local_298), local_298 == 2)) {
              local_29c = local_298;
              iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_29c);
              if (iVar3 == 0) goto LAB_0043d80c;
              local_298 = 4;
              iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0x19,&local_298);
              if (iVar3 == 0) {
                pcVar4 = "Set MIB_WLAN_WPA2_UNICIPHER failed!";
                goto LAB_0043d6ec;
              }
              bVar1 = true;
              (*(code *)PTR_strcpy_0046ac60)
                        (auStack_13c,
                         "Warning! WPA encryption is only supported in client Mode. <BR> Change to WPA2 Encryption."
                        );
            }
            FUN_0043c750();
            run_init_script("bridge");
            pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"wlan-url",&DAT_0044b32c);
            if (!bVar1) {
              *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
              if (*pcVar4 == '\0') {
                (*(code *)PTR_strcpy_0046ac60)(pcVar4,"/wizard.htm");
              }
              (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                        );
              (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
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
              (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>")
              ;
              (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
              return;
            }
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_13c);
            if (pcVar4 != (char *)0x0) {
              (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
                         ,pcVar4);
              return;
            }
            pcVar4 = 
            "<form><input type=button value=\"  OK  \" OnClick=window.close()></form></blockquote></body></html>"
            ;
            goto LAB_0043da20;
          }
          (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_29c);
          bVar1 = false;
          if (local_29c != 6) goto LAB_0043d7b4;
          local_298 = 2;
          iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x26,&local_298);
          if (iVar5 != 0) {
            local_29c = 4;
            iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x19,&local_29c);
            if (iVar5 != 0) {
              local_298 = iVar3;
              iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0x1d,&local_298);
              if (iVar3 == 0) {
                pcVar4 = "Set MIB_WLAN_WPA_CIPHER_SUITE failed!";
                goto LAB_0043d6ec;
              }
              (*(code *)PTR_strcpy_0046ac60)
                        (auStack_13c,
                         "Warning! WPA2 Mixed encryption is not supported in client Mode. <BR> Change to WPA2 Encryption."
                        );
              bVar1 = true;
              goto LAB_0043d7b4;
            }
          }
LAB_0043d80c:
          pcVar4 = "Set MIB_WLAN_WPA2_UNICIPHER failed!";
        }
        else {
          pcVar4 = "Delete all table error!";
        }
      }
      else {
        (*(code *)PTR_apmib_get_0046aadc)(uVar10,&local_29c);
        iVar3 = local_29c;
        do {
          while( true ) {
            if (iVar3 < 1) goto LAB_0043d6b4;
            (*(code *)PTR_snprintf_0046abe4)(local_260,0x14,"select%d",iVar3);
            iVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,local_260,&DAT_0044b32c);
            if ((iVar5 != 0) && (iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar5,"ON"), iVar5 == 0))
            break;
            iVar3 = iVar3 + -1;
          }
          local_210[0] = (undefined1)iVar3;
          iVar5 = (*(code *)PTR_apmib_get_0046aadc)(uVar11,local_210);
          if (iVar5 == 0) {
            pcVar4 = "Get table entry error!";
            goto LAB_0043d6ec;
          }
          iVar5 = (*(code *)PTR_apmib_set_0046aa28)(uVar12,local_210);
          iVar3 = iVar3 + -1;
        } while (iVar5 != 0);
        pcVar4 = "Delete table entry error!";
      }
    }
    else {
      local_294 = iVar5;
      if (iVar5 == 1) {
        (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_28c);
        if ((local_28c & 6) == 0) {
          if ((1 < local_28c) ||
             ((*(code *)PTR_apmib_get_0046aadc)(0x23,&local_288), (local_288 & 1) == 0))
          goto LAB_0043d2d0;
          pcVar4 = 
          "You cannot set client mode with 802.1x enabled!<br><br>Please change the encryption method in security page first."
          ;
        }
        else {
          (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_288);
          if ((local_288 & 1) == 0) {
LAB_0043d2d0:
            (*(code *)PTR_sprintf_0046a808)(auStack_274,"wlanMacClone%d",iVar3);
            uVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_274,&DAT_0044b32c);
            iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar6,"ON");
            local_290 = (uint)(iVar5 == 0);
            iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x4d,&local_290);
            if (iVar5 != 0) goto LAB_0043d364;
            pcVar4 = "Set wlan Mac clone error!";
          }
          else {
            pcVar4 = 
            "You cannot set client mode with Enterprise (RADIUS) !<br><br>Please change the encryption method in security page first."
            ;
          }
        }
      }
      else {
LAB_0043d364:
        iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x3b,&local_294);
        if (iVar5 != 0) goto LAB_0043d38c;
        pcVar4 = "Set MIB_WLAN_MODE error!";
      }
    }
LAB_0043d6ec:
    (*(code *)PTR_strcpy_0046ac60)(auStack_13c,pcVar4);
  }
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_13c);
  pcVar4 = 
  "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
  ;
LAB_0043da20:
  (*(code *)PTR_req_format_write_0046a95c)(param_1,pcVar4);
  return;
}

