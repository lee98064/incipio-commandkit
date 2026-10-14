/* FUN_004112a8 @ 004112a8 */

undefined4 FUN_004112a8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_210 [256];
  undefined1 auStack_110 [256];
  
  (*(code *)PTR_memset_0057d9dc)(auStack_210,0,0x100);
  (*(code *)PTR_memset_0057d9dc)(auStack_110,0,0x100);
  iVar1 = (*(code *)PTR_fopen_0057df5c)(param_1,"r");
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)PTR_stderr_0057de44;
    puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
    uVar2 = (*(code *)PTR_strerror_0057d3ac)(*puVar3);
    (*(code *)PTR_fprintf_0057d8e4)(uVar4,"Open information file error, %s\n",uVar2);
    uVar2 = 0x19a;
  }
  else {
    (*(code *)PTR_fgets_0057dc54)(auStack_110,0x100,iVar1);
    uVar2 = (*(code *)PTR_strtok_0057de1c)(auStack_110,":");
    (*(code *)PTR_printf_0057d378)("New version=%s\n",uVar2);
    (*(code *)PTR_fclose_0057dfec)(iVar1);
    iVar1 = (*(code *)PTR_atoi_0057d444)(uVar2);
    uVar2 = 0x199;
    if (param_2 < iVar1) {
      uVar2 = 2;
    }
  }
  return uVar2;
}

