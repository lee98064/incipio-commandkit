/* FUN_0042244c @ 0042244c */

void FUN_0042244c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_38 [32];
  
  uVar2 = FUN_00421134();
  (*(code *)PTR_write_0046a9fc)(uVar2,"GETLIMITS",9);
  (*(code *)PTR_write_0046a9fc)(uVar2,&DAT_004498e4,2);
  while( true ) {
    iVar4 = FUN_004218dc(uVar2,auStack_38,0x20);
    if (iVar4 < 1) break;
    uVar3 = (*(code *)PTR_strtok_0046a8d8)(auStack_38,&DAT_00450994);
    uVar3 = (*(code *)PTR_atoi_0046a73c)(uVar3);
    puVar1 = PTR_strtok_0046a8d8;
    *param_1 = uVar3;
    uVar3 = (*(code *)puVar1)(0,&DAT_00450994);
    uVar3 = (*(code *)PTR_atoi_0046a73c)(uVar3);
    *param_2 = uVar3;
  }
  (*(code *)PTR_close_0046a694)(uVar2);
  return;
}

