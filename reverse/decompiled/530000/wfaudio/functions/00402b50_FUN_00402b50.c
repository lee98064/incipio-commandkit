/* FUN_00402b50 @ 00402b50 */

undefined4 FUN_00402b50(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined4 local_578;
  undefined2 local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined1 auStack_564 [2];
  undefined1 local_562;
  undefined1 local_561;
  undefined1 local_560;
  undefined1 local_55f;
  undefined1 local_55e;
  undefined1 local_55d;
  undefined1 *local_554 [4];
  undefined1 *apuStack_544 [16];
  uint local_504;
  undefined2 local_500;
  char local_4a0 [128];
  undefined1 local_420 [256];
  undefined1 auStack_320 [256];
  undefined1 auStack_220 [256];
  undefined1 auStack_120 [256];
  char *local_20;
  
  (*(code *)PTR_memset_00423490)(&local_504,0,100);
  (*(code *)PTR_memset_00423490)(local_420,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_320,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_220,0,0x100);
  (*(code *)PTR_memset_00423490)(auStack_120,0,0x100);
  local_570 = 0;
  local_56c = 0;
  local_568 = 0;
  local_554[0] = local_420;
  local_554[1] = auStack_320;
  local_554[2] = auStack_220;
  local_554[3] = auStack_120;
  (*(code *)PTR_apmib_get_0042354c)(0x17,&local_504);
  iVar1 = (*(code *)PTR_memcmp_004234c4)(&local_504,&DAT_00410ee0,6);
  if (iVar1 == 0) {
    (*(code *)PTR_getInAddr_00423574)("wlan0",3,auStack_564);
    local_578 = CONCAT31(CONCAT21(CONCAT11(local_562,local_561),local_560),local_55f);
    local_574 = CONCAT11(local_55e,local_55d);
  }
  else {
    local_574 = local_500;
    local_578 = local_504;
  }
  iVar1 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_device_info.txt",&DAT_004105d8);
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_0042350c)
              (iVar1,"mac %02X:%02X:%02X:%02X:%02X:%02X\n",local_578._0_1_,local_578._1_1_,
               local_578 >> 8 & 0xff,local_578 & 0xff,local_574._0_1_,(undefined1)local_574);
    ppuVar3 = (undefined1 **)local_4a0;
    (*(code *)PTR_memset_00423490)(ppuVar3,0,0x80);
    (*(code *)PTR_apmib_get_0042354c)(0x2b1,ppuVar3);
    if (local_4a0[0] == '\0') {
      local_20 = (char *)apuStack_544;
      (*(code *)PTR_get_wac_name_00423590)(local_20);
      ppuVar3 = (undefined1 **)local_20;
    }
    (*(code *)PTR_fprintf_0042350c)(iVar1,"name %s\n",ppuVar3);
    ppuVar3 = local_554;
    (*(code *)PTR_fputs_004233d4)("model Device1,1\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("manufacturer Apple\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("firmwareRevision FW.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("hardwareRevision HW.2.2.2.2.2\n",iVar1);
    iVar4 = 0;
    (*(code *)PTR_fputs_004233d4)("serialNumber SER.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,"isUnconfigured %d\n",NetWACFlag == 0);
    (*(code *)PTR_fputs_004233d4)("supportsAirPlay 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supportsAirPrint 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supports2_4GHzWiFi 1\n",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,"supports5GHzWiFi %d\n",0);
    (*(code *)PTR_fputs_004233d4)("supportsWakeOnWireless 0\n",iVar1);
    (*(code *)PTR_fputs_004233d4)("supportsHKAccessoryProtocol 1\n",iVar1);
    (*(code *)PTR_get_eaProtocol_name_00423584)(ppuVar3);
    do {
      if (**ppuVar3 != '\0') {
        (*(code *)PTR_fputs_004233d4)("eaProtocols ",iVar1);
        iVar4 = iVar4 + 1;
        (*(code *)PTR_fprintf_0042350c)(iVar1,*ppuVar3);
        (*(code *)PTR_fputc_00423438)(10,iVar1);
      }
      ppuVar3 = ppuVar3 + 1;
    } while (ppuVar3 != apuStack_544);
    (*(code *)PTR_sprintf_0042344c)(local_4a0,&DAT_004117f4,iVar4);
    (*(code *)PTR_fputs_004233d4)("numEAProtocols ",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,local_4a0);
    (*(code *)PTR_fputc_00423438)(10,iVar1);
    (*(code *)PTR_get_ea_bundle_seed_id_00423448)(&local_570);
    (*(code *)PTR_fputs_004233d4)("eaBundleSeedID ",iVar1);
    (*(code *)PTR_fprintf_0042350c)(iVar1,&local_570);
    (*(code *)PTR_fputc_00423438)(10,iVar1);
    (*(code *)PTR_fclose_00423480)(iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

