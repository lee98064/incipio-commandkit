/* FUN_004066bc @ 004066bc */

void FUN_004066bc(char *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  char *local_18 [3];
  
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)("Setting pointer %p to integer string %s ..",param_3,param_1);
  }
  if (param_3 == (undefined4 *)0x0) {
    if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
      (*(code *)PTR_puts_0046ab3c)("skipped.");
    }
  }
  else {
    uVar2 = (*(code *)PTR_strtol_0046aa48)(param_1,local_18,0);
    puVar1 = PTR_debug_level_0046abf4;
    if ((*param_1 == '\0') || (*local_18[0] != '\0')) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"Error: %s found where integer expected\n",
                 param_1);
    }
    else {
      *param_3 = uVar2;
      if ((*(uint *)puVar1 & 0x100) != 0) {
        (*(code *)PTR_printf_0046ac28)(" Integer converted as %d, done\n",uVar2);
      }
    }
  }
  return;
}

