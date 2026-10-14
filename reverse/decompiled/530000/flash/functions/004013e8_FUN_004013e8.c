/* FUN_004013e8 @ 004013e8 */

void FUN_004013e8(void)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  
  puVar4 = PTR_hwmib_table_00423580;
  puVar3 = PTR_hwmib_wlan_table_004234e8;
  DAT_00423630 = 0;
  while( true ) {
    bVar1 = 6 < DAT_00423630;
    bVar2 = DAT_00423630 < 2;
    DAT_00423630 = DAT_00423630 + 1;
    if (bVar1) break;
    if (bVar2) {
      piVar5 = (int *)puVar3;
      if (DAT_00423630 == 1) {
        piVar5 = (int *)puVar4;
      }
      while (*piVar5 != 0) {
        (*(code *)PTR_printf_004235f4)("HW_%s\n",piVar5 + 1);
        piVar5 = piVar5 + 0xf;
      }
    }
  }
  return;
}

