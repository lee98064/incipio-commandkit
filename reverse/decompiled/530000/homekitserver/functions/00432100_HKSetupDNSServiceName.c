/* HKSetupDNSServiceName @ 00432100 */

void HKSetupDNSServiceName(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_118 [256];
  int local_18;
  
  (*(code *)PTR_strcpy_00612464)(auStack_118," flash get MFI_WAC_DEVICE_NAME > /var/wacNameInfo");
  (*(code *)PTR_system_00614714)(auStack_118);
  iVar1 = (*(code *)PTR_fopen_0061395c)("/var/wacNameInfo","r");
  if (iVar1 != 0) {
    (*(code *)PTR_memset_006130cc)(auStack_118,0,0x100);
    (*(code *)PTR_fread_006139f4)(auStack_118,0x100,1,iVar1);
    iVar2 = (*(code *)PTR_strstr_00612aa4)(auStack_118,"MFI_WAC_DEVICE_NAME=\"");
    if (iVar2 != 0) {
      local_18 = iVar2 + 0x15;
      iVar2 = (*(code *)PTR_strchr_006127e8)(iVar2 + 0x15,0x22);
      (*(code *)PTR_snprintf_00613e24)(&DAT_00615eb0,(iVar2 - local_18) + 1,"%s");
    }
    (*(code *)PTR_fclose_00613a3c)(iVar1);
  }
  (*(code *)PTR_system_00614714)("rm -f /var/wacNameInfo");
  (*(code *)PTR_strcpy_00612464)(param_1,&DAT_00615eb0);
  return;
}

