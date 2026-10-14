/* send_r_request_ok @ 0040f190 */

void send_r_request_ok(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 200;
  if (*(int *)(param_1 + 8) == 1) {
    return;
  }
  if (*(int *)(param_1 + 8) == 3) {
    pcVar1 = "HTTP/1.1";
  }
  else {
    pcVar1 = "HTTP/1.0";
  }
  (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
  (*(code *)PTR_req_write_0046abec)(param_1," 200 OK\r\n");
  print_http_headers(param_1);
  (*(code *)PTR_req_write_0046abec)(param_1,"Pragma: no-cache\r\n");
  (*(code *)PTR_req_write_0046abec)(param_1,"Cache-Control: no-cache\r\n");
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      (*(code *)PTR_strncmp_0046a918)(*(int *)(param_1 + 0x1c),"/var/tmp/usb",0xc);
    }
  }
  else {
    *(char **)(param_1 + 0x90) = "text/html";
    if (*(int *)(param_1 + 0x14) == 2) goto LAB_0040f29c;
  }
  FUN_0040d608(param_1);
LAB_0040f29c:
  print_last_modified(param_1);
  FUN_0040ec18(param_1);
                    /* WARNING: Could not recover jumptable at 0x0040f2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  return;
}

