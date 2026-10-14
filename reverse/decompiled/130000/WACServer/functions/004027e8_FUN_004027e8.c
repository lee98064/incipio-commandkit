/* FUN_004027e8 @ 004027e8 */

void FUN_004027e8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_state.txt",&DAT_0041cbf4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_004330d8)(iVar1);
    iVar3 = (*(code *)PTR_flock_004331dc)(uVar2,2);
    if (iVar3 == 0) {
      (*(code *)PTR_printf_004332e4)("[WAC-Server : updateWACState] %d \n",param_1);
      (*(code *)PTR_fprintf_00433214)(iVar1,&DAT_0041cc1c,param_1);
      uVar2 = (*(code *)PTR_fileno_004330d8)(iVar1);
      (*(code *)PTR_flock_004331dc)(uVar2,8);
    }
                    /* WARNING: Could not recover jumptable at 0x004028dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fclose_00433178)(iVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00402904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_004332e4)
            ("[WAC-Server : updateWACState] can not open file : %s \n","/tmp/net/wac_state.txt");
  return;
}

