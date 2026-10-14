/* FUN_0040ef30 @ 0040ef30 */

void FUN_0040ef30(int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0x130;
  if (*(int *)(param_1 + 8) == 1) {
    pcVar1 = "HTTP/0.9";
  }
  else if (*(int *)(param_1 + 8) == 3) {
    pcVar1 = "HTTP/1.1";
  }
  else {
    pcVar1 = "HTTP/1.0";
  }
  (*(code *)PTR_req_write_0046abec)(param_1,pcVar1);
  (*(code *)PTR_req_write_0046abec)(param_1," 304 Not Modified\r\n");
  print_http_headers(param_1);
  FUN_0040ec18(param_1);
  (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
                    /* WARNING: Could not recover jumptable at 0x0040f000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_req_flush_0046a698)(param_1);
  return;
}

