/* io_shuffle @ 00409970 */

undefined4 io_shuffle(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  
  if (param_1[3] == 2) {
LAB_00409b18:
                    /* WARNING: Could not recover jumptable at 0x00409b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)PTR_complete_response_0046a864)(param_1);
    return uVar2;
  }
  iVar4 = *(int *)param_1[8];
  iVar5 = (((int *)param_1[8])[1] + 1) - iVar4;
  if (0x1f00 - param_1[0x14] < iVar5) {
    iVar5 = 0x1f00 - param_1[0x14];
  }
  if ((0 < iVar5) && (param_1[10] != 0)) {
    iVar4 = (*(code *)PTR_lseek_0046aa9c)(param_1[10],iVar4,0);
    pcVar6 = (code *)PTR_perror_0046ab44;
    if (iVar4 < 0) {
      *param_1 = 0xc;
      pcVar3 = "ioshuffle lseek";
      goto LAB_00409bd8;
    }
    do {
      iVar4 = (*(code *)PTR_read_0046a934)(param_1[10],param_1[0x234] + param_1[0x14],iVar5);
      if (iVar4 != -1) {
        if (iVar4 != 0) {
          param_1[0x14] = param_1[0x14] + iVar4;
          *(int *)param_1[8] = *(int *)param_1[8] + iVar4;
          if (((int *)param_1[8])[1] - *(int *)param_1[8] != -1) goto LAB_00409b38;
          goto LAB_00409b18;
        }
        (*(code *)PTR_close_0046a694)(param_1[10]);
        param_1[10] = 0;
        goto LAB_00409b38;
      }
      piVar1 = (int *)(*(code *)PTR___errno_location_0046a764)();
      pcVar6 = (code *)PTR_perror_0046ab44;
    } while (*piVar1 == 4);
    if (*piVar1 != 0xb) {
      *param_1 = 0xc;
      pcVar3 = "ioshuffle read";
      goto LAB_00409bd8;
    }
    if (param_1[0x14] == param_1[0x13]) {
      return 0xffffffff;
    }
  }
LAB_00409b38:
  iVar5 = param_1[0x14] - param_1[0x13];
  if (iVar5 == 0) {
    if (param_1[10] == 0) {
      return 0;
    }
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    return 1;
  }
  do {
    iVar4 = (*(code *)PTR_write_0046a9fc)(param_1[0x2d],param_1[0x234] + param_1[0x13],iVar5);
    if (iVar4 != -1) {
      param_1[0x13] = param_1[0x13] + iVar4;
      param_1[0xd] = param_1[0xd] + iVar4;
      if (iVar5 != iVar4) {
        return 1;
      }
      param_1[0x14] = 0;
      param_1[0x13] = 0;
      return 1;
    }
    piVar1 = (int *)(*(code *)PTR___errno_location_0046a764)();
    pcVar6 = (code *)PTR_perror_0046ab44;
    if (*piVar1 == 0xb) {
      return 0xffffffff;
    }
  } while (*piVar1 == 4);
  *param_1 = 0xc;
  pcVar3 = "ioshuffle write";
LAB_00409bd8:
  (*pcVar6)(pcVar3);
  return 0;
}

