/* send_r_request_ok2 @ 0040f008 */

void send_r_request_ok2(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 200;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar2 = "HTTP/1.1";
    }
    else {
      pcVar2 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar2);
    (*(code *)PTR_req_write_0046abec)(param_1," 200 OK\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Pragma: no-cache\r\n");
    (*(code *)PTR_req_write_0046abec)(param_1,"Cache-Control: no-cache\r\n");
    print_last_modified(param_1);
    FUN_0040ec18(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(*(undefined4 *)(param_1 + 0x2c));
    (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
    (*(code *)PTR_req_write_0046abec)(param_1,"                      ");
    (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
                    /* WARNING: Could not recover jumptable at 0x0040f174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
    return;
  }
  return;
}

