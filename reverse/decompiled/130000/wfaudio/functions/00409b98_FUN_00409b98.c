/* FUN_00409b98 @ 00409b98 */

void FUN_00409b98(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char local_90 [132];
  
  (*(code *)PTR_memset_004231a8)(local_90,0,0x80);
  if (param_1 == 1) {
    if (DAT_00423818._0_1_ == '\0') goto LAB_00409d30;
    if (DAT_004237bc == '\0') {
      if (DAT_00423828 == '\0') goto joined_r0x00409d04;
      if (DAT_0042355c == '\0') goto LAB_00409d30;
      puVar3 = &DAT_0042355c;
      pcVar1 = "%s %s %s";
      puVar2 = &DAT_00423828;
    }
    else {
      if (DAT_00423828 == '\0') {
        if (DAT_0042355c == '\0') goto LAB_00409d30;
        puVar3 = &DAT_0042355c;
        pcVar1 = "%s %s %s";
      }
      else {
        if (DAT_0042355c == '\0') goto LAB_00409d30;
        puVar3 = &DAT_00423828;
        pcVar1 = "%s %s %s %s";
      }
      puVar2 = &DAT_004237bc;
    }
    (*(code *)PTR_sprintf_00423164)(local_90,pcVar1,&DAT_00423818,puVar2,puVar3);
  }
  else {
    if (DAT_00423818._0_1_ == '\0') goto LAB_00409d30;
joined_r0x00409d04:
    if (DAT_0042355c != '\0') {
      (*(code *)PTR_sprintf_00423164)(local_90,"%s %s",&DAT_00423818,&DAT_0042355c);
    }
  }
LAB_00409d30:
  (*(code *)PTR_RunSystemCmd_00423148)("/proc/gpio",&DAT_00411550,&DAT_00411750,"");
  if (local_90[0] != '\0') {
    (*(code *)PTR_setWlan_Applications_004232d8)("start",local_90);
  }
  return;
}

