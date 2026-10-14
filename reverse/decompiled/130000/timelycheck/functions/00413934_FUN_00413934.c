/* FUN_00413934 @ 00413934 */

void FUN_00413934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_160;
  int local_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  char local_108 [32];
  undefined4 local_e8 [50];
  
  local_160 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_15c);
  if (local_15c == 4) {
    uVar2 = 0x91;
  }
  else {
    uVar2 = 0x14b;
    if (local_15c != 6) {
      uVar2 = 0x65;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_148,uVar2);
  if (local_15c == 4) {
    uVar2 = 0x92;
  }
  else {
    uVar2 = 0x14c;
    if (local_15c != 6) {
      uVar2 = 0x66;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_128,uVar2);
  if (local_15c == 4) {
    uVar2 = 0x154;
  }
  else {
    uVar2 = 0x153;
    if (local_15c != 6) {
      uVar2 = 0x67;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  iVar1 = (*(code *)PTR_memcmp_0042b138)(local_e8,&DAT_00419c30,4);
  if (iVar1 == 0) {
    (*(code *)PTR_memset_0042b114)(local_108,0,0x20);
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
    (*(code *)PTR_strcpy_0042b208)(local_108,uVar2);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_148,"netmask",auStack_128,"");
  if (local_108[0] != '\0') {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",param_2,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,local_108,&DAT_0041804c
               ,param_2,"");
  }
  if ((local_15c != 4) && (local_15c != 6)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x9d,&local_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_158,&DAT_00417aa4,local_160);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,&DAT_0041810c,auStack_158,"");
  }
  FUN_00413404();
  if ((local_15c != 4) && (local_15c != 6)) {
    FUN_00410a74(0,param_1,param_4,param_3);
    (*(code *)PTR_setFirewallIptablesRules_0042b0c0)(0,0);
    FUN_00410798();
    FUN_00410624();
    FUN_004104f0(param_2,param_3);
    (*(code *)PTR_snprintf_0042b1e4)
              (local_e8,0x80,"%s/%s %s",&DAT_004196e0,"firewall.sh","Send_GARP");
    (*(code *)PTR_system_0042b1ac)(local_e8);
  }
  return;
}

