/* FUN_0040589c @ 0040589c */

void FUN_0040589c(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_DataToHexString_004332f8)
                    (*(undefined4 *)(param_1 + 0x804),*(undefined4 *)(param_1 + 0x808));
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004058d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_00433088)(iVar1);
    return;
  }
  return;
}

