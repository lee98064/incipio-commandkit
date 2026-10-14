/* FUN_00446ea4 @ 00446ea4 */

void FUN_00446ea4(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 auStack_7c [104];
  
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  (*(code *)PTR_apmib_get_0046aadc)(0xe5,&local_80);
  uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dosEnabled",&DAT_0044b32c);
  iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
  if (iVar3 == 0) {
    local_80 = local_80 | 1;
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodSYN",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 2;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodSYNcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xe6,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS SYSSYN_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xfffffffd;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodFIN",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 4;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodFINcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xe7,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS SYSFIN_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xfffffffb;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodUDP",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 8;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodUDPcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xe8,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS SYSUDP_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xfffffff7;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodICMP",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x10;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sysfloodICMPcount",&DAT_0044b32c)
      ;
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xe9,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS SYSICMP_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xffffffef;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodSYN",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x20;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodSYNcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xea,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS PIPSYN_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xffffffdf;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodFIN",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x40;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodFINcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xeb,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS PIPFIN_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xffffffbf;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodUDP",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x80;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodUDPcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xec,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS PIPUDP_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xffffff7f;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodICMP",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x100;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ipfloodICMPcount",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_88);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xed,&local_88);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS PIPICMP_FLOOD error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xfffffeff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"TCPUDPPortScan",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    uVar4 = 0xfffffdff;
    if (iVar3 == 0) {
      local_80 = local_80 | 0x200;
      pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"portscanSensi",&DAT_0044b32c);
      if (*pcVar5 != '1') {
        uVar4 = 0xff7fffff;
        goto LAB_0044757c;
      }
      local_80 = local_80 | 0x800000;
    }
    else {
LAB_0044757c:
      local_80 = local_80 & uVar4;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ICMPSmurfEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x400;
    }
    else {
      local_80 = local_80 & 0xfffffbff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"IPLandEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x800;
    }
    else {
      local_80 = local_80 & 0xfffff7ff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"IPSpoofEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x1000;
    }
    else {
      local_80 = local_80 & 0xffffefff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"IPTearDropEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x2000;
    }
    else {
      local_80 = local_80 & 0xffffdfff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"PingOfDeathEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x4000;
    }
    else {
      local_80 = local_80 & 0xffffbfff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"TCPScanEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x8000;
    }
    else {
      local_80 = local_80 & 0xffff7fff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)
                      (param_1,"TCPSynWithDataEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x10000;
    }
    else {
      local_80 = local_80 & 0xfffeffff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"UDPBombEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x20000;
    }
    else {
      local_80 = local_80 & 0xfffdffff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)
                      (param_1,"UDPEchoChargenEnabled",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x40000;
    }
    else {
      local_80 = local_80 & 0xfffbffff;
    }
    uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"sourceIPblock",&DAT_0044b32c);
    iVar3 = (*(code *)PTR_strcmp_0046a824)(uVar2,"ON");
    if (iVar3 == 0) {
      local_80 = local_80 | 0x400000;
      uVar2 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"IPblockTime",&DAT_0044b32c);
      FUN_004418f0(uVar2,&local_84);
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xee,&local_84);
      if (iVar3 == 0) {
        pcVar1 = "Set DoS IP Block Timer error!";
        goto LAB_0044799c;
      }
    }
    else {
      local_80 = local_80 & 0xffbfffff;
    }
  }
  else {
    local_80 = 0;
  }
  iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xe5,&local_80);
  if (iVar3 != 0) {
    FUN_00444434();
    (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
    *(undefined4 *)PTR_needReboot_0046a9b4 = 1;
    if (*pcVar1 == '\0') {
      (*(code *)PTR_strcpy_0046ac60)(pcVar1,"/wizard.htm");
    }
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<html><body><blockquote><h4>Change setting successfully!</h4>Your changes have been saved. The router must be rebooted for the changes to take effect.<br> You can reboot now, or you can continue to make other changes and reboot later.\n"
              );
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<form action=/boafrm/formRebootCheck method=POST name=\'rebootForm\'>");
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
  pcVar1 = "Set DoS enable error!";
LAB_0044799c:
  (*(code *)PTR_strcpy_0046ac60)(auStack_7c,pcVar1);
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_7c);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

