/* FUN_00402374 @ 00402374 */

void FUN_00402374(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  
  puVar3 = PTR_hwmib_table_00423580;
  puVar2 = PTR_hwmib_wlan_table_004234e8;
  DAT_00423630 = 0;
  while( true ) {
    uVar4 = DAT_00423630;
    uVar5 = DAT_00423630 + 1;
    bVar1 = 6 < DAT_00423630;
    DAT_00423630 = uVar5;
    if (bVar1) break;
    if (uVar4 < 2) {
      piVar7 = (int *)puVar2;
      if (uVar5 == 1) {
        piVar7 = (int *)puVar3;
      }
      while (*piVar7 != 0) {
        (*(code *)PTR_printf_004235f4)("HW_%s\n",piVar7 + 1);
        piVar7 = piVar7 + 0xf;
      }
    }
    else {
      if ((uVar5 == 3) || (piVar7 = (int *)PTR_mib_wlan_table_004235e8, uVar5 == 5)) {
        piVar7 = (int *)PTR_mib_table_0042358c;
      }
      piVar6 = (int *)&DAT_00410de0;
      piVar8 = piVar7;
      pcVar9 = (code *)PTR_printf_004235f4;
      if (1 < uVar4 - 2) goto LAB_00402458;
      do {
        (*pcVar9)(piVar6);
        piVar8 = piVar7;
LAB_00402458:
        piVar7 = piVar8 + 0xf;
        piVar6 = piVar8 + 1;
        pcVar9 = (code *)PTR_puts_004235c4;
      } while (*piVar8 != 0);
    }
  }
  return;
}

