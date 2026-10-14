/* FUN_0040ec18 @ 0040ec18 */

void FUN_0040ec18(int param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = (char *)(*(code *)PTR_get_mime_type_0046a77c)(param_1 + 0x8d4);
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR_req_write_0046abec)(param_1,"Content-Type: ");
    iVar3 = (*(code *)PTR_strcmp_0046a824)(pcVar2,"application/x-httpd-cgi");
    pcVar4 = pcVar2;
    if (iVar3 == 0) {
      pcVar4 = "text/html";
    }
    (*(code *)PTR_req_write_0046abec)(param_1,pcVar4);
    puVar1 = PTR_default_charset_0046ab48;
    if ((*(int *)PTR_default_charset_0046ab48 != 0) &&
       (iVar3 = (*(code *)PTR_strncasecmp_0046aa8c)(pcVar2,&DAT_0044b904,4), iVar3 == 0)) {
      (*(code *)PTR_req_write_0046abec)(param_1,"; charset=");
      (*(code *)PTR_req_write_0046abec)(param_1,*(undefined4 *)puVar1);
    }
    (*(code *)PTR_req_write_0046abec)(param_1,"\r\n");
    iVar3 = (*(code *)PTR_strstr_0046a940)(*(undefined4 *)(param_1 + 0x1c),".mtddump");
    if (iVar3 != 0) {
      (*(code *)PTR_req_write_0046abec)(param_1,"Content-Disposition: attachment\r\n");
    }
    iVar3 = (*(code *)PTR_strcmp_0046a824)(param_1 + 0x8d4,"/config.dat");
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0040edc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_req_write_0046abec)(param_1,"Content-Disposition: attachment\r\n");
      return;
    }
  }
  return;
}

