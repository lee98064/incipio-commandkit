/* FUN_0040de3c @ 0040de3c */

void FUN_0040de3c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_c0 [180];
  
  (*(code *)PTR_memcpy_0046ab5c)
            (auStack_c0,
             "<HTML><HEAD><TITLE>414 Request URI Too Long</TITLE></HEAD>\n<BODY><H1>414 Request URI Too Long</H1>\nYour client has issued a malformed or illegal request.\n</BODY></HTML>\n"
             ,0xaa);
  *(undefined4 *)(param_1 + 0x10) = 0x19e;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar2 = "HTTP/1.1";
    }
    else {
      pcVar2 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar2);
    (*(code *)PTR_req_write_0046abec)(param_1," 414 Request URI Too Long\r\n");
    print_http_headers(param_1);
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n");
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
    if (DAT_0046dfec == 0) {
      DAT_0046dfec = (*(code *)PTR_strlen_0046a714)(auStack_c0);
    }
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(DAT_0046dfec);
    (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
    (*(code *)PTR_req_write_0046abec)(param_1,&DAT_0044b328);
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)(param_1,auStack_c0);
  }
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

