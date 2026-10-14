/* PlatformJoinDestinationWiFiNetwork @ 00403028 */

undefined4 PlatformJoinDestinationWiFiNetwork(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) &&
     (iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_ssid_info.txt",&DAT_0041cdd0),
     iVar1 != 0)) {
    uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
    (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
    (*(code *)PTR_printf_004332e4)("[WAC]inSSID=[%s]\n",param_1);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  if ((param_2 != 0) &&
     (iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_pass_info.txt",&DAT_0041cdd0),
     iVar1 != 0)) {
    (*(code *)PTR_fwrite_0043310c)(param_2,param_3,1,iVar1);
    (*(code *)PTR_printf_004332e4)("[WAC]inWiFiPSK=[%s]\n",param_2);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_pass_len_info.txt",&DAT_0041cdd0);
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00433214)(iVar1,"%d\n",param_3);
    (*(code *)PTR_printf_004332e4)("[WAC]inWiFiPSKLen=[%d] \n",param_3);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_info_ready.txt",&DAT_0041cdd0);
  if (iVar1 != 0) {
    (*(code *)PTR_fputs_004330b8)(&DAT_0041d264,iVar1);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = 0;
  do {
    iVar3 = (*(code *)PTR_access_00433108)("/var/run/WAC_JOIN_DONE",0);
    iVar1 = iVar1 + 1;
    if (iVar3 == 0) {
      (*(code *)PTR_puts_00433294)("[WAC]WAC Join ok");
      return 0;
    }
    (*(code *)PTR_sleep_0043327c)(1);
  } while (iVar1 != 0x5a);
  (*(code *)PTR_puts_00433294)("[WAC]WAC Join fail");
  return 0xffffe5a7;
}

