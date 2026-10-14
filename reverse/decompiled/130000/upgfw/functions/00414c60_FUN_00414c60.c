/* FUN_00414c60 @ 00414c60 */

undefined4 FUN_00414c60(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_0057d8ac)(auStack_110,0,0x100);
  (*(code *)PTR_sprintf_0057d6e0)(auStack_110,"flash get DUALBANK_ENABLED > %s","/var/readMibData");
  uVar3 = 0;
  (*(code *)PTR_system_0057e6fc)(auStack_110);
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/readMibData","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0057db24)(auStack_110,0x100,iVar1);
    iVar2 = (*(code *)PTR_strstr_0057d4bc)(auStack_110,"DUALBANK_ENABLED=");
    if (iVar2 != 0) {
      uVar3 = (*(code *)PTR_atoi_0057d314)(iVar2 + 0x11);
    }
    (*(code *)PTR_fclose_0057deb8)(iVar1);
  }
  return uVar3;
}

