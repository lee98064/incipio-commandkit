/* send_r_invalid_range @ 0040dce0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void send_r_invalid_range(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x1a0;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar2 = "HTTP/1.1";
    }
    else {
      pcVar2 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar2);
    (*(code *)PTR_req_write_0046abec)(param_1," 416 Invalid Range\r\n");
    print_http_headers(param_1);
    if (DAT_0046dfe8 == 0) {
      DAT_0046dfe8 = (*(code *)PTR_strlen_0046a714)(s_<HTML><HEAD><TITLE>416_Invalid_R_004683ac);
    }
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(DAT_0046dfe8);
    (*(code *)PTR_req_write_0046abec)(param_1,uVar1);
    (*(code *)PTR_req_write_0046abec)
              (param_1,"\r\nContent-Type: text/html; charset=ISO-8859-1\r\n\r\n");
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)(param_1,s_<HTML><HEAD><TITLE>416_Invalid_R_004683ac);
  }
                    /* WARNING: Could not recover jumptable at 0x0040de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

