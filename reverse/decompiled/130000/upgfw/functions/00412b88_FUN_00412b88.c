/* FUN_00412b88 @ 00412b88 */

void FUN_00412b88(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_410 [1024];
  
  puVar1 = PTR_fopen_0057de2c;
  *DAT_0057e9c0 = param_1;
  iVar2 = (*(code *)puVar1)("/var/fwProgress","w");
  if (iVar2 != 0) {
    uVar3 = (*(code *)PTR_fileno_0057dcc8)(iVar2);
    (*(code *)PTR_flock_0057d83c)(uVar3,2);
    (*(code *)PTR_sprintf_0057d6e0)(auStack_410,"%s %d %d",*DAT_0057e9c0,DAT_0057e9c8,DAT_0057e9c4);
    uVar3 = (*(code *)PTR_strlen_0057e1dc)(auStack_410);
    (*(code *)PTR_fwrite_0057e70c)(auStack_410,1,uVar3,iVar2);
    uVar3 = (*(code *)PTR_fileno_0057dcc8)(iVar2);
    (*(code *)PTR_flock_0057d83c)(uVar3,8);
    (*(code *)PTR_fclose_0057deb8)(iVar2);
  }
  return;
}

