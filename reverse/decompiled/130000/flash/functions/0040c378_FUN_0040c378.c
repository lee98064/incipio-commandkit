/* FUN_0040c378 @ 0040c378 */

void FUN_0040c378(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int local_40 [2];
  int *local_38;
  int *local_34;
  int local_30;
  
  iVar3 = (*(code *)PTR_apmib_init_0042347c)();
  puVar2 = PTR_vwlan_idx_0042352c;
  puVar1 = PTR_wlan_idx_00423518;
  if (iVar3 == 0) {
    (*(code *)PTR_puts_00423594)("Initialize AP MIB failed!");
    uVar4 = DAT_00423600;
  }
  else {
    *(undefined4 *)PTR_vwlan_idx_0042352c = 0;
    DAT_00423600 = 0;
    puVar7 = (undefined *)0x0;
LAB_0040c3fc:
    uVar4 = DAT_00423600 + 1;
    if (uVar4 < 7) {
      puVar8 = PTR_hwmib_table_00423550;
      if (((((DAT_00423600 != 0) && (puVar8 = PTR_hwmib_wlan_table_004234b8, uVar4 != 2)) &&
           (puVar8 = PTR_mib_table_0042355c, uVar4 != 3)) && (uVar4 != 5)) &&
         ((uVar4 == 4 || (puVar8 = puVar7, uVar4 == 6)))) {
        puVar8 = PTR_mib_wlan_table_004235b8;
      }
      iVar3 = 0;
      DAT_00423600 = uVar4;
      do {
        while( true ) {
          local_38 = (int *)(puVar8 + iVar3 * 0x3c);
          local_30 = *local_38;
          if (local_30 == 0) break;
          local_34 = local_38 + 1;
          iVar5 = (*(code *)PTR_strstr_00423520)(local_34,param_1);
          if (iVar5 != 0) {
            uVar6 = 0x35;
            if (local_30 == 0x8036) {
LAB_0040c4d0:
              FUN_00408d80(uVar6,local_40);
            }
            else {
              if (local_30 == 0x8041) {
                uVar6 = 0x40;
                goto LAB_0040c4d0;
              }
              uVar6 = 0x1f8;
              if ((((((local_30 == 0x81f9) || (uVar6 = 0x269, local_30 == 0x826a)) ||
                    (uVar6 = 0x6f, local_30 == 0x8070)) ||
                   (((uVar6 = 0x81, local_30 == 0x8082 || (uVar6 = 0x75, local_30 == 0x8076)) ||
                    ((uVar6 = 0x7b, local_30 == 0x807c ||
                     ((uVar6 = 0xf0, local_30 == 0x80f1 || (uVar6 = 0x87, local_30 == 0x8088))))))))
                  || (uVar6 = 0x136, local_30 == 0x8137)) || (uVar6 = 0x125, local_30 == 0x8126))
              goto LAB_0040c4d0;
              local_40[0] = 1;
            }
            if ((0 < local_40[0]) && (local_38[9] != 9)) {
              if (DAT_00423600 - 1 < 2) {
                puVar7 = &DAT_00410da4;
LAB_0040c5c4:
                (*(code *)PTR_printf_004235c4)(puVar7);
              }
              else if (DAT_00423600 - 3 < 2) {
                puVar7 = &DAT_00410db0;
                goto LAB_0040c5c4;
              }
              if (DAT_00423600 == 2) {
LAB_0040c61c:
                (*(code *)PTR_printf_004235c4)("WLAN%d_",*(undefined4 *)puVar1);
              }
              else if ((DAT_00423600 == 4) || (DAT_00423600 == 6)) {
                if (*(int *)puVar2 < 1) goto LAB_0040c61c;
                (*(code *)PTR_printf_004235c4)
                          ("WLAN%d_VAP%d_",*(undefined4 *)puVar1,*(int *)puVar2 + -1);
              }
              FUN_0040af4c(local_34,*local_38,local_38[9],local_40[0],0);
            }
          }
          iVar3 = iVar3 + 1;
        }
        puVar7 = puVar8;
        if (DAT_00423600 == 2) {
LAB_0040c6bc:
          iVar3 = *(int *)puVar1;
          *(int *)puVar1 = iVar3 + 1;
          if (0 < iVar3 + 1) goto code_r0x0040c6d0;
        }
        else {
          if ((DAT_00423600 != 4) && (DAT_00423600 != 6)) goto LAB_0040c3fc;
          iVar3 = *(int *)puVar2;
          *(int *)puVar2 = iVar3 + 1;
          if (5 < iVar3 + 1) {
            *(undefined4 *)puVar2 = 0;
            goto LAB_0040c6bc;
          }
        }
        iVar3 = 0;
      } while( true );
    }
  }
  DAT_00423600 = uVar4;
  return;
code_r0x0040c6d0:
  *(undefined4 *)PTR_wlan_idx_00423518 = 0;
  goto LAB_0040c3fc;
}

