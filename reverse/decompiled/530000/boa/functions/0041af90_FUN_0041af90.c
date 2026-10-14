/* FUN_0041af90 @ 0041af90 */

void FUN_0041af90(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 auStack_9c [100];
  char *local_38;
  int local_34;
  char *local_30;
  int local_2c;
  
  pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"vlan_onoff",&DAT_0044b32c);
  if (*pcVar1 != '\0') {
    local_b8 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
  }
  iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x268,&local_b8);
  if (iVar2 == 0) {
    pcVar1 = "set  MIB_VLANCONFIG_ENABLED error!";
LAB_0041b474:
    (*(code *)PTR_strcpy_0046ac60)(auStack_9c,pcVar1);
    FUN_00419fe8(param_1);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_9c);
    (*(code *)PTR_req_format_write_0046a95c)
              (param_1,
               "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
              );
  }
  else {
    if (local_b8 == 1) {
      iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x4026d,&local_b4);
      iVar4 = 1;
      if (iVar2 == 0) {
        pcVar1 = "Delete all table error!";
        goto LAB_0041b474;
      }
      do {
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_a0 = 0;
        local_b4 = iVar4 << 0x18;
        (*(code *)PTR_apmib_get_0046aadc)(0x826a,&local_b4);
        (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
        (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_iface_%d",iVar4);
        pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                   (param_1,auStack_9c,&DAT_0044b32c);
        if (*pcVar1 == '\0') {
          iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x1026b,&local_b4);
          if (iVar2 == 0) {
            pcVar1 = "Add table entry error!";
            goto LAB_0041b474;
          }
        }
        else {
          local_2c = 0x10;
          local_34 = 0;
          local_38 = pcVar1;
          do {
            iVar2 = local_34 * 0x30;
            local_34 = local_34 + 1;
            local_30 = s_Ethernet_Port1_00468820 + iVar2;
            iVar2 = (*(code *)PTR_strcmp_0046a824)(local_38,local_30);
            if (iVar2 == 0) {
              if (local_30 != (char *)0x0) {
                (*(code *)PTR_strcpy_0046ac60)((int)&local_b4 + 1,local_30 + 0x20);
              }
              break;
            }
          } while (local_34 != local_2c);
          (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
          (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_enable_%d",iVar4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_9c,&DAT_0044b32c);
          if (*pcVar1 != '\0') {
            uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
            local_b4 = CONCAT13(uVar3,local_b4._1_3_);
          }
          (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
          (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_tag_%d",iVar4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_9c,&DAT_0044b32c);
          if (*pcVar1 != '\0') {
            uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
            local_a4._1_3_ = CONCAT12(uVar3,local_a4._2_2_);
          }
          (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
          (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_cfg_%d",iVar4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_9c,&DAT_0044b32c);
          if (*pcVar1 != '\0') {
            uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
            local_a4 = CONCAT31(local_a4._0_3_,uVar3);
          }
          (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
          (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_id_%d",iVar4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_9c,&DAT_0044b32c);
          if (*pcVar1 != '\0') {
            local_a0 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
          }
          (*(code *)PTR_memset_0046a87c)(auStack_9c,0,100);
          (*(code *)PTR_sprintf_0046a808)(auStack_9c,"vlan_priority_%d",iVar4);
          pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_9c,&DAT_0044b32c);
          if (*pcVar1 != '\0') {
            uVar3 = (*(code *)PTR_atoi_0046a73c)(pcVar1);
            local_a4._2_2_ = CONCAT11(uVar3,(undefined1)local_a4);
          }
          iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x1026b,&local_b4);
          if (iVar2 == 0) {
            pcVar1 = "Add table entry error!";
            goto LAB_0041b474;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x11);
    }
    FUN_0041af38();
    (*(code *)PTR_run_init_script_0046a844)(&DAT_0044d9f4);
    pcVar1 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c)
    ;
    if (*pcVar1 != '\0') {
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
    }
  }
  return;
}

