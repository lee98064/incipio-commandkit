/* FUN_00412c78 @ 00412c78 */

void FUN_00412c78(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_410 [1024];
  
  puVar1 = PTR_fopen_0057df5c;
  *DAT_0057eaf0 = param_1;
  iVar2 = (*(code *)puVar1)("/var/fwProgress","w");
  if (iVar2 != 0) {
    uVar3 = (*(code *)PTR_fileno_0057ddf8)(iVar2);
    (*(code *)PTR_flock_0057d96c)(uVar3,2);
    (*(code *)PTR_sprintf_0057d810)(auStack_410,"%s %d %d",*DAT_0057eaf0,DAT_0057eaf8,DAT_0057eaf4);
    uVar3 = (*(code *)PTR_strlen_0057e310)(auStack_410);
    (*(code *)PTR_fwrite_0057e840)(auStack_410,1,uVar3,iVar2);
    uVar3 = (*(code *)PTR_fileno_0057ddf8)(iVar2);
    (*(code *)PTR_flock_0057d96c)(uVar3,8);
    (*(code *)PTR_fclose_0057dfec)(iVar2);
  }
  return;
}

