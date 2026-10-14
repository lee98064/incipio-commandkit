/* req_write_escape_html @ 0040583c */

int req_write_escape_html(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0x2000 - param_1[0x14];
  pcVar2 = (char *)(param_1[0x234] + param_1[0x14]);
  do {
    while( true ) {
      while( true ) {
        cVar1 = *param_2;
        pcVar4 = param_2 + 1;
        if ((cVar1 == '\0') || (iVar3 < 6)) {
          iVar3 = (int)pcVar2 - param_1[0x234];
          param_1[0x14] = iVar3;
          if (*param_2 != '\0') {
            (*(code *)PTR_fprintf_0046a9ec)
                      (*(undefined4 *)PTR_stderr_0046a7f0,
                       "Ran out of Buffer space (%d chars left)! [req_write_escape_html]\n");
            *param_1 = 0xc;
            iVar3 = -1;
          }
          return iVar3;
        }
        param_2 = pcVar4;
        if (cVar1 != '&') break;
        builtin_strncpy(pcVar2,"&amp;",5);
        iVar3 = iVar3 + -5;
        pcVar2 = pcVar2 + 5;
      }
      if ('&' < cVar1) break;
      if (cVar1 == '\"') {
        builtin_strncpy(pcVar2,"&quot;",6);
        iVar3 = iVar3 + -6;
        pcVar2 = pcVar2 + 6;
      }
      else {
LAB_00405950:
        *pcVar2 = cVar1;
        iVar3 = iVar3 + -1;
        pcVar2 = pcVar2 + 1;
      }
    }
    if (cVar1 == '<') {
      *pcVar2 = '&';
      pcVar2[1] = 'l';
    }
    else {
      if (cVar1 != '>') goto LAB_00405950;
      *pcVar2 = '&';
      pcVar2[1] = 'g';
    }
    pcVar2[2] = 't';
    pcVar2[3] = ';';
    iVar3 = iVar3 + -4;
    pcVar2 = pcVar2 + 4;
  } while( true );
}

