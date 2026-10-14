/* FUN_0040c02c @ 0040c02c */

void FUN_0040c02c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int local_38 [2];
  int *local_30;
  
  iVar3 = (*(code *)PTR_apmib_init_004234ac)();
  puVar2 = PTR_vwlan_idx_0042355c;
  puVar1 = PTR_wlan_idx_00423548;
  if (iVar3 == 0) {
    (*(code *)PTR_puts_004235c4)("Initialize AP MIB failed!");
    uVar4 = DAT_00423630;
  }
  else {
    *(undefined4 *)PTR_vwlan_idx_0042355c = 0;
    DAT_00423630 = 0;
    puVar7 = (undefined *)0x0;
LAB_0040c0b0:
    uVar4 = DAT_00423630 + 1;
    if (uVar4 < 7) {
      puVar8 = PTR_hwmib_table_00423580;
      if (((((DAT_00423630 != 0) && (puVar8 = PTR_hwmib_wlan_table_004234e8, uVar4 != 2)) &&
           (puVar8 = PTR_mib_table_0042358c, uVar4 != 3)) && (uVar4 != 5)) &&
         ((uVar4 == 4 || (puVar8 = puVar7, uVar4 == 6)))) {
        puVar8 = PTR_mib_wlan_table_004235e8;
      }
      iVar3 = 0;
      DAT_00423630 = uVar4;
      do {
        while( true ) {
          local_30 = (int *)(puVar8 + iVar3 * 0x3c);
          iVar5 = *local_30;
          if (iVar5 == 0) break;
          uVar6 = 0x35;
          if ((((((iVar5 == 0x8036) || (uVar6 = 0x835, iVar5 == 0x8836)) ||
                (uVar6 = 0x847, iVar5 == 0x8848)) ||
               (((uVar6 = 0x6f, iVar5 == 0x8070 || (uVar6 = 0x40, iVar5 == 0x8041)) ||
                ((uVar6 = 0x1f8, iVar5 == 0x81f9 ||
                 ((uVar6 = 0x269, iVar5 == 0x826a || (uVar6 = 0x81, iVar5 == 0x8082)))))))) ||
              (uVar6 = 0x75, iVar5 == 0x8076)) ||
             ((((uVar6 = 0x7b, iVar5 == 0x807c || (uVar6 = 0xf0, iVar5 == 0x80f1)) ||
               (uVar6 = 0x87, iVar5 == 0x8088)) || (uVar6 = 0x136, iVar5 == 0x8137)))) {
LAB_0040c1e8:
            FUN_00408db4(uVar6,local_38);
          }
          else {
            if (iVar5 == 0x8126) {
              uVar6 = 0x125;
              goto LAB_0040c1e8;
            }
            local_38[0] = 1;
          }
          if ((0 < local_38[0]) && (local_30[9] != 9)) {
            if (DAT_00423630 - 1 < 2) {
              puVar7 = &DAT_00410dd4;
LAB_0040c264:
              (*(code *)PTR_printf_004235f4)(puVar7);
            }
            else if (DAT_00423630 - 3 < 2) {
              puVar7 = &DAT_00410de0;
              goto LAB_0040c264;
            }
            if (DAT_00423630 == 2) {
LAB_0040c2bc:
              (*(code *)PTR_printf_004235f4)("WLAN%d_",*(undefined4 *)puVar1);
            }
            else if ((DAT_00423630 == 4) || (DAT_00423630 == 6)) {
              if (*(int *)puVar2 < 1) goto LAB_0040c2bc;
              (*(code *)PTR_printf_004235f4)
                        ("WLAN%d_VAP%d_",*(undefined4 *)puVar1,*(int *)puVar2 + -1);
            }
            FUN_0040af80(local_30 + 1,*local_30,local_30[9],local_38[0],0);
          }
          iVar3 = iVar3 + 1;
        }
        puVar7 = puVar8;
        if (DAT_00423630 == 2) {
LAB_0040c35c:
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = iVar3 + 1;
          if (0 < iVar3 + 1) goto code_r0x0040c370;
        }
        else {
          if ((DAT_00423630 != 4) && (DAT_00423630 != 6)) goto LAB_0040c0b0;
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = iVar3 + 1;
          if (5 < iVar3 + 1) {
            *(undefined4 *)puVar2 = 0;
            goto LAB_0040c35c;
          }
        }
        iVar3 = 0;
      } while( true );
    }
  }
  DAT_00423630 = uVar4;
  return;
code_r0x0040c370:
  *(undefined4 *)PTR_wlan_idx_00423548 = 0;
  goto LAB_0040c0b0;
}

