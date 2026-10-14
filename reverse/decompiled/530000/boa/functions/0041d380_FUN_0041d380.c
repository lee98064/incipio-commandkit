/* FUN_0041d380 @ 0041d380 */

void FUN_0041d380(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar11;
  int iVar10;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  char local_138;
  char local_137;
  char local_136;
  char local_135;
  char local_134;
  char local_133;
  undefined1 auStack_130 [100];
  undefined1 local_cc [16];
  undefined1 local_bc;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  byte local_b8;
  byte local_b7;
  byte local_b6;
  byte local_b5;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined1 auStack_a4 [108];
  char *local_38;
  char *local_34;
  undefined1 *local_30;
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addQos",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"deleteSel",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"deleteAll",&DAT_0044b32c);
  (*(code *)PTR_memset_0046a87c)(local_cc,0,0x91);
  if (*pcVar1 == '\0') {
LAB_0041dc44:
    if (*pcVar2 == '\0') {
LAB_0041dd68:
      if ((*pcVar3 == '\0') ||
         (iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x4013a,local_cc), iVar5 != 0)) {
LAB_0041ddf0:
        (*(code *)PTR_apmib_update_0046aa2c)(4);
        iVar5 = (*(code *)PTR_fork_0046a8c8)();
        if (iVar5 == 0) {
          (*(code *)PTR_snprintf_0046abe4)(auStack_130,100,"%s/%s",&DAT_0044d824,"ip_qos.sh");
          (*(code *)PTR_execl_0046ab4c)(auStack_130,"ip_qos.sh",0);
          (*(code *)PTR_exit_0046a75c)(1);
          return;
        }
        (*(code *)PTR_waitpid_0046ac48)(iVar5,0,0);
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"submit-url",&DAT_0044b32c);
        if (*(int *)PTR_needReboot_0046a9b4 == 1) {
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
        if (*pcVar1 == '\0') {
          return;
        }
        (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar1);
        return;
      }
      pcVar1 = "Delete all table error!";
      goto LAB_0041dda0;
    }
    iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_148);
    if (iVar5 != 0) {
      iVar5 = local_148;
      do {
        while( true ) {
          if (iVar5 < 1) goto LAB_0041dd68;
          (*(code *)PTR_snprintf_0046abe4)(auStack_130,0x14,"select%d",iVar5);
          uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_130,&DAT_0044b32c);
          iVar10 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
          if (iVar10 == 0) break;
          iVar5 = iVar5 + -1;
        }
        local_cc[0] = (undefined1)iVar5;
        iVar10 = (*(code *)PTR_apmib_get_0046aadc)(0x8137,local_cc);
        if (iVar10 == 0) {
          pcVar1 = "Get table entry error!";
          goto LAB_0041dda0;
        }
        iVar10 = (*(code *)PTR_apmib_set_0046aa28)(0x20139,local_cc);
        iVar5 = iVar5 + -1;
      } while (iVar10 != 0);
      pcVar1 = "Delete table entry error!";
      goto LAB_0041dda0;
    }
LAB_0041dc70:
    pcVar1 = "Get entry number error!";
  }
  else {
    uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
    iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
    local_144 = (uint)(iVar5 == 0);
    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x133,&local_144);
    if (iVar5 == 0) {
      pcVar1 = "Set enabled flag error!";
      goto LAB_0041dda0;
    }
    if (local_144 == 0) goto LAB_0041ddf0;
    uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)
                      (param_1,"automaticUplinkSpeed",&DAT_0044b32c);
    iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
    local_144 = (uint)(iVar5 == 0);
    iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x134,&local_144);
    if (iVar5 != 0) {
      if (local_144 == 0) {
        uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)
                          (param_1,"manualUplinkSpeed",&DAT_0044b32c);
        FUN_00419f50(uVar4,&local_144);
        iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x135,&local_144);
        uVar14 = local_144;
        if (iVar5 == 0) goto LAB_0041d668;
      }
      else {
        uVar14 = 0x19000;
      }
      uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)
                        (param_1,"automaticDownlinkSpeed",&DAT_0044b32c);
      iVar5 = (*(code *)PTR_strcmp_0046a824)(uVar4,"ON");
      local_144 = (uint)(iVar5 == 0);
      iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x28b,&local_144);
      if (iVar5 != 0) {
        if (local_144 == 0) {
          uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)
                            (param_1,"manualDownlinkSpeed",&DAT_0044b32c);
          FUN_00419f50(uVar4,&local_144);
          iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x28c,&local_144);
          uVar13 = local_144;
          if (iVar5 == 0) goto LAB_0041d668;
        }
        else {
          uVar13 = 0x19000;
        }
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"ipStart",&DAT_0044b32c);
        pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipEnd",&DAT_0044b32c);
        pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,&DAT_0044fd74,&DAT_0044b32c);
        local_34 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"bandwidth",&DAT_0044b32c);
        local_38 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,"bandwidth_downlink",&DAT_0044b32c);
        pcVar8 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"comment",&DAT_0044b32c);
        pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"l7_protocol",&DAT_0044b32c);
        if (((((*pcVar1 == '\0') && (*pcVar6 == '\0')) && (*pcVar7 == '\0')) &&
            ((*local_34 == '\0' && (*local_38 == '\0')))) && (*pcVar8 == '\0')) goto LAB_0041ddf0;
        if (*pcVar9 != '\0') {
          (*(code *)PTR_strcpy_0046ac60)(auStack_a4,pcVar9);
        }
        uVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addressType",&DAT_0044b32c);
        FUN_00419f50(uVar4,&local_144);
        if (local_144 == 0) {
          (*(code *)PTR_inet_aton_0046a89c)(pcVar1,&local_140);
          iVar5 = 1;
          (*(code *)PTR_inet_aton_0046a89c)(pcVar6,&local_13c);
          (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_148);
          puVar12 = local_cc;
          do {
            while( true ) {
              if (local_148 < iVar5) {
                (*(code *)PTR_inet_aton_0046a89c)(pcVar1,&local_b4);
                (*(code *)PTR_inet_aton_0046a89c)(pcVar6,&local_b0);
                bVar11 = 4;
                goto LAB_0041da94;
              }
              *puVar12 = (char)iVar5;
              local_30 = puVar12;
              iVar10 = (*(code *)PTR_apmib_get_0046aadc)(0x8137,puVar12);
              puVar12 = local_30;
              if ((iVar10 != 0) && ((local_b5 & 4) != 0)) break;
LAB_0041d910:
              iVar5 = iVar5 + 1;
            }
            if (((local_b4 <= local_140) && (local_140 <= local_b0)) ||
               ((local_b4 <= local_13c && (local_13c <= local_b0)))) break;
            if (local_b4 <= local_140) goto LAB_0041d910;
            iVar5 = iVar5 + 1;
          } while (local_13c <= local_b0);
          pcVar1 = " ip address conflict!";
          goto LAB_0041dda0;
        }
        bVar11 = 0x20;
        if (local_144 == 1) {
          FUN_0041c35c(pcVar7,&local_138);
          iVar5 = 1;
          (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_148);
          do {
            while( true ) {
              if (local_148 < iVar5) {
                iVar5 = FUN_0041c35c(pcVar7,&local_bb);
                bVar11 = 8;
                if (iVar5 != 0) goto LAB_0041da94;
                pcVar1 = "MAC input fail!";
                goto LAB_0041dda0;
              }
              local_cc[0] = (undefined1)iVar5;
              iVar10 = (*(code *)PTR_apmib_get_0046aadc)(0x8137,local_cc);
              if ((((iVar10 != 0) && ((local_b5 & 8) != 0)) &&
                  (((uint)local_bb == (int)local_138 &&
                   ((((uint)local_ba == (int)local_137 && ((uint)local_b9 == (int)local_136)) &&
                    ((uint)local_b8 == (int)local_135)))))) && ((uint)local_b7 == (int)local_134))
              break;
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar5 + 1;
          } while ((uint)local_b6 != (int)local_133);
          pcVar1 = " mac address conflict!";
          goto LAB_0041dda0;
        }
LAB_0041da94:
        local_b5 = bVar11;
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"mode",&DAT_0044b32c);
        if (*pcVar1 == '1') {
          local_b5 = local_b5 | 1;
        }
        else {
          local_b5 = local_b5 | 2;
        }
        FUN_00419f50(local_34,&local_144);
        local_ac = local_144;
        FUN_00419f50(local_38,&local_144);
        local_a8 = local_144;
        if ((local_b5 & 1) != 0) {
          iVar5 = FUN_00419e40(local_ac,local_144,uVar14,uVar13);
          if (iVar5 == -1) {
            pcVar1 = "checkQosRuleBw fail!";
            goto LAB_0041dda0;
          }
          if (iVar5 == 3) {
            pcVar1 = 
            "Error: for guaranteed minimum bandwidth of both uplink and downlink, the sum bandwidth of all qos rules are larger than the total bandwidth!"
            ;
            goto LAB_0041dda0;
          }
          if (iVar5 == 2) {
            pcVar1 = 
            "Error: for guaranteed minimum bandwidth of downlink, the sum bandwidth of all qos rules is larger than the total downlink bandwidth!"
            ;
            goto LAB_0041dda0;
          }
          if (iVar5 == 1) {
            pcVar1 = 
            "Error: for guaranteed minimum bandwidth of uplink, the sum bandwidth of all qos rules is larger than the total uplink bandwidth!"
            ;
            goto LAB_0041dda0;
          }
        }
        if (*pcVar8 != '\0') {
          (*(code *)PTR_strcpy_0046ac60)(local_cc,pcVar8);
        }
        local_bc = 1;
        iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_148);
        if (iVar5 != 0) {
          if (10 < local_148 + 1) {
            pcVar1 = "Cannot add new entry because table is full!";
            goto LAB_0041dda0;
          }
          (*(code *)PTR_apmib_set_0046aa28)(0x20139,local_cc);
          iVar5 = (*(code *)PTR_apmib_set_0046aa28)(0x10138,local_cc);
          if (iVar5 == 0) {
            pcVar1 = "Add table entry error!";
            goto LAB_0041dda0;
          }
          goto LAB_0041dc44;
        }
        goto LAB_0041dc70;
      }
    }
LAB_0041d668:
    pcVar1 = "Set mib error!";
  }
LAB_0041dda0:
  (*(code *)PTR_strcpy_0046ac60)(auStack_130,pcVar1);
  FUN_00419fe8(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_130);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

