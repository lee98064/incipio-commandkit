/* FUN_004345d4 @ 004345d4 */

void FUN_004345d4(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = FUN_00434110();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae818);
  fVar3 = DAT_005ae818;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f08,fVar3), iVar2 != 0)) {
    DAT_00615f08 = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xd,fVar3);
  }
  fVar1 = FUN_00433e48();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae814);
  fVar3 = DAT_005ae814;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f0c,fVar3), iVar2 != 0)) {
    DAT_00615f0c = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xe,fVar3);
  }
  fVar1 = FUN_00433b80();
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(fVar1,DAT_005ae810);
  fVar3 = DAT_005ae810;
  if ((iVar2 < 1) && (iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0), fVar3 = fVar1, iVar2 < 0)) {
    fVar3 = 0.0;
  }
  iVar2 = (*(code *)PTR___gesf2_00614178)(fVar3,0);
  if ((-1 < iVar2) && (iVar2 = (*(code *)PTR___nesf2_00612800)(DAT_00615f10,fVar3), iVar2 != 0)) {
    DAT_00615f10 = fVar3;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(0xf,fVar3);
  }
  iVar2 = FUN_004343d8();
  if ((-1 < iVar2) && (DAT_00615f14 != iVar2)) {
    DAT_00615f14 = iVar2;
    (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,iVar2);
    DAT_00615f20 = (undefined1)iVar2;
  }
  iVar2 = (int)DAT_00615f21;
  if ((-1 < iVar2) && (DAT_00615f18 != iVar2)) {
    DAT_00615f18 = iVar2;
  }
  return;
}

