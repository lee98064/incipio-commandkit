/* FUN_0040c6c4 @ 0040c6c4 */

void FUN_0040c6c4(uint *param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auStack_8020 [32772];
  
  puVar2 = PTR_req_flush_0046a698;
  if ((param_1[0x14] != 0) && (*param_1 < 0xb)) {
    *param_1 = 10;
    iVar5 = (*(code *)puVar2)();
    if (iVar5 == -2) {
      *param_1 = 0xc;
    }
    else if (0 < iVar5) {
      return;
    }
  }
  (*(code *)PTR_dequeue_0046a790)(PTR_request_ready_0046ac54,param_1);
  if ((*param_1 == 0xb) && (param_1[4] == 0)) {
    param_1[4] = 0x198;
  }
  if (param_1[0x29] == 0) {
    if (param_1[0xe] != 0) {
      (*(code *)PTR_munmap_0046abdc)(param_1[0xe],param_1[0xb]);
    }
  }
  else {
    (*(code *)PTR_release_mmap_0046aa4c)();
  }
  if (param_1[10] != 0) {
    (*(code *)PTR_close_0046a694)();
    *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[10] >> 5) * 4) =
         ~(1 << (param_1[10] & 0x1f)) &
         *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[10] >> 5) * 4);
  }
  if (param_1[0x1d] != 0) {
    (*(code *)PTR_free_0046a680)();
    param_1[0x1d] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
  }
  if (399 < param_1[4]) {
    *(int *)(PTR_status_0046a6a8 + 4) = *(int *)(PTR_status_0046a6a8 + 4) + 1;
  }
  puVar2 = PTR_stderr_0046a7f0;
  sVar1 = *(short *)PTR_common_cgi_env_count_0046ac20;
  puVar7 = param_1 + sVar1 + 0xc36;
  for (iVar5 = 0; iVar5 + sVar1 < (int)param_1[0x17]; iVar5 = iVar5 + 1) {
    if (*puVar7 == 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar2,
                 "Warning: CGI Environment contains NULL value(index %d of %d).\n");
    }
    else {
      (*(code *)PTR_free_0046a680)(*puVar7);
    }
    puVar7 = puVar7 + 1;
  }
  if (param_1[7] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x20] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x21] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x22] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x1c] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[8] != 0) {
    (*(code *)PTR_ranges_reset_0046a998)(param_1);
  }
  if (param_1[0x2a] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x2b] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if (param_1[0x234] != 0) {
    (*(code *)PTR_free_0046a680)();
    param_1[0x234] = 0;
  }
  if (param_1[0x26] != 0) {
    (*(code *)PTR_fputs_0046a6e4)
              ("free upload data..............................\n",*(undefined4 *)PTR_stderr_0046a7f0
              );
    param_1[0x26] = 0;
  }
  if (param_1[0xc9e] != 0) {
    (*(code *)PTR_free_0046a680)();
  }
  if ((((*param_1 < 0xb) && (param_1[1] == 1)) && (param_1[4] - 1 < 499)) && (param_1[0x231] != 0))
  {
    FUN_0040c5d0(param_1,0);
    puVar2 = PTR_status_0046a6a8;
    param_1[0x231] = param_1[0x231] - 1;
    puVar4 = PTR_request_block_0046a7e4;
    puVar3 = PTR_enqueue_0046a7b4;
    *(int *)puVar2 = *(int *)puVar2 + 1;
    (*(code *)puVar3)(puVar4,param_1);
    puVar2 = PTR_max_fd_0046a684;
    *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[0x2d] >> 5) * 4) =
         *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[0x2d] >> 5) * 4) |
         1 << (param_1[0x2d] & 0x1f);
    uVar6 = param_1[0x2d];
    if (*(int *)puVar2 < (int)uVar6) {
      *(uint *)puVar2 = uVar6;
      uVar6 = param_1[0x2d];
    }
    *(uint *)(PTR_block_write_fdset_0046a8e4 + (uVar6 >> 5) * 4) =
         ~(1 << (uVar6 & 0x1f)) & *(uint *)(PTR_block_write_fdset_0046a8e4 + (uVar6 >> 5) * 4);
  }
  else {
    if (param_1[3] == 4) {
      (*(code *)PTR_read_0046a934)(param_1[0x2d],auStack_8020,0x8000);
    }
    (*(code *)PTR_close_0046a694)(param_1[0x2d]);
    *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[0x2d] >> 5) * 4) =
         ~(1 << (param_1[0x2d] & 0x1f)) &
         *(uint *)(PTR_block_read_fdset_0046a678 + (param_1[0x2d] >> 5) * 4);
    puVar3 = PTR_enqueue_0046a7b4;
    puVar2 = PTR_request_free_0046a6d0;
    total_connections = total_connections + -1;
    *(uint *)(PTR_block_write_fdset_0046a8e4 + (param_1[0x2d] >> 5) * 4) =
         ~(1 << (param_1[0x2d] & 0x1f)) &
         *(uint *)(PTR_block_write_fdset_0046a8e4 + (param_1[0x2d] >> 5) * 4);
    (*(code *)puVar3)(puVar2,param_1);
  }
  return;
}

