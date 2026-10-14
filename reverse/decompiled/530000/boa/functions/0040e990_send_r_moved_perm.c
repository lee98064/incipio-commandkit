/* send_r_moved_perm @ 0040e990 */

void send_r_moved_perm(int param_1,undefined4 param_2)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x12d;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar1 = "HTTP/1.1";
    }
    else {
      pcVar1 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
    (*(code *)PTR_req_write_0046abec)(param_1," 301 Moved Permanently\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n");
    (*(code *)PTR_req_write_0046abec)(param_1,"Location: ");
    (*(code *)PTR_req_write_escape_http_0046aa20)(param_1,param_2);
    (*(code *)PTR_req_write_0046abec)(param_1,&DAT_0044b328);
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)
              (param_1,
               "<HTML><HEAD><TITLE>301 Moved Permanently</TITLE></HEAD>\n<BODY>\n<H1>301 Moved</H1>The document has moved\n<A HREF=\""
              );
    (*(code *)PTR_req_write_escape_html_0046a738)(param_1,param_2);
    (*(code *)PTR_req_write_0046abec)(param_1,"\">here</A>.\n</BODY></HTML>\n");
  }
                    /* WARNING: Could not recover jumptable at 0x0040eb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

