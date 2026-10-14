/* FUN_00411180 @ 00411180 */

bool FUN_00411180(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_110 [260];
  
  (*(code *)PTR_memset_0057d9dc)(auStack_110,0,0x100);
  iVar1 = (*(code *)PTR_fopen_0057df5c)("/var/info.html","r");
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0057de44;
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
    uVar2 = (*(code *)PTR_strerror_0057d3ac)(*puVar3);
    (*(code *)PTR_fprintf_0057d8e4)(uVar4,"Open information file error, %s\n",uVar2);
  }
  else {
    (*(code *)PTR_fgets_0057dc54)(auStack_110,0x100);
    (*(code *)PTR_strtok_0057de1c)(auStack_110,":");
    uVar2 = (*(code *)PTR_strtok_0057de1c)(0,":");
    (*(code *)PTR_printf_0057d378)("FileName=%s\n",uVar2);
  }
  return iVar1 != 0;
}

