/* increase_progress @ 00412ef4 */

undefined4 increase_progress(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined1 auStack_410 [1024];
  
  if (param_2 == 3) {
    iVar1 = DAT_0057eaf0[4];
  }
  else {
    if ((param_2 < 3) || (2 < param_2 - 5U)) goto LAB_00412f78;
    iVar1 = DAT_0057eaf0[5];
  }
  if (iVar1 < 1) {
    return 1;
  }
LAB_00412f78:
  DAT_0057eaf4 = param_2;
  iVar1 = (*(code *)PTR_fopen_0057df5c)("/var/fwProgress","w");
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_0057ddf8)(iVar1);
    (*(code *)PTR_flock_0057d96c)(uVar2,2);
    if (param_2 == 3) {
      piVar5 = DAT_0057eaf0 + 6;
      piVar3 = DAT_0057eaf0 + 4;
      piVar7 = DAT_0057eaf0 + 2;
    }
    else {
      piVar5 = (int *)0x0;
      if ((param_2 < 3) || (2 < param_2 - 5U)) {
        piVar7 = (int *)0x0;
        piVar3 = (int *)0x0;
      }
      else {
        piVar5 = DAT_0057eaf0 + 7;
        piVar3 = DAT_0057eaf0 + 5;
        piVar7 = DAT_0057eaf0 + 3;
      }
    }
    iVar6 = *piVar3;
    iVar4 = *piVar7;
    param_1 = param_1 + *piVar5;
    *piVar5 = param_1;
    if (param_1 < *piVar3) {
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      uVar2 = *DAT_0057eaf0;
      iVar4 = iVar6 / iVar4 + 1;
      if (iVar4 == 0) {
        trap(0x1c00);
      }
      iVar4 = param_1 / iVar4 + DAT_0057eaf8;
    }
    else {
      iVar4 = *piVar7 + DAT_0057eaf8;
      uVar2 = *DAT_0057eaf0;
      DAT_0057eaf8 = iVar4;
    }
    (*(code *)PTR_sprintf_0057d810)(auStack_410,"%s %d %d",uVar2,iVar4,param_2);
    uVar2 = (*(code *)PTR_strlen_0057e310)(auStack_410);
    (*(code *)PTR_fwrite_0057e840)(auStack_410,1,uVar2,iVar1);
    uVar2 = (*(code *)PTR_fileno_0057ddf8)(iVar1);
    (*(code *)PTR_flock_0057d96c)(uVar2,8);
    (*(code *)PTR_fclose_0057dfec)(iVar1);
  }
  return 0;
}

