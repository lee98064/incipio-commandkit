/* log_boaform @ 00412340 */

void log_boaform(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_38 [8];
  undefined1 *local_30;
  
  piVar5 = &DAT_0046f05c;
  local_30 = auStack_38;
  iVar8 = -1;
  iVar3 = 0;
  iVar6 = -1;
  do {
    iVar4 = iVar3;
    if (*piVar5 == 0) goto LAB_00412440;
    iVar1 = (*(code *)PTR_time_0046a84c)(local_30);
    iVar7 = piVar5[0x15];
    if (300 < iVar1 - iVar7) goto LAB_00412440;
    iVar4 = iVar6;
    if (*piVar5 != 0) {
      iVar1 = (*(code *)PTR_strcmp_0046a824)(param_1,&DAT_0046f060 + iVar3 * 0x58);
      iVar4 = iVar3;
      if (iVar1 == 0) goto LAB_00412440;
      if ((iVar6 == -1) || (iVar4 = iVar6, iVar7 < iVar8)) {
        iVar4 = iVar3;
        iVar8 = iVar7;
      }
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 0x16;
    iVar6 = iVar4;
  } while (iVar3 != 4);
  if (iVar4 != -1) {
LAB_00412440:
    (*(code *)PTR_strcpy_0046ac60)(&DAT_0046f060 + iVar4 * 0x58,param_1);
    uVar2 = (*(code *)PTR_time_0046a84c)(auStack_38);
    (&DAT_0046f05c)[iVar4 * 0x16] = 1;
    (&DAT_0046f0b0)[iVar4 * 0x16] = uVar2;
  }
  return;
}

