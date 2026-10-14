/* FUN_00441ffc @ 00441ffc */

undefined4 FUN_00441ffc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint local_20;
  int local_1c;
  undefined1 auStack_18 [4];
  uint local_14;
  
  local_20 = 0;
  local_14 = 0;
  if (param_3 == 0) {
    local_20 = 1;
LAB_0044211c:
    if (local_20 == 0) {
      return 0;
    }
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                               (param_1,"ntpServerId",&DAT_0044b32c);
    if (((*pcVar3 == 0) ||
        (local_1c = *pcVar3 + -0x30, iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x98,&local_1c),
        iVar2 != 0)) &&
       ((pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                    (param_1,"timeZone",&DAT_0044b32c), *pcVar3 == '\0' ||
        (iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x99,pcVar3), iVar2 != 0)))) {
      pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"ntpServerIp1",&DAT_0044b32c);
      if (*pcVar3 != '\0') {
        (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_18);
        iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x9a,auStack_18);
        if (iVar2 == 0) {
          pcVar3 = "Set NTP server error!";
          goto LAB_004422ac;
        }
      }
      pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                 (param_1,"ntpServerIp2",&DAT_0044b32c);
      if (*pcVar3 != '\0') {
        (*(code *)PTR_inet_aton_0046a89c)(pcVar3,auStack_18);
        iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x9b,auStack_18);
        if (iVar2 == 0) {
          pcVar3 = "Set NTP server IP error!";
          goto LAB_004422ac;
        }
      }
      return 0;
    }
    pcVar3 = "Set Time Zone error!";
  }
  else {
    uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"enabled",&DAT_0044b32c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar1,"ON");
    local_20 = (uint)(iVar2 == 0);
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x97,&local_20);
    if (iVar2 != 0) {
      uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"dlenabled",&DAT_0044b32c);
      iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar1,"ON");
      local_14 = (uint)(iVar2 == 0);
      iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x11a,&local_14);
      if (iVar2 != 0) goto LAB_0044211c;
    }
    pcVar3 = "Set enabled flag error!";
  }
LAB_004422ac:
  (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar3);
  return 0xffffffff;
}

