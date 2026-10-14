/* translate_control_code @ 00423240 */

void translate_control_code(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char local_f0 [200];
  
  pcVar3 = local_f0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
      *pcVar3 = '\0';
      (*(code *)PTR_strcpy_0046ac60)(param_1,local_f0);
      return;
    }
    if (cVar1 == '\"') {
      (*(code *)PTR_memcpy_0046ab5c)(pcVar3,"&quot;",6);
      pcVar3 = pcVar3 + 6;
    }
    else {
      if (cVar1 == '\'') {
        pcVar2 = "&#39;";
      }
      else if (cVar1 == '\\') {
        pcVar2 = "&#92;";
      }
      else if (cVar1 == '<') {
        pcVar2 = "&#60;";
      }
      else {
        if (cVar1 != '>') {
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
          goto LAB_00423340;
        }
        pcVar2 = "&#62;";
      }
      (*(code *)PTR_memcpy_0046ab5c)(pcVar3,pcVar2,5);
      pcVar3 = pcVar3 + 5;
    }
LAB_00423340:
    pcVar4 = pcVar4 + 1;
  } while( true );
}

