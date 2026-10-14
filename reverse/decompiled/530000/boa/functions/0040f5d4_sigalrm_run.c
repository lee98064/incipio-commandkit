/* sigalrm_run @ 0040f5d4 */

void sigalrm_run(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = PTR_alarm_0046aa54;
  DAT_0046dff0 = DAT_0046dff0 + 1;
  *(undefined4 *)PTR_sigalrm_flag_0046ab80 = 0;
                    /* WARNING: Could not recover jumptable at 0x0040f5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(1);
  return;
}

