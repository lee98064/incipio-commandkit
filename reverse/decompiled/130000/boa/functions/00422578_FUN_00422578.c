/* FUN_00422578 @ 00422578 */

void FUN_00422578(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [260];
  
  (*(code *)PTR_sprintf_0046a808)(auStack_190,"SETLIMITS /%d/%d/%d",param_1,param_2,param_3);
  (*(code *)PTR_write_0046a9fc)(0,&DAT_004498e4,2);
  uVar1 = FUN_00421134();
  uVar2 = (*(code *)PTR_strlen_0046a714)(auStack_190);
  (*(code *)PTR_write_0046a9fc)(uVar1,auStack_190,uVar2);
  do {
    iVar3 = FUN_004218dc(uVar1,auStack_110,0x100);
  } while (0 < iVar3);
  return;
}

