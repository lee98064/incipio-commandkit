/* read_header @ 0040ae64 */

int read_header(uint *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  uint uVar11;
  
  uVar11 = param_1[0x232];
  pbVar10 = (byte *)((int)param_1 + param_1[0x12] + 0x10d5);
  if (((*(uint *)PTR_debug_level_0046abf4 & 0x10) != 0) &&
     (pbVar10 < (byte *)((int)param_1 + uVar11 + 0x10d5))) {
    *(undefined1 *)((int)param_1 + uVar11 + 0x10d5) = 0;
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"%s:%d - Parsing headers (\"%s\")\n","read.c",0x5f
               ,pbVar10);
  }
  while( true ) {
    if ((byte *)((int)param_1 + uVar11 + 0x10d5) <= pbVar10) {
      if (3 < *param_1) {
        return 1;
      }
      if (0x1fff - param_1[0x232] < 0x2000) {
        iVar4 = (*(code *)PTR_read_0046a934)(param_1[0x2d],(int)param_1 + param_1[0x232] + 0x10d5);
        puVar2 = PTR_debug_level_0046abf4;
        puVar1 = PTR_stderr_0046a7f0;
        if (iVar4 < 0) {
          piVar5 = (int *)(*(code *)PTR___errno_location_0046a764)();
          if (*piVar5 == 4) {
            return 1;
          }
          if (*piVar5 == 0xb) {
            return -1;
          }
          (*(code *)PTR_perror_0046ab44)("header read");
        }
        else {
          if (iVar4 != 0) {
            uVar11 = param_1[0x232];
            param_1[0x232] = iVar4 + uVar11;
            puVar1 = PTR_stderr_0046a7f0;
            if ((*(uint *)puVar2 & 0x10) == 0) {
              return 1;
            }
            *(undefined1 *)((int)param_1 + iVar4 + uVar11 + 0x10d5) = 0;
            (*(code *)PTR_fprintf_0046a9ec)
                      (*(undefined4 *)puVar1,"%s:%d -- We read %d bytes: \"%s\"\n","read.c",0x151,
                       iVar4,&DAT_0044b32c);
            return 1;
          }
          if (((*(uint *)PTR_ka_max_0046a69c <= param_1[0x231]) || (param_1[0xf] != 0)) ||
             (param_1[0x232] != 0)) {
            (*(code *)PTR_fputs_0046a6e4)
                      ("client unexpectedly closed connection.\n",*(undefined4 *)PTR_stderr_0046a7f0
                      );
            pcVar9 = (char *)param_1[0xf];
            if (pcVar9 == (char *)0x0) {
              pcVar9 = "(null)";
            }
            pcVar6 = (char *)param_1[7];
            if (pcVar6 == (char *)0x0) {
              pcVar6 = "(null)";
            }
            (*(code *)PTR_fprintf_0046a9ec)
                      (*(undefined4 *)puVar1,"%s -- request \"%s\" (\"%s\"): ",(int)param_1 + 0x4bd,
                       pcVar9,pcVar6);
          }
        }
      }
      else {
        if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
          (*(code *)PTR_fputs_0046a6e4)
                    ("No space left in client stream buffer, closing\n",
                     *(undefined4 *)PTR_stderr_0046a7f0);
        }
        *param_1 = 0xc;
      }
      param_1[4] = 400;
      return 0;
    }
    uVar8 = (uint)*pbVar10;
    if (((uVar8 != 0xd) && (uVar8 != 10)) && ((uVar8 != 9 && (0x5f < (uVar8 - 0x20 & 0xff)))))
    break;
    uVar3 = *param_1;
    if (uVar3 == 1) {
      if (uVar8 == 10) {
        *param_1 = 2;
      }
      else {
LAB_0040b024:
        if (uVar8 != 0xd) {
          *param_1 = 0;
        }
      }
    }
    else if (uVar3 == 0) {
      if (uVar8 == 0xd) {
        *param_1 = 1;
      }
      else {
        if (uVar8 != 10) goto LAB_0040b030;
        *param_1 = 2;
      }
      param_1[0x11] = (uint)pbVar10;
    }
    else if (uVar3 == 2) {
      uVar3 = 0;
      if (uVar8 == 0xd) {
        *param_1 = 3;
      }
      else {
        if (uVar8 == 10) {
          uVar3 = 4;
        }
        *param_1 = uVar3;
      }
    }
    else if (uVar3 == 3) {
      if (uVar8 != 10) goto LAB_0040b024;
      *param_1 = 4;
    }
LAB_0040b030:
    pbVar10 = pbVar10 + 1;
    param_1[0x12] = param_1[0x12] + 1;
    if (*param_1 == 2) {
      *(undefined1 *)param_1[0x11] = 0;
      uVar8 = param_1[0x11] - param_1[0x10];
      if (0x7ff < (int)uVar8) {
        if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040b1e0;
        uVar7 = *(undefined4 *)PTR_stderr_0046a7f0;
        pcVar9 = "Header too long at %lu bytes: \"%s\"\n";
        goto LAB_0040b224;
      }
      if (param_1[0xf] == 0) {
        iVar4 = (*(code *)PTR_process_logline_0046a958)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
        if (param_1[2] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0040b12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar4 = (*(code *)PTR_process_header_end_0046aa38)(param_1);
          return iVar4;
        }
      }
      else {
        iVar4 = (*(code *)PTR_process_option_line_0046a8b4)(param_1);
        if (iVar4 == 0) {
          return 0;
        }
      }
      param_1[0x10] = (uint)pbVar10;
    }
    else if (*param_1 == 4) {
      iVar4 = (*(code *)PTR_process_header_end_0046aa38)(param_1);
      if ((iVar4 != 0) && (param_1[3] == 4)) {
        param_1[0x10] = (uint)pbVar10;
        param_1[0x11] = (int)param_1 + param_1[0x232] + 0x10d5;
        *param_1 = 5;
        if (param_1[0x25] == 0) {
          (*(code *)PTR_fputs_0046a6e4)
                    ("Unknown Content-Length POST!\n",*(undefined4 *)PTR_stderr_0046a7f0);
        }
        else {
          uVar8 = (*(code *)PTR_boa_atoi_0046aa08)();
          if ((int)uVar8 < 0) {
            uVar8 = param_1[0x25];
            uVar7 = *(undefined4 *)PTR_stderr_0046a7f0;
            pcVar9 = "Invalid Content-Length [%s] on POST!\n";
LAB_0040b1c4:
            (*(code *)PTR_fprintf_0046a9ec)(uVar7,pcVar9,uVar8);
          }
          else {
            if ((*(int *)PTR_single_post_limit_0046a978 == 0) ||
               ((int)uVar8 <= *(int *)PTR_single_post_limit_0046a978)) {
              param_1[0xb] = uVar8;
              param_1[0xc] = 0;
              if (uVar8 < param_1[0x11] - param_1[0x10]) {
                param_1[0x11] = param_1[0x10] + uVar8;
                return iVar4;
              }
              return iVar4;
            }
            uVar7 = *(undefined4 *)PTR_stderr_0046a7f0;
            pcVar9 = "Content-Length [%d] > SinglePostLimit [%d] on POST!\n";
LAB_0040b224:
            (*(code *)PTR_fprintf_0046a9ec)(uVar7,pcVar9,uVar8);
          }
        }
LAB_0040b1e0:
        (*(code *)PTR_send_r_bad_request_0046a968)(param_1);
        iVar4 = 0;
      }
      return iVar4;
    }
  }
  if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040b1e0;
  uVar7 = *(undefined4 *)PTR_stderr_0046a7f0;
  pcVar9 = "Illegal character (%d) in stream.\n";
  goto LAB_0040b1c4;
}

