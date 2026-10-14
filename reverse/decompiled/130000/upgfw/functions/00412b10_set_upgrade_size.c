/* set_upgrade_size @ 00412b10 */

void set_upgrade_size(undefined4 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = DAT_0057e9c0;
  UNRECOVERED_JUMPTABLE = PTR_printf_0057d248;
  if (DAT_0057e9c0 != 0) {
    *(undefined4 *)(DAT_0057e9c0 + 0x14) = param_1;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00412b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)("set_upgrade_size=[%d]\n",param_1);
    return;
  }
  return;
}

