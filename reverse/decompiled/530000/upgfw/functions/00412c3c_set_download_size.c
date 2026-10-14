/* set_download_size @ 00412c3c */

void set_download_size(undefined4 param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = DAT_0057eaf0;
  UNRECOVERED_JUMPTABLE = PTR_printf_0057d378;
  if (DAT_0057eaf0 != 0) {
    *(undefined4 *)(DAT_0057eaf0 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00412c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)("set_download_size=[%d]\n",param_1);
    return;
  }
  return;
}

