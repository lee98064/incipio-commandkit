/* HKSetupDNSServiceName @ 00431810 */

void HKSetupDNSServiceName(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  int local_18;
  
  (*(code *)PTR_strcpy_006115d0)(auStack_118," flash get MFI_WAC_DEVICE_NAME > /var/wacNameInfo");
  (*(code *)PTR_system_00613870)(auStack_118);
  iVar1 = (*(code *)PTR_fopen_00612ac0)("/var/wacNameInfo","r");
  if (iVar1 != 0) {
    (*(code *)PTR_memset_0061223c)(auStack_118,0,0x100);
    (*(code *)PTR_fread_00612b58)(auStack_118,0x100,1,iVar1);
    iVar2 = (*(code *)PTR_strstr_00611c14)(auStack_118,"MFI_WAC_DEVICE_NAME=\"");
    if (iVar2 != 0) {
      local_18 = iVar2 + 0x15;
      iVar2 = (*(code *)PTR_strchr_00611958)(iVar2 + 0x15,0x22);
      (*(code *)PTR_snprintf_00612f8c)(&DAT_00615000,(iVar2 - local_18) + 1,"%s");
    }
    (*(code *)PTR_fclose_00612ba0)(iVar1);
  }
  (*(code *)PTR_system_00613870)("rm -f /var/wacNameInfo");
  (*(code *)PTR_strcpy_006115d0)(param_1,&DAT_00615000);
  return;
}

