/* FUN_0040edec @ 0040edec */

void FUN_0040edec(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x19b;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1," 411 Length Required\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n");
    print_last_modified(param_1);
    FUN_0040ec18(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               "<HTML><HEAD><TITLE>411 Length Required</TITLE></HEAD>\n<BODY><H1>411 Length Required</H1>\nThe requested URL "
              );
    (*(code *)PTR_req_write_escape_html_0046a738)(param_1,param_1 + 0x8d4);
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               " requires that a valid Content-Length header be sent with it.\n</BODY></HTML>\n");
  }
                    /* WARNING: Could not recover jumptable at 0x0040ef28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

