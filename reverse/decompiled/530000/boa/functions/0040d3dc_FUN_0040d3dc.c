/* FUN_0040d3dc @ 0040d3dc */

void FUN_0040d3dc(int param_1)

{
  undefined4 uVar1;
  
  (*(code *)PTR_req_write_0046abec)(param_1,"Content-Range: bytes ");
  uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(**(undefined4 **)(param_1 + 0x20));
  (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
  (*(code *)PTR_req_write_0046abec)(param_1,&DAT_00453b18);
  uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4));
  (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
  (*(code *)PTR_req_write_0046abec)(param_1,&DAT_00453564);
  uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)(param_1 + 0x2c));
  (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0040d4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  return;
}

