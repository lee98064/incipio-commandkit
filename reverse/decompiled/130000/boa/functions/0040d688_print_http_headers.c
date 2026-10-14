/* print_http_headers @ 0040d688 */

void print_http_headers(undefined4 param_1)

{
  (*(code *)PTR_rfc822_time_buf_0046ac58)(s_Date__004684f4 + 6,0);
  (*(code *)PTR_req_write_0046abec)(param_1,s_Date__004684f4);
  if (*(int *)PTR_conceal_server_identity_0046ab54 == 0) {
    (*(code *)PTR_req_write_0046abec)(param_1,s_Server__Boa_0_94_14rc21_004684d8);
  }
  (*(code *)PTR_req_write_0046abec)(param_1,"Accept-Ranges: bytes\r\n");
  FUN_0040d4f4(param_1);
  return;
}

