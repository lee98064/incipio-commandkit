/* FUN_00414550 @ 00414550 */

int FUN_00414550(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_s1;
  int iVar7;
  uint uVar8;
  int unaff_s5;
  undefined4 local_38 [2];
  int local_30;
  int local_2c;
  
  local_2c = 0;
  iVar7 = 0;
  local_30 = 0;
  bVar1 = false;
  uVar8 = 0;
  do {
    iVar6 = param_1 + iVar7;
    iVar2 = (*(code *)PTR_memcmp_0057d844)(iVar6,"COMPHS",6);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = (*(code *)PTR_memcmp_0057d844)(iVar6,"COMPDS",6);
      if (((iVar2 != 0) && (iVar2 = (*(code *)PTR_memcmp_0057d844)(iVar6,"COMPCS",6), iVar2 != 0))
         && (local_2c != 0)) break;
    }
    iVar6 = param_1 + iVar7;
    iVar2 = (*(code *)PTR_malloc_0057e48c)((uint)*(ushort *)(iVar6 + 6) * *(int *)(iVar6 + 8));
    local_30 = iVar2;
    if (iVar2 == 0) {
      (*(code *)PTR_puts_0057d338)("malloc for expFile error!!");
      return 0;
    }
    if (!bVar1) {
      unaff_s1 = iVar2;
    }
    FUN_004143c8(param_1 + iVar7 + 0xc,*(undefined4 *)(iVar6 + 8),iVar2);
    iVar3 = (*(code *)PTR_sscanf_0057dc04)(unaff_s1 + 2,&DAT_00532f3c,local_38);
    if (bVar1) {
      unaff_s5 = iVar2;
    }
    if (iVar3 != 1) {
      local_38[0] = 0xffffffff;
    }
    iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f44,2);
    uVar5 = 1;
    if (iVar3 == 0) {
LAB_00414748:
      if (bVar1) {
        cVar4 = '\0';
        iVar3 = iVar2;
        while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
          cVar4 = cVar4 + *(char *)(iVar3 + 6);
          iVar3 = iVar3 + 1;
        }
      }
      else {
        cVar4 = '\0';
        for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
          cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
        }
      }
      if (cVar4 != '\0') {
LAB_00414a74:
        uVar5 = 0;
        goto LAB_00414a78;
      }
      FUN_0041435c(4,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
      iVar6 = *(int *)(iVar6 + 8);
      uVar8 = uVar8 | 4;
LAB_0041490c:
      local_2c = 1;
      iVar7 = iVar6 + 0xc + iVar7;
      (*(code *)PTR_free_0057d45c)(iVar2);
      local_30 = 0;
    }
    else {
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f48,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414748;
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f4c,2,2);
      if (iVar3 == 0) {
        uVar5 = 0;
        goto LAB_00414748;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f60,2);
      uVar5 = 1;
      if (iVar3 == 0) {
LAB_00414850:
        if (bVar1) {
          cVar4 = '\0';
          iVar3 = iVar2;
          while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
            cVar4 = cVar4 + *(char *)(iVar3 + 6);
            iVar3 = iVar3 + 1;
          }
        }
        else {
          cVar4 = '\0';
          for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
            cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
          }
        }
        if (cVar4 == '\0') {
          FUN_0041435c(2,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
          iVar6 = *(int *)(iVar6 + 8);
          uVar8 = uVar8 | 2;
          goto LAB_0041490c;
        }
        goto LAB_00414a74;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f50,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414850;
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f54,2,2);
      if (iVar3 == 0) {
        uVar5 = 0;
        goto LAB_00414850;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f64,2);
      uVar5 = 1;
      if (iVar3 == 0) {
LAB_00414970:
        if (bVar1) {
          cVar4 = '\0';
          iVar3 = iVar2;
          while (iVar3 + 1 != iVar2 + *(ushort *)(unaff_s5 + 4) + 1) {
            cVar4 = cVar4 + *(char *)(iVar3 + 6);
            iVar3 = iVar3 + 1;
          }
        }
        else {
          cVar4 = '\0';
          for (iVar3 = 0; iVar3 < *(int *)(unaff_s1 + 4); iVar3 = iVar3 + 1) {
            cVar4 = cVar4 + *(char *)(iVar2 + iVar3 + 8);
          }
        }
        if (cVar4 == '\0') {
          FUN_0041435c(1,param_1 + iVar7,*(int *)(iVar6 + 8) + 0xc,uVar5,local_38[0]);
          local_2c = 1;
          local_30 = 0;
          iVar7 = *(int *)(iVar6 + 8) + 0xc + iVar7;
          (*(code *)PTR_free_0057d45c)(iVar2);
          uVar8 = uVar8 | 1;
          goto LAB_00414a48;
        }
        goto LAB_00414a74;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f58,2,1);
      uVar5 = 2;
      if (iVar3 == 0) goto LAB_00414970;
      iVar3 = (*(code *)PTR_memcmp_0057d844)(unaff_s1,&DAT_00532f5c,2,2);
      uVar5 = 0;
      if (iVar3 == 0) goto LAB_00414970;
    }
LAB_00414a48:
  } while (iVar7 < param_2);
  uVar5 = 1;
  if (local_30 != 0) {
LAB_00414a78:
    (*(code *)PTR_free_0057d45c)(local_30);
  }
  *param_3 = uVar8;
  *param_4 = uVar5;
  return iVar7;
}

