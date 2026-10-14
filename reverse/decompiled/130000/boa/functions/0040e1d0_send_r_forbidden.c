/* send_r_forbidden @ 0040e1d0 */

void send_r_forbidden(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x193;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1," 403 Forbidden\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n\r\n")
    ;
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               "<HTML><HEAD><TITLE>403 Forbidden</TITLE></HEAD>\n<BODY><H1>403 Forbidden</H1>\nYour client does not have permission to get URL "
              );
    (*(code *)PTR_req_write_escape_html_0046a738)(param_1,param_1 + 0x8d4);
    (*(code *)PTR_req_write_0046abec)(param_1," from this server.\n</BODY></HTML>\n");
  }
                    /* WARNING: Could not recover jumptable at 0x0040e2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

