/* FUN_0040d608 @ 0040d608 */

void FUN_0040d608(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
  uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)(param_1 + 0x2c));
  (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0040d680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  return;
}

