/* read_from_pipe @ 00409d38 */

undefined4 read_from_pipe(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar5 = (param_1[0x234] - (int)param_1[0x11]) + param_1[0x233];
  if (iVar5 == 0) {
    if (param_1[6] != 0) {
      *param_1 = 8;
      return 1;
    }
    param_1[6] = 1;
    UNRECOVERED_JUMPTABLE = (code *)PTR_process_cgi_header_0046a79c;
    *(undefined1 *)param_1[0x11] = 0;
  }
  else {
    if (param_1[0xb] == 0) {
      (*(code *)PTR_sleep_0046ab0c)(2);
    }
    iVar5 = (*(code *)PTR_read_0046a934)(param_1[10],param_1[0x11],iVar5);
    if ((param_1[5] == 2) && (0 < iVar5)) {
      param_1[0xb] = param_1[0xb] + iVar5;
    }
    else if (iVar5 == -1) {
      piVar2 = (int *)(*(code *)PTR___errno_location_0046a764)();
      puVar1 = PTR_perror_0046ab44;
      if (*piVar2 == 4) {
        return 1;
      }
      if (*piVar2 != 0xb) {
        *param_1 = 0xc;
        (*(code *)puVar1)("pipe read");
        return 0;
      }
      return 0xffffffff;
    }
    *(undefined1 *)(param_1[0x11] + iVar5) = 0;
    if (iVar5 == 0) {
      *param_1 = 8;
      if (param_1[6] != 0) {
        param_1[6] = 2;
        return 1;
      }
      param_1[6] = 2;
      UNRECOVERED_JUMPTABLE = (code *)PTR_process_cgi_header_0046a79c;
      *(undefined1 *)param_1[0x11] = 0;
    }
    else {
      iVar6 = param_1[0x11];
      param_1[0x11] = (undefined1 *)(iVar6 + iVar5);
      if (param_1[6] != 0) {
        uVar4 = write_from_pipe(param_1);
        return uVar4;
      }
      uVar4 = param_1[0x10];
      iVar3 = (*(code *)PTR_strstr_0046a940)(uVar4,"\n\r\n");
      if ((iVar3 == 0) && (iVar3 = (*(code *)PTR_strstr_0046a940)(uVar4,&DAT_004498e4), iVar3 == 0))
      {
        return 1;
      }
      UNRECOVERED_JUMPTABLE = (code *)PTR_process_cgi_header_0046a79c;
      param_1[6] = 2;
      *(undefined1 *)(iVar6 + iVar5) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00409f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar4;
}

