/* FUN_00423394 @ 00423394 */

/* WARNING: Removing unreachable block (ram,0x004294ec) */
/* WARNING: Removing unreachable block (ram,0x00424d74) */
/* WARNING: Removing unreachable block (ram,0x00424e84) */
/* WARNING: Removing unreachable block (ram,0x004262b0) */
/* WARNING: Removing unreachable block (ram,0x004292d4) */
/* WARNING: Removing unreachable block (ram,0x00429444) */
/* WARNING: Removing unreachable block (ram,0x00429400) */
/* WARNING: Removing unreachable block (ram,0x00429430) */
/* WARNING: Removing unreachable block (ram,0x00429360) */
/* WARNING: Removing unreachable block (ram,0x00426340) */
/* WARNING: Removing unreachable block (ram,0x00426228) */
/* WARNING: Removing unreachable block (ram,0x00424dfc) */
/* WARNING: Removing unreachable block (ram,0x00424cec) */
/* WARNING: Removing unreachable block (ram,0x004294bc) */
/* WARNING: Removing unreachable block (ram,0x00429500) */
/* WARNING: Removing unreachable block (ram,0x00423740) */
/* WARNING: Removing unreachable block (ram,0x00429388) */
/* WARNING: Removing unreachable block (ram,0x0042370c) */
/* WARNING: Removing unreachable block (ram,0x00423758) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00423394(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined *puVar11;
  short *psVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  code *pcVar20;
  uint uVar21;
  uint local_1280 [3];
  undefined1 auStack_1274 [4];
  char *local_1270;
  int local_126c;
  int local_1268;
  int local_1264;
  int local_1260;
  int local_125c;
  undefined1 auStack_1258 [4];
  int local_1254;
  uint local_1250;
  uint local_124c;
  int local_1248;
  int local_1244;
  undefined1 auStack_1240 [2];
  undefined1 local_123e;
  undefined1 local_123d;
  undefined1 local_123c;
  undefined1 local_123b;
  undefined1 local_123a;
  undefined1 local_1239;
  uint local_1230 [4];
  uint local_1220 [2];
  uint local_1218;
  ushort uStack_1216;
  undefined1 uStack_1211;
  uint local_1210 [9];
  undefined1 local_11ec;
  char local_11eb;
  undefined1 local_11e9;
  undefined1 local_11e8;
  undefined1 local_11e7;
  undefined1 local_11e6;
  undefined1 local_11e5;
  undefined1 local_11e4;
  undefined1 auStack_11e1 [33];
  uint local_11c0 [16];
  undefined1 auStack_1180 [104];
  undefined4 local_1118;
  undefined4 local_1114;
  undefined4 local_1110;
  undefined4 local_110c;
  undefined4 local_1098;
  undefined1 local_1094;
  undefined1 local_1093;
  int local_ea0;
  undefined2 local_e9c [2];
  int local_e98 [5];
  int local_e84;
  char cStack_e7f;
  undefined1 auStack_900 [56];
  undefined4 auStack_8c8 [15];
  short local_88c [18];
  short asStack_868 [1044];
  undefined1 *local_40;
  undefined1 *local_3c;
  uint *local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  
  local_1268 = -1;
  local_1210[8] = 0;
  local_1270 = (char *)0x0;
  local_126c = -1;
  local_1264 = 0;
  local_1210[4] = 0;
  local_1210[5] = 0;
  local_1210[6] = 0;
  local_1210[7] = 0;
  iVar13 = *param_3;
  if (iVar13 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Insufficient args\n",*(undefined4 *)PTR_stderr_0046a7f0);
    return 0xffffffff;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"device_name");
  if (iVar5 == 0) {
    local_2c = &local_1098;
    local_1098 = local_1098 & 0xffffff;
    iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xba,local_2c);
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlProfileSupport");
  if (iVar5 == 0) {
    (*(code *)PTR_strcpy_0046ac60)(&local_1098,"1");
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlProfile_checkbox");
  if (iVar5 == 0) {
    uVar6 = 0x844;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x834;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_1260);
    if (local_1260 != 1) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
      return uVar6;
    }
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"checked");
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlProfile_value");
  if (iVar5 == 0) {
    uVar6 = 0x844;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x834;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_1260);
    if (local_1260 != 1) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00450acc);
      return uVar6;
    }
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"1");
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlan_profile_num");
  if (iVar5 == 0) {
    uVar6 = 0x847;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x835;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_1260);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1260);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlEnableProfile");
  if (iVar5 == 0) {
    uVar6 = 0x844;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x834;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_1260);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1260);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"uptime");
  if (iVar5 == 0) {
    (*(code *)PTR_sysinfo_0046ab04)(local_11c0);
    uVar21 = (local_11c0[0] % 0x15180) % 0xe10;
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                      (param_1,"%dday:%dh:%dm:%ds",local_11c0[0] / 0x15180,
                       (local_11c0[0] % 0x15180) / 0xe10,uVar21 / 0x3c,uVar21 % 0x3c);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,&DAT_00450e6c);
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    iVar13 = (*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*(int *)(iVar13 + 0x14) + 0x76c);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"month");
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    iVar13 = (*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*(int *)(iVar13 + 0x10) + 1);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"day");
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    iVar13 = (*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*(undefined4 *)(iVar13 + 0xc));
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,&DAT_00450e7c);
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    iVar13 = (*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*(undefined4 *)(iVar13 + 8));
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"minute");
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    iVar13 = (*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*(undefined4 *)(iVar13 + 4));
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"second");
  if (iVar5 == 0) {
    (*(code *)PTR_time_0046a84c)(auStack_1274);
    puVar7 = (undefined4 *)(*(code *)PTR_localtime_0046a880)(auStack_1274);
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",*puVar7);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"clientnum");
  if (iVar5 == 0) {
    (*(code *)PTR_apmib_get_0046aadc)(0x16,local_1280 + 1);
    if (((local_1280[1] == 1) ||
        (iVar13 = (*(code *)PTR_check_wlan_downup_0046aa18)(*(undefined4 *)PTR_wlan_idx_0046a93c),
        iVar13 == 0)) ||
       (iVar13 = (*(code *)PTR_getWlStaNum_0046abb4)(PTR_WLAN_IF_0046a890,local_1280 + 1),
       iVar13 < 0)) {
      local_1280[1] = 0;
    }
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,&DAT_00450ea0);
  if (iVar5 == 0) {
    iVar13 = (*(code *)PTR_apmib_get_0046aadc)(1,&local_1098);
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    translate_control_code(&local_1098);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"channel");
  if (iVar5 == 0) {
    iVar13 = (*(code *)PTR_apmib_get_0046aadc)(2,local_1280 + 1);
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
    return uVar6;
  }
  iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,&DAT_00450eb0);
  if (iVar5 != 0) {
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wdsEncrypt");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x45,&local_1248);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      if (local_1248 == 0) {
        pcVar14 = "Disabled";
      }
      else if (local_1248 == 1) {
        pcVar14 = "WEP 64bits";
      }
      else if (local_1248 == 2) {
        pcVar14 = "WEP 128bits";
      }
      else if (local_1248 == 3) {
        pcVar14 = "TKIP";
      }
      else {
        if (local_1248 != 4) {
          local_1098 = local_1098 & 0xffffff;
          goto LAB_004240c0;
        }
        pcVar14 = "AES";
      }
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
LAB_004240c0:
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mesh_comment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f70);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mesh_comment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f8c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mesh_jscomment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450fa8);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mesh_jscomment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450fc0);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ip");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,local_1280)
      ;
      if (iVar13 == 0) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
        return uVar6;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mask");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,2,local_1280)
      ;
      if (iVar13 == 0) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
        return uVar6;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"gateway");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0xad,&local_1248);
      if (local_1248 != 2) {
        iVar13 = (*(code *)PTR_getDefaultRoute_0046a8e0)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0);
        if (iVar13 == 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      iVar13 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,local_1280)
      ;
      if (iVar13 == 0) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
        return uVar6;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ip-rom");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"mask-rom");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xab,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"gateway-rom");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xac,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"static_dhcp_onoff");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x124,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dhcp-current");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xad,local_1280 + 2);
      puVar11 = PTR_BRIDGE_IF_0046abe0;
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      if (local_1280[2] == 1) {
        iVar13 = (*(code *)PTR_isDhcpClientExist_0046a76c)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0);
        if ((iVar13 == 0) &&
           (iVar13 = (*(code *)PTR_getInAddr_0046ab50)(*(undefined4 *)puVar11,0,local_1280),
           iVar13 == 0)) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Getting IP from DHCP server...")
          ;
          return uVar6;
        }
        iVar13 = (*(code *)PTR_isDhcpClientExist_0046a76c)(*(undefined4 *)PTR_BRIDGE_IF_0046abe0);
        if (iVar13 != 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451008);
          return uVar6;
        }
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Fixed IP");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dhcpRangeStart");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xae,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dhcpRangeEnd");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xaf,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dhcpLeaseTime");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x3b1,local_1280 + 1);
      if (0x275f < local_1280[1] - 1) {
        local_1280[1] = 0x1e0;
        iVar13 = (*(code *)PTR_apmib_set_0046aa28)(0x3b1,local_1280 + 1);
        if (iVar13 == 0) {
          (*(code *)PTR_puts_0046ab3c)("set MIB_DHCP_LEASE_TIME error");
        }
        (*(code *)PTR_apmib_update_0046aa2c)(4);
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-dns1");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xb0,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-dns2");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xb1,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-dns3");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xb2,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ntpTimeZone");
    if (iVar5 == 0) {
      local_2c = &local_1098;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x99,local_2c);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ntpServerIp1");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x9a,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ntpServerIp2");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x9b,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan_access_type_s");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan_access_type_e");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ppp-idle");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x6c,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ppp-idle2");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x5e5,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ppp-idle3");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x5e7,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ppp-idle4");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x5e9,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F1_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5f9,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F1_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5fa,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F2_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5fb,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F2_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5fc,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F3_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5fd,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S1_F3_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5fe,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F1_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x600,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F1_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x601,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F2_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x602,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F2_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x603,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F3_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x604,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S2_F3_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x605,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F1_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x607,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F1_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x608,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F2_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x609,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F2_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x60a,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F3_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x60b,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S3_F3_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x60c,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F1_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x60e,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F1_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x60f,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F2_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x610,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F2_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x611,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F3_start");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x612,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"S4_F3_end");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x613,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppSubNet1");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x614,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppSubNet2");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x615,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppSubNet3");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x616,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppSubNet4");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x617,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppUserName2");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5dc,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppPassword2");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x5dd,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppUserName3");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5de,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppPassword3");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x5df,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppUserName4");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x5e0,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppPassword4");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x5e1,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppServiceName2");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x5e2,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppServiceName3");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x5e3,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppServiceName4");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      local_2c = &local_1098;
      (*(code *)PTR_apmib_get_0046aadc)(0x5e4,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppMtuSize2");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x5eb,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppMtuSize3");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x5ec,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppMtuSize4");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x5ed,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-pptp-idle");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1fe,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-l2tp-idle");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x152,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-USB3G-idle");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x57e,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_atoi_0046a73c)(&local_1098);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",iVar13 / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dmzHost");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x8d,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wanMac");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(100,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"%02x%02x%02x%02x%02x%02x",local_1098._0_1_,local_1098._1_1_,
                         local_1098 >> 8 & 0xff,local_1098 & 0xff,local_1094,local_1093);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"fixedIpMtuSize");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x9d,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dhcpMtuSize");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x9e,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"hwaddr");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getInAddr_0046ab50)
                         (*(undefined4 *)PTR_BRIDGE_IF_0046abe0,4,auStack_1240);
      if (iVar13 == 0) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450abc);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"%02x:%02x:%02x:%02x:%02x:%02x",local_123e,local_123d,local_123c,
                         local_123b,local_123a,local_1239);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bridgeMac");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x17,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"%02x%02x%02x%02x%02x%02x",local_1098._0_1_,local_1098._1_1_,
                         local_1098 >> 8 & 0xff,local_1098 & 0xff,local_1094,local_1093);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"fragThreshold");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rtsThreshold");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x13,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"beaconInterval");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x10,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ackTimeout");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2ae,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"dtimPeriod");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x3a,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"fwVersion");
    if (iVar5 == 0) {
      local_1220[0] = 0;
      local_1220[1] = 0;
      local_1218 = 0;
      local_1210[0] = 0;
      local_1210[1] = 0;
      local_1210[2] = 0;
      local_1210[3] = 0;
      iVar13 = (*(code *)PTR_fopen_0046a894)("/etc/customize.version","r");
      if (iVar13 != 0) {
        (*(code *)PTR_fgets_0046ab78)(local_1210,0x10,iVar13);
        iVar5 = (*(code *)PTR_strlen_0046a714)(local_1210);
        (&uStack_1211)[iVar5] = 0;
        (*(code *)PTR_fclose_0046a85c)(iVar13);
      }
      iVar13 = (*(code *)PTR_fopen_0046a894)("/etc/svn.version","r");
      if (iVar13 != 0) {
        (*(code *)PTR_fgets_0046ab78)(local_1220,0xc,iVar13);
        (*(code *)PTR_fclose_0046a85c)(iVar13);
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%s-%s",local_1210,local_1220);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"buildTime");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_fopen_0046a894)("/proc/version","r");
      if (iVar13 == 0) {
        (*(code *)PTR_fputs_0046a6e4)
                  ("Read /proc/version failed!\n",*(undefined4 *)PTR_stderr_0046a7f0);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Unknown");
        return uVar6;
      }
      (*(code *)PTR_fgets_0046ab78)(&local_1098,500,iVar13);
      (*(code *)PTR_fclose_0046a85c)(iVar13);
      iVar13 = (*(code *)PTR_regcomp_0046a898)(local_11c0,"#[0-9][0-9]* \\(.*\\)$",0);
      if (iVar13 == 0) {
        local_2c = (uint *)(*(code *)PTR_regexec_0046a850)(local_11c0,&local_1098,2,local_1210,0);
        (*(code *)PTR_regfree_0046a6f8)(local_11c0);
        if ((local_2c == (uint *)0x0) && (-1 < (int)local_1210[2])) {
          *(undefined1 *)((int)&local_1098 + local_1210[3]) = 0;
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,(int)&local_1098 + local_1210[2])
          ;
          return uVar6;
        }
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Unknown");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lanTxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN_IF_0046a82c,&local_1118);
      if (iVar13 < 0) {
        local_110c = 0;
        local_1110 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lanRxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN_IF_0046a82c,&local_1118);
      if (iVar13 < 0) {
        local_1114 = 0;
        local_1118 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan2TxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN2_IF_0046a744,&local_1118);
      if (iVar13 < 0) {
        local_110c = 0;
        local_1110 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan2RxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN2_IF_0046a744,&local_1118);
      if (iVar13 < 0) {
        local_1114 = 0;
        local_1118 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan3TxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN3_IF_0046a83c,&local_1118);
      if (iVar13 < 0) {
        local_110c = 0;
        local_1110 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan3RxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN3_IF_0046a83c,&local_1118);
      if (iVar13 < 0) {
        local_1114 = 0;
        local_1118 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan4TxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN4_IF_0046a7dc,&local_1118);
      if (iVar13 < 0) {
        local_110c = 0;
        local_1110 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lan4RxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(*(undefined4 *)PTR_ELAN4_IF_0046a7dc,&local_1118);
      if (iVar13 < 0) {
        local_1114 = 0;
        local_1118 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanTxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(PTR_WLAN_IF_0046a890,&local_1118);
      if (iVar13 < 0) {
        local_110c = 0;
        local_1110 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanRxPacketNum");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getStats_0046a914)(PTR_WLAN_IF_0046a890,&local_1118);
      if (iVar13 < 0) {
        local_1114 = 0;
        local_1118 = 0;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bssid");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x16,local_1280 + 1);
      if ((local_1280[1] == 0) &&
         (iVar13 = (*(code *)PTR_getInAddr_0046ab50)(PTR_WLAN_IF_0046a890,4,auStack_1240),
         iVar13 != 0)) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                          (param_1,"%02x:%02x:%02x:%02x:%02x:%02x",local_123e,local_123d,local_123c,
                           local_123b,local_123a,local_1239);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450abc);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bssid_drv");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,&local_11ec);
      if (iVar13 < 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"%02x:%02x:%02x:%02x:%02x:%02x",local_11e9,local_11e8,local_11e7,
                         local_11e6,local_11e5,local_11e4);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ssid_drv");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,&local_11ec);
      if (iVar13 < 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_memcpy_0046ab5c)(&local_1098,auStack_11e1,0x21);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"state_drv");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,&local_11ec);
      if (-1 < iVar13) {
        pcVar14 = (char *)0x0;
        switch(local_11ec) {
        case 0:
          pcVar14 = "Disabled";
          break;
        case 1:
          pcVar14 = "Idle";
          break;
        case 2:
          pcVar14 = "Scanning";
          break;
        case 3:
          pcVar14 = "Started";
          break;
        case 4:
          pcVar14 = "Connected";
          break;
        case 5:
          pcVar14 = "Waiting for keys";
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
        return uVar6;
      }
      return 0xffffffff;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"channel_drv");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,&local_11ec);
      if (-1 < iVar13) {
        if (local_11eb == '\0') {
          (*(code *)PTR_strcpy_0046ac60)(&local_1098,&DAT_00450acc);
        }
        else {
          (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d");
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
        return uVar6;
      }
      return 0xffffffff;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ip-rom");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x65,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-mask-rom");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x66,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-gateway-rom");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x67,&local_1098);
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"0.0.0.0");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppUserName");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x6a,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppPassword");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x6b,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpIp");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x91,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpDefGw");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x154,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpSubnet");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x92,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpServerIp");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x93,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpServerDomain");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x156,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpMtuSize");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0);
      (*(code *)PTR_apmib_get_0046aadc)(0x96,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpUserName",500);
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x94,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptpPassword");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x95,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpIp");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x14b,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpSubnet");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x14c,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpDefGw");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x153,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpServerDomain");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(500,&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpServerIp");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x14d,&local_1098);
      uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpMtuSize");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0);
      (*(code *)PTR_apmib_get_0046aadc)(0x150,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpUserName",500);
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x14e,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tpPassword");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x14f,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3G_PIN");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x57a,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3G_APN");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x57b,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3G_DIALNUM");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x57c,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3G_USER");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x578,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3G_PASS");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x579,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"USB3GMtuSize");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      (*(code *)PTR_apmib_get_0046aadc)(0x57f,&local_1098);
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppServiceName");
    local_2c = &local_1098;
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x105,local_2c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pppMtuSize");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x90,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wizard_menu_onoff");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "menu.addItem(\'Setup Wizard\', \'wizard.htm\', \'\', \'Setup Wizard\');");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"opmode_menu_onoff");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "menu.addItem(\'Operation Mode\', \'opmode.htm\', \'\', \'Operation Mode\');"
                        );
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"qos_root_menu");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"menu.addItem(\'QoS\', \'ip_qos.htm\', \'\', \'Setup QoS\');");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"route_menu_onoff");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"snmp_menu");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ddns_menu");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wanDhcp-current");
    if (iVar5 == 0) {
      iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_126c);
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_1264);
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      iVar5 = (*(code *)PTR_apmib_get_0046aadc)(0x68,local_1280 + 2);
      if (iVar5 == 0) {
        return 0xffffffff;
      }
      iVar5 = 0;
      if (local_126c != 2) {
        iVar5 = (*(code *)PTR_getWanLink_0046a6e0)(&DAT_0044bfdc);
      }
      if (local_1280[2] == 1) {
        if (local_126c == 2) {
          if (local_1264 == 0) {
            local_1270 = "wlan0";
          }
          else if (local_1264 == 1) {
            local_1270 = "wlan1";
          }
          iVar13 = (*(code *)PTR_getWispRptIface_0046ab28)(&local_1270,local_1264);
          if (iVar13 < 0) {
            return 0xffffffff;
          }
        }
        else {
          local_1270 = *(char **)PTR_WAN_IF_0046a74c;
        }
        iVar13 = (*(code *)PTR_isDhcpClientExist_0046a76c)(local_1270);
        if (iVar13 == 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Getting IP from DHCP server...")
          ;
          return uVar6;
        }
        if (-1 < iVar5) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451008);
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Getting IP from DHCP server...");
        return uVar6;
      }
      if (local_1280[2] == 0) {
        if (-1 < iVar5) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Fixed IP Connected");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"Fixed IP Disconnected");
        return uVar6;
      }
      if (local_1280[2] == 3) {
        iVar13 = isConnectPPP();
        if (iVar13 == 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPPoE Disconnected");
          return uVar6;
        }
        if (-1 < iVar5) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPPoE Connected");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPPoE Disconnected");
        return uVar6;
      }
      if (local_1280[2] == 4) {
        iVar13 = isConnectPPP();
        if (iVar13 == 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPTP Disconnected");
          return uVar6;
        }
        if (-1 < iVar5) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPTP Connected");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"PPTP Disconnected");
        return uVar6;
      }
      if (local_1280[2] == 6) {
        iVar13 = isConnectPPP();
        if (iVar13 == 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"L2TP Disconnected");
          return uVar6;
        }
        if (-1 < iVar5) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"L2TP Connected");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"L2TP Disconnected");
        return uVar6;
      }
      if (local_1280[2] == 0x10) {
        iVar5 = 0;
        iVar13 = isConnectPPP();
        if (iVar13 != 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"USB3G Connected");
          return uVar6;
        }
        do {
          iVar13 = (*(code *)PTR_fopen_0046a894)("/var/usb3g.stat","r");
          if (iVar13 != 0) {
            (*(code *)PTR_fgets_0046ab78)(local_11c0,0x20,iVar13);
            (*(code *)PTR_fclose_0046a85c)(iVar13);
            break;
          }
          bVar1 = iVar5 != 5;
          iVar5 = iVar5 + 1;
        } while (bVar1);
        iVar13 = (*(code *)PTR_strstr_0046a940)(local_11c0,&DAT_00450940);
        if (iVar13 != 0) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"USB3G Modem Initializing...");
          return uVar6;
        }
        iVar13 = (*(code *)PTR_strstr_0046a940)(local_11c0,&DAT_004515d0);
        if (iVar13 == 0) {
          iVar13 = (*(code *)PTR_strstr_0046a940)(local_11c0,"remove");
          if (iVar13 == 0) {
            uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"USB3G Disconnected");
            return uVar6;
          }
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"USB3G Removed");
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,"USB3G Dialing...");
        return uVar6;
      }
LAB_00428614:
      puVar11 = PTR_wlan_num_0046a8f0;
      iVar5 = 0;
      do {
        iVar17 = iVar5;
        if (*(int *)puVar11 <= iVar17) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"wlan%d-status",iVar17);
        iVar8 = (*(code *)PTR_strcmp_0046a824)(iVar13,&local_1098);
        puVar4 = PTR_WLAN_IF_0046a890;
        puVar3 = PTR_sprintf_0046a808;
        iVar5 = iVar17 + 1;
      } while (iVar8 != 0);
      *(int *)PTR_wlan_idx_0046a93c = iVar17;
      (*(code *)puVar3)(puVar4,"wlan%d",iVar17);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-ip");
    if (iVar5 == 0) {
      (*(code *)PTR_getWanInfo_0046aa88)(local_1210,local_1220,local_1230,auStack_1180);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_1210);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-mask");
    if (iVar5 == 0) {
      (*(code *)PTR_getWanInfo_0046aa88)(local_1230,local_1220,local_1210,auStack_1180);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_1220);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-gateway");
    if (iVar5 == 0) {
      (*(code *)PTR_getWanInfo_0046aa88)(local_1210,local_1220,local_1230,auStack_1180);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_1230);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wan-hwaddr");
    if (iVar5 == 0) {
      (*(code *)PTR_getWanInfo_0046aa88)(local_1230,local_1220,local_1210,auStack_1180);
      (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_1248);
      if (local_1248 != 0x10) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,auStack_1180);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wanTxPacketNum");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_1268);
      (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_126c);
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_1264);
      if (iVar13 != 0) {
        if (local_126c == 2) {
          if (local_1264 == 0) {
            local_1270 = "wlan0";
          }
          else if (local_1264 == 1) {
            local_1270 = "wlan1";
          }
        }
        else {
          puVar7 = (undefined4 *)PTR_WAN_IF_0046a74c;
          if (local_1268 == 0x10) {
            puVar7 = (undefined4 *)PTR_PPPOE_IF_0046a780;
          }
          local_1270 = (char *)*puVar7;
        }
        iVar13 = (*(code *)PTR_getStats_0046a914)(local_1270,&local_1118);
        if (iVar13 < 0) {
          local_110c = 0;
          local_1110 = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      return 0xffffffff;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wanRxPacketNum");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x68,&local_1268);
      (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_126c);
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xc1,&local_1264);
      if (iVar13 != 0) {
        if (local_126c == 2) {
          if (local_1264 == 0) {
            local_1270 = "wlan0";
          }
          else if (local_1264 == 1) {
            local_1270 = "wlan1";
          }
        }
        else {
          puVar7 = (undefined4 *)PTR_WAN_IF_0046a74c;
          if (local_1268 == 0x10) {
            puVar7 = (undefined4 *)PTR_PPPOE_IF_0046a780;
          }
          local_1270 = (char *)*puVar7;
        }
        iVar13 = (*(code *)PTR_getStats_0046a914)(local_1270,&local_1118);
        if (iVar13 < 0) {
          local_1114 = 0;
          local_1118 = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      return 0xffffffff;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_Mode_countdown");
    if (iVar5 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,&DAT_00450acc);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"countDownTime_wait");
    if (iVar5 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,"1");
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptp_comment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f70);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pptp_comment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f8c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tp_comment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f70);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"l2tp_comment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00450f8c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"usb3g_comment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"usb3g_comment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"usb3g_jscomment_start");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"usb3g_jscomment_end");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rsCertInstall");
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"eapUserId");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"radiusUserName");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"radiusUserPass");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"radiusUserCertPass");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,&DAT_00451788);
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x20,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rsPort");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x21,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rsPassword");
    if (iVar5 == 0) {
      local_2c = &local_1098;
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x22,local_2c);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accountRsIp");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x28,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
      if (iVar13 != 0) {
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accountRsPort");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x29,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accountRsPassword");
    if (iVar5 == 0) {
      local_2c = &local_1098;
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2a,local_2c);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"groupRekeyTime");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"groupRekeyTimeDay");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",(int)local_1280[1] / 0x15180);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"groupRekeyTimeHr");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",((int)local_1280[1] % 0x15180) / 0xe10);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"groupRekeyTimeMin");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)
                (&local_1098,"%d",(((int)local_1280[1] % 0x15180) % 0xe10) / 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"groupRekeyTimeSec");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)
                (&local_1098,"%d",(((int)local_1280[1] % 0x15180) % 0xe10) % 0x3c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pskValue");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1e,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pskValueUnmask");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1e,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wps_key");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x113,local_1280 + 1);
      local_1098 = local_1098 & 0xffffff;
      if (local_1280[1] == 2) {
        (*(code *)PTR_apmib_get_0046aadc)(3,local_1280 + 1);
        (*(code *)PTR_apmib_get_0046aadc)(0xd,&local_1248);
        if (local_1280[1] == 1) {
          if (local_1248 == 0) {
            local_1248 = 4;
          }
          else if (local_1248 == 1) {
            local_1248 = 5;
          }
          else if (local_1248 == 2) {
            local_1248 = 6;
          }
          else {
            local_1248 = 7;
          }
          (*(code *)PTR_apmib_get_0046aadc)(local_1248,auStack_1180);
          uVar6 = 5;
        }
        else {
          if (local_1248 == 0) {
            local_1248 = 8;
          }
          else if (local_1248 == 1) {
            local_1248 = 9;
          }
          else if (local_1248 == 2) {
            local_1248 = 10;
          }
          else {
            local_1248 = 0xb;
          }
          (*(code *)PTR_apmib_get_0046aadc)(local_1248,auStack_1180);
          uVar6 = 0xd;
        }
        FUN_0042318c(auStack_1180,uVar6,&local_1098);
      }
      else {
        puVar7 = &local_1098;
        if (local_1280[1] < 2) {
          puVar9 = puVar7;
          puVar7 = (undefined4 *)&DAT_00451858;
          pcVar20 = (code *)PTR_strcpy_0046ac60;
        }
        else {
          puVar9 = (undefined4 *)0x115;
          pcVar20 = (code *)PTR_apmib_get_0046aadc;
        }
        (*pcVar20)(puVar9,puVar7);
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wpsRpt_key");
    if (iVar5 == 0) {
      (*(code *)PTR_memset_0046a87c)(&local_1098,0,500);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wdsPskValue");
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x49,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      translate_control_code(&local_1098);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accountRsUpdateDelay");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2c,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rsInterval");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2f,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accountRsInterval");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x31,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"userName");
    if (iVar5 == 0) {
      local_2c = &local_1098;
      local_1098 = local_1098 & 0xffffff;
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xb6,local_2c);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"last_url");
    if (iVar5 == 0) {
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,PTR_last_url_0046aac0);
      return 0;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wscLoocalPin");
    local_2c = &local_1098;
    if (iVar5 == 0) {
      local_1098 = local_1098 & 0xffffff;
      (*(code *)PTR_apmib_get_0046aadc)(0x111,local_2c);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"powerConsumption_menu");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ip_filter");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "firewall.addItem(\'IP Filtering\', \'ipfilter.htm\', \'\', \'Setup IP filering\');"
                        );
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"port_filter");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,
                         "firewall.addItem(\'Port Filtering\', \'portfilter.htm\', \'\', \'Setup port filer\');"
                        );
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"is_ulinker");
    if (iVar5 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,&DAT_00450acc);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"is_wan_link");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_getWanLink_0046a6e0)(&DAT_0044bfdc);
      if (iVar13 < 0) {
        pcVar14 = "0";
      }
      else {
        pcVar14 = "1";
      }
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"isPocketRouter");
    if (iVar5 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,&DAT_00450acc);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_Mode");
    if (iVar5 == 0) {
      (*(code *)PTR_strcpy_0046ac60)(&local_1098,&DAT_00450acc);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ddnsDomainName");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xbd,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ddnsUser");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xbe,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ddnsPassword");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xbf,&local_1098);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"maxWebVlanNum");
    if (iVar5 == 0) {
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",0xf);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"vlanOnOff");
    if (iVar5 == 0) {
      (*(code *)PTR_apmib_get_0046aadc)(0x268,local_1280 + 1);
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"vlan_menu_onoff");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,"firewall.addItem(\'VLAN\', \'vlan.htm\', \'\', \'Setup VLAN\');");
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"vlan_wan_menu_onoff");
    if (iVar5 == 0) {
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanMode");
    if (iVar5 == 0) {
      iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,local_1280 + 1);
      if (iVar13 == 0) {
        return 0xffffffff;
      }
      (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
      uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
      return uVar6;
    }
    iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanModeByStr");
    if (iVar5 != 0) {
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"qosEnabled");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x133,local_1280 + 1);
        if (iVar13 != 0) {
          if (local_1280[1] == 0) {
            pcVar14 = "false";
          }
          else {
            pcVar14 = "true";
          }
          (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
          return uVar6;
        }
        return 0xffffffff;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"qosAutoUplinkSpeed");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x134,local_1280 + 1);
        if (iVar13 != 0) {
          if (local_1280[1] == 0) {
            pcVar14 = "false";
          }
          else {
            pcVar14 = "true";
          }
          (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
          return uVar6;
        }
        return 0xffffffff;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"qosManualUplinkSpeed");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x135,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"qosManualDownlinkSpeed");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x28c,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"syssynFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe6,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"sysfinFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe7,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"sysudpFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe8,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"sysicmpFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe9,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pipsynFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xea,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pipfinFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xeb,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pipudpFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xec,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pipicmpFlood");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xed,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"blockTime");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xee,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"hostName");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xc5,&local_1098);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rtLogServer");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xe4,&local_1098);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        iVar13 = (*(code *)PTR_memcmp_0046a8d0)(&local_1098,&DAT_00452d90,4);
        if (iVar13 != 0) {
          uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"domainName");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0xc6,&local_1098);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"repeaterSSID");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          local_1280[1] = 0xfb;
        }
        else {
          local_1280[1] = 0xfd;
        }
        (*(code *)PTR_apmib_get_0046aadc)(local_1280[1],&local_1098);
        translate_control_code(&local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"repeaterState");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        (*(code *)PTR_getWlBssInfo_0046a754)(&local_1098,&local_11ec);
        pcVar14 = (char *)0x0;
        switch(local_11ec) {
        case 0:
          pcVar14 = "Disabled";
          break;
        case 1:
          pcVar14 = "Idle";
          break;
        case 2:
          pcVar14 = "Scanning";
          break;
        case 3:
          pcVar14 = "Started";
          break;
        case 4:
          pcVar14 = "Connected";
          break;
        case 5:
          pcVar14 = "Waiting for keys";
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"repeaterClientnum");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        iVar13 = (*(code *)PTR_getWlStaNum_0046abb4)(&local_1098,local_1280 + 1);
        if (iVar13 < 0) {
          local_1280[1] = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"repeaterSSID_drv");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        (*(code *)PTR_getWlBssInfo_0046a754)(&local_1098,&local_11ec);
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,auStack_11e1);
        translate_control_code(&local_1098);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"repeaterBSSID");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        (*(code *)PTR_getWlBssInfo_0046a754)(&local_1098,&local_11ec);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)
                          (param_1,"%02x:%02x:%02x:%02x:%02x:%02x",local_11e9,local_11e8,local_11e7,
                           local_11e6,local_11e5,local_11e4);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanRepeaterTxPacketNum");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        iVar13 = (*(code *)PTR_getStats_0046a914)(&local_1098,&local_1118);
        if (iVar13 < 0) {
          local_110c = 0;
          local_1110 = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_110c);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanRepeaterRxPacketNum");
      if (iVar5 == 0) {
        if (*(int *)PTR_wlan_idx_0046a93c == 0) {
          pcVar14 = "wlan0-vxd";
        }
        else {
          pcVar14 = "wlan1-vxd";
        }
        (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
        iVar13 = (*(code *)PTR_getStats_0046a914)(&local_1098,&local_1118);
        if (iVar13 < 0) {
          local_1114 = 0;
          local_1118 = 0;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1114);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strncmp_0046a918)(iVar13,"voip_",5);
      if ((((iVar5 == 0) || (iVar5 = (*(code *)PTR_strncmp_0046a918)(iVar13,"IPv6_",5), iVar5 == 0))
          || (iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"cwmp_tr069_menu"), iVar5 == 0)) ||
         ((iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"tr069_nojs_menu"), iVar5 == 0 ||
          (iVar5 = (*(code *)PTR_strncmp_0046a918)(iVar13,&DAT_00451c38,4), iVar5 == 0)))) {
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wapiLocalAsSupport");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"false");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wapiLocalAsOption");
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wapiLocalAsCertsUploadForm");
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bt_enabled");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2ad,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"torrents");
      piVar19 = &local_ea0;
      if (iVar5 == 0) {
        (*(code *)PTR_memset_0046a87c)(piVar19,0,0x280);
        (*(code *)PTR_memset_0046a87c)(auStack_900,0,0x8c0);
        local_34 = (*(code *)PTR_bt_getTorrents_0046a7bc)(piVar19,0x14);
        local_30 = (*(code *)PTR_bt_getClientsInfo_0046a9d4)(auStack_900,10);
        if (local_34 == 0) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451c9c);
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451ca0);
        iVar13 = 0;
        piVar15 = piVar19;
        do {
          if (local_34 <= iVar13) {
            (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
            for (iVar13 = 0; iVar5 = 0, iVar13 < local_34; iVar13 = iVar13 + 1) {
              if (*piVar19 != 0) {
                (*(code *)PTR_free_0046a680)();
              }
              piVar19 = piVar19 + 8;
            }
            psVar12 = local_88c;
            for (; iVar5 < local_30; iVar5 = iVar5 + 1) {
              if (*psVar12 != 0) {
                if (*(int *)(psVar12 + -6) != 0) {
                  (*(code *)PTR_free_0046a680)();
                }
                if (*(int *)(psVar12 + -2) != 0) {
                  (*(code *)PTR_free_0046a680)();
                }
              }
              psVar12 = psVar12 + 0x70;
            }
            return 0;
          }
          if (iVar13 == 0) {
            puVar11 = &DAT_00451ca0;
          }
          else {
            puVar11 = &DAT_00451ca4;
          }
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,puVar11);
          sVar2 = *(short *)(piVar15 + 1);
          if (sVar2 == 0) {
            (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451ca8,*piVar15);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'","Not Running");
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",&DAT_00451858);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",piVar15[7]);
            puVar16 = (undefined1 *)piVar15[2];
LAB_0042b2d4:
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",puVar16);
          }
          else {
            if (sVar2 == 1) {
              (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451ca8,*piVar15);
              if (local_30 == 0) {
LAB_0042b058:
                iVar5 = piVar15[2];
              }
              else {
                iVar5 = piVar15[2];
                if (iVar5 != -1) {
                  if (asStack_868[iVar5 * 0x70] == 0) {
                    pcVar14 = "Running";
                  }
                  else {
                    pcVar14 = "Paused";
                  }
                  (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",pcVar14);
                  goto LAB_0042b058;
                }
              }
              local_40 = (undefined1 *)iVar5;
              local_38 = local_1280;
              local_3c = auStack_1180;
              puVar18 = local_1280 + iVar5 * 0x38;
              (*(code *)PTR_sprintf_0046a808)
                        (local_11c0,&DAT_00451cd4,auStack_8c8[iVar5 * 0x38],
                         auStack_8c8[iVar5 * 0x38 + 1]);
              pcVar14 = ",\'%s\'";
LAB_0042b144:
              (*(code *)PTR_req_format_write_0046a95c)(param_1,pcVar14,local_11c0);
              iVar5 = (int)local_40 * 7 + 1;
              (*(code *)PTR_sprintf_0046a808)
                        (local_11c0,&DAT_00451cd4,local_38[iVar5 * 8 + 0x260],
                         local_38[iVar5 * 8 + 0x261]);
              (*(code *)PTR_sprintf_0046a808)(local_3c,&DAT_00451cd4,puVar18[0x26a],puVar18[0x26b]);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s/%s\'",local_11c0,local_3c);
              (*(code *)PTR_sprintf_0046a808)(local_11c0,&DAT_0044acdc,puVar18[0x260]);
              (*(code *)PTR_sprintf_0046a808)(local_3c,&DAT_0044acdc,puVar18[0x261]);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s/%s\'",local_11c0,local_3c);
              (*(code *)PTR_sprintf_0046a808)
                        (local_11c0,&DAT_00451cd4,puVar18[0x276],puVar18[0x277]);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",local_11c0);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",puVar18[0x266]);
              (*(code *)PTR_req_format_write_0046a95c)
                        (param_1,",\'%d\'",local_38[((int)local_40 * 0xe + 1) * 4 + 0x261]);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",piVar15[7]);
              puVar16 = local_40;
              goto LAB_0042b2d4;
            }
            if (sVar2 == 2) {
              (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451ca8,*piVar15);
              (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'","Paused");
              local_40 = (undefined1 *)piVar15[2];
              local_38 = local_1280;
              local_3c = auStack_1180;
              puVar18 = local_1280 + (int)local_40 * 0x38;
              (*(code *)PTR_sprintf_0046a808)
                        (local_11c0,&DAT_00451cd4,auStack_8c8[(int)local_40 * 0x38],
                         auStack_8c8[(int)local_40 * 0x38 + 1]);
              pcVar14 = ",\'%s";
              goto LAB_0042b144;
            }
          }
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
          iVar13 = iVar13 + 1;
          piVar15 = piVar15 + 8;
        } while( true );
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"btfiles");
      if (iVar5 == 0) {
        (*(code *)PTR_memset_0046a87c)(&local_ea0,0,0x5a0);
        iVar13 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ctorrent",&DAT_0044b32c);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        uVar6 = (*(code *)PTR_atoi_0046a73c)(iVar13);
        iVar13 = (*(code *)PTR_bt_getDetails_0046aae8)(uVar6,&local_ea0,0x1e);
        if (iVar13 != 0) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451ca0);
          local_40 = auStack_1180;
          puVar7 = (undefined4 *)&stack0xfffff180;
          for (iVar5 = 0; iVar5 < iVar13; iVar5 = iVar5 + 1) {
            if (iVar5 == 0) {
              puVar11 = &DAT_00451ca0;
            }
            else {
              puVar11 = &DAT_00451ca4;
            }
            (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,puVar11);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_00451ca8,*puVar7);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",puVar7[-8]);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",*(undefined2 *)(puVar7 + 1));
            (*(code *)PTR_sprintf_0046a808)(local_40,&DAT_00451cd4,puVar7[-2],puVar7[-1]);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%s\'",local_40);
            puVar9 = puVar7 + -7;
            puVar7 = puVar7 + 0xc;
            (*(code *)PTR_req_format_write_0046a95c)(param_1,",\'%d\'",*puVar9);
            (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
          }
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
          for (iVar5 = 0; iVar5 < iVar13; iVar5 = iVar5 + 1) {
            if (*(int *)(&stack0xfffff180 + iVar13 * 0x30) != 0) {
              (*(code *)PTR_free_0046a680)();
            }
          }
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451c9c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"btclientindex");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"ctorrent",&DAT_0044b32c);
        if (iVar13 == 0) {
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,iVar13);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bt_status");
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"bt_limits");
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"BTDDir");
      if (iVar5 == 0) {
        local_2c = &local_1098;
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2a9,local_2c);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"BTUDir");
      if (iVar5 == 0) {
        local_2c = &local_1098;
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2a8,local_2c);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"BTdlimit");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2ab,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"BTulimit");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2aa,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"BTrefreshtime");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x2ac,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rtl_bt_menu");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,&DAT_0045093c,
                   "manage.addItem(\"BT Client\", \"bt.htm\", \"\", \"BT Client\");");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"countDownTime");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",countDownTime);
        countDownTime = 0x14;
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"okMsg");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,okMsg);
        (*(code *)PTR_memset_0046a87c)(okMsg,0,300);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"lastUrl");
      if (iVar5 == 0) {
        if (lastUrl == '\0') {
          pcVar14 = "/wizard.htm";
        }
        else {
          pcVar14 = &lastUrl;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
        (*(code *)PTR_memset_0046a87c)(&lastUrl,0,100);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"status_warning");
      if (iVar5 == 0) {
        if (needReboot != 1) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,&DAT_0045093c,
                   "<tr><td></td></tr><tr><td><font size=2><font color=\'#FF0000\'>  \t\t\t\t\t\t\t\t\t\t\t\t\t\t\tBelow status shows currnt settings, but does not take effect. \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t</font></td></tr>"
                  );
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlan_onoff_tkip");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x294,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_tkip_comment_start");
      if (iVar5 == 0) {
        local_1248 = 0;
        (*(code *)PTR_apmib_get_0046aadc)(0x294,local_1280 + 1);
        (*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_1248);
        if ((local_1280[1] == 0) && (7 < local_1248)) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00450f70);
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_tkip_comment_end");
      if (iVar5 == 0) {
        local_1248 = 0;
        (*(code *)PTR_apmib_get_0046aadc)(0x294,local_1280 + 1);
        (*(code *)PTR_apmib_get_0046aadc)(0x4a,&local_1248);
        if ((local_1280[1] == 0) && (7 < local_1248)) {
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00450f8c);
          return 0;
        }
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlanband");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x4a,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"opMode");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_html_wan_hide_s");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_html_wan_hide_e");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_html_lan_hide_s");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"pocketRouter_html_lan_hide_e");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlan_xTxR");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_getWLAN_ChipVersion_0046a688)();
        if (iVar13 == 1) {
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451f64);
          return uVar6;
        }
        if (iVar13 != 2) {
          if (iVar13 != 4) {
            uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451f6c);
            return uVar6;
          }
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451f68);
          return uVar6;
        }
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451f68);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"ip-lan");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_getInAddr_0046ab50)
                           (*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,local_1280);
        if (iVar13 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1098);
          uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
          return uVar6;
        }
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"redirect_ip");
      if (iVar5 == 0) {
        local_1248 = 0;
        (*(code *)PTR_apmib_get_0046aadc)(0xc2,&local_1248);
        if (local_1248 != 1) {
          (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1098);
          uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
          return uVar6;
        }
        (*(code *)PTR_getWanInfo_0046aa88)(auStack_1180,&local_ea0,auStack_900,local_11c0);
        (*(code *)PTR_inet_aton_0046a89c)(auStack_1180,local_1210);
        (*(code *)PTR_inet_aton_0046a89c)(&local_ea0,local_1230);
        (*(code *)PTR_inet_aton_0046a89c)(param_1 + 0x4bd,local_1220);
        (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1250);
        (*(code *)PTR_apmib_get_0046aadc)(0xab,&local_124c);
        if (((local_1220[0] ^ local_1250) & local_124c) != 0) {
          uVar21 = 0xffffff00;
          if (local_1230[0] < 0xffffff01) {
            uVar21 = local_1230[0];
          }
          if ((uVar21 & (local_1210[0] ^ local_1220[0])) != 0) {
            (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1098);
            uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
            uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
            return uVar6;
          }
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,auStack_1180);
          return uVar6;
        }
        iVar13 = (*(code *)PTR_getInAddr_0046ab50)
                           (*(undefined4 *)PTR_BRIDGE_IF_0046abe0,0,local_1280);
        if (iVar13 == 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0xaa,&local_1098);
          uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1098);
          uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
          return uVar6;
        }
        uVar6 = (*(code *)PTR_inet_ntoa_0046a854)(local_1280[0]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,uVar6);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"accessFromWan");
      if (iVar5 == 0) {
        local_1248 = 0;
        local_1244 = 0;
        (*(code *)PTR_apmib_get_0046aadc)(0xc2,&local_1248);
        (*(code *)PTR_apmib_get_0046aadc)(0xc0,&local_1244);
        if ((local_1248 == 1) && (local_1244 != 1)) {
          (*(code *)PTR_getWanInfo_0046aa88)(auStack_900,&local_ea0,auStack_1180,local_11c0);
          (*(code *)PTR_inet_aton_0046a89c)(param_1 + 0x4bd,local_1230);
          (*(code *)PTR_inet_aton_0046a89c)(auStack_900,local_1210);
          (*(code *)PTR_inet_aton_0046a89c)(&local_ea0,local_1220);
          uVar21 = 0xffffff00;
          if (local_1220[0] < 0xffffff01) {
            uVar21 = local_1220[0];
          }
          if ((uVar21 & (local_1210[0] ^ local_1230[0])) != 0) {
            local_1248 = 0;
          }
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1248);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"maxWebWlSchNum");
      if (iVar5 == 0) {
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",10);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlsch_onoff");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x1f7,local_1280 + 1);
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_dual_firmware_start");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_dual_firmware_end");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_0044b32c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"enable_dualFw");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x514,local_1280 + 1);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d",local_1280[1]);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"currFwBank");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x514,local_1280 + 1);
        (*(code *)PTR_get_bank_info_0046a7ec)(local_1280[1],&local_1244,&local_1248);
        local_1280[1] = local_1244;
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"backFwBank");
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x514,local_1280 + 1);
        (*(code *)PTR_get_bank_info_0046a7ec)(local_1280[1],&local_1248,&local_1244);
        local_1280[1] = local_1244;
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"%d");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"wlan_bandMode_menu_onoff");
      if (iVar5 == 0) {
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0044b32c);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_dmdphy_comment_start");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00450f70);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"single_band");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)
                  (param_1,&DAT_0045093c,
                   "<input type=\"radio\" value=\"3\" name=\"wlBandMode\" onClick=\"\" ></input>");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"onoff_dmdphy_comment_end");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00450f8c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"initpage");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"wizard.htm");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"homepage");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,"home.htm");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"info_country");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451ca0);
        puVar7 = &DAT_00468af4;
        iVar13 = 0;
        do {
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"[%d,\'%s\',%d,%d,\'%s\'",*puVar7,&DAT_00468af8 + iVar13 * 0x24,
                     *(undefined1 *)((int)puVar7 + 7),*(undefined1 *)(puVar7 + 2),
                     s_ALBANIA_00468afd + iVar13 * 0x24);
          pcVar14 = "]";
          if (iVar13 != 99) {
            pcVar14 = "],";
          }
          iVar13 = iVar13 + 1;
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
          puVar7 = puVar7 + 9;
        } while (iVar13 != 100);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"info_2g");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451ca0);
        puVar16 = &DAT_00469904;
        iVar13 = 0;
        do {
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"[%d,%d,\'%s\'",*puVar16,*(undefined4 *)(puVar16 + 4),
                     &DAT_0046990c + iVar13 * 0x20);
          pcVar14 = "]";
          if (iVar13 != 8) {
            pcVar14 = "],";
          }
          iVar13 = iVar13 + 1;
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
          puVar16 = puVar16 + 0x20;
        } while (iVar13 != 9);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"info_5g");
      if (iVar5 == 0) {
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,&DAT_00451ca0);
        puVar16 = &DAT_00469a24;
        iVar13 = 0;
        do {
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"[%d,%d,\'%s\'",*puVar16,*(undefined4 *)(puVar16 + 4),
                     &DAT_00469a2c + iVar13 * 0x20);
          pcVar14 = "]";
          if (iVar13 != 6) {
            pcVar14 = "],";
          }
          iVar13 = iVar13 + 1;
          (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar14);
          puVar16 = puVar16 + 0x20;
        } while (iVar13 != 7);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,"]");
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"country_str");
      local_2c = local_1210 + 4;
      if (iVar5 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0x1c3,local_2c);
        (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,local_2c);
        return 0;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"tx_restrict");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1c4,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      iVar5 = (*(code *)PTR_strcmp_0046a824)(iVar13,"rx_restrict");
      if (iVar5 == 0) {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x1c5,local_1280 + 1);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d",local_1280[1]);
        uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
        return uVar6;
      }
      goto LAB_00428614;
    }
    iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,local_1280 + 1);
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    if (local_1280[1] == 0) {
      pcVar14 = "AP";
    }
    else {
      if (local_1280[1] != 1) {
        (*(code *)PTR_sprintf_0046a808)(&local_1098,"%d");
        goto LAB_00429fd8;
      }
      pcVar14 = "STA";
    }
    (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
LAB_00429fd8:
    uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
    return uVar6;
  }
  pcVar14 = "Disabled";
  (*(code *)PTR_strcpy_0046ac60)(&local_1098,"Disabled");
  local_1220[0] = 0;
  local_1220[1] = 0;
  local_1218 = (uint)uStack_1216;
  (*(code *)PTR_memset_0046a87c)(local_11c0,0,0x3c);
  local_1254 = -1;
  (*(code *)PTR_memset_0046a87c)(auStack_1180,0,0x50);
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    (*(code *)PTR_apmib_get_0046aadc)(0xfa);
    uVar6 = 0x834;
  }
  else {
    (*(code *)PTR_apmib_get_0046aadc)(0xfc,auStack_1258);
    uVar6 = 0x844;
  }
  (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_125c);
  (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_1244);
  iVar13 = *(int *)PTR_vwlan_idx_0046a9b0;
  if ((((iVar13 == 0) || (iVar13 == 5)) && (local_1244 == 1)) && (local_125c == 1)) {
    if (iVar13 == 5) {
      uVar6 = *(undefined4 *)PTR_wlan_idx_0046a93c;
      pcVar10 = "wlan%d-vxd";
    }
    else {
      uVar6 = *(undefined4 *)PTR_wlan_idx_0046a93c;
      pcVar10 = "wlan%d";
    }
    (*(code *)PTR_sprintf_0046a808)(local_1220,pcVar10,uVar6);
    (*(code *)PTR_sprintf_0046a808)
              (local_11c0,"cat /proc/%s/mib_ap_profile | grep in_use_profile",local_1220);
    iVar13 = (*(code *)PTR_popen_0046ac30)(local_11c0,"r");
    if (iVar13 != 0) {
      iVar5 = (*(code *)PTR_fgets_0046ab78)(auStack_1180,0x50,iVar13);
      if (iVar5 != 0) {
        uVar6 = (*(code *)PTR_strstr_0046a940)(auStack_1180,"in_use_profile");
        (*(code *)PTR_sscanf_0046a8c4)(uVar6,"in_use_profile: %d",&local_1254);
        (*(code *)PTR_pclose_0046abe8)(iVar13);
      }
    }
    if (local_1254 < 0) goto LAB_00423fdc;
    (*(code *)PTR_memset_0046a87c)(&local_ea0,0,0xd4);
    local_ea0._0_1_ = (char)local_1254 + '\x01';
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar6 = 0x8836;
    }
    else {
      uVar6 = 0x8848;
    }
    (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_ea0);
    if (cStack_e7f == '\x01') {
LAB_00423fa4:
      pcVar14 = "WEP 64bits";
    }
    else if (cStack_e7f == '\x02') {
LAB_00423fbc:
      pcVar14 = "WEP 128bits";
    }
    else {
      if (cStack_e7f == '\x03') goto LAB_00423f10;
      if (cStack_e7f == '\x04') {
        pcVar14 = "WPA2";
      }
    }
  }
  else {
    iVar13 = (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_1260);
    if (iVar13 == 0) {
      return 0xffffffff;
    }
    if (local_1260 != 0) {
      if (local_1260 == 2) {
LAB_00423f10:
        pcVar14 = "WPA";
      }
      else if (local_1260 == 4) {
        pcVar14 = "WPA2";
      }
      else if (local_1260 == 6) {
        pcVar14 = "WPA2 Mixed";
      }
      else if (local_1260 == 7) {
        pcVar14 = "WAPI";
      }
      else {
        iVar13 = (*(code *)PTR_apmib_get_0046aadc)(3,&local_1248);
        if (iVar13 == 0) {
          return 0xffffffff;
        }
        if (local_1248 != 0) {
          if (local_1248 != 1) {
            if (local_1248 != 2) goto LAB_00423fdc;
            goto LAB_00423fbc;
          }
          goto LAB_00423fa4;
        }
      }
    }
  }
  (*(code *)PTR_strcpy_0046ac60)(&local_1098,pcVar14);
LAB_00423fdc:
  uVar6 = (*(code *)PTR_req_format_write_0046a95c)(param_1,&local_1098);
  return uVar6;
}

