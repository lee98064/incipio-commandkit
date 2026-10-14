/* FUN_004339e8 @ 004339e8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_004339e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  char acStack_a2 [30];
  char cStack_84;
  char local_83;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  puVar1 = PTR_cmdlen_0061385c;
  (*(code *)PTR_fputs_00612428)
            ("Starting SerialPortThread thread\n",*(undefined4 *)PTR_stdout_00612c98);
LAB_00433a70:
  do {
    if (0 < *(int *)puVar1) {
      (*(code *)PTR_printf_0061185c)("\n cmdlen=%d \n");
      pcVar3 = (char *)0x0;
      pcVar7 = PTR_cmdBuffer_00611784;
      while( true ) {
        puVar2 = PTR_cmdlen_0061385c;
        if (*(int *)puVar1 <= (int)pcVar3) break;
        local_30 = pcVar7;
        local_2c = pcVar3 + 1;
        (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,pcVar7[(int)pcVar3]);
        pcVar3 = local_2c;
        pcVar7 = local_30;
      }
      (*(code *)PTR_putchar_00613588)(10);
      (*(code *)PTR_write_00612898)(DAT_0061505c,PTR_cmdBuffer_00611784,*(undefined4 *)puVar2);
      *(undefined4 *)puVar2 = 0;
      (*(code *)PTR_printf_0061185c)("write to serial port=%d\n",0);
    }
    local_38 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,acStack_a2 + 2,100);
  } while (local_38 < 1);
  local_2c = (char *)0x0;
  local_34 = acStack_a2 + 2;
  (*(code *)PTR_printf_0061185c)("nread=%d\n",local_38);
  do {
    pcVar3 = local_34 + (int)local_2c;
    local_2c = local_2c + 1;
    (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,*pcVar3);
  } while ((int)local_2c < local_38);
  (*(code *)PTR_putchar_00613588)(10);
  if (local_38 != 0x16) goto code_r0x00433bdc;
  goto LAB_00433cb0;
code_r0x00433bdc:
  if (local_38 == 0x1f) {
    acStack_a2[4] = 0xe0;
    acStack_a2[5] = 0x4c;
    acStack_a2[6] = 0x81;
    acStack_a2[7] = 0x96;
    acStack_a2[8] = 0xc1;
    acStack_a2[3] = 0;
    local_83 = '\0';
    pcVar3 = local_34;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      local_83 = local_83 + *pcVar7;
    } while (pcVar3 != &cStack_84);
    local_83 = -local_83;
    local_34 = local_34 + 0x1f;
    local_2c = acStack_a2 + 2;
    (*(code *)PTR_printf_0061185c)("modify nread=%d\n",0x1f);
    do {
      cVar5 = *local_2c;
      local_2c = local_2c + 1;
      (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,cVar5);
    } while (local_2c != local_34);
    (*(code *)PTR_putchar_00613588)(10);
LAB_00433cb0:
    cVar5 = '\0';
    for (iVar4 = 1; iVar4 <= local_38 + -3; iVar4 = iVar4 + 1) {
      cVar5 = cVar5 + acStack_a2[iVar4 + 2];
    }
    cVar6 = '\0';
    for (iVar4 = 1; iVar4 < local_38 + -2; iVar4 = iVar4 + 1) {
      cVar6 = cVar6 + acStack_a2[iVar4 + 2];
    }
    pcVar3 = "CKOK %2X \n";
    if (acStack_a2[local_38] != -cVar6) {
      pcVar3 = "CKERROR %2X \n";
    }
    (*(code *)PTR_printf_0061185c)(pcVar3,-cVar5);
    DAT_005ffc73 = 0;
    cVar5 = '\0';
    pcVar3 = &DAT_005ffc60;
    do {
      pcVar7 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar5 = cVar5 + *pcVar7;
    } while (pcVar3 != &DAT_005ffc73);
    DAT_005ffc74 = -cVar5;
    (*(code *)PTR_write_00612898)(DAT_0061505c,&DAT_005ffc60,0x16);
    (*(code *)PTR_printf_0061185c)("HandShakeResponse size=%d\n",0x16);
    pcVar3 = &DAT_005ffc60;
    pcVar7 = &DAT_005ffc76;
    while (pcVar3 != pcVar7) {
      local_2c = pcVar3 + 1;
      local_30 = pcVar7;
      (*(code *)PTR_printf_0061185c)(&DAT_005ad86c,*pcVar3);
      pcVar3 = local_2c;
      pcVar7 = local_30;
    }
    (*(code *)PTR_putchar_00613588)(10);
  }
  goto LAB_00433a70;
}

