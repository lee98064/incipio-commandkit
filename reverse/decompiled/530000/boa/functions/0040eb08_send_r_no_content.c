/* send_r_no_content @ 0040eb08 */

void send_r_no_content(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0xcc;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1,s_204_NO_CONTENT_00468474);
    print_http_headers(param_1);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0040ebac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
      return;
    }
  }
  return;
}

