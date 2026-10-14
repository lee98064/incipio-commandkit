/* FUN_0043f688 @ 0043f688 */

void FUN_0043f688(undefined4 param_1)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  code *pcVar12;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  undefined1 auStack_1a4 [16];
  undefined1 auStack_194 [20];
  undefined1 local_180 [100];
  undefined1 auStack_11c [260];
  byte *local_18;
  
  (*(code *)PTR_memset_0046a87c)(auStack_11c,0,0x100);
  (*(code *)PTR_memcpy_0046ab5c)(auStack_1a4,"0123456789ABCDEFupdate_wps_configured",0x10);
  (*(code *)PTR_sprintf_0046a808)(auStack_194,"encrypt%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_194,&DAT_0044b32c);
  uVar3 = (int)*pcVar2 - 0x30;
  pcVar12 = (code *)PTR_apmib_get_0046aadc;
  if ((*pcVar2 != 0) && (pcVar12 = (code *)PTR_apmib_set_0046aa28, local_1b0 = uVar3, 4 < uVar3)) {
    pcVar2 = "encrypt value not validt!";
    goto LAB_0043fb54;
  }
  (*pcVar12)(0x45,&local_1b0);
  if (local_1b0 - 1 < 2) {
    (*(code *)PTR_sprintf_0046a808)(auStack_194,"format%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_194,&DAT_0044b32c);
    uVar4 = (int)*pcVar2 - 0x30;
    pcVar12 = (code *)PTR_apmib_get_0046aadc;
    uVar3 = local_1ac;
    if ((*pcVar2 == 0) ||
       (pcVar12 = (code *)PTR_apmib_set_0046aa28, uVar3 = uVar4, (uVar4 & 0xff) < 2)) {
      local_1ac = uVar3;
      (*pcVar12)(0x46,&local_1ac);
      uVar3 = 5;
      if ((local_1b0 != 1) && (uVar3 = 0xd, local_1b0 != 2)) {
        uVar3 = 0;
      }
      if (local_1ac == 1) {
        uVar3 = uVar3 << 1;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_194,"wepKey%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      pbVar5 = (byte *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,auStack_194,&DAT_0044b32c);
      if (*pbVar5 != 0) {
        local_18 = pbVar5;
        uVar4 = (*(code *)PTR_strlen_0046a714)(pbVar5);
        uVar8 = 0;
        if (uVar4 != uVar3) {
          pcVar2 = "Invalid wep key length!";
          goto LAB_0043fb54;
        }
        do {
          pbVar5 = local_18 + uVar8;
          if (uVar4 <= uVar8) goto LAB_0043f970;
          uVar8 = uVar8 + 1;
        } while (*pbVar5 == 0x2a);
        puVar10 = local_180;
        iVar6 = 0;
        pbVar5 = local_18;
        if (local_1ac == 0) {
          for (; iVar6 < (int)uVar3; iVar6 = iVar6 + 1) {
            *puVar10 = auStack_1a4[*pbVar5 >> 4];
            bVar1 = *pbVar5;
            pbVar5 = pbVar5 + 1;
            puVar10[1] = auStack_1a4[bVar1 & 0xf];
            puVar10 = puVar10 + 2;
          }
          local_180[iVar6 * 2] = 0;
        }
        else {
          (*(code *)PTR_strcpy_0046ac60)();
        }
        (*(code *)PTR_apmib_set_0046aa28)(0x47,local_180);
      }
      goto LAB_0043f970;
    }
LAB_0043f9e0:
    pcVar2 = "Invalid wep key format value!";
    goto LAB_0043fb54;
  }
LAB_0043f970:
  if (1 < local_1b0 - 3) goto LAB_0043fbd4;
  (*(code *)PTR_sprintf_0046a808)(auStack_194,"pskFormat%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_194,&DAT_0044b32c);
  uVar3 = (int)*pcVar2 - 0x30;
  if (*pcVar2 == 0) {
    (*(code *)PTR_apmib_get_0046aadc)(0x48,&local_1ac);
    uVar3 = local_1ac;
  }
  else if (1 < (uVar3 & 0xff)) goto LAB_0043f9e0;
  local_1ac = uVar3;
  (*(code *)PTR_apmib_get_0046aadc)(0x48,&local_1a8);
  (*(code *)PTR_apmib_get_0046aadc)(0x49,auStack_11c);
  iVar6 = (*(code *)PTR_strlen_0046a714)(auStack_11c);
  (*(code *)PTR_sprintf_0046a808)(auStack_194,"pskValue%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_194,&DAT_0044b32c);
  iVar7 = (*(code *)PTR_strlen_0046a714)(pcVar2);
  if (((0 < iVar7) && (local_1a8 == local_1ac)) && (iVar9 = 0, pcVar11 = pcVar2, iVar7 == iVar6)) {
    do {
      if (*pcVar11 != '*') break;
      iVar9 = iVar9 + 1;
      pcVar11 = pcVar2 + iVar9;
    } while (iVar9 < iVar7);
    if (iVar9 == iVar7) goto LAB_0043fbd4;
  }
  if (local_1ac == 1) {
    if (iVar7 == 0x40) {
      uVar3 = FUN_00434520(pcVar2,auStack_11c,0x40);
LAB_0043fb3c:
      if (uVar3 != 0) {
        (*(code *)PTR_apmib_set_0046aa28)(0x48,&local_1ac);
        (*(code *)PTR_apmib_set_0046aa28)(0x49,pcVar2);
LAB_0043fbd4:
        local_1ac = 1;
        (*(code *)PTR_apmib_set_0046aa28)(0x3f,&local_1ac);
        FUN_0043c750();
        run_init_script("bridge");
        pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,"submit-url",&DAT_0044b32c);
        *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
        if (*pcVar2 == '\0') {
          (*(code *)PTR_strcpy_0046ac60)(pcVar2,"/wizard.htm");
        }
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
                  );
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,"<input type=\'hidden\' value=\'%s\' name=\'submit-url\'>",pcVar2);
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<input id=\'restartNow\' type=\'submit\' value=\'Reboot Now\' onclick=\"return true\" />&nbsp;&nbsp;"
                  );
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,
                   "<input id=\'restartLater\' type=\'button\' value=\'Reboot Later\' OnClick=window.location.replace(\"%s\")>"
                   ,pcVar2);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"</form></blockquote></body></html>");
        (*(code *)PTR_log_boaform_0046a9d8)("formRebootCheck");
        return;
      }
    }
  }
  else {
    uVar3 = (uint)(iVar7 < 0x40);
    if (iVar7 != 0) goto LAB_0043fb3c;
  }
  pcVar2 = "Error! invalid psk value.";
LAB_0043fb54:
  (*(code *)PTR_strcpy_0046ac60)(auStack_11c,pcVar2);
  FUN_004340e4(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_11c);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

