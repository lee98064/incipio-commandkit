/* FUN_0040d73c @ 0040d73c */

void FUN_0040d73c(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x1f9;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1," 505 HTTP Version Not Supported\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n\r\n")
    ;
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               "<HTML><HEAD><TITLE>505 HTTP Version Not Supported</TITLE></HEAD>\n<BODY><H1>505 HTTP Version Not Supported</H1>\nHTTP versions other than 0.9 and 1.0 are not supported in Boa.\n<p><p>Version encountered: "
              );
    (*(code *)PTR_req_write_0046abec)(param_1,param_2);
    (*(code *)PTR_req_write_0046abec)(param_1,"<p><p></BODY></HTML>\n");
  }
                    /* WARNING: Could not recover jumptable at 0x0040d858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

