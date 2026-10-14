/* FUN_00409e48 @ 00409e48 */

void FUN_00409e48(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char local_90 [132];
  
  (*(code *)PTR_memset_00423490)(local_90,0,0x80);
  if (param_1 == 1) {
    if (DAT_00423af8._0_1_ == '\0') goto LAB_00409fe0;
    if (DAT_00423a9c == '\0') {
      if (DAT_00423b08 == '\0') goto joined_r0x00409fb4;
      if (DAT_0042383c == '\0') goto LAB_00409fe0;
      puVar3 = &DAT_0042383c;
      pcVar1 = "%s %s %s";
      puVar2 = &DAT_00423b08;
    }
    else {
      if (DAT_00423b08 == '\0') {
        if (DAT_0042383c == '\0') goto LAB_00409fe0;
        puVar3 = &DAT_0042383c;
        pcVar1 = "%s %s %s";
      }
      else {
        if (DAT_0042383c == '\0') goto LAB_00409fe0;
        puVar3 = &DAT_00423b08;
        pcVar1 = "%s %s %s %s";
      }
      puVar2 = &DAT_00423a9c;
    }
    (*(code *)PTR_sprintf_0042344c)(local_90,pcVar1,&DAT_00423af8,puVar2,puVar3);
  }
  else {
    if (DAT_00423af8._0_1_ == '\0') goto LAB_00409fe0;
joined_r0x00409fb4:
    if (DAT_0042383c != '\0') {
      (*(code *)PTR_sprintf_0042344c)(local_90,"%s %s",&DAT_00423af8,&DAT_0042383c);
    }
  }
LAB_00409fe0:
  (*(code *)PTR_RunSystemCmd_00423428)("/proc/gpio",&DAT_00411830,&DAT_00411a30,"");
  if (local_90[0] != '\0') {
    (*(code *)PTR_setWlan_Applications_004235c4)("start",local_90);
  }
  return;
}

