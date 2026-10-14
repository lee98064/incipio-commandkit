/* FUN_0041c474 @ 0041c474 */

void FUN_0041c474(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar10;
  undefined1 uVar11;
  uint uVar8;
  int iVar9;
  undefined1 *puVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  ushort local_120;
  undefined2 uStack_11e;
  undefined1 local_11c;
  undefined1 auStack_11b [23];
  uint uStack_104;
  undefined1 auStack_fe [22];
  uint auStack_e8 [7];
  undefined1 local_c9;
  undefined1 auStack_c8 [104];
  char *local_60;
  char *local_5c;
  undefined4 local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  uint *local_30;
  
  local_60 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"addFilterIp",&DAT_0044b32c);
  local_44 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteSelFilterIp",&DAT_0044b32c);
  local_50 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteAllFilterIp",&DAT_0044b32c);
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                             (param_1,"addFilterPort",&DAT_0044b32c);
  local_40 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteSelFilterPort",&DAT_0044b32c);
  local_4c = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteAllFilterPort",&DAT_0044b32c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"addFilterMac",&DAT_0044b32c)
  ;
  local_48 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteSelFilterMac",&DAT_0044b32c);
  local_54 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteAllFilterMac",&DAT_0044b32c);
  local_5c = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"addFilterUrl",&DAT_0044b32c);
  local_38 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteSelFilterUrl",&DAT_0044b32c);
  local_3c = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"deleteAllFilterUrl",&DAT_0044b32c);
  if (((*local_60 == '\0') && (*local_44 == '\0')) && (*local_50 == '\0')) {
    if (((*pcVar1 == '\0') && (*local_40 == '\0')) && (*local_4c == '\0')) {
      if (((*pcVar2 == '\0') && (*local_48 == '\0')) && (*local_54 == '\0')) {
        puVar13 = auStack_e8;
        (*(code *)PTR_memset_0046a87c)(puVar13,0,0x20);
        uVar15 = 0x400f4;
        uVar14 = 0x200f3;
        local_58 = 0x100f2;
        uVar17 = 0xef;
        uVar16 = 0x80f1;
        uVar18 = 0xf0;
      }
      else {
        puVar13 = &uStack_104;
        (*(code *)PTR_memset_0046a87c)(puVar13,0,0x1b);
        uVar15 = 0x4007f;
        uVar14 = 0x2007e;
        local_58 = 0x1007d;
        uVar17 = 0x7a;
        uVar16 = 0x807c;
        uVar18 = 0x7b;
      }
    }
    else {
      puVar13 = (uint *)&local_120;
      (*(code *)PTR_memset_0046a87c)(puVar13,0,0x1b);
      uVar15 = 0x40085;
      uVar14 = 0x20084;
      local_58 = 0x10083;
      uVar17 = 0x80;
      uVar16 = 0x8082;
      uVar18 = 0x81;
    }
  }
  else {
    puVar13 = &local_13c;
    local_13c = 0;
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    uVar15 = 0x40079;
    uVar14 = 0x20078;
    local_58 = 0x10077;
    uVar17 = 0x74;
    uVar16 = 0x8076;
    uVar18 = 0x75;
  }
  if ((((*local_60 != '\0') || (*pcVar1 != '\0')) || (*pcVar2 != '\0')) || (*local_5c != '\0')) {
    uVar3 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
    iVar4 = (*(code *)PTR_strcmp_0046a824)(uVar3,"ON");
    local_14c = (uint)(iVar4 == 0);
    iVar4 = (*(code *)PTR_apmib_set_0046aa28)(uVar17,&local_14c);
    if (iVar4 == 0) {
      pcVar1 = "Set enabled flag error!";
      goto LAB_0041d070;
    }
  }
  local_34 = "les is larger than the total downlink bandwidth!";
  pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"comment",&DAT_0044b32c);
  if (*local_60 != '\0') {
    pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ip",local_34 + -0x4cd4);
    if (*pcVar6 == '\0') {
      if (*pcVar5 == '\0') goto LAB_0041d158;
      pcVar1 = "Error! No ip address to set.";
      goto LAB_0041d070;
    }
    (*(code *)PTR_inet_aton_0046a89c)(pcVar6,&local_13c);
    (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,&local_148);
    (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,2,&local_144);
    if (((local_148 ^ local_13c) & local_144) != 0) {
      pcVar1 = "Invalid IP address! It should be set within the current subnet.";
      goto LAB_0041d070;
    }
  }
  cVar10 = '\0';
  if (*pcVar1 != '\0') {
    local_30 = (uint *)0x450000;
    local_34 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"fromPort",&DAT_0044b32c)
    ;
    pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"toPort",local_30 + -0x1335);
    pcVar6 = local_34;
    if (*local_34 == '\0') {
      if ((*pcVar7 != '\0') || (*pcVar5 != '\0')) {
        pcVar1 = "Error! No from-port value to be set.";
        goto LAB_0041d070;
      }
      goto LAB_0041d158;
    }
    local_34 = pcVar7;
    local_30 = &local_14c;
    iVar4 = FUN_00419f50(pcVar6,&local_14c);
    pcVar6 = local_34;
    if (((iVar4 == 0) || ((int)local_14c < 1)) || (0xffff < (int)local_14c)) {
      pcVar1 = "Error! Invalid value of from-port.";
      goto LAB_0041d070;
    }
    _local_120 = CONCAT22((short)local_14c,uStack_11e);
    uVar8 = local_14c & 0xffff;
    if (*local_34 != '\0') {
      local_34 = (char *)0x10000;
      iVar4 = FUN_00419f50(pcVar6,local_30);
      if (((iVar4 == 0) || ((int)local_14c < 1)) ||
         (uVar8 = local_14c, (int)local_34 <= (int)local_14c)) {
        pcVar1 = "Error! Invalid value of to-port.";
        goto LAB_0041d070;
      }
    }
    _local_120 = CONCAT22(local_120,(short)uVar8);
    if ((uVar8 & 0xffff) < (uint)local_120) {
      pcVar1 = "Error! Invalid port range.";
      goto LAB_0041d070;
    }
    cVar10 = *pcVar1;
  }
  if ((cVar10 != '\0') || (uVar11 = local_11c, *local_60 != '\0')) {
    pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"protocol",&DAT_0044b32c);
    cVar10 = *pcVar6;
    if (cVar10 == '\0') {
      pcVar1 = "Error! Protocol type cannot be empty.";
      goto LAB_0041d070;
    }
    if (cVar10 == '0') {
      if (*pcVar1 == '\0') {
        uVar11 = 3;
LAB_0041cbfc:
        local_138 = CONCAT13(uVar11,local_138._1_3_);
        uVar11 = local_11c;
      }
      else {
        uVar11 = 3;
      }
    }
    else if (cVar10 == '1') {
      if (*pcVar1 == '\0') {
        uVar11 = 1;
        goto LAB_0041cbfc;
      }
      uVar11 = 1;
    }
    else {
      if (cVar10 != '2') {
        pcVar1 = "Error! Invalid protocol type.";
        goto LAB_0041d070;
      }
      uVar11 = 2;
      if (*pcVar1 == '\0') goto LAB_0041cbfc;
    }
  }
  local_11c = uVar11;
  if (*pcVar2 != '\0') {
    pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,&DAT_0044fd74,&DAT_0044b32c);
    if (*pcVar6 == '\0') {
      if (*pcVar5 == '\0') goto LAB_0041d158;
      pcVar1 = "Error! No mac address to set.";
      goto LAB_0041d070;
    }
    local_34 = pcVar6;
    iVar4 = (*(code *)PTR_strlen_0046a714)(pcVar6);
    if ((iVar4 != 0xc) || (iVar4 = FUN_0041c35c(local_34,&uStack_104), iVar4 == 0)) {
      pcVar1 = "Error! Invalid MAC address.";
      goto LAB_0041d070;
    }
  }
  if (*local_5c != '\0') {
    iVar4 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"urlFilterMode",&DAT_0044b32c);
    if (iVar4 != 0) {
      local_140 = (*(code *)PTR_atoi_0046a73c)(iVar4);
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(0xff,&local_140);
      if (iVar4 == 0) {
        pcVar1 = "Set mode flag error!";
        goto LAB_0041d070;
      }
    }
    pcVar6 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,&DAT_0044fdc0,&DAT_0044b32c);
    if (*pcVar6 == '\0') goto LAB_0041d158;
    (*(code *)PTR_strcpy_0046ac60)(auStack_e8,pcVar6);
    local_c9 = (undefined1)local_140;
  }
  if (((((char *)(int)*local_60 == (char *)0x0) && (*pcVar1 == '\0')) && (*pcVar2 == '\0')) &&
     (*local_5c == '\0')) {
LAB_0041cf1c:
    if (((*local_40 == '\0') && (*local_44 == '\0')) && ((*local_48 == '\0' && (*local_38 == '\0')))
       ) {
LAB_0041d0cc:
      if ((((*local_4c == '\0') && (*local_50 == '\0')) &&
          ((*local_54 == '\0' && (*local_3c == '\0')))) ||
         (iVar4 = (*(code *)PTR_apmib_set_0046aa28)(uVar15,puVar13), iVar4 != 0)) {
LAB_0041d158:
        FUN_0041af38();
        iVar4 = (*(code *)PTR_fork_0046a8c8)();
        if (iVar4 == 0) {
          (*(code *)PTR_snprintf_0046abe4)(auStack_c8,100,"%s/%s",&DAT_0044d824,"firewall.sh");
          (*(code *)PTR_execl_0046ab4c)(auStack_c8,"firewall.sh",0);
          (*(code *)PTR_exit_0046a75c)(1);
          return;
        }
        (*(code *)PTR_waitpid_0046ac48)(iVar4,0,0);
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
      goto LAB_0041d070;
    }
    iVar4 = (*(code *)PTR_apmib_get_0046aadc)(uVar18,&local_150);
    if (iVar4 != 0) {
      iVar4 = local_150;
      do {
        while( true ) {
          if (iVar4 < 1) goto LAB_0041d0cc;
          (*(code *)PTR_snprintf_0046abe4)(auStack_c8,0x14,"select%d",iVar4);
          uVar17 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_c8,&DAT_0044b32c);
          iVar9 = (*(code *)PTR_strcmp_0046a824)(uVar17,"ON");
          if (iVar9 == 0) break;
          iVar4 = iVar4 + -1;
        }
        *(char *)puVar13 = (char)iVar4;
        iVar9 = (*(code *)PTR_apmib_get_0046aadc)(uVar16,puVar13);
        if (iVar9 == 0) {
          pcVar1 = "Get table entry error!";
          goto LAB_0041d070;
        }
        iVar9 = (*(code *)PTR_apmib_set_0046aa28)(uVar14,puVar13);
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
      pcVar1 = "Delete table entry error!";
      goto LAB_0041d070;
    }
  }
  else {
    if (*pcVar5 != '\0') {
      local_34 = (char *)(int)*local_60;
      uVar8 = (*(code *)PTR_strlen_0046a714)(pcVar5);
      if (0x14 < uVar8) {
        pcVar1 = "Error! Comment length too long.";
        goto LAB_0041d070;
      }
      if (local_34 == (char *)0x0) {
        puVar12 = auStack_11b;
        if (*pcVar1 == '\0') {
          if (*pcVar2 == '\0') goto LAB_0041ce70;
          puVar12 = auStack_fe;
        }
      }
      else {
        puVar12 = (undefined1 *)((int)&local_138 + 1);
      }
      (*(code *)PTR_strcpy_0046ac60)(puVar12,pcVar5);
    }
LAB_0041ce70:
    iVar4 = (*(code *)PTR_apmib_get_0046aadc)(uVar18,&local_150);
    if (iVar4 != 0) {
      if (*local_5c == '\0') {
        if (0x14 < local_150 + 1) {
          pcVar1 = "Cannot add new entry because table is full!";
          goto LAB_0041d070;
        }
      }
      else if (0x10 < local_150 + 1) {
        pcVar1 = "Cannot add new URL entry because table is full!";
        goto LAB_0041d070;
      }
      (*(code *)PTR_apmib_set_0046aa28)(uVar14,puVar13);
      iVar4 = (*(code *)PTR_apmib_set_0046aa28)(local_58,puVar13);
      if (iVar4 == 0) {
        pcVar1 = "Add table entry error!";
        goto LAB_0041d070;
      }
      goto LAB_0041cf1c;
    }
  }
  pcVar1 = "Get entry number error!";
LAB_0041d070:
  (*(code *)PTR_strcpy_0046ac60)(auStack_c8,pcVar1);
  FUN_00419fe8(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_c8);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

