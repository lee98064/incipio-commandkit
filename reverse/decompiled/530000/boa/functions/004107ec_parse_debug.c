/* parse_debug @ 004107ec */

void parse_debug(char *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar3 = PTR_stderr_0046a7f0;
  if (param_1 == (char *)0x0) {
    return;
  }
  (*(code *)PTR_fprintf_0046a9ec)
            (*(undefined4 *)PTR_stderr_0046a7f0,"Before parse_debug, debug_level is: %d\n",
             *(undefined4 *)PTR_debug_level_0046abf4);
  if (*param_1 == '-') {
    uVar4 = boa_atoi(param_1 + 1);
    uVar5 = -uVar4;
    puVar1 = (undefined4 *)PTR_stderr_0046a7f0;
    puVar2 = (uint *)PTR_debug_level_0046abf4;
  }
  else {
    uVar5 = boa_atoi(param_1);
    puVar1 = (undefined4 *)PTR_stderr_0046a7f0;
    puVar2 = (uint *)PTR_debug_level_0046abf4;
    uVar4 = uVar5;
  }
  PTR_stderr_0046a7f0 = (undefined *)puVar1;
  PTR_debug_level_0046abf4 = (undefined *)puVar2;
  if (uVar4 == 0xffffffff) {
    (*(code *)PTR_fputs_0046a6e4)("Invalid level specified.\n",*(undefined4 *)puVar3);
    (*(code *)PTR_exit_0046a75c)(1);
    return;
  }
  puVar6 = &DAT_00468550;
  do {
    if (puVar6 == (uint *)&DAT_004685c0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"After parse_debug, debug_level is: %d\n",
                 *(undefined4 *)PTR_debug_level_0046abf4);
      return;
    }
    if ((int)uVar5 < 1) {
      if ((-uVar5 & *puVar6) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)(*puVar1,"Disabling %s debug level.\n",puVar6[1]);
        uVar4 = ~*puVar6 & *puVar2;
        goto LAB_00410964;
      }
    }
    else if ((uVar5 & *puVar6) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)(*puVar1,"Enabling %s debug level.\n",puVar6[1]);
      uVar4 = *puVar6 | *puVar2;
LAB_00410964:
      *puVar2 = uVar4;
    }
    puVar6 = puVar6 + 2;
  } while( true );
}

