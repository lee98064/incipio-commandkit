/* FUN_0040dcbc @ 0040dcbc */

void FUN_0040dcbc(int param_1)

{
  if (*(char *)(param_1 + 0x140) != '\0') {
    (*(code *)PTR_AES_CTR_Final_004330bc)(param_1 + 0x24);
  }
  (*(code *)PTR_memset_00433190)(param_1,0,0x144);
                    /* WARNING: Could not recover jumptable at 0x0040dd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00433088)(param_1);
  return;
}

