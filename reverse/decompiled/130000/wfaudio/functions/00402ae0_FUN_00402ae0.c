/* FUN_00402ae0 @ 00402ae0 */

undefined4 FUN_00402ae0(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_e8 [2];
  undefined1 local_e6;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  char acStack_d8 [64];
  char local_98 [128];
  char *local_18;
  
  (*(code *)PTR_getInAddr_0042328c)("wlan0",3,auStack_e8);
  iVar1 = (*(code *)PTR_fopen_004231b0)("/tmp/net/wac_device_info.txt",&DAT_00410318);
  uVar2 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00423224)
              (iVar1,"mac %02X:%02X:%02X:%02X:%02X:%02X\n",local_e6,local_e5,local_e4,local_e3,
               local_e2,local_e1);
    pcVar3 = local_98;
    (*(code *)PTR_memset_004231a8)(pcVar3,0,0x80);
    (*(code *)PTR_apmib_get_00423264)(0x2b1,pcVar3);
    if (local_98[0] == '\0') {
      local_18 = acStack_d8;
      (*(code *)PTR_get_wac_name_004232a4)(local_18);
      pcVar3 = local_18;
    }
    (*(code *)PTR_fprintf_00423224)(iVar1,"name %s\n",pcVar3);
    (*(code *)PTR_fputs_004230f4)("model Device1,1\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("manufacturer Apple\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("firmwareRevision FW.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("hardwareRevision HW.2.2.2.2.2\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("serialNumber SER.1.1.1.1.1\n",iVar1);
    (*(code *)PTR_fprintf_00423224)(iVar1,"isUnconfigured %d\n",NetWACFlag == 0);
    (*(code *)PTR_fputs_004230f4)("supportsAirPlay 0\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("supportsAirPrint 0\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("supports2_4GHzWiFi 1\n",iVar1);
    (*(code *)PTR_fprintf_00423224)(iVar1,"supports5GHzWiFi %d\n",0);
    (*(code *)PTR_fputs_004230f4)("supportsWakeOnWireless 0\n",iVar1);
    (*(code *)PTR_fputs_004230f4)("eaProtocols \n",iVar1);
    (*(code *)PTR_fputs_004230f4)("numEAProtocols \n",iVar1);
    (*(code *)PTR_fputs_004230f4)("eaBundleSeedID 24D4XFAF43\n",iVar1);
    (*(code *)PTR_fclose_00423198)(iVar1);
    uVar2 = 1;
  }
  return uVar2;
}

