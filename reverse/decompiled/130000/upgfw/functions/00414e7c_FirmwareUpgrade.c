/* FirmwareUpgrade @ 00414e7c */

/* WARNING: Removing unreachable block (ram,0x00415340) */

undefined4 FirmwareUpgrade(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  short sVar6;
  char cVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [200];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  
  uVar2 = FUN_00414c60();
  FUN_00414d78(uVar2,&local_118,&local_114);
  if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
    (*(code *)PTR_set_upgrade_size_0057db60)(*(int *)(param_1 + 0x88) + -0x10);
  }
  local_34 = 0;
  iVar13 = 0;
  do {
    local_38 = iVar13 + 0x10;
    if (*(uint *)(param_1 + 0x88) <= local_38) {
LAB_00415450:
      if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
        (*(code *)PTR_update_result_0057d578)(200);
      }
      DAT_0057e9d0 = 1;
      return 200;
    }
    local_40 = *(int *)(param_1 + 0x80);
    iVar14 = local_40 + iVar13;
    uVar12 = *(uint *)(iVar14 + 0xc);
    iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b80,4);
    local_3c = uVar12 + 0x10;
    local_30 = local_3c;
    if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b88,4), iVar3 == 0)
       ) {
      iVar3 = 1;
LAB_004150d8:
      if (0x400000 < (int)uVar12) {
        pcVar8 = "Image len exceed max size 0x%x ! len=0x%x</b><br>";
        uVar10 = 0x400000;
        uVar11 = uVar12;
LAB_0041517c:
        (*(code *)PTR_sprintf_0057d6e0)(auStack_108,pcVar8,uVar10,uVar11);
LAB_004151e4:
        if (*(int *)PTR_g_progress_flag_0057e3a8 != 0) {
          (*(code *)PTR_update_result_0057d578)(0x192);
        }
        (*(code *)PTR_fprintf_0057d7b4)(*(undefined4 *)PTR_stderr_0057dd14,"%s\n",auStack_108);
        return 0x192;
      }
      if ((iVar3 == 1) || (iVar3 == 3)) {
        sVar6 = 0;
        for (iVar4 = 0; iVar4 < (int)uVar12; iVar4 = iVar4 + 2) {
          sVar6 = sVar6 + *(short *)(local_40 + local_38 + iVar4);
        }
        if (sVar6 != 0) {
          uVar11 = (uint)*(ushort *)(local_40 + uVar12 + -2);
          pcVar8 = "Image checksum mismatched! len=0x%x, checksum=0x%x</b><br>";
          uVar10 = uVar12;
          goto LAB_0041517c;
        }
        if (iVar3 == 3) {
          ppuVar5 = (undefined **)(&DAT_00576558 + (local_114 + -1) * 4);
        }
        else {
          if (iVar3 != 1) goto LAB_00415260;
          ppuVar5 = &PTR_s__dev_mtdblock0_00576550 + local_114 + -1;
        }
        pcVar8 = *ppuVar5;
      }
      else {
        cVar7 = '\0';
        for (iVar4 = 0; iVar4 < (int)uVar12; iVar4 = iVar4 + 1) {
          cVar7 = cVar7 + *(char *)(local_40 + local_38 + iVar4);
        }
        if (cVar7 != '\0') {
          pcVar8 = "Image checksum mismatched! len=0x%x</b><br>";
          goto LAB_004151dc;
        }
LAB_00415260:
        pcVar8 = "/dev/mtdblock0";
      }
      local_40 = (*(code *)PTR_open_0057e750)(pcVar8,2);
      if (local_40 == -1) {
        (*(code *)PTR_strcpy_0057d0d4)(auStack_108,"File open failed!");
      }
      else {
        if ((iVar3 == 1) || (uVar9 = 0, iVar3 != 3)) {
          uVar9 = *(undefined4 *)(iVar14 + 8);
        }
        (*(code *)PTR_lseek_0057e15c)(local_40,uVar9,0);
        if (iVar3 == 3) {
          iVar4 = 0x10;
          local_3c = uVar12;
        }
        else {
          iVar4 = 0;
          if (iVar3 == 1) {
            uVar9 = FUN_00413c98((&PTR_s__dev_mtdblock0_00576550)[local_118 + -1],uVar2);
            *(undefined4 *)(iVar14 + 8) = uVar9;
          }
        }
        puVar1 = PTR_g_progress_flag_0057e3a8;
        iVar3 = (int)local_3c / 100;
        local_38 = iVar4 + iVar13;
        uVar12 = 0;
        (*(code *)PTR_printf_0057d248)("fwLen=[ %d ]\nperWrite=[ %d ]\n\n",local_3c,iVar3);
        while( true ) {
          if ((int)(local_3c - uVar12) < iVar3) {
            iVar3 = local_3c - uVar12;
          }
          if (uVar12 == local_3c) break;
          iVar14 = (*(code *)PTR_write_0057dcb4)
                             (local_40,*(int *)(param_1 + 0x80) + local_38 + uVar12,iVar3);
          uVar12 = uVar12 + iVar14;
          if (*(int *)puVar1 != 0) {
            (*(code *)PTR_increase_progress_0057e0fc)(iVar14,5);
          }
          (*(code *)PTR_sync_0057d8e8)();
          (*(code *)PTR_usleep_0057e6a8)(5000);
        }
        (*(code *)PTR_printf_0057d248)("write over, totalwrite=[ %d ]\n",uVar12);
        iVar13 = local_30 + iVar13;
        (*(code *)PTR_close_0057dbfc)(local_40);
      }
    }
    else {
      iVar4 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b90,4);
      iVar3 = 2;
      if (iVar4 == 0) goto LAB_004150d8;
      iVar4 = (*(code *)PTR_memcmp_0057d714)(iVar14,&DAT_00532b98,4);
      iVar3 = 3;
      if (iVar4 == 0) goto LAB_004150d8;
      iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPHS",6);
      if (((iVar3 != 0) && (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPDS",6), iVar3 != 0))
         && (iVar3 = (*(code *)PTR_memcmp_0057d714)(iVar14,"COMPCS",6), iVar3 != 0)) {
        if (local_34 == 0) {
          pcVar8 = "%d:Invalid file format!";
          uVar12 = 0x204;
LAB_004151dc:
          (*(code *)PTR_sprintf_0057d6e0)(auStack_108,pcVar8,uVar12);
          goto LAB_004151e4;
        }
        goto LAB_00415450;
      }
      local_110 = 0;
      local_10c = 0;
      iVar3 = FUN_00414460(*(int *)(param_1 + 0x80) + iVar13,DAT_0057e9dc,&local_110,&local_10c);
      if ((local_10c == 0) || (local_110 == 0)) {
        pcVar8 = "%d:Invalid file format!";
        uVar12 = 0x1f6;
        goto LAB_004151dc;
      }
      (*(code *)PTR_strcpy_0057d0d4)(auStack_108,"Update successfully!");
      iVar13 = iVar13 + iVar3;
    }
    local_34 = 1;
  } while( true );
}

