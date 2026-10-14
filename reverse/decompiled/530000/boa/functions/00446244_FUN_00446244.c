/* FUN_00446244 @ 00446244 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00446244(undefined4 param_1)

{
  int *piVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 *puVar9;
  int local_5a0;
  int local_59c;
  undefined4 local_598;
  int local_594 [3];
  undefined2 local_588;
  undefined1 auStack_584 [20];
  undefined1 auStack_570 [100];
  undefined1 local_50c [33];
  char local_4eb;
  undefined1 local_4ea;
  undefined1 local_4e9;
  undefined1 auStack_4e8 [65];
  undefined1 local_4a7;
  byte local_4a6;
  byte local_4a5;
  undefined1 local_4a4;
  undefined1 local_4a3;
  undefined1 local_4a2;
  undefined1 local_4a1;
  undefined1 local_4a0;
  undefined1 local_49f;
  undefined1 local_49e;
  undefined1 local_49d;
  undefined1 local_49c;
  undefined1 local_49b;
  undefined1 local_49a;
  undefined1 local_48b;
  undefined1 local_48a;
  undefined1 local_489;
  undefined1 local_488;
  undefined1 local_487;
  undefined1 local_486;
  undefined1 local_485;
  undefined1 local_484;
  undefined1 local_483;
  undefined1 local_482;
  undefined1 local_481;
  undefined1 local_480;
  undefined1 local_47f;
  undefined1 local_470;
  undefined1 local_46f;
  undefined1 local_46e;
  undefined1 local_46d;
  undefined1 local_46c;
  undefined1 local_46b;
  undefined1 local_46a;
  undefined1 local_469;
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466;
  undefined1 local_465;
  undefined1 local_464;
  undefined1 local_455;
  undefined1 local_454;
  undefined1 local_453;
  byte local_452;
  byte local_451;
  undefined1 local_450;
  undefined1 local_44f;
  undefined1 local_44e;
  undefined1 local_44d;
  undefined1 local_44c;
  undefined1 local_44b;
  undefined1 local_44a;
  undefined1 local_449;
  undefined1 auStack_438 [400];
  undefined1 auStack_2a8 [600];
  uint local_50;
  uint local_4c;
  undefined *local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_30;
  
  puVar2 = PTR_wlan_idx_0046a93c;
  (*(code *)PTR_sprintf_0046a808)
            (auStack_584,"wizardAddProfile%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_584,&DAT_0044b32c);
  if (*pcVar3 != '\0') {
    local_598 = 1;
    local_3c = *(undefined4 *)PTR_vwlan_idx_0046a9b0;
    (*(code *)PTR_memset_0046a87c)(auStack_2a8,0,600);
    local_594[1] = 0;
    local_594[2] = 0;
    local_588 = 0;
    (*(code *)PTR_memset_0046a87c)(auStack_2a8,0,600);
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_59c);
    uVar5 = 0xfa;
    if (*(int *)puVar2 != 0) {
      uVar5 = 0xfc;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar5,&local_5a0);
    if (((local_59c == 0) || (local_59c == 3)) && (local_5a0 == 1)) {
      (*(code *)PTR_sprintf_0046a808)
                (local_594 + 1,"wlan%d-vxd",*(undefined4 *)PTR_wlan_idx_0046a93c);
      *(undefined4 *)PTR_vwlan_idx_0046a9b0 = 5;
    }
    else {
      (*(code *)PTR_sprintf_0046a808)(local_594 + 1,"wlan%d",*(undefined4 *)PTR_wlan_idx_0046a93c);
      *(undefined4 *)PTR_vwlan_idx_0046a9b0 = 0;
    }
    puVar2 = PTR_wlan_idx_0046a93c;
    uVar5 = 0x834;
    uVar7 = 0x8848;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar7 = 0x8836;
    }
    else {
      uVar5 = 0x844;
    }
    uVar6 = 0x847;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x835;
    }
    (*(code *)PTR_apmib_set_0046aa28)(uVar5,&local_598);
    iVar4 = (*(code *)PTR_addWlProfileHandler_0046aabc)(param_1,auStack_570,*(undefined4 *)puVar2);
    if (iVar4 < 0) {
      (*(code *)PTR_printf_0046ac28)("\r\n Add wireless profile fail__[%s-%u]\r\n","fmmgmt.c",0xcab)
      ;
    }
    piVar1 = local_594 + 1;
    (*(code *)PTR_sprintf_0046a808)
              (auStack_2a8,"iwpriv %s set_mib ap_profile_enable=%d",piVar1,local_598);
    (*(code *)PTR_system_0046ab18)(auStack_2a8);
    (*(code *)PTR_sprintf_0046a808)(auStack_2a8,"iwpriv %s set_mib ap_profile_num=0",piVar1);
    (*(code *)PTR_system_0046ab18)(auStack_2a8);
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,local_594);
    local_38 = auStack_4e8;
    local_30 = param_1;
    for (iVar4 = 1; param_1 = local_30, iVar4 <= local_594[0]; iVar4 = iVar4 + 1) {
      (*(code *)PTR_memset_0046a87c)(auStack_2a8,0,600);
      (*(code *)PTR_memset_0046a87c)(local_50c,0,0xd4);
      local_50c[0] = (undefined1)iVar4;
      (*(code *)PTR_apmib_get_0046aadc)(uVar7,local_50c);
      if (local_4eb == '\0') {
        pcVar3 = "iwpriv %s set_mib ap_profile_add=\"%s\",%d,%d";
        puVar9 = (undefined1 *)0x0;
        cVar8 = '\0';
LAB_00446860:
        (*(code *)PTR_sprintf_0046a808)(auStack_2a8,pcVar3,piVar1,local_50c,cVar8,puVar9);
      }
      else {
        puVar9 = auStack_438;
        if ((byte)(local_4eb - 1U) < 2) {
          local_44 = (uint)local_452;
          local_48 = PTR_sprintf_0046a808;
          local_50 = (uint)local_4a6;
          local_40 = (uint)local_451;
          local_4c = (uint)local_4a5;
          if (local_4eb == '\x01') {
            (*(code *)PTR_sprintf_0046a808)
                      (auStack_438,
                       "%d,%d,%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x"
                       ,local_4ea,local_4a7,local_50,local_4c,local_4a4,local_4a3,local_4a2,
                       local_48b,local_48a,local_489,local_488,local_487,local_470,local_46f,
                       local_46e,local_46d,local_46c,local_455,local_454,local_453,local_44,local_40
                      );
          }
          else {
            (*(code *)PTR_sprintf_0046a808)
                      (auStack_438,
                       "%d,%d,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
                       ,local_4ea,local_4a7,local_50,local_4c,local_4a4,local_4a3,local_4a2,
                       local_4a1,local_4a0,local_49f,local_49e,local_49d,local_49c,local_49b,
                       local_49a,local_48b,local_48a,local_489,local_488,local_487,local_486,
                       local_485,local_484,local_483,local_482,local_481,local_480,local_47f,
                       local_470,local_46f,local_46e,local_46d,local_46c,local_46b,local_46a,
                       local_469,local_468,local_467,local_466,local_465,local_464,local_455,
                       local_454,local_453,local_44,local_40,local_450,local_44f,local_44e,local_44d
                       ,local_44c,local_44b,local_44a,local_449);
          }
          pcVar3 = "iwpriv %s set_mib ap_profile_add=\"%s\",%d,%s,";
          cVar8 = local_4eb;
          goto LAB_00446860;
        }
        if ((byte)(local_4eb - 3U) < 2) {
          (*(code *)PTR_sprintf_0046a808)(auStack_438,"%d,%s",local_4e9,local_38);
          pcVar3 = "iwpriv %s set_mib ap_profile_add=\"%s\",%d,0,%s";
          cVar8 = local_4eb;
          goto LAB_00446860;
        }
      }
      (*(code *)PTR_system_0046ab18)(auStack_2a8);
    }
    *(undefined4 *)PTR_vwlan_idx_0046a9b0 = local_3c;
    FUN_00444434();
  }
  uVar5 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"restartNow",&DAT_0044b32c);
  puVar2 = PTR_run_init_script_0046a844;
  if (*pcVar3 == '\0') {
    (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,uVar5);
  }
  else {
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    (*(code *)puVar2)(&DAT_0044d9f4);
    (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,uVar5);
    (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
    puVar2 = PTR_send_redirect_perm_0046ac78;
    *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
    (*(code *)puVar2)(param_1,"/countDownPage.htm");
    *(undefined4 *)PTR_needReboot_0046a9b4 = 0;
  }
  return;
}

