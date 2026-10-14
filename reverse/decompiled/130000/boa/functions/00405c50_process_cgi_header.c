/* process_cgi_header @ 00405c50 */

bool process_cgi_header(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  code *pcVar8;
  
  if (param_1[6] != 2) {
    param_1[6] = 1;
  }
  iVar7 = param_1[0x10];
  iVar2 = (*(code *)PTR_strstr_0046a940)(iVar7,"\n\r\n");
  if ((iVar2 == 0) && (iVar2 = (*(code *)PTR_strstr_0046a940)(iVar7,&DAT_004498e4), iVar2 == 0)) {
    (*(code *)PTR_fputs_0046a6e4)
              ("cgi_header: unable to find LFLF\n",*(undefined4 *)PTR_stderr_0046a7f0);
    pcVar8 = (code *)PTR_send_r_bad_gateway_0046a690;
LAB_00405f2c:
    (*pcVar8)(param_1);
    bVar5 = false;
  }
  else {
    if (param_1[2] == 1) {
      if (*(char *)(iVar2 + 1) == '\r') {
        param_1[0x10] = iVar2 + 2;
      }
      else {
        param_1[0x10] = iVar2 + 1;
      }
    }
    else {
      iVar3 = (*(code *)PTR_strncasecmp_0046aa8c)(iVar7,"Status: ",8);
      puVar1 = PTR_memcpy_0046ab5c;
      if (iVar3 == 0) {
        param_1[0x10] = iVar7 + -1;
        (*(code *)puVar1)(iVar7 + -1,"HTTP/1.0 ",9);
      }
      else {
        iVar3 = (*(code *)PTR_strncasecmp_0046aa8c)(iVar7,"Location: ",10);
        if (iVar3 != 0) {
          (*(code *)PTR_send_r_request_ok_0046aaac)(param_1);
          if (param_1[3] == 2) {
            if (*(char *)(iVar2 + 1) == '\r') {
              param_1[0x11] = iVar2 + 2;
            }
            else {
              param_1[0x11] = iVar2 + 1;
            }
            param_1[6] = 2;
          }
          iVar2 = param_1[0x11] - param_1[0x10];
          if ((uint)(param_1[0x234] + param_1[0x14] + iVar2) <= param_1[0x234] + 0x2000) {
            (*(code *)PTR_memmove_0046abf0)(param_1[0x234] + param_1[0x14],param_1[0x10],iVar2);
            puVar1 = PTR_req_flush_0046a698;
            iVar7 = param_1[0x234] + iVar2 + param_1[0x14];
            param_1[0x11] = iVar7;
            param_1[0x14] = iVar2 + param_1[0x14];
            param_1[0x10] = iVar7;
            (*(code *)puVar1)(param_1);
            return param_1[3] != 2;
          }
          (*(code *)PTR_fprintf_0046a9ec)
                    (*(undefined4 *)PTR_stderr_0046a7f0,"Too much data to move! Aborting! %s %d\n",
                     "cgi_header.c",0xa0);
          param_1[0x14] = 0;
          param_1[0x13] = 0;
          pcVar8 = (code *)PTR_send_r_error_0046a718;
          goto LAB_00405f2c;
        }
        iVar2 = iVar7 + 10;
        if (*(char *)(iVar7 + 10) == '/') {
          (*(code *)PTR_fprintf_0046a9ec)
                    (*(undefined4 *)PTR_stderr_0046a7f0,
                     "server does not support internal redirection: \"%s\"\n",iVar2);
          (*(code *)PTR_send_r_bad_request_0046a968)(param_1);
        }
        else {
          pcVar4 = (char *)(*(code *)PTR_strchr_0046a6e8)(iVar2,10);
          do {
            pcVar6 = pcVar4;
            pcVar4 = pcVar6 + -1;
          } while (pcVar6[-1] == '\r');
          *pcVar6 = '\0';
          do {
            pcVar6 = pcVar6 + 1;
            if ((*pcVar6 != '\n') && (*pcVar6 != '\r')) break;
          } while (pcVar6 < (char *)param_1[0x11]);
          if (pcVar6 == (char *)param_1[0x11]) {
            pcVar6 = "";
          }
          (*(code *)PTR_send_r_moved_temp_0046a830)(param_1,iVar2,pcVar6);
        }
        *param_1 = 10;
      }
    }
    bVar5 = true;
  }
  return bVar5;
}

