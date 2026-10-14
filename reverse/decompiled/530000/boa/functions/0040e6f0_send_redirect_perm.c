/* send_redirect_perm @ 0040e6f0 */

void send_redirect_perm(int param_1,char *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  puVar1 = PTR_req_write_0046abec;
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x12d;
  *(undefined4 *)(param_1 + 0x50) = 0;
  (*(code *)puVar1)(param_1,"HTTP/1.0 302 Redirect\r\n");
  print_http_headers(param_1);
  (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n");
  (*(code *)PTR_req_write_0046abec)(param_1,"Location: ");
  iVar2 = (*(code *)PTR_strstr_0046a940)(param_2,&DAT_0044a17c);
  pcVar4 = (char *)0x0;
  if (iVar2 == 0) {
    pcVar4 = param_2 + (*param_2 == '/');
    if (*(int *)(param_1 + 0x70) == 0) {
      iVar2 = 100;
      if (*(int *)(param_1 + 0x60) != 0) {
        iVar2 = (*(code *)PTR_strlen_0046a714)();
        iVar2 = iVar2 + 100;
      }
      if (pcVar4 != (char *)0x0) {
        iVar3 = (*(code *)PTR_strlen_0046a714)(pcVar4);
        iVar2 = iVar3 + iVar2;
      }
      param_2 = (char *)(*(code *)PTR_malloc_0046ab14)(iVar2);
      (*(code *)PTR_sprintf_0046a808)(param_2,"http://%s/%s",*(undefined4 *)(param_1 + 0x60),pcVar4)
      ;
      pcVar4 = param_2;
    }
    else {
      iVar2 = (*(code *)PTR_strlen_0046a714)();
      iVar2 = iVar2 + 100;
      if (pcVar4 != (char *)0x0) {
        iVar3 = (*(code *)PTR_strlen_0046a714)(pcVar4);
        iVar2 = iVar3 + iVar2;
      }
      param_2 = (char *)(*(code *)PTR_malloc_0046ab14)(iVar2);
      (*(code *)PTR_sprintf_0046a808)(param_2,"http://%s/%s",*(undefined4 *)(param_1 + 0x70),pcVar4)
      ;
      pcVar4 = param_2;
    }
  }
  (*(code *)PTR_req_write_escape_http_0046aa20)(param_1,param_2);
  (*(code *)PTR_req_write_0046abec)(param_1,&DAT_0044b328);
  (*(code *)PTR_req_write_0046abec)
            (param_1,
             "<HTML><HEAD></HEAD>\n<BODY>\n<H1>302 Redirect</H1>The document has moved\n<A HREF=\"")
  ;
  (*(code *)PTR_req_write_escape_html_0046a738)(param_1,param_2);
  (*(code *)PTR_req_write_0046abec)(param_1,"\">here</A>.\n</BODY></HTML>\n");
  (*(code *)PTR_req_flush_0046a698)(param_1);
  if (pcVar4 != (char *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0040e970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_0046a680)(pcVar4);
    return;
  }
  return;
}

