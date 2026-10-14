/* FUN_004065ac @ 004065ac */

void FUN_004065ac(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)("Setting pointer %p to string %s ..",param_3,param_1);
  }
  if (param_3 == (int *)0x0) {
    if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) == 0) {
      return;
    }
    pcVar2 = "skipped.";
  }
  else {
    if (*param_3 != 0) {
      (*(code *)PTR_free_0046a680)();
    }
    iVar1 = (*(code *)PTR_strdup_0046a8a4)(param_1);
    *param_3 = iVar1;
    if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) == 0) {
      return;
    }
    pcVar2 = "done.";
  }
                    /* WARNING: Could not recover jumptable at 0x004066a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_puts_0046ab3c)(pcVar2);
  return;
}

