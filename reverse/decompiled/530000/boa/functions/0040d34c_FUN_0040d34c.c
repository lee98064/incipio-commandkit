/* FUN_0040d34c @ 0040d34c */

void FUN_0040d34c(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_req_write_0046abec;
  if (*(int *)(param_1 + 8) == 3) {
    *(undefined4 *)(param_1 + 0x10) = 100;
    (*(code *)puVar1)(param_1,"HTTP/1.1");
                    /* WARNING: Could not recover jumptable at 0x0040d3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_req_write_0046abec)(param_1,s_100_Continue_00468488);
    return;
  }
  return;
}

