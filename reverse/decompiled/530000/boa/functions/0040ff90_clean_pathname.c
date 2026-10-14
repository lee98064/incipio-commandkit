/* clean_pathname @ 0040ff90 */

void clean_pathname(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') {
      *param_1 = '\0';
      return;
    }
    pcVar2 = pcVar2 + 1;
    if (cVar1 == '/') {
      while( true ) {
        for (; *pcVar2 == '/'; pcVar2 = pcVar2 + 1) {
        }
        if (*pcVar2 != '.') break;
        if (pcVar2[1] == '/') {
          pcVar2 = pcVar2 + 2;
        }
        else {
          if ((pcVar2[1] != '.') || (pcVar2[2] != '/')) break;
          pcVar2 = pcVar2 + 3;
        }
      }
    }
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while( true );
}

