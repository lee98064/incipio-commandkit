/* FUN_0041b644 @ 0041b644 */

void FUN_0041b644(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_120;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  undefined4 local_10c;
  byte local_108;
  undefined1 auStack_e8 [24];
  undefined1 local_d0 [4];
  ushort local_cc;
  ushort local_ca;
  byte local_c8;
  undefined1 auStack_90 [104];
  
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addPortFw",&DAT_0044b32c);
  pcVar4 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteSelPortFw",&DAT_0044b32c);
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"deleteAllPortFw",&DAT_0044b32c);
  (*(code *)PTR_memset_0046a87c)(&local_110,0,0x3d);
  if (*pcVar3 == '\0') {
LAB_0041bbac:
    if (*pcVar4 == '\0') {
LAB_0041bcd0:
      if ((*pcVar5 == '\0') ||
         (iVar7 = (*(code *)PTR_apmib_set_0046aa28)(0x40073,&local_110), iVar7 != 0)) {
LAB_0041bd58:
        FUN_0041af38();
        iVar7 = (*(code *)PTR_fork_0046a8c8)();
        if (iVar7 == 0) {
          (*(code *)PTR_snprintf_0046abe4)(auStack_90,100,"%s/%s",&DAT_0044d824,"firewall.sh");
          (*(code *)PTR_execl_0046ab4c)(auStack_90,"firewall.sh",0);
          (*(code *)PTR_exit_0046a75c)(1);
          return;
        }
        (*(code *)PTR_waitpid_0046ac48)(iVar7,0,0);
        pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"submit-url",&DAT_0044b32c);
        if (*(int *)PTR_needReboot_0046a9b4 == 1) {
          *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
          if (*pcVar3 == '\0') {
            (*(code *)PTR_strcpy_0046ac60)(pcVar3,"/wizard.htm");
          }
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar3);
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                    );
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,
                     "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                     ,pcVar3);
          (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
          (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
          return;
        }
        if (*pcVar3 == '\0') {
          return;
        }
        (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,pcVar3);
        return;
      }
      pcVar3 = "Delete all table error!";
      goto LAB_0041bd08;
    }
    iVar7 = (*(code *)PTR_apmib_get_0046aadc)(0x6f,&local_120);
    if (iVar7 != 0) {
      iVar7 = local_120;
      do {
        while( true ) {
          if (iVar7 < 1) goto LAB_0041bcd0;
          (*(code *)PTR_snprintf_0046abe4)(auStack_90,0x14,"select%d",iVar7);
          uVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_90,&DAT_0044b32c);
          iVar12 = (*(code *)PTR_strcmp_0046a824)(uVar6,"ON");
          if (iVar12 == 0) break;
          iVar7 = iVar7 + -1;
        }
        local_110 = CONCAT13((char)iVar7,local_110._1_3_);
        iVar12 = (*(code *)PTR_apmib_get_0046aadc)(0x8070,&local_110);
        if (iVar12 == 0) {
          pcVar3 = "Get table entry error!";
          goto LAB_0041bd08;
        }
        iVar12 = (*(code *)PTR_apmib_set_0046aa28)(0x20072,&local_110);
        iVar7 = iVar7 + -1;
      } while (iVar12 != 0);
      pcVar3 = "Delete table entry error!";
      goto LAB_0041bd08;
    }
  }
  else {
    uVar6 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
    iVar7 = (*(code *)PTR_strcmp_0046a824)(uVar6,"ON");
    local_11c = (uint)(iVar7 == 0);
    iVar7 = (*(code *)PTR_apmib_set_0046aa28)(0x6e,&local_11c);
    if (iVar7 == 0) {
      pcVar3 = "Set enabled flag error!";
      goto LAB_0041bd08;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ip",&DAT_0044b32c);
    pcVar8 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"fromPort",&DAT_0044b32c);
    pcVar9 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"toPort",&DAT_0044b32c);
    pcVar10 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"comment",&DAT_0044b32c);
    puVar2 = PTR_BRIDGE_IF_0046abe0;
    if (*pcVar3 == '\0') {
      if (((*pcVar8 == '\0') && (*pcVar9 == '\0')) && (*pcVar10 == '\0')) goto LAB_0041bd58;
      pcVar3 = "Error! No ip address to set.";
      goto LAB_0041bd08;
    }
    (*(code *)PTR_inet_aton_0046a89c)(pcVar3,&local_110);
    (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)puVar2,0,&local_118);
    (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)puVar2,2,&local_114);
    if (((local_118 ^ local_110) & local_114) != 0) {
      pcVar3 = "Invalid IP address! It should be set within the current subnet.";
      goto LAB_0041bd08;
    }
    if (*pcVar8 == '\0') {
      pcVar3 = "Error! No from-port value to be set.";
      goto LAB_0041bd08;
    }
    iVar7 = FUN_00419f50(pcVar8,&local_11c);
    if (((iVar7 == 0) || ((int)local_11c < 1)) || (0xffff < (int)local_11c)) {
      pcVar3 = "Error! Invalid value of from-port.";
      goto LAB_0041bd08;
    }
    local_10c = CONCAT22((short)local_11c,local_10c._2_2_);
    if ((*pcVar9 != '\0') &&
       (((iVar7 = FUN_00419f50(pcVar9,&local_11c), iVar7 == 0 || ((int)local_11c < 1)) ||
        (0xffff < (int)local_11c)))) {
      pcVar3 = "Error! Invalid value of to-port.";
      goto LAB_0041bd08;
    }
    local_10c = CONCAT22(local_10c._0_2_,local_11c._2_2_);
    if ((local_11c & 0xffff) < (uint)local_10c._0_2_) {
      pcVar3 = "Error! Invalid port range.";
      goto LAB_0041bd08;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"protocol",&DAT_0044b32c);
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      pcVar3 = "Error! Protocol type cannot be empty.";
      goto LAB_0041bd08;
    }
    if (cVar1 == '0') {
      local_108 = 3;
    }
    else if (cVar1 == '1') {
      local_108 = 1;
    }
    else {
      if (cVar1 != '2') {
        pcVar3 = "Error! Invalid protocol type.";
        goto LAB_0041bd08;
      }
      local_108 = 2;
    }
    if (*pcVar10 != '\0') {
      uVar11 = (*(code *)PTR_strlen_0046a714)(pcVar10);
      if (0x14 < uVar11) {
        pcVar3 = "Error! Comment length too long.";
        goto LAB_0041bd08;
      }
      (*(code *)PTR_strcpy_0046ac60)(auStack_e8,pcVar10);
    }
    iVar7 = (*(code *)PTR_apmib_get_0046aadc)(0x6f,&local_120);
    if (iVar7 != 0) {
      if (local_120 + 1 < 0x15) {
        iVar7 = 1;
LAB_0041bb4c:
        do {
          iVar12 = iVar7;
          if (local_120 < iVar12) {
            (*(code *)PTR_apmib_set_0046aa28)(0x20072,&local_110);
            iVar7 = (*(code *)PTR_apmib_set_0046aa28)(0x10071,&local_110);
            if (iVar7 != 0) goto LAB_0041bbac;
            pcVar3 = "Add table entry error!";
            goto LAB_0041bd08;
          }
          local_d0[0] = (undefined1)iVar12;
          iVar7 = (*(code *)PTR_apmib_get_0046aadc)(0x8070,local_d0);
          if (iVar7 == 0) {
            pcVar3 = "Get table entry error!";
            goto LAB_0041bd08;
          }
          uVar13 = (uint)local_cc;
          uVar11 = local_10c >> 0x10;
          if (uVar13 < uVar11) {
LAB_0041bb0c:
            if (local_ca < uVar11) {
              iVar7 = iVar12 + 1;
              goto LAB_0041bb4c;
            }
          }
          else if ((local_10c & 0xffff) < uVar13) {
            iVar7 = iVar12 + 1;
            if (uVar13 <= uVar11) goto LAB_0041bb0c;
            goto LAB_0041bb4c;
          }
          iVar7 = iVar12 + 1;
        } while ((local_c8 & local_108) == 0);
        pcVar3 = "Setting port range has overlapped with used port numbers!";
      }
      else {
        pcVar3 = "Cannot add new entry because table is full!";
      }
      goto LAB_0041bd08;
    }
  }
  pcVar3 = "Get entry number error!";
LAB_0041bd08:
  (*(code *)PTR_strcpy_0046ac60)(auStack_90,pcVar3);
  FUN_00419fe8(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_90);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

