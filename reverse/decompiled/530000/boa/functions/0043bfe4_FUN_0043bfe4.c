/* FUN_0043bfe4 @ 0043bfe4 */

undefined4 FUN_0043bfe4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  char *pcVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  code *pcVar8;
  int local_200;
  int local_1fc;
  undefined1 local_1f8 [20];
  ushort local_1e4;
  undefined2 local_1e2;
  undefined2 local_1e0;
  undefined2 local_1de;
  char local_1dc [44];
  char acStack_1b0 [200];
  char acStack_e8 [200];
  
  local_200 = 0;
  local_1fc = 0;
  iVar7 = *param_3;
  if (iVar7 == 0) {
    pcVar6 = *(char **)PTR_stderr_0046a7f0;
    pcVar4 = "Insufficient args\n";
    pcVar8 = (code *)PTR_fputs_0046a6e4;
  }
  else {
    iVar1 = (*(code *)PTR_strcmp_0046a824)(iVar7,"wlan_state");
    if (iVar1 == 0) {
      (*(code *)PTR_getWlBssInfo_0046a754)(PTR_WLAN_IF_0046a890,local_1dc);
      if (local_1dc[0] == '\0') {
        pcVar4 = "Disabled";
      }
      else {
        pcVar4 = "Enabled";
      }
      (*(code *)PTR_strcpy_0046ac60)(acStack_e8,pcVar4);
      pcVar4 = acStack_e8;
LAB_0043c0bc:
      (*(code *)PTR_req_format_write_0046a95c)(param_1,&DAT_0045093c,pcVar4);
      return 0;
    }
    iVar1 = (*(code *)PTR_strcmp_0046a824)(iVar7,"system_time");
    if (iVar1 == 0) {
      return 0;
    }
    iVar7 = (*(code *)PTR_strchr_0046a6e8)(iVar7,0x5f);
    iVar7 = (*(code *)PTR_atoi_0046a73c)(iVar7 + 1);
    iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x1f8,&local_200);
    if (iVar1 == 0) {
      pcVar6 = "Get table entry error!";
      pcVar4 = acStack_1b0;
      pcVar8 = (code *)PTR_strcpy_0046ac60;
    }
    else {
      (*(code *)PTR_apmib_get_0046aadc)(0x1f7,&local_1fc);
      if (local_1fc == 0) {
        pcVar4 = "wlanSchedule-0-0-0-0-0-0";
        goto LAB_0043c0bc;
      }
      iVar1 = 1;
      while( true ) {
        if (local_200 < iVar1) {
          return 0;
        }
        local_1f8[0] = (undefined1)iVar1;
        iVar2 = (*(code *)PTR_apmib_get_0046aadc)(0x81f9,local_1f8);
        if (iVar2 == 0) break;
        uVar5 = local_1e4 >> 1 & 1;
        uVar3 = 0x7f;
        if (uVar5 != 1) {
          uVar3 = local_1de;
        }
        if ((local_1e4 & 1) == 1) {
          local_1e2 = 0;
          local_1e0 = 0x59b;
        }
        if (iVar7 == iVar1) {
          (*(code *)PTR_req_format_write_0046a95c)
                    (param_1,"%s-%d-%d-%d-%d-%d-%d",local_1f8,local_1fc,uVar5,uVar3,local_1e4 & 1,
                     local_1e2,local_1e0);
        }
        iVar1 = iVar1 + 1;
      }
      pcVar6 = *(char **)PTR_stderr_0046a7f0;
      pcVar4 = "Get SCHEDULE entry fail\n";
      pcVar8 = (code *)PTR_fputs_0046a6e4;
    }
  }
  (*pcVar8)(pcVar4,pcVar6);
  return 0xffffffff;
}

