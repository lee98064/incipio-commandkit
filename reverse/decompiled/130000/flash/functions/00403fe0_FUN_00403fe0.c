/* FUN_00403fe0 @ 00403fe0 */

void FUN_00403fe0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  int local_830;
  int local_82c;
  int local_828;
  int local_824;
  undefined4 local_820;
  undefined1 local_81c;
  undefined1 local_81b;
  undefined1 local_81a;
  undefined1 local_819;
  undefined1 local_818;
  undefined1 local_817;
  undefined1 local_816;
  undefined1 local_815;
  undefined1 local_814;
  char acStack_420 [1024];
  undefined4 *local_20;
  
  local_20 = param_1;
  iVar1 = (*(code *)PTR_apmib_init_0042347c)();
  if (iVar1 == 0) {
    pcVar3 = "Initialize AP MIB failed!";
    pcVar6 = (code *)PTR_puts_00423594;
  }
  else {
    pcVar3 = (char *)(*(code *)PTR_open_00423480)(local_20,0x302);
    if (pcVar3 == (char *)0xffffffff) {
      pcVar3 = "Create WPA config file error!";
      pcVar6 = (code *)PTR_puts_00423594;
    }
    else {
      if (param_2 == 0) {
        (*(code *)PTR_apmib_get_0042357c)(0x19);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"encryption = %d\n",local_82c);
        FUN_00403f1c(pcVar3,acStack_420);
        local_20 = &local_820;
        (*(code *)PTR_apmib_get_0042357c)(1,local_20);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"ssid = \"%s\"\n",local_20);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x23,&local_828);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"enable1x = %d\n",local_828);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x2d,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"enableMacAuth = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x1a,&local_830);
        if (local_830 != 0) {
          (*(code *)PTR_apmib_get_0042357c)(0x1b,&local_830);
        }
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"supportNonWpaClient = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(3,&local_824);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"wepKey = %d\n",local_824);
        FUN_00403f1c(pcVar3,acStack_420);
        if ((local_82c == 1) && (local_828 != 0)) {
          if (local_824 == 1) {
            (*(code *)PTR_apmib_get_0042357c)(4);
            (*(code *)PTR_sprintf_004234b0)
                      (acStack_420,"wepGroupKey = \"%02x%02x%02x%02x%02x\"\n",local_820._0_1_,
                       local_820._1_1_,local_820 >> 8 & 0xff,local_820 & 0xff,local_81c);
          }
          else {
            (*(code *)PTR_apmib_get_0042357c)(8,&local_820);
            (*(code *)PTR_sprintf_004234b0)
                      (acStack_420,
                       "wepGroupKey = \"%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x\"\n",
                       local_820._0_1_,local_820._1_1_,local_820 >> 8 & 0xff,local_820 & 0xff,
                       local_81c,local_81b,local_81a,local_819,local_818,local_817,local_816,
                       local_815,local_814);
          }
        }
        else {
          (*(code *)PTR_strcpy_004235d0)(acStack_420,"wepGroupKey = \"\"\n");
        }
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x1c,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"authentication = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x1d,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"unicastCipher = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x26,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"wpa2UnicastCipher = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x25,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"enablePreAuth = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_apmib_get_0042357c)(0x24,&local_830);
        if (local_830 == 0) {
          pcVar4 = "usePassphrase = 1\n";
        }
        else {
          pcVar4 = "usePassphrase = 0\n";
        }
        pcVar5 = acStack_420;
        (*(code *)PTR_strcpy_004235d0)(acStack_420,pcVar4);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x1e,&local_820);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"psk = \"%s\"\n",&local_820);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x1f,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"groupRekeyTime = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x5b6,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsReAuthTO = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x21,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsPort = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x20,&local_820);
        uVar2 = (*(code *)PTR_inet_ntoa_004234c4)(local_820);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsIP = %s\n",uVar2);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x22,&local_820);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsPassword = \"%s\"\n",&local_820);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x2e,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsMaxReq = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x2f,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"rsAWhile = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x27,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsEnabled = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x29,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsPort = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x28,&local_820);
        uVar2 = (*(code *)PTR_inet_ntoa_004234c4)(local_820);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsIP = %s\n",uVar2);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x2a,&local_820);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsPassword = \"%s\"\n",&local_820);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x2b,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsUpdateEnabled = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x2c,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsUpdateTime = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x30,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsMaxReq = %d\n",local_830);
        FUN_00403f1c(pcVar3,pcVar5);
        (*(code *)PTR_apmib_get_0042357c)(0x31,&local_830);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"accountRsAWhile = %d\n",local_830);
      }
      else {
        (*(code *)PTR_apmib_get_0042357c)(0x45,&local_82c);
        if (local_82c == 3) {
          local_82c = 2;
        }
        else if (local_82c != 4) {
          local_82c = 0;
        }
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"encryption = %d\n",local_82c);
        FUN_00403f1c(pcVar3,acStack_420);
        FUN_00403f1c(pcVar3,"ssid = \"REALTEK\"\n");
        FUN_00403f1c(pcVar3,"enable1x = 1\n");
        FUN_00403f1c(pcVar3,"enableMacAuth = 0\n");
        FUN_00403f1c(pcVar3,"supportNonWpaClient = 0\n");
        FUN_00403f1c(pcVar3,"wepKey = 0\n");
        FUN_00403f1c(pcVar3,"wepGroupKey = \"\"\n");
        FUN_00403f1c(pcVar3,"authentication = 2\n");
        local_830 = 2;
        if (local_82c == 2) {
          local_830 = 1;
        }
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"unicastCipher = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"wpa2UnicastCipher = %d\n",local_830);
        FUN_00403f1c(pcVar3,acStack_420);
        FUN_00403f1c(pcVar3,"enablePreAuth = 0\n");
        (*(code *)PTR_apmib_get_0042357c)(0x48,&local_830);
        if (local_830 == 0) {
          pcVar5 = "usePassphrase = 1\n";
        }
        else {
          pcVar5 = "usePassphrase = 0\n";
        }
        (*(code *)PTR_strcpy_004235d0)(acStack_420,pcVar5);
        FUN_00403f1c(pcVar3,acStack_420);
        local_20 = &local_820;
        (*(code *)PTR_apmib_get_0042357c)(0x49,local_20);
        (*(code *)PTR_sprintf_004234b0)(acStack_420,"psk = \"%s\"\n",local_20);
        FUN_00403f1c(pcVar3,acStack_420);
        FUN_00403f1c(pcVar3,"groupRekeyTime = 0\n");
        FUN_00403f1c(pcVar3,"rsPort = 1812\n");
        FUN_00403f1c(pcVar3,"rsIP = 192.168.1.1\n");
        FUN_00403f1c(pcVar3,"rsPassword = \"\"\n");
        FUN_00403f1c(pcVar3,"rsMaxReq = 3\n");
        FUN_00403f1c(pcVar3,"rsAWhile = 10\n");
        FUN_00403f1c(pcVar3,"accountRsEnabled = 0\n");
        FUN_00403f1c(pcVar3,"accountRsPort = 1813\n");
        FUN_00403f1c(pcVar3,"accountRsIP = 192.168.1.1\n");
        FUN_00403f1c(pcVar3,"accountRsPassword = \"\"\n");
        FUN_00403f1c(pcVar3,"accountRsUpdateEnabled = 0\n");
        FUN_00403f1c(pcVar3,"accountRsUpdateTime = 1000\n");
        FUN_00403f1c(pcVar3,"accountRsMaxReq = 3\n");
        pcVar5 = "accountRsAWhile = 1\n";
      }
      FUN_00403f1c(pcVar3,pcVar5);
      pcVar6 = (code *)PTR_close_00423460;
    }
  }
  (*pcVar6)(pcVar3);
  return;
}

