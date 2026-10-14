/* range_parse @ 0040a5f8 */

undefined4 range_parse(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined1 auStack_a8 [120];
  undefined1 *local_30;
  
  iVar1 = (*(code *)PTR_strncasecmp_0046aa8c)(param_2,"bytes=",6);
  local_30 = auStack_a8;
  if (iVar1 == 0) {
    (*(code *)PTR_memcpy_0046ab5c)(local_30,&DAT_0044a750,0x78);
    pcVar9 = (char *)(param_2 + 6);
    iVar7 = 0;
    iVar1 = 0;
    uVar10 = 0;
    do {
      iVar3 = (int)*pcVar9;
      pcVar9 = pcVar9 + 1;
      if (iVar3 == 0x20) {
        iVar8 = 1;
      }
      else if (iVar3 < 0x21) {
        iVar8 = 4;
        if ((iVar3 != 0) && ((iVar3 < 0 || (iVar8 = 1, 4 < iVar3 - 9U)))) goto LAB_0040a73c;
      }
      else {
        iVar8 = 3;
        if (iVar3 != 0x2d) {
          if (iVar3 < 0x2e) {
            iVar8 = 2;
            if (iVar3 != 0x2c) {
LAB_0040a73c:
              iVar8 = 5;
            }
          }
          else {
            iVar8 = 0;
            if (9 < iVar3 - 0x30U) goto LAB_0040a73c;
          }
        }
      }
      uVar10 = *(uint *)(local_30 + (uVar10 * 6 + iVar8) * 4);
      uVar6 = uVar10 & 0xe0;
      if (uVar6 == 0x20) {
        iVar1 = iVar3 + -0x30 + iVar1 * 10;
      }
      else if (uVar6 == 0x60) {
        iVar1 = -1;
      }
      else if (uVar6 == 0x40) {
        iVar7 = iVar3 + -0x30 + iVar7 * 10;
      }
      else if (uVar6 == 0x80) {
        iVar7 = -1;
      }
      if ((uVar10 & 0x18) == 0x10) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,"Invalid range request \"%s\".\n",param_2);
        iVar1 = *(int *)(param_1 + 0x20);
        while (iVar7 = iVar1, iVar7 != 0) {
          iVar1 = *(int *)(iVar7 + 8);
          *(int *)(iVar7 + 8) = DAT_0046dfb0;
          DAT_0046dfb0 = iVar7;
        }
LAB_0040a814:
        *(undefined4 *)(param_1 + 0x20) = 0;
        iVar1 = range_pool_pop();
        *(int *)(param_1 + 0x20) = iVar1;
        *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        return 0;
      }
      if ((uVar10 & 0x18) == 0x18) {
        if ((iVar1 == iVar7) && (iVar1 == -1)) {
          (*(code *)PTR_fputs_0046a6e4)
                    ("Invalid range request (neither start nor stop were specified).\n",
                     *(undefined4 *)PTR_stderr_0046a7f0);
          iVar1 = *(int *)(param_1 + 0x20);
          while (iVar7 = iVar1, iVar7 != 0) {
            iVar1 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = DAT_0046dfb0;
            DAT_0046dfb0 = iVar7;
          }
          goto LAB_0040a814;
        }
        piVar4 = (int *)range_pool_pop();
        if ((*(uint *)PTR_debug_level_0046abf4 & 0x80) != 0) {
          (*(code *)PTR_fprintf_0046a9ec)
                    (*(undefined4 *)PTR_stderr_0046a7f0,"range.c, range_add: got: %lu-%lu\n",iVar1,
                     iVar7);
        }
        iVar3 = *(int *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x20) == 0) {
          *(int **)(param_1 + 0x20) = piVar4;
        }
        else {
          do {
            iVar5 = iVar3;
            iVar3 = *(int *)(iVar5 + 8);
          } while (iVar3 != 0);
          *(int **)(iVar5 + 8) = piVar4;
        }
        piVar4[1] = iVar7;
        *piVar4 = iVar1;
        iVar7 = 0;
        iVar1 = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
      uVar10 = uVar10 & 7;
    } while (iVar8 != 4);
    uVar2 = 1;
  }
  else {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"range \"%s\" doesn\'t start with \"bytes=\"\n",
               param_2);
    uVar2 = 0;
  }
  return uVar2;
}

