/* loop @ 004113f0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void loop(uint param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 local_f8;
  undefined4 local_f4;
  uint *local_30;
  
  puVar11 = (undefined4 *)(PTR_block_read_fdset_0046a678 + 0x80);
  puVar7 = (undefined4 *)PTR_block_read_fdset_0046a678;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  } while (puVar7 != puVar11);
  puVar11 = (undefined4 *)(PTR_block_write_fdset_0046a8e4 + 0x80);
  puVar7 = (undefined4 *)PTR_block_write_fdset_0046a8e4;
  do {
    *puVar7 = 0;
    puVar4 = PTR_block_write_fdset_0046a8e4;
    puVar2 = PTR_block_read_fdset_0046a678;
    puVar7 = puVar7 + 1;
  } while (puVar7 != puVar11);
  max_fd = 0xffffffff;
LAB_0041147c:
  if (*(int *)PTR_sighup_flag_0046aad8 != 0) {
    (*(code *)PTR_sighup_run_0046a820)();
  }
  if (*(int *)PTR_sigchld_flag_0046a9bc != 0) {
    (*(code *)PTR_sigchld_run_0046a884)();
  }
  if (*(int *)PTR_sigalrm_flag_0046ab80 != 0) {
    (*(code *)PTR_sigalrm_run_0046aafc)();
  }
  if (*(int *)PTR_sigterm_flag_0046a9ac == 0) {
    if (*(uint *)PTR_max_connections_0046aa30 < *(uint *)PTR_total_connections_0046a768) {
      *(uint *)(puVar2 + (param_1 >> 5) * 4) =
           ~(1 << (param_1 & 0x1f)) & *(uint *)(puVar2 + (param_1 >> 5) * 4);
    }
    else {
      bVar1 = (int)max_fd < (int)param_1;
      *(uint *)(puVar2 + (param_1 >> 5) * 4) =
           *(uint *)(puVar2 + (param_1 >> 5) * 4) | 1 << (param_1 & 0x1f);
      if (bVar1) {
        max_fd = param_1;
      }
    }
  }
  else {
    if (*(int *)PTR_sigterm_flag_0046a9ac == 1) {
      (*(code *)PTR_sigterm_stage1_run_0046a728)();
      puVar3 = PTR_close_0046a694;
      *(uint *)(puVar2 + (param_1 >> 5) * 4) =
           ~(1 << (param_1 & 0x1f)) & *(uint *)(puVar2 + (param_1 >> 5) * 4);
      (*(code *)puVar3)(param_1);
      param_1 = 0xffffffff;
    }
    if (((*(int *)PTR_sigterm_flag_0046a9ac == 2) && (*(int *)PTR_request_ready_0046ac54 == 0)) &&
       (*(int *)PTR_request_block_0046a7e4 == 0)) {
      (*(code *)PTR_sigterm_stage2_run_0046a78c)();
    }
  }
  uVar13 = max_fd;
  if ((*(int *)PTR_isREBOOTASP_0046a804 == 1) && (DAT_0046f048 != DAT_0046f044)) {
    DAT_0046f048 = DAT_0046f044;
  }
  bVar1 = max_fd == 0;
  *(undefined4 *)PTR_pending_requests_0046a9e0 = 0;
  if (bVar1) {
LAB_004118cc:
    puVar3 = PTR_request_block_0046a7e4;
    max_fd = 0xffffffff;
    if (*(int *)PTR_request_block_0046a7e4 != 0) {
      (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
      puVar6 = *(uint **)puVar3;
LAB_00411b20:
      while (puVar14 = puVar6, puVar14 != (uint *)0x0) {
        local_30 = (uint *)puVar14[0xc9f];
        if (((puVar14[0x231] < *(uint *)PTR_ka_max_0046a69c) &&
            (*(int *)PTR_ka_timeout_0046a9d0 <=
             (int)(*(int *)PTR_current_time_0046ab68 - puVar14[0x2e]))) && (puVar14[0xf] == 0)) {
          (*(code *)PTR_fputs_0046a6e4)("connection timed out\n",*(undefined4 *)PTR_stderr_0046a7f0)
          ;
          *puVar14 = 0xb;
        }
        else if (0x3c < (int)(*(int *)PTR_current_time_0046ab68 - puVar14[0x2e])) {
          (*(code *)PTR_fputs_0046a6e4)("connection timed out\n",*(undefined4 *)PTR_stderr_0046a7f0)
          ;
          *puVar14 = 0xb;
        }
        puVar6 = local_30;
        if ((puVar14[0x14] == 0) || (9 < *puVar14)) {
          switch(*puVar14) {
          case 5:
          case 0xb:
          case 0xc:
            goto switchD_00411a08_caseD_5;
          case 6:
          case 8:
          case 10:
            break;
          case 7:
            uVar13 = *(uint *)(puVar2 + (puVar14[10] >> 5) * 4);
            uVar12 = puVar14[10] & 0x1f;
            if (((int)uVar13 >> uVar12 & 1U) != 0) goto switchD_00411a08_caseD_5;
            *(uint *)(puVar2 + (puVar14[10] >> 5) * 4) = uVar13 | 1 << uVar12;
            uVar13 = puVar14[10];
            goto LAB_00411b00;
          case 9:
            goto switchD_00411a08_caseD_9;
          default:
            uVar13 = puVar14[0x2d];
            puVar10 = (uint *)(puVar2 + (uVar13 >> 5) * 4);
            goto LAB_00411ac0;
          }
        }
switchD_00411a08_caseD_6:
        uVar13 = puVar14[0x2d];
        puVar10 = (uint *)(puVar4 + (uVar13 >> 5) * 4);
LAB_00411ac0:
        if (((int)*puVar10 >> (uVar13 & 0x1f) & 1U) != 0) goto switchD_00411a08_caseD_5;
        *puVar10 = *puVar10 | 1 << (uVar13 & 0x1f);
        uVar13 = puVar14[0x2d];
LAB_00411b00:
        if ((int)max_fd < (int)uVar13) {
          max_fd = uVar13;
        }
      }
    }
    if ((*(int *)PTR_pending_requests_0046a9e0 != 0) || (*(int *)PTR_request_ready_0046ac54 != 0)) {
      if (*(int *)PTR_isREBOOTASP_0046a804 == 1) {
        DAT_0046f044 = DAT_0046f044 + 1;
      }
      (*(code *)PTR_process_requests_0046ab7c)(param_1);
      goto LAB_0041147c;
    }
  }
  else {
    local_f8 = 0;
    if (*(int *)PTR_request_ready_0046ac54 == 0) {
      local_f8 = *(undefined4 *)PTR_default_timeout_0046a6ec;
    }
    local_f4 = 0;
    if ((*(int *)PTR_request_ready_0046ac54 != 0) ||
       (puVar7 = (undefined4 *)0x0, *(int *)PTR_request_block_0046a7e4 != 0)) {
      puVar7 = &local_f8;
    }
    iVar8 = (*(code *)PTR_select_0046aad0)
                      (uVar13 + 1,PTR_block_read_fdset_0046a678,PTR_block_write_fdset_0046a8e4,0,
                       puVar7);
    if ((iVar8 != -1) || (piVar9 = (int *)(*(code *)PTR___errno_location_0046a764)(), *piVar9 != 4))
    {
      if ((*(int *)PTR_sigterm_flag_0046a9ac == 0) &&
         ((*(int *)(puVar2 + (param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1U) != 0)) {
        *(undefined4 *)PTR_pending_requests_0046a9e0 = 1;
      }
      (*(code *)PTR_time_0046a84c)(PTR_current_time_0046ab68);
      goto LAB_004118cc;
    }
    if ((*(int *)PTR_isFWUPGRADE_0046ab90 == 0) || (*(int *)PTR_isREBOOTASP_0046a804 != 1)) {
      if ((*(int *)PTR_isCFGUPGRADE_0046aab8 != 2) || (*(int *)PTR_isREBOOTASP_0046a804 != 1)) {
        if ((*(int *)PTR_isFWUPGRADE_0046ab90 == 0) && (*(int *)PTR_isREBOOTASP_0046a804 == 1)) {
          if (DAT_0046f048 == DAT_0046f044) {
            DAT_0046f04c = DAT_0046f04c + 1;
          }
          if (3 < DAT_0046f04c) {
            DAT_0046f04c = 0;
            *(undefined4 *)PTR_isFWUPGRADE_0046ab90 = 0;
            *(undefined4 *)PTR_isREBOOTASP_0046a804 = 0;
          }
        }
        goto LAB_00411850;
      }
      goto LAB_00411c24;
    }
    if (DAT_0046f048 == DAT_0046f044) {
      DAT_0046f04c = DAT_0046f04c + 1;
    }
    if (3 < DAT_0046f04c) goto LAB_00411b9c;
LAB_00411850:
    if (*(int *)PTR_isCountDown_0046a9e8 != 2) goto LAB_0041147c;
  }
LAB_00411b9c:
  puVar5 = PTR_isFWUPGRADE_0046ab90;
  puVar3 = PTR_isREBOOTASP_0046a804;
  if ((*(int *)PTR_isFWUPGRADE_0046ab90 != 0) && (*(int *)PTR_isREBOOTASP_0046a804 == 1)) {
    (*(code *)PTR_FirmwareUpgrade_0046a7a8)
              (*(undefined4 *)PTR_firmware_data_0046aa50,*(undefined4 *)PTR_firmware_len_0046a910,0,
               &local_f8);
    *(undefined4 *)puVar5 = 0;
    *(undefined4 *)puVar3 = 0;
    return;
  }
LAB_00411c24:
  puVar5 = PTR_system_0046ab18;
  puVar3 = PTR_isREBOOTASP_0046a804;
  if ((*(int *)PTR_isCFGUPGRADE_0046aab8 == 2) && (*(int *)PTR_isREBOOTASP_0046a804 == 1)) {
    *(undefined4 *)PTR_isCFGUPGRADE_0046aab8 = 0;
    *(undefined4 *)puVar3 = 0;
    (*(code *)puVar5)("reboot");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  goto LAB_0041147c;
switchD_00411a08_caseD_9:
  if (puVar14[0x14] != puVar14[0x13]) goto switchD_00411a08_caseD_6;
  if ((*(int *)(puVar2 + (puVar14[10] >> 5) * 4) >> (puVar14[10] & 0x1f) & 1U) != 0) {
switchD_00411a08_caseD_5:
    (*(code *)PTR_ready_request_0046ab40)(puVar14);
    puVar6 = local_30;
  }
  goto LAB_00411b20;
}

