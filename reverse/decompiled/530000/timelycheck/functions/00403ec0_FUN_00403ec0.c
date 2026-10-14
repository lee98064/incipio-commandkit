/* FUN_00403ec0 @ 00403ec0 */

void FUN_00403ec0(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char local_90 [132];
  
  (*(code *)PTR_memset_0042b114)(local_90,0,0x80);
  if (param_1 == 1) {
    if (DAT_0042b518 == '\0') goto LAB_00404058;
    if (DAT_0042b4bc == '\0') {
      if (DAT_0042b528 == '\0') goto joined_r0x0040402c;
      if (DAT_0042b25c == '\0') goto LAB_00404058;
      puVar3 = &DAT_0042b25c;
      pcVar1 = "%s %s %s";
      puVar2 = &DAT_0042b528;
    }
    else {
      if (DAT_0042b528 == '\0') {
        if (DAT_0042b25c == '\0') goto LAB_00404058;
        puVar3 = &DAT_0042b25c;
        pcVar1 = "%s %s %s";
      }
      else {
        if (DAT_0042b25c == '\0') goto LAB_00404058;
        puVar3 = &DAT_0042b528;
        pcVar1 = "%s %s %s %s";
      }
      puVar2 = &DAT_0042b4bc;
    }
    (*(code *)PTR_sprintf_0042b0e8)(local_90,pcVar1,&DAT_0042b518,puVar2,puVar3);
  }
  else {
    if (DAT_0042b518 == '\0') goto LAB_00404058;
joined_r0x0040402c:
    if (DAT_0042b25c != '\0') {
      (*(code *)PTR_sprintf_0042b0e8)(local_90,"%s %s",&DAT_0042b518,&DAT_0042b25c);
    }
  }
LAB_00404058:
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/gpio",&DAT_00417a78,&DAT_00417c7c,"");
  if (local_90[0] != '\0') {
    (*(code *)PTR_setWlan_Applications_0042b1f4)("start",local_90);
  }
  (*(code *)PTR_system_0042b1ac)("rm -f  /var/system/start_init 2> /dev/null");
  return;
}

