/* FUN_00411150 @ 00411150 */

bool FUN_00411150(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_110 [260];
  
  (*(code *)PTR_memset_0057d8ac)(auStack_110,0,0x100);
  iVar1 = (*(code *)PTR_fopen_0057de2c)("/var/info.html","r");
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0057dd14;
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e7a4)();
    uVar2 = (*(code *)PTR_strerror_0057d27c)(*puVar3);
    (*(code *)PTR_fprintf_0057d7b4)(uVar4,"Open information file error, %s\n",uVar2);
  }
  else {
    (*(code *)PTR_fgets_0057db24)(auStack_110,0x100);
    (*(code *)PTR_strtok_0057dcec)(auStack_110,":");
    uVar2 = (*(code *)PTR_strtok_0057dcec)(0,":");
    (*(code *)PTR_printf_0057d248)("FileName=%s\n",uVar2);
  }
  return iVar1 != 0;
}

