/* print_debug_usage @ 00410310 */

void print_debug_usage(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_stderr_0046a7f0;
  (*(code *)PTR_fputs_0046a6e4)
            ("  To calculate the debug level, logically \'or\'\n  some of the following values together to get a debug level:\n"
             ,*(undefined4 *)PTR_stderr_0046a7f0);
  for (puVar2 = &DAT_00468550; puVar2 != (undefined4 *)&DAT_004685c0; puVar2 = puVar2 + 2) {
    (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)puVar1,"\t%d:\t%s\n",*puVar2,puVar2[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x004103b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_fputc_0046a7cc)(10,*(undefined4 *)PTR_stderr_0046a7f0);
  return;
}

