/* FUN_00414d50 @ 00414d50 */

undefined4 FUN_00414d50(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_0057d9dc)(auStack_110,0,0x100);
  (*(code *)PTR_sprintf_0057d810)(auStack_110,"flash get DUALBANK_ENABLED > %s","/var/readMibData");
  uVar3 = 0;
  (*(code *)PTR_system_0057e830)(auStack_110);
  iVar1 = (*(code *)PTR_fopen_0057df5c)("/var/readMibData","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0057dc54)(auStack_110,0x100,iVar1);
    iVar2 = (*(code *)PTR_strstr_0057d5ec)(auStack_110,"DUALBANK_ENABLED=");
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_atoi_0057d444)(iVar2 + 0x11);
    }
    (*(code *)PTR_fclose_0057dfec)(iVar1);
  }
  return uVar3;
}

