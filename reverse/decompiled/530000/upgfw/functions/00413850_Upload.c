/* Upload @ 00413850 */

/* WARNING: Removing unreachable block (ram,0x00413ba8) */
/* WARNING: Removing unreachable block (ram,0x00413bf0) */

undefined4 Upload(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  uint unaff_s0;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_100 [200];
  int local_38;
  uint local_34;
  undefined1 *local_30;
  
  local_30 = auStack_100;
  local_38 = 0;
  iVar14 = 0;
  iVar13 = 0;
  bVar2 = false;
  iVar11 = 0;
  do {
    local_34 = *(uint *)(param_1 + 0x84);
    uVar15 = iVar11 + 0x10;
    if (local_34 <= uVar15) {
LAB_00413b78:
      *(int *)(param_1 + 0x88) = iVar14;
      iVar11 = FUN_00413600(param_1,iVar11);
      if (iVar11 == 0) {
LAB_00413c34:
        if (*(int *)PTR_g_progress_flag_0057e4dc != 0) {
          (*(code *)PTR_update_result_0057d6a8)(0x191);
        }
        DAT_0057eb04 = 0;
        (*(code *)PTR_fprintf_0057d8e4)(*(undefined4 *)PTR_stderr_0057de44,"%s\n",auStack_100);
        uVar4 = 0x191;
      }
      else {
        DAT_0057eb04 = *(int *)(param_1 + 0x84) / 0x11001 + 0x3e;
        if ((iVar13 != 0) && (!bVar2)) {
          (*(code *)PTR_strcpy_0057d204)(auStack_100,"Update successfully!");
          DAT_0057eb04 = *(int *)(param_1 + 0x84) / 0x11001 + 0x32;
          DAT_0057eb08 = iVar13;
        }
        uVar4 = 4;
        if (*(int *)PTR_g_progress_flag_0057e4dc != 0) {
          (*(code *)PTR_update_result_0057d6a8)(4);
          uVar4 = 4;
        }
      }
      return uVar4;
    }
    iVar12 = *(int *)(param_1 + 0x80);
    iVar10 = iVar12 + iVar11;
    uVar9 = iVar10 + 0xcU & 3;
    iVar5 = *(int *)((iVar10 + 0xcU) - uVar9);
    iVar3 = (*(code *)PTR_memcmp_0057d844)(iVar10,&DAT_00532cb4,4);
    uVar1 = iVar10 + 0xfU & 3;
    unaff_s0 = (iVar5 << uVar9 * 8 | unaff_s0 & 0xffffffffU >> (4 - uVar9) * 8) &
               -1 << (uVar1 + 1) * 8 | *(uint *)((iVar10 + 0xfU) - uVar1) >> (3 - uVar1) * 8;
    iVar5 = 1;
    if (iVar3 == 0) {
LAB_00413a38:
      if (0x400000 < (int)unaff_s0) {
        pcVar8 = "Image len exceed max size 0x%x ! len=0x%x";
        uVar15 = 0x400000;
        uVar9 = unaff_s0;
LAB_00413a64:
        (*(code *)PTR_sprintf_0057d810)(auStack_100,pcVar8,uVar15,uVar9);
        goto LAB_00413c34;
      }
      if ((iVar5 == 1) || (iVar5 == 3)) {
        sVar6 = 0;
        for (iVar5 = 0; iVar5 < (int)unaff_s0; iVar5 = iVar5 + 2) {
          sVar6 = sVar6 + *(short *)(iVar12 + uVar15 + iVar5);
        }
        if (sVar6 != 0) {
          uVar9 = (uint)*(ushort *)(iVar12 + unaff_s0 + -2);
          pcVar8 = "Image checksum mismatched! len=0x%x, checksum=0x%x";
          uVar15 = unaff_s0;
          goto LAB_00413a64;
        }
      }
      else {
        cVar7 = '\0';
        for (iVar5 = 0; iVar5 < (int)unaff_s0; iVar5 = iVar5 + 1) {
          cVar7 = cVar7 + *(char *)(iVar12 + uVar15 + iVar5);
        }
        if (cVar7 != '\0') {
          pcVar8 = "Image checksum mismatched! len=0x%x";
LAB_00413b20:
          (*(code *)PTR_sprintf_0057d810)(auStack_100,pcVar8,unaff_s0);
          goto LAB_00413c34;
        }
      }
      (*(code *)PTR_sprintf_0057d810)
                (local_30,"Upload successfully (size = %d bytes)! Firmware update in progress.",
                 local_34);
      unaff_s0 = unaff_s0 + 0x10;
      iVar14 = unaff_s0 + iVar14;
      iVar11 = unaff_s0 + iVar11;
      bVar2 = true;
    }
    else {
      iVar5 = (*(code *)PTR_memcmp_0057d844)(iVar10,&DAT_00532cbc,4);
      if (iVar5 == 0) {
        iVar5 = 1;
        goto LAB_00413a38;
      }
      iVar3 = (*(code *)PTR_memcmp_0057d844)(iVar10,&DAT_00532cc4,4);
      iVar5 = 2;
      if (iVar3 == 0) goto LAB_00413a38;
      iVar3 = (*(code *)PTR_memcmp_0057d844)(iVar10,&DAT_00532ccc,4);
      iVar5 = 3;
      if (iVar3 == 0) goto LAB_00413a38;
      iVar5 = (*(code *)PTR_memcmp_0057d844)(iVar10,"COMPHS",6);
      if (((iVar5 != 0) && (iVar5 = (*(code *)PTR_memcmp_0057d844)(iVar10,"COMPDS",6), iVar5 != 0))
         && (iVar5 = (*(code *)PTR_memcmp_0057d844)(iVar10,"COMPCS",6), iVar5 != 0)) {
        if (local_38 == 0) {
          pcVar8 = "%d:Invalid file format!";
          unaff_s0 = 0x6a8;
          goto LAB_00413b20;
        }
        goto LAB_00413b78;
      }
      iVar13 = (*(code *)PTR_memcmp_0057d844)(iVar10,"COMPCS",6);
      if (iVar13 == 0) {
        iVar13 = 1;
        iVar11 = *(int *)(iVar12 + iVar11 + 8) + 0xc + iVar11;
        DAT_0057eb0c = iVar11;
      }
      else {
        iVar13 = 1;
        iVar11 = *(int *)(iVar12 + iVar11 + 8) + 0xc + iVar11;
      }
    }
    local_38 = 1;
  } while( true );
}

