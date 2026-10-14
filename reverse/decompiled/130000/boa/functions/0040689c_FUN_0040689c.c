/* FUN_0040689c @ 0040689c */

void FUN_0040689c(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  code *pcVar12;
  char acStack_431 [1033];
  
  iVar11 = 0;
  DAT_0046c5e4 = (*(code *)PTR_getuid_0046ab2c)();
  puVar3 = PTR_debug_level_0046abf4;
  puVar2 = PTR___ctype_b_0046abc0;
  puVar1 = PTR_stderr_0046a7f0;
  pcVar10 = acStack_431 + 1;
  do {
    do {
      do {
        iVar7 = (*(code *)PTR_fgets_0046ab78)(pcVar10,0x400,param_1);
        if (iVar7 == 0) {
          return;
        }
        iVar11 = iVar11 + 1;
      } while (((acStack_431[1] == '\0') || (acStack_431[1] == '#')) || (acStack_431[1] == '\n'));
      iVar7 = (*(code *)PTR_strlen_0046a714)(pcVar10);
      pcVar5 = pcVar10 + iVar7 + -1;
      while( true ) {
        iVar7 = *(int *)puVar2;
        if (((*(ushort *)(iVar7 + *pcVar5 * 2) & 0x20) == 0) || (pcVar5 <= pcVar10)) break;
        *pcVar5 = '\0';
        pcVar5 = pcVar5 + -1;
      }
      pcVar5 = pcVar10;
    } while (acStack_431[1] == '\0');
    do {
      pcVar8 = pcVar5;
      pcVar5 = pcVar8 + 1;
    } while ((*(ushort *)(iVar7 + *pcVar8 * 2) & 0x20) == 0);
    pcVar5 = (char *)0x0;
    if (*pcVar8 != 0) {
      *pcVar8 = '\0';
      pcVar5 = pcVar8 + 1;
    }
    puVar6 = (undefined4 *)FUN_004067ec(pcVar10);
    if (puVar6 == (undefined4 *)0x0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"Line %d: Did not find keyword \"%s\"\n",iVar11,
                 pcVar10);
      goto LAB_00406ae8;
    }
    if ((*(uint *)puVar3 & 0x100) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)puVar1,"Found keyword %s in \"%s\" (%s)!\n",*puVar6,pcVar10,pcVar5);
    }
    iVar7 = puVar6[1];
    if (iVar7 == 2) {
      uVar9 = puVar6[3];
      pcVar12 = (code *)puVar6[2];
      pcVar8 = (char *)0x0;
    }
    else if (iVar7 == 3) {
      iVar7 = *(int *)puVar2;
      pcVar8 = pcVar5;
      do {
        pcVar5 = pcVar8;
        pcVar8 = pcVar5 + 1;
      } while ((*(ushort *)(iVar7 + *pcVar5 * 2) & 0x20) != 0);
      pcVar4 = pcVar5;
      if (*pcVar5 == 0) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,"expected at least 1 arg! (%s)\n",*puVar6);
        goto LAB_00406ae8;
      }
      do {
        pcVar8 = pcVar4;
        pcVar4 = pcVar8 + 1;
      } while ((*(ushort *)(iVar7 + *pcVar8 * 2) & 0x20) == 0);
      if (*pcVar8 == 0) {
LAB_00406b58:
        pcVar8 = (char *)0x0;
      }
      else {
        *pcVar8 = '\0';
        do {
          pcVar8 = pcVar8 + 1;
        } while ((*(ushort *)(iVar7 + *pcVar8 * 2) & 0x20) != 0);
        if (*pcVar8 == 0) goto LAB_00406b58;
      }
      uVar9 = puVar6[3];
      pcVar12 = (code *)puVar6[2];
    }
    else {
      pcVar5 = (char *)0x0;
      if (iVar7 != 1) {
LAB_00406ae8:
        (*(code *)PTR_exit_0046a75c)(1);
        return;
      }
      uVar9 = puVar6[3];
      pcVar12 = (code *)puVar6[2];
      pcVar8 = (char *)0x0;
    }
    (*pcVar12)(pcVar5,pcVar8,uVar9);
  } while( true );
}

