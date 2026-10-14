/* send_r_service_unavailable @ 0040d860 */

void send_r_service_unavailable(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (DAT_0046dfe4 == 0) {
    DAT_0046dfe4 = (*(code *)PTR_strlen_0046a714)(s_<HTML><HEAD><TITLE>503_Service_U_004682f0);
  }
  if (DAT_0046dfe0 == 0) {
    uVar1 = (*(code *)PTR_simple_itoa_0046a9cc)(DAT_0046dfe4);
    DAT_0046dfe0 = (*(code *)PTR_strdup_0046a8a4)(uVar1);
  }
  if (DAT_0046dfe0 == 0) {
    (*(code *)PTR_perror_0046ab44)("strdup of _body_len from simple_itoa");
  }
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x1f7;
  if (*(int *)(param_1 + 8) != 1) {
    if (*(int *)(param_1 + 8) == 3) {
      pcVar2 = "HTTP/1.1";
    }
    else {
      pcVar2 = "HTTP/1.0";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar2);
    (*(code *)PTR_req_write_0046abec)(param_1," 503 Service Unavailable\r\n");
    print_http_headers(param_1);
    if (DAT_0046dfe0 != 0) {
      (*(code *)PTR_req_write_0046abec)(param_1,"Content-Length: ");
      (*(code *)PTR_req_write_0046abec)(param_1,DAT_0046dfe0);
      (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
    }
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: text/html; charset=ISO-8859-1\r\n\r\n")
    ;
  }
  if (*(int *)(param_1 + 0xc) != 2) {
    (*(code *)PTR_req_write_0046abec)(param_1,s_<HTML><HEAD><TITLE>503_Service_U_004682f0);
  }
                    /* WARNING: Could not recover jumptable at 0x0040da30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

