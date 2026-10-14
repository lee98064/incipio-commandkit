/* FUN_0040d4f4 @ 0040d4f4 */

void FUN_0040d4f4(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (((*(int *)(param_1 + 0x8c4) == 0) || (*(int *)(param_1 + 4) != 1)) ||
     (499 < *(uint *)(param_1 + 0x10))) {
    pcVar2 = "Connection: close\r\n";
  }
  else {
    (*(code *)PTR_req_write_0046abec)(param_1,"Connection: Keep-Alive\r\nKeep-Alive: timeout=");
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)PTR_ka_timeout_0046a9d0);
    (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
    (*(code *)PTR_req_write_0046abec)(param_1,", max=");
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)(param_1 + 0x8c4));
    (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
    pcVar2 = "\r\n";
  }
                    /* WARNING: Could not recover jumptable at 0x0040d600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,pcVar2);
  return;
}

