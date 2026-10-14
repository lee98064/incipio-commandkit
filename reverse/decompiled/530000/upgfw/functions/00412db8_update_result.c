/* update_result @ 00412db8 */

void update_result(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_410 [1024];
  
  DAT_0057eaf4 = param_1;
  iVar1 = (*(code *)PTR_fopen_0057df5c)("/var/fwProgress","w");
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_0057ddf8)(iVar1);
    (*(code *)PTR_flock_0057d96c)(uVar2,2);
    (*(code *)PTR_sprintf_0057d810)(auStack_410,"%s %d %d",*DAT_0057eaf0,DAT_0057eaf8,param_1);
    uVar2 = (*(code *)PTR_strlen_0057e310)(auStack_410);
    (*(code *)PTR_fwrite_0057e840)(auStack_410,1,uVar2,iVar1);
    uVar2 = (*(code *)PTR_fileno_0057ddf8)(iVar1);
    (*(code *)PTR_flock_0057d96c)(uVar2,8);
    (*(code *)PTR_fclose_0057dfec)(iVar1);
  }
  return;
}

