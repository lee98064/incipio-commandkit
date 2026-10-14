/* send_r_partial_content @ 0040f33c */

void send_r_partial_content(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0xce;
  if (*(int *)(param_1 + 8) == 1) {
    pcVar1 = "HTTP/0.9";
  }
  else if (*(int *)(param_1 + 8) == 3) {
    pcVar1 = "HTTP/1.1";
  }
  else {
    pcVar1 = "HTTP/1.0";
  }
  (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
  (*(code *)PTR_req_write_0046abec)(param_1,s_206_Partial_Content_0046845c);
  print_http_headers(param_1);
  print_last_modified(param_1);
  if (*(int *)(param_1 + 0x24) < 2) {
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
    pcVar1 = (char *)(*(code *)PTR_simple_itoa_0046a9cc)
                               (((*(int **)(param_1 + 0x20))[1] + 1) - **(int **)(param_1 + 0x20));
  }
  else {
    pcVar1 = s_Content_Type__multipart_byterang_00468414;
  }
  (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  FUN_0040f2e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0040f47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  return;
}

