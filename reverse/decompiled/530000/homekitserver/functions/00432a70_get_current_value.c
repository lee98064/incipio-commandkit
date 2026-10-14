/* get_current_value @ 00432a70 */

/* WARNING: Unknown calling convention */

float get_current_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f0c;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f0c,DAT_005ae814);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f0c = 0.0;
    }
  }
  else {
    DAT_00615f0c = DAT_005ae814;
  }
  return DAT_00615f0c;
}

