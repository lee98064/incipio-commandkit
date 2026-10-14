/* FUN_0043fd30 @ 0043fd30 */

void FUN_0043fd30(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  code *pcVar13;
  uint local_1f8;
  int local_1f4;
  char local_1f0 [52];
  char acStack_1bc [200];
  char local_f4 [204];
  char *local_28;
  
  (*(code *)PTR_memset_0046a87c)(local_1f0 + 0x14,0,0x1e);
  pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"targetAPMac",&DAT_0044b32c);
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"targetAPSsid",&DAT_0044b32c)
  ;
  pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"resetUnCfg",&DAT_0044b32c);
  if (*pcVar7 == '1') {
    FUN_00433f5c("wlan0");
    uVar8 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"disableWPS",&DAT_0044b32c);
    iVar9 = (*(code *)PTR_strcmp_0046a824)(uVar8,"ON");
    local_1f8 = (uint)(iVar9 == 0);
    (*(code *)PTR_apmib_set_0046aa28)(0x10e,&local_1f8);
    FUN_00433de4(*(undefined4 *)PTR_wlan_idx_0046a93c,local_1f8);
    (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,pcVar6);
    (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
    puVar3 = PTR_send_redirect_perm_0046ac78;
    *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
    (*(code *)puVar3)(param_1,"/countDownPage.htm");
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    FUN_0043c750();
    run_init_script("bridge");
    return;
  }
  pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"unlockautolockdown",&DAT_0044b32c);
  if (*pcVar7 == '\0') {
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_1f4);
    pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"triggerPBC",&DAT_0044b32c)
    ;
    if (*pcVar7 == '\0') {
      pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"stopwsc",&DAT_0044b32c);
      if (*pcVar7 == '\0') {
        pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"triggerPIN",&DAT_0044b32c);
        if (*pcVar7 == '\0') {
          pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"setPIN",&DAT_0044b32c);
          if (*pcVar4 == '\0') {
LAB_004406e4:
            uVar8 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"disableWPS",&DAT_0044b32c);
            iVar9 = (*(code *)PTR_strcmp_0046a824)(uVar8,"ON");
            puVar3 = PTR_wlan_idx_0046a93c;
            local_1f8 = (uint)(iVar9 == 0);
            (*(code *)PTR_sprintf_0046a808)
                      (local_1f0 + 0x14,"wlan%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
            (*(code *)PTR_SetWlan_idx_0046ab70)(local_1f0 + 0x14);
            (*(code *)PTR_apmib_set_0046aa28)(0x10e,&local_1f8);
            FUN_00433de4(*(undefined4 *)puVar3,local_1f8);
            pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                       (param_1,"localPin",&DAT_0044b32c);
            if (*pcVar4 != '\0') {
              (*(code *)PTR_apmib_set_0046aa28)(0x111,pcVar4);
            }
            FUN_0043c750();
            run_init_script("bridge");
            *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
            if (*pcVar6 == '\0') {
              (*(code *)PTR_strcpy_0046ac60)(pcVar6,"/wizard.htm");
            }
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                      );
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar6);
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                      );
            (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,
                       "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                       ,pcVar6);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
            (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
            return;
          }
          pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"peerPin",&DAT_0044b32c);
          if (*pcVar4 == '\0') goto LAB_004406e4;
          (*(code *)PTR_apmib_get_0046aadc)(0x10e,&local_1f8);
          if (local_1f8 == 0) {
            local_1f0[0x10] = '\0';
            local_1f0[0x11] = '\0';
            local_1f0[0x12] = '\0';
            local_1f0[0x13] = '\0';
            local_1f0[0] = '\0';
            local_1f0[1] = '\0';
            local_1f0[2] = '\0';
            local_1f0[3] = '\0';
            local_1f0[4] = '\0';
            local_1f0[5] = '\0';
            local_1f0[6] = '\0';
            local_1f0[7] = '\0';
            local_1f0[8] = '\0';
            local_1f0[9] = '\0';
            local_1f0[10] = '\0';
            local_1f0[0xb] = '\0';
            local_1f0[0xc] = '\0';
            local_1f0[0xd] = '\0';
            local_1f0[0xe] = '\0';
            local_1f0[0xf] = '\0';
            uVar12 = 0;
            iVar9 = 0;
            while( true ) {
              uVar10 = (*(code *)PTR_strlen_0046a714)(pcVar4);
              pcVar5 = pcVar4 + uVar12;
              if (uVar10 <= uVar12) break;
              uVar12 = uVar12 + 1;
              if ((byte)(*pcVar5 - 0x30U) < 10) {
                local_1f0[iVar9] = *pcVar5;
                iVar9 = iVar9 + 1;
              }
            }
            (*(code *)PTR_sprintf_0046a808)
                      (acStack_1bc,"iwpriv %s set_mib pin=%s",PTR_WLAN_IF_0046a890,local_1f0);
            (*(code *)PTR_system_0046ab18)(acStack_1bc);
          }
          else {
            local_1f8 = 0;
            (*(code *)PTR_apmib_set_0046aa28)(0x10e,&local_1f8);
            FUN_0043c750();
            (*(code *)PTR_sprintf_0046a808)(acStack_1bc,"echo %s > /var/wps_peer_pin",pcVar4);
            (*(code *)PTR_system_0046ab18)(acStack_1bc);
            run_init_script("bridge");
          }
          pcVar7 = 
          "Applied WPS PIN successfully!<br><br>You have to run Wi-Fi Protected Setup within 2 minutes."
          ;
          goto LAB_00440698;
        }
        pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"localPin",&DAT_0044b32c);
        bVar2 = false;
        if (*pcVar7 != '\0') {
          (*(code *)PTR_apmib_get_0046aadc)(0x111,acStack_1bc);
          iVar9 = (*(code *)PTR_strcmp_0046a824)(acStack_1bc,pcVar7);
          if (iVar9 == 0) {
            bVar2 = false;
          }
          else {
            (*(code *)PTR_apmib_set_0046aa28)(0x111,pcVar7);
            bVar2 = true;
          }
        }
        puVar11 = &local_1f8;
        (*(code *)PTR_apmib_get_0046aadc)(0x10e,puVar11);
        if (local_1f8 == 0) {
          if (bVar2) {
            (*(code *)PTR_system_0046ab18)("echo 1 > /var/wps_start_pin");
            FUN_0043c750();
            goto LAB_004402f4;
          }
          iVar9 = 0;
          if (*pcVar4 != '\0') {
            uVar12 = 0;
            while( true ) {
              uVar10 = (*(code *)PTR_strlen_0046a714)(pcVar4,puVar11);
              if (uVar10 <= uVar12) break;
              cVar1 = pcVar4[uVar12];
              uVar12 = uVar12 + 1;
              puVar11 = (uint *)(uint)((byte)(cVar1 + 0xbfU) < 6);
              if ((((byte)(cVar1 - 0x30U) < 10) || (puVar11 != (uint *)0x0)) ||
                 ((byte)(cVar1 + 0x9fU) < 6)) {
                local_f4[iVar9] = cVar1;
                iVar9 = iVar9 + 1;
              }
            }
            local_f4[iVar9] = '\0';
            local_28 = local_f4;
            iVar9 = (*(code *)PTR_strlen_0046a714)(local_f4);
            if (iVar9 == 0xc) {
              pcVar4 = acStack_1bc;
              (*(code *)PTR_sprintf_0046a808)
                        (pcVar4,"iwpriv wlan%d set_mib wsc_specmac=%s ",
                         *(undefined4 *)PTR_wlan_idx_0046a93c,local_28);
              pcVar13 = (code *)PTR_system_0046ab18;
            }
            else {
              pcVar4 = "invaild MAC Addr Len\n";
              pcVar13 = (code *)PTR_puts_0046ab3c;
            }
            (*pcVar13)(pcVar4);
          }
          if (*pcVar5 != '\0') {
            uVar12 = (*(code *)PTR_strlen_0046a714)(pcVar5);
            pcVar4 = acStack_1bc;
            if (uVar12 < 0x21) {
              (*(code *)PTR_sprintf_0046a808)
                        (pcVar4,"iwpriv wlan%d set_mib wsc_specssid=\"%s\" ",
                         *(undefined4 *)PTR_wlan_idx_0046a93c,pcVar5);
              pcVar13 = (code *)PTR_system_0046ab18;
            }
            else {
              pcVar4 = "invaild SSID Len";
              pcVar13 = (code *)PTR_puts_0046ab3c;
            }
            (*pcVar13)(pcVar4);
          }
          (*(code *)PTR_sprintf_0046a808)
                    (acStack_1bc,"%s -sig_start wlan%d",&DAT_00455e14,
                     *(undefined4 *)PTR_wlan_idx_0046a93c);
          (*(code *)PTR_system_0046ab18)(acStack_1bc);
        }
        else {
          local_1f8 = 0;
          (*(code *)PTR_apmib_set_0046aa28)(0x10e);
          FUN_00433de4(*(undefined4 *)PTR_wlan_idx_0046a93c,local_1f8);
          FUN_0043c750();
          (*(code *)PTR_system_0046ab18)("echo 1 > /var/wps_start_pin");
          if (bVar2) {
            local_28 = local_f4;
            (*(code *)PTR_apmib_get_0046aadc)(0x111,local_f4);
            (*(code *)PTR_sprintf_0046a808)(acStack_1bc,"echo %s > /var/wps_local_pin",local_28);
            (*(code *)PTR_system_0046ab18)(acStack_1bc);
          }
LAB_004402f4:
          run_init_script("bridge");
        }
        if (local_1f4 == 0) {
          pcVar4 = "client";
        }
        else {
          pcVar4 = "AP";
        }
        pcVar5 = 
        "Start PIN successfully!<br><br>You have to run Wi-Fi Protected Setup in %s within 2 minutes."
        ;
      }
      else {
        (*(code *)PTR_system_0046ab18)("echo 1 > /tmp/wscd_cancel");
        if (local_1f4 == 0) {
          pcVar4 = "client";
        }
        else {
          pcVar4 = "AP";
        }
        pcVar5 = "Applied WPS STOP successfully!<br>";
      }
    }
    else {
      (*(code *)PTR_apmib_get_0046aadc)(0x10e,&local_1f8);
      puVar3 = PTR_wlan_idx_0046a93c;
      if (local_1f8 == 0) {
        (*(code *)PTR_sprintf_0046a808)
                  (acStack_1bc,"%s -sig_pbc wlan%d",&DAT_00455e14,
                   *(undefined4 *)PTR_wlan_idx_0046a93c);
        (*(code *)PTR_system_0046ab18)(acStack_1bc);
      }
      else {
        local_1f8 = 0;
        (*(code *)PTR_apmib_set_0046aa28)(0x10e,&local_1f8);
        FUN_00433de4(*(undefined4 *)puVar3,local_1f8);
        FUN_0043c750();
        (*(code *)PTR_system_0046ab18)("echo 1 > /var/wps_start_pbc");
        run_init_script("bridge");
      }
      if (local_1f4 == 0) {
        pcVar4 = "client";
      }
      else {
        pcVar4 = "AP";
      }
      pcVar5 = 
      "Start PBC successfully!<br><br>You have to run Wi-Fi Protected Setup in %s within 2 minutes."
      ;
    }
  }
  else {
    (*(code *)PTR_sprintf_0046a808)
              (acStack_1bc,"%s -sig_unlock wlan%d",&DAT_00455e14,
               *(undefined4 *)PTR_wlan_idx_0046a93c);
    (*(code *)PTR_puts_0046ab3c)(acStack_1bc);
    (*(code *)PTR_system_0046ab18)(acStack_1bc);
    if (local_1f4 == 0) {
      pcVar4 = "client";
    }
    else {
      pcVar4 = "AP";
    }
    pcVar5 = "Applied WPS unlock successfully!<br>";
  }
  pcVar7 = local_f4;
  (*(code *)PTR_sprintf_0046a808)(pcVar7,pcVar5,pcVar4);
LAB_00440698:
  (*(code *)PTR_req_format_write_0046a95c)(param_1,"<html><body><blockquote><h4>%s</h4>\n",pcVar7);
  if (pcVar6 == (char *)0x0) {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=button value=\"  OK  \" OnClick=window.close()></form></blockquote></body></html>"
              );
  }
  else {
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
               ,pcVar6);
  }
  return;
}

