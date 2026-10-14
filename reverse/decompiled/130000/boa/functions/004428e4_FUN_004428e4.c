/* FUN_004428e4 @ 004428e4 */

int FUN_004428e4(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  
  local_2c = 0;
  iVar6 = 0;
  local_30 = 0;
  uVar7 = 0;
  do {
    iVar5 = param_1 + iVar6;
    iVar1 = (*(code *)PTR_memcmp_0046a8d0)(iVar5,"COMPHS",6);
    if ((((iVar1 != 0) && (iVar1 = (*(code *)PTR_memcmp_0046a8d0)(iVar5,"COMPDS",6), iVar1 != 0)) &&
        (iVar1 = (*(code *)PTR_memcmp_0046a8d0)(iVar5,"COMPCS",6), iVar1 != 0)) && (local_2c != 0))
    break;
    iVar5 = param_1 + iVar6;
    iVar1 = (*(code *)PTR_malloc_0046ab14)((uint)*(ushort *)(iVar5 + 6) * *(int *)(iVar5 + 8));
    local_30 = iVar1;
    if (iVar1 == 0) {
      (*(code *)PTR_puts_0046ab3c)("malloc for expFile error!!");
      return 0;
    }
    (*(code *)PTR_Decode_0046ab94)(param_1 + iVar6 + 0xc,*(undefined4 *)(iVar5 + 8),iVar1);
    iVar2 = (*(code *)PTR_sscanf_0046a8c4)(iVar1 + 2,&DAT_00456854,local_38);
    if (iVar2 != 1) {
      local_38[0] = 0xffffffff;
    }
    iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_0045685c,2);
    uVar4 = 1;
    if (iVar2 == 0) {
LAB_00442adc:
      cVar3 = '\0';
      iVar2 = iVar1;
      while (iVar2 + 1 != iVar1 + *(ushort *)(iVar1 + 4) + 1) {
        cVar3 = cVar3 + *(char *)(iVar2 + 6);
        iVar2 = iVar2 + 1;
      }
      if (cVar3 != '\0') {
LAB_00442d54:
        uVar4 = 0;
        goto LAB_00442d58;
      }
      (*(code *)PTR_apmib_updateFlash_0046abd8)
                (4,param_1 + iVar6,*(int *)(iVar5 + 8) + 0xc,uVar4,local_38[0]);
      iVar5 = *(int *)(iVar5 + 8);
      uVar7 = uVar7 | 4;
LAB_00442c28:
      local_2c = 1;
      iVar6 = iVar5 + 0xc + iVar6;
      (*(code *)PTR_free_0046a680)(iVar1);
      local_30 = 0;
    }
    else {
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456860,2,1);
      uVar4 = 2;
      if (iVar2 == 0) goto LAB_00442adc;
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456864,2,2);
      if (iVar2 == 0) {
        uVar4 = 0;
        goto LAB_00442adc;
      }
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456878,2);
      uVar4 = 1;
      if (iVar2 == 0) {
LAB_00442ba8:
        cVar3 = '\0';
        iVar2 = iVar1;
        while (iVar2 + 1 != iVar1 + *(ushort *)(iVar1 + 4) + 1) {
          cVar3 = cVar3 + *(char *)(iVar2 + 6);
          iVar2 = iVar2 + 1;
        }
        if (cVar3 == '\0') {
          (*(code *)PTR_apmib_updateFlash_0046abd8)
                    (2,param_1 + iVar6,*(int *)(iVar5 + 8) + 0xc,uVar4,local_38[0]);
          iVar5 = *(int *)(iVar5 + 8);
          uVar7 = uVar7 | 2;
          goto LAB_00442c28;
        }
        goto LAB_00442d54;
      }
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456868,2,1);
      uVar4 = 2;
      if (iVar2 == 0) goto LAB_00442ba8;
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_0045686c,2,2);
      if (iVar2 == 0) {
        uVar4 = 0;
        goto LAB_00442ba8;
      }
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_0045687c,2);
      uVar4 = 1;
      if (iVar2 == 0) {
LAB_00442c8c:
        cVar3 = '\0';
        iVar2 = iVar1;
        while (iVar2 + 1 != iVar1 + *(ushort *)(iVar1 + 4) + 1) {
          cVar3 = cVar3 + *(char *)(iVar2 + 6);
          iVar2 = iVar2 + 1;
        }
        if (cVar3 == '\0') {
          (*(code *)PTR_apmib_updateFlash_0046abd8)
                    (1,param_1 + iVar6,*(int *)(iVar5 + 8) + 0xc,uVar4,local_38[0]);
          local_2c = 1;
          local_30 = 0;
          iVar6 = *(int *)(iVar5 + 8) + 0xc + iVar6;
          (*(code *)PTR_free_0046a680)(iVar1);
          uVar7 = uVar7 | 1;
          goto LAB_00442d28;
        }
        goto LAB_00442d54;
      }
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456870,2,1);
      uVar4 = 2;
      if (iVar2 == 0) goto LAB_00442c8c;
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar1,&DAT_00456874,2,2);
      uVar4 = 0;
      if (iVar2 == 0) goto LAB_00442c8c;
    }
LAB_00442d28:
  } while (iVar6 < param_2);
  uVar4 = 1;
  if (local_30 != 0) {
LAB_00442d58:
    (*(code *)PTR_free_0046a680)(local_30);
  }
  *param_3 = uVar7;
  *param_4 = uVar4;
  return iVar6;
}

