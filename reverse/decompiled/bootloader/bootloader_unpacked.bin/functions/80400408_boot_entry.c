/* boot_entry @ 80400408 */

/* WARNING: This function may have set the stack pointer */

void boot_entry(void)

{
  undefined4 *puVar1;
  
  setCopReg(0,Status,0);
  setCopReg(0,Status,Status & 0xfffffffc);
  setCopReg(0,Cause,0);
  FUN_80400498();
  FUN_80400568();
  DAT_8040ee70 = &DAT_80422ed4;
  setCopReg(0,Status,Status | 0x80000000);
  puVar1 = &DAT_8040ee40;
  DAT_8040ee40 = 0;
  do {
    puVar1 = puVar1 + 1;
    *puVar1 = 0;
  } while (puVar1 != (undefined4 *)&UNK_80422ef0);
  FUN_804063b0(Status | 0x80000000);
  (*(code *)&LAB_a04004ac)();
  return;
}

