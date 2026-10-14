/* ranges_fixup @ 0040a304 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 ranges_fixup(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    while (puVar5 != (uint *)0x0) {
      puVar4 = (uint *)puVar5[2];
      puVar5[2] = (uint)DAT_0046dfb0;
      DAT_0046dfb0 = puVar5;
      puVar5 = puVar4;
    }
  }
  puVar2 = PTR_debug_level_0046abf4;
  puVar1 = PTR_stderr_0046a7f0;
  puVar4 = (uint *)0x0;
  while (puVar6 = puVar5, puVar6 != (uint *)0x0) {
    if ((*(uint *)puVar2 & 0x80) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar1,"range.c: ranges_fixup: %lu-%lu\n",*puVar6,puVar6[1]);
    }
    if ((puVar6[1] == 0xffffffff) || (*(uint *)(param_1 + 0x2c) <= puVar6[1])) {
      puVar6[1] = *(int *)(param_1 + 0x2c) - 1;
    }
    if (*puVar6 == 0xffffffff) {
      *puVar6 = *(int *)(param_1 + 0x2c) - puVar6[1];
      puVar6[1] = *(int *)(param_1 + 0x2c) - 1;
    }
    if (((int)*puVar6 < 0) || (puVar6[1] < *puVar6)) {
      if (puVar4 != (uint *)0x0) {
        puVar4[2] = puVar6[2];
      }
      puVar5 = (uint *)puVar6[2];
      puVar6[2] = (uint)DAT_0046dfb0;
      DAT_0046dfb0 = puVar6;
      if ((*(uint *)puVar2 & 0x80) != 0) {
        (*(code *)PTR_fputs_0046a6e4)
                  ("start or end of range is invalid. skipping.\n",*(undefined4 *)puVar1);
      }
    }
    else {
      if ((*(uint *)puVar2 & 0x80) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)puVar1,"ending with start: %lu\tstop: %lu\n")
        ;
      }
      if (puVar4 == (uint *)0x0) {
        *(uint **)(param_1 + 0x20) = puVar6;
      }
      puVar5 = (uint *)puVar6[2];
      puVar4 = puVar6;
    }
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    (*(code *)PTR_send_r_invalid_range_0046aa80)(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if ((*(uint *)PTR_debug_level_0046abf4 & 0x80) != 0) {
      (*(code *)PTR_fputs_0046a6e4)("ranges_fixup returning 1\n",*(undefined4 *)PTR_stderr_0046a7f0)
      ;
      uVar3 = 1;
    }
  }
  return uVar3;
}

