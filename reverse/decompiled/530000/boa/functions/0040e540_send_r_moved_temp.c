/* send_r_moved_temp @ 0040e540 */

void send_r_moved_temp(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x12e;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1," 302 Moved Temporarily\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n");
    (*(code *)PTR_req_write_0046abec)(param_1,"Location: ");
    (*(code *)PTR_req_write_escape_http_0046aa20)(param_1,param_2);
    (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
    (*(code *)PTR_req_write_0046abec)(param_1,param_3);
    (*(code *)PTR_req_write_0046abec)(param_1,&DAT_0044b328);
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               "<HTML><HEAD><TITLE>302 Moved Temporarily</TITLE></HEAD>\n<BODY>\n<H1>302 Moved</H1>The document has moved\n<A HREF=\""
              );
    (*(code *)PTR_req_write_escape_html_0046a738)(param_1,param_2);
    (*(code *)PTR_req_write_0046abec)(param_1,"\">here</A>.\n</BODY></HTML>\n");
  }
                    /* WARNING: Could not recover jumptable at 0x0040e6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

