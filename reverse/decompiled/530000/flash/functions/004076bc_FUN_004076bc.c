/* FUN_004076bc @ 004076bc */

/* WARNING: Removing unreachable block (ram,0x00407e68) */
/* WARNING: Removing unreachable block (ram,0x00407e30) */
/* WARNING: Removing unreachable block (ram,0x00407df8) */
/* WARNING: Removing unreachable block (ram,0x00407dbc) */
/* WARNING: Removing unreachable block (ram,0x00407d94) */
/* WARNING: Removing unreachable block (ram,0x00407d6c) */
/* WARNING: Removing unreachable block (ram,0x00407d44) */
/* WARNING: Removing unreachable block (ram,0x00407d14) */
/* WARNING: Removing unreachable block (ram,0x00407cd4) */
/* WARNING: Removing unreachable block (ram,0x00407ca4) */
/* WARNING: Removing unreachable block (ram,0x00407c78) */
/* WARNING: Removing unreachable block (ram,0x00407c50) */
/* WARNING: Removing unreachable block (ram,0x00407c28) */
/* WARNING: Removing unreachable block (ram,0x00407c00) */
/* WARNING: Removing unreachable block (ram,0x00407bd8) */
/* WARNING: Removing unreachable block (ram,0x00407b88) */
/* WARNING: Removing unreachable block (ram,0x00407bec) */
/* WARNING: Removing unreachable block (ram,0x00407c14) */
/* WARNING: Removing unreachable block (ram,0x00407c3c) */
/* WARNING: Removing unreachable block (ram,0x00407c64) */
/* WARNING: Removing unreachable block (ram,0x00407c90) */
/* WARNING: Removing unreachable block (ram,0x00407cc0) */
/* WARNING: Removing unreachable block (ram,0x00407cec) */
/* WARNING: Removing unreachable block (ram,0x00407d2c) */
/* WARNING: Removing unreachable block (ram,0x00407d58) */
/* WARNING: Removing unreachable block (ram,0x00407d80) */
/* WARNING: Removing unreachable block (ram,0x00407da8) */
/* WARNING: Removing unreachable block (ram,0x00407ddc) */
/* WARNING: Removing unreachable block (ram,0x00407e14) */
/* WARNING: Removing unreachable block (ram,0x00407e4c) */
/* WARNING: Removing unreachable block (ram,0x00407e84) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004076bc(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int local_6f8;
  int local_6f4;
  int local_6f0 [18];
  undefined1 auStack_6a8 [4];
  undefined1 auStack_6a4 [100];
  undefined1 auStack_640 [4];
  char local_63c;
  char local_63b;
  undefined1 local_636;
  undefined1 local_626;
  undefined1 auStack_5dc [100];
  undefined1 auStack_578 [100];
  undefined1 auStack_514 [100];
  undefined1 auStack_4b0 [100];
  undefined1 auStack_44c [100];
  undefined1 auStack_3e8 [100];
  undefined1 auStack_384 [100];
  undefined1 auStack_320 [100];
  undefined1 auStack_2bc [100];
  undefined1 auStack_258 [100];
  undefined1 auStack_1f4 [100];
  char local_190;
  char local_18f;
  char local_18e;
  char local_18d;
  char local_18c;
  char local_18b;
  char local_18a;
  char local_189;
  undefined1 local_188;
  int local_12c [25];
  undefined1 auStack_c8 [52];
  int local_94;
  int local_30;
  
  local_6f8 = 0;
  local_6f0[1] = 0;
  local_6f0[2] = 0;
  local_6f0[3] = 0;
  local_6f0[4] = 0;
  local_6f0[5] = 0;
  local_6f0[6] = 0;
  local_6f0[7] = 0;
  local_6f0[8] = 0;
  local_6f0[9] = 0;
  local_6f0[10] = 0;
  local_6f0[0xb] = 0;
  local_6f0[0xc] = 0;
  local_6f0[0xd] = 0;
  local_6f0[0xe] = 0;
  local_6f0[0xf] = 0;
  local_6f0[0x10] = 0;
  local_6f0[0x11] = 0;
  iVar1 = (*(code *)PTR_apmib_init_004234ac)();
  if (iVar1 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
    return 0xffffffff;
  }
  FUN_004021d4("wlan0");
  (*(code *)PTR_apmib_get_004235ac)(0x111,&local_190);
  (*(code *)PTR_apmib_get_004235ac)(0x118,local_6f0);
  (*(code *)PTR_apmib_get_004235ac)(0x117,local_6f0 + 3);
  (*(code *)PTR_apmib_get_004235ac)(0x10f,local_6f0 + 4);
  (*(code *)PTR_apmib_get_004235ac)(0x3c,local_6f0 + 7);
  (*(code *)PTR_apmib_get_004235ac)(0x114,local_6f0 + 8);
  (*(code *)PTR_apmib_get_004235ac)(2,local_6f0 + 0xb);
  (*(code *)PTR_apmib_get_004235ac)(0xba,auStack_1f4);
  (*(code *)PTR_apmib_get_004235ac)(0x517,auStack_6a8);
  if (param_4 != 0) {
    FUN_004021d4(param_4);
  }
  (*(code *)PTR_apmib_get_004235ac)(0x117,local_6f0 + 3);
  (*(code *)PTR_apmib_get_004235ac)(0x112,local_6f0 + 5);
  (*(code *)PTR_apmib_get_004235ac)(0x113,local_6f0 + 6);
  (*(code *)PTR_apmib_get_004235ac)(0x110,&local_6f4);
  (*(code *)PTR_apmib_get_004235ac)(0x119,local_6f0 + 0xc);
  (*(code *)PTR_apmib_get_004235ac)(1,auStack_258);
  (*(code *)PTR_apmib_get_004235ac)(0x3b,&local_6f8);
  (*(code *)PTR_apmib_get_004235ac)(0x19,local_6f0 + 9);
  (*(code *)PTR_apmib_get_004235ac)(3,local_6f0 + 10);
  (*(code *)PTR_apmib_get_004235ac)(0xc,local_6f0 + 1);
  (*(code *)PTR_apmib_get_004235ac)(0xd,local_6f0 + 2);
  (*(code *)PTR_apmib_get_004235ac)(4,auStack_5dc);
  (*(code *)PTR_apmib_get_004235ac)(5,auStack_578);
  (*(code *)PTR_apmib_get_004235ac)(6,auStack_514);
  (*(code *)PTR_apmib_get_004235ac)(7,auStack_4b0);
  (*(code *)PTR_apmib_get_004235ac)(8,auStack_44c);
  (*(code *)PTR_apmib_get_004235ac)(9,auStack_3e8);
  (*(code *)PTR_apmib_get_004235ac)(10,auStack_384);
  (*(code *)PTR_apmib_get_004235ac)(0xb,auStack_320);
  (*(code *)PTR_apmib_get_004235ac)(0x1e,auStack_2bc);
  (*(code *)PTR_apmib_get_004235ac)(0x10e,local_6f0 + 0xe);
  (*(code *)PTR_apmib_get_004235ac)(0x16,local_6f0 + 0xd);
  (*(code *)PTR_apmib_get_004235ac)(0x19,local_6f0 + 0xf);
  (*(code *)PTR_apmib_get_004235ac)(0x1d,local_6f0 + 0x10);
  (*(code *)PTR_apmib_get_004235ac)(0x26,local_6f0 + 0x11);
  if (local_6f0[0xd] != 0) {
    local_6f0[0xe] = 1;
  }
  if ((param_3 != 0) ||
     (iVar1 = (*(code *)PTR_memcmp_0042352c)(&local_190,&DAT_004132ec,8), iVar1 == 0)) {
    (*(code *)PTR_gettimeofday_00423514)(local_12c,0);
    (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_640);
    local_12c[0] = (int)local_63c + (int)local_63b + local_12c[0];
    (*(code *)PTR_srand_00423504)(local_12c[0]);
    iVar1 = (*(code *)PTR_rand_0042354c)();
    local_188 = 0;
    uVar2 = (iVar1 % 10000000) * 10;
    uVar2 = (int)(10 - ((uVar2 / 10000) % 10 + (uVar2 / 1000000) % 10 + (uVar2 / 100) % 10 +
                       ((uVar2 / 100000) % 10 + (uVar2 / 10000000) % 10 + (uVar2 / 1000) % 10 +
                       (uVar2 / 10) % 10) * 3) % 10) % 10 + uVar2;
    local_189 = (char)(uVar2 % 10) + '0';
    local_18a = (char)((uVar2 / 10) % 10) + '0';
    local_190 = (char)((uVar2 / 10000000) % 10) + '0';
    local_18f = (char)((uVar2 / 1000000) % 10) + '0';
    local_18e = (char)((uVar2 / 100000) % 10) + '0';
    local_18d = (char)((uVar2 / 10000) % 10) + '0';
    local_18c = (char)((uVar2 / 1000) % 10) + '0';
    local_18b = (char)((uVar2 / 100) % 10) + '0';
    (*(code *)PTR_apmib_set_00423574)(0x111,&local_190);
    (*(code *)PTR_apmib_update_00423578)(1);
    (*(code *)PTR_printf_004235f4)("Generated PIN = %s\n",&local_190);
    if (param_3 != 0) {
      return 0;
    }
  }
  iVar1 = (*(code *)PTR_stat_004234cc)(param_1,auStack_c8);
  if (iVar1 < 0) {
    pcVar7 = "stat() error [%s]!\n";
    goto LAB_00407f04;
  }
  iVar1 = (*(code *)PTR_malloc_004235b8)(local_94 + 0x800);
  if (iVar1 == 0) {
    pcVar7 = "malloc() error [%d]!\n";
    param_1 = local_94 + 0x800;
    goto LAB_00407f04;
  }
  uVar3 = 1;
  uVar8 = 5;
  if (local_6f8 == 1) {
    uVar8 = 2;
    if (local_6f0[0] != 0) {
      uVar8 = 3;
      uVar3 = 6;
      goto LAB_00407f74;
    }
  }
  else {
LAB_00407f74:
    if (local_6f4 == 0) {
      uVar8 = uVar3;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"mode = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar1,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = 0;
  if (local_6f8 != 1) {
    iVar5 = local_6f0[3];
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"upnp = %d\n",iVar5);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar1 + iVar4,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar1 + iVar4 + iVar5;
  if (local_6f0[4] == 1) {
    iVar4 = 6;
  }
  else if (local_6f0[4] == 2) {
    iVar4 = 0x82;
  }
  else {
    iVar4 = local_6f0[4];
    if (local_6f0[4] == 3) {
      iVar4 = 0x86;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"config_method = %d\n",iVar4);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wlan0_wsc_disabled = %d\n",local_6f0[0xe]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"auth_type = %d\n",local_6f0[5]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"encrypt_type = %d\n",local_6f0[6]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar4;
  uVar2 = 0;
  if (local_6f0[0xf] == 6) {
    uVar2 = 1;
    if (((local_6f0[0x10] != 1) && (uVar2 = 2, local_6f0[0x10] != 2)) &&
       (uVar2 = 3, local_6f0[0x10] != 3)) {
      uVar2 = 0;
    }
    if (local_6f0[0x11] == 1) {
      uVar2 = uVar2 | 4;
    }
    else if (local_6f0[0x11] == 2) {
      uVar2 = uVar2 | 8;
    }
    else if (local_6f0[0x11] == 3) {
      uVar2 = uVar2 | 0xc;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"mixedmode = %d\n",uVar2);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar4 = local_6f0[6];
  iVar5 = iVar5 + iVar6;
  if (param_4 == 0) {
LAB_00408378:
    uVar8 = 1;
  }
  else {
    iVar6 = (*(code *)PTR_strcmp_004234ec)(param_4,"wlan0");
    if (iVar6 == 0) {
LAB_00408358:
      uVar8 = 1;
      if ((local_6f8 == 1) && (uVar8 = 2, local_6f0[7] == 0)) goto LAB_00408378;
    }
    else {
      iVar6 = (*(code *)PTR_strcmp_004234ec)(param_4,"wlan1");
      uVar8 = 1;
      if (iVar6 == 0) goto LAB_00408358;
    }
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"connection_type = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar6;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"manual_config = %d\n",local_6f0[8]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar5 = iVar5 + iVar6;
  if (iVar4 == 2) {
    if (local_6f0[9] != 1) {
      pcVar7 = "WEP mismatched between WPS and host system";
LAB_004084a0:
      (*(code *)PTR_puts_004235c4)(pcVar7);
      (*(code *)PTR_free_0042348c)(iVar1);
      return 0xffffffff;
    }
    if (1 < local_6f0[10] - 1U) {
      pcVar7 = "WEP encrypt length error";
      goto LAB_004084a0;
    }
    local_6f0[2] = local_6f0[2] + 1;
    local_30 = local_6f0[9];
    (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_transmit_key = %d\n",local_6f0[2]);
    puVar9 = auStack_640;
    uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
    (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
    iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
    iVar5 = iVar5 + iVar4;
    if (local_6f0[10] == local_30) {
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_5dc);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"network_key = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
      iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_578);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key2 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
      iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar6 = iVar5 + iVar4 + iVar6;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_514);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      local_636 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key3 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
      iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar5 = iVar6 + iVar5;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_4b0);
      FUN_00403e9c(auStack_6a4,5,puVar9);
      pcVar7 = "wep_key4 = %s\n";
      local_636 = 0;
    }
    else {
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_44c);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"network_key = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
      iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_3e8);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key2 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
      iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar6 = iVar5 + iVar4 + iVar6;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_384);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      local_626 = 0;
      (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"wep_key3 = %s\n",puVar9);
      uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
      iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
      iVar5 = iVar6 + iVar5;
      (*(code *)PTR_strcpy_00423600)(auStack_6a4,auStack_384);
      FUN_00403e9c(auStack_6a4,0xd,puVar9);
      pcVar7 = "wep_key4 = %s\n";
      local_626 = 0;
    }
  }
  else {
    pcVar7 = "network_key = %s\n";
    puVar9 = auStack_2bc;
  }
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,pcVar7,puVar9);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5,auStack_6a4,uVar8);
  iVar4 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"ssid = \"%s\"\n",auStack_258);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar5 + iVar4,auStack_6a4,uVar8);
  iVar6 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar5 + iVar4 + iVar6;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"pin_code = %s\n",&local_190);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  uVar8 = 1;
  if (0xe < local_6f0[0xb]) {
    uVar8 = 2;
  }
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"rf_band = %d\n",uVar8);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"device_name = \"%s\"\n",auStack_1f4);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar6 = iVar6 + iVar5;
  (*(code *)PTR_sprintf_004234e0)(auStack_6a4,"config_by_ext_reg = %d\n",local_6f0[0xc]);
  uVar8 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  (*(code *)PTR_memcpy_004235d4)(iVar6,auStack_6a4,uVar8);
  iVar5 = (*(code *)PTR_strlen_004234b4)(auStack_6a4);
  iVar4 = (*(code *)PTR_open_004234b0)(param_1,0);
  if (iVar4 == -1) {
    pcVar7 = "open() error [%s]!\n";
  }
  else {
    (*(code *)PTR_lseek_00423598)(iVar4,0,0);
    iVar6 = iVar6 + iVar5;
    iVar5 = (*(code *)PTR_read_00423544)(iVar4,iVar6,local_94);
    if (iVar5 == local_94) {
      (*(code *)PTR_close_00423490)(iVar4);
      iVar5 = (*(code *)PTR_strstr_00423550)(iVar6,"uuid =");
      if (iVar5 != 0) {
        (*(code *)PTR_apmib_get_004235ac)(0xc9,auStack_640);
        FUN_00403e9c(auStack_640,6,local_12c);
        (*(code *)PTR_memcpy_004235d4)(iVar5 + 0x1b,local_12c,0xc);
      }
      iVar5 = (*(code *)PTR_open_004234b0)(param_2,0x302);
      param_1 = param_2;
      if (iVar5 == -1) {
        pcVar7 = "open() error [%s]!\n";
      }
      else {
        iVar4 = (*(code *)PTR_write_00423568)(iVar5,iVar1,(iVar6 - iVar1) + local_94);
        if (iVar4 == (iVar6 - iVar1) + local_94) {
          (*(code *)PTR_close_00423490)(iVar5);
          (*(code *)PTR_free_0042348c)(iVar1);
          return 0;
        }
        pcVar7 = "Write() file error [%s]!\n";
      }
    }
    else {
      pcVar7 = "read() error [%s]!\n";
    }
  }
LAB_00407f04:
  (*(code *)PTR_printf_004235f4)(pcVar7,param_1);
  return 0xffffffff;
}

