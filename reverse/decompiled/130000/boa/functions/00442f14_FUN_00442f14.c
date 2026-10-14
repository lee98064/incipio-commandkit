/* FUN_00442f14 @ 00442f14 */

/* WARNING: Removing unreachable block (ram,0x00443308) */
/* WARNING: Removing unreachable block (ram,0x00443354) */

void FUN_00442f14(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char *pcVar9;
  uint unaff_s1;
  int iVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_100 [200];
  int local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  local_34 = (*(code *)PTR_get_shm_id_0046a7d4)();
  (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"submit-url",&DAT_0044b32c);
  iVar5 = FUN_00442e04(*(undefined4 *)(param_1 + 0x98));
  if (iVar5 == -1) {
LAB_00443124:
    pcVar9 = "<b>Invalid file format!";
  }
  else {
    local_38 = 0;
    bVar11 = false;
    bVar3 = false;
    local_30 = auStack_100;
    while( true ) {
      uVar14 = *(uint *)(param_1 + 0x9c);
      uVar13 = iVar5 + 0x10;
      if (uVar14 <= uVar13) break;
      iVar12 = *(int *)(param_1 + 0x98);
      iVar10 = iVar12 + iVar5;
      uVar1 = iVar10 + 0xcU & 3;
      iVar7 = *(int *)((iVar10 + 0xcU) - uVar1);
      iVar6 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,&DAT_004568a4,4);
      uVar2 = iVar10 + 0xfU & 3;
      unaff_s1 = (iVar7 << uVar1 * 8 | unaff_s1 & 0xffffffffU >> (4 - uVar1) * 8) &
                 -1 << (uVar2 + 1) * 8 | *(uint *)((iVar10 + 0xfU) - uVar2) >> (3 - uVar2) * 8;
      iVar7 = 1;
      if (iVar6 == 0) {
LAB_00443138:
        if (0x400000 < (int)unaff_s1) {
          pcVar9 = "<b>Image len exceed max size 0x%x ! len=0x%x</b><br>";
          uVar13 = 0x400000;
          uVar14 = unaff_s1;
LAB_004431b0:
          (*(code *)PTR_sprintf_0046a808)(auStack_100,pcVar9,uVar13,uVar14);
          goto LAB_00443280;
        }
        if ((iVar7 == 1) || (cVar8 = '\0', iVar7 == 3)) {
          iVar7 = (*(code *)PTR_fwChecksumOk_0046ac70)(iVar12 + uVar13,unaff_s1);
          if (iVar7 == 0) {
            uVar14 = (uint)*(ushort *)(*(int *)(param_1 + 0x98) + unaff_s1 + -2);
            pcVar9 = "<b>Image checksum mismatched! len=0x%x, checksum=0x%x</b><br>";
            uVar13 = unaff_s1;
            goto LAB_004431b0;
          }
        }
        else {
          for (iVar7 = 0; iVar7 < (int)unaff_s1; iVar7 = iVar7 + 1) {
            cVar8 = cVar8 + *(char *)(iVar12 + uVar13 + iVar7);
          }
          if (cVar8 != '\0') {
            (*(code *)PTR_sprintf_0046a808)
                      (auStack_100,"<b>Image checksum mismatched! len=0x%x</b><br>",unaff_s1);
            goto LAB_00443280;
          }
        }
        (*(code *)PTR_sprintf_0046a808)
                  (local_30,
                   "Upload successfully (size = %d bytes)!<br><br>Firmware update in progress.",
                   *(undefined4 *)(param_1 + 0x9c));
        unaff_s1 = unaff_s1 + 0x10;
        iVar5 = unaff_s1 + iVar5;
        bVar3 = true;
      }
      else {
        iVar7 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,&DAT_004568ac,4);
        if (iVar7 == 0) {
          iVar7 = 1;
          goto LAB_00443138;
        }
        iVar6 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,&DAT_004568b4,4);
        iVar7 = 2;
        if (iVar6 == 0) goto LAB_00443138;
        iVar6 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,&DAT_004568bc,4);
        iVar7 = 3;
        if (iVar6 == 0) goto LAB_00443138;
        iVar7 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,"COMPHS",6);
        if (((iVar7 != 0) && (iVar7 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,"COMPDS",6), iVar7 != 0)
            ) && (iVar7 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,"COMPCS",6), iVar7 != 0)) {
          if (local_38 == 0) goto LAB_00443124;
          break;
        }
        iVar7 = (*(code *)PTR_memcmp_0046a8d0)(iVar10,"COMPCS",6);
        if (iVar7 == 0) {
          bVar11 = true;
          iVar5 = *(int *)(iVar12 + iVar5 + 8) + 0xc + iVar5;
          DAT_0046f46c = iVar5;
        }
        else {
          bVar11 = true;
          iVar5 = *(int *)(iVar12 + iVar5 + 8) + 0xc + iVar5;
        }
      }
      local_38 = 1;
    }
    iVar5 = FUN_0044275c(*(undefined4 *)(param_1 + 0x98),iVar5,uVar14);
    if (iVar5 != 0) {
      isFWUPGRADE = 1;
      DAT_0046f460 = *(int *)(param_1 + 0x9c) / 0x11001 + 0x3e;
      if ((bVar11) && (!bVar3)) {
        (*(code *)PTR_strcpy_0046ac60)(auStack_100,"<b>Update successfully!");
        DAT_0046f460 = *(int *)(param_1 + 0x9c) / 0x11001 + 0x32;
        DAT_0046f464 = 1;
      }
      (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,"/status.htm");
      (*(code *)PTR_strcpy_0046ac60)(PTR_okMsg_0046ab58,auStack_100);
      puVar4 = PTR_send_redirect_perm_0046ac78;
      *(int *)PTR_countDownTime_0046a6fc = DAT_0046f460;
      (*(code *)puVar4)(param_1,"/countDownPage.htm");
      return;
    }
    pcVar9 = "Signature verify fail!<br>Your firmware is not a dual image version!<br>";
  }
  (*(code *)PTR_strcpy_0046ac60)(auStack_100,pcVar9);
LAB_00443280:
  (*(code *)PTR_clear_fwupload_shm_0046a8b8)(local_34);
  DAT_0046f460 = 0;
  FUN_00441988(param_1);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_100);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=\"button\" onclick=\"history.go (-1)\" value=\"&nbsp;&nbsp;OK&nbsp;&nbsp\" name=\"OK\"></form></blockquote></body></html>"
            );
  return;
}

