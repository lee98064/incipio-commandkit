/* get_power_value @ 004329dc */

/* WARNING: Unknown calling convention */

float get_power_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f10;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f10,DAT_005ae810);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f10 = 0.0;
    }
  }
  else {
    DAT_00615f10 = DAT_005ae810;
  }
  return DAT_00615f10;
}

