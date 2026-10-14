/* get_voltage_value @ 00432b04 */

/* WARNING: Unknown calling convention */

float get_voltage_value(void)

{
  float fVar1;
  int iVar2;
  
  fVar1 = DAT_00615f08;
  iVar2 = (*(code *)PTR___gtsf2_0061291c)(DAT_00615f08,DAT_005ae818);
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR___ltsf2_00614658)(fVar1,0);
    if (iVar2 < 0) {
      DAT_00615f08 = 0.0;
    }
  }
  else {
    DAT_00615f08 = DAT_005ae818;
  }
  return DAT_00615f08;
}

