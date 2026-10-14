/* FUN_00402204 @ 00402204 */

undefined4 FUN_00402204(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined4 local_4a0;
  int local_49c;
  undefined1 auStack_498 [128];
  undefined1 auStack_418 [512];
  undefined4 auStack_218 [129];
  
  (*(code *)PTR_fprintf_0042350c)
            (*(undefined4 *)PTR_stderr_00423444,
             "\nFILE %s FUNCTION %s LINE %d: [thread_RT_WAC_Wifi_Connect]: begin\n\n","wfaudio.c",
             "thread_RT_WAC_Wifi_Connect",0x3bd);
  local_4a8 = 0;
  local_4a4 = 0;
  local_4a0 = 0;
  (*(code *)PTR_memset_00423490)(auStack_418,0,0x200);
  (*(code *)PTR_memset_00423490)(auStack_498,0,0x80);
  local_49c = 0;
  (*(code *)PTR_memset_00423490)(auStack_218,0,0x200);
  iVar4 = 0;
  do {
    iVar1 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_info_ready.txt",4);
    iVar4 = iVar4 + 1;
    if (iVar1 == 0) break;
    (*(code *)PTR_printf_004235c0)
              ("thread_RT_WAC_Wifi_Connect--- read : %s  fail!! try! count=%d \n",
               "/tmp/net/wac_wifi_info_ready.txt",iVar4);
    (*(code *)PTR_sleep_00423550)(1);
  } while (iVar4 != 3);
  FUN_00401eec();
  iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_pass_len_info.txt",4);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_pass_len_info.txt",&DAT_00411fe4);
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: thread_RT_WAC_Wifi_Connect--- read : %s --- \n\n",
               "wfaudio.c","thread_RT_WAC_Wifi_Connect",0x3de,"/tmp/net/wac_wifi_pass_len_info.txt")
    ;
    if (iVar4 != 0) {
      iVar1 = (*(code *)PTR_fgets_00423588)(auStack_418,0x200,iVar4);
      if (iVar1 != 0) {
        (*(code *)PTR_sscanf_004234b4)(auStack_418,&DAT_004117f4,&local_49c);
        (*(code *)PTR_printf_004235c0)("=> get WifiPSKLen=[%d]\n\n",local_49c);
      }
      (*(code *)PTR_fclose_00423480)(iVar4);
    }
    (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_len_info.txt");
  }
  iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_ssid_info.txt",4);
  if (iVar4 == 0) {
    iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_ssid_info.txt",&DAT_00411fe4);
    if (iVar4 != 0) {
      (*(code *)PTR_fread_004234ac)(auStack_498,0x80,1,iVar4);
      (*(code *)PTR_printf_004235c0)("=> get SSID=[%s]\n\n",auStack_498);
      (*(code *)PTR_fclose_00423480)(iVar4);
    }
    (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_ssid_info.txt");
  }
  if (0 < local_49c) {
    iVar4 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_pass_info.txt",4);
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_wifi_pass_info.txt",&DAT_00411fe4);
      (*(code *)PTR_fprintf_0042350c)
                (*(undefined4 *)PTR_stderr_00423444,
                 "\nFILE %s FUNCTION %s LINE %d: thread_RT_WAC_Wifi_Connect--- read : %s --- \n\n",
                 "wfaudio.c","thread_RT_WAC_Wifi_Connect",0x3f6,"/tmp/net/wac_wifi_pass_info.txt");
      if (iVar4 != 0) {
        (*(code *)PTR_fread_004234ac)(auStack_218,0x80,1,iVar4);
        (*(code *)PTR_printf_004235c0)("=> get WIFI-PASS=[%s]\n\n",auStack_218);
        (*(code *)PTR_fclose_00423480)(iVar4);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_pass_info.txt");
    }
  }
  (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_wifi_info_ready.txt");
  local_4a8 = 0;
  (*(code *)PTR_apmib_set_00423524)(0xad,&local_4a8);
  iVar4 = (*(code *)PTR_SetWlan_idx_00423580)("wlan0-vxd");
  if (iVar4 != 0) {
    local_4a4 = 1;
    (*(code *)PTR_apmib_set_00423524)(0x3b,&local_4a4);
    (*(code *)PTR_apmib_set_00423524)(1,auStack_498);
    puVar3 = &local_4a0;
    (*(code *)PTR_apmib_set_00423524)(0xfb,auStack_498);
    if (local_49c == 0) {
      local_4a0 = 0;
      uVar2 = 0x19;
    }
    else {
      local_4a0 = 6;
      (*(code *)PTR_apmib_set_00423524)(0x19,puVar3);
      local_4a0 = 3;
      (*(code *)PTR_apmib_set_00423524)(0x1d,puVar3);
      (*(code *)PTR_apmib_set_00423524)(0x26,puVar3);
      local_4a0 = 2;
      (*(code *)PTR_apmib_set_00423524)(0x1c,puVar3);
      uVar2 = 0x1e;
      puVar3 = auStack_218;
    }
    (*(code *)PTR_apmib_set_00423524)(uVar2,puVar3);
    local_4a0 = 0;
    (*(code *)PTR_apmib_set_00423524)(0x16,&local_4a0);
  }
  local_4a0 = 1;
  (*(code *)PTR_apmib_set_00423524)(0xfa,&local_4a0);
  (*(code *)PTR_setinit_004235cc)();
  return 1;
}

