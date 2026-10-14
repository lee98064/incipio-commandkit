/* findHeader @ 00421360 */

undefined4 findHeader(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar1 = param_1 + *(int *)(param_1 + 0x100);
  if ((3 < *(int *)(param_1 + 0x100)) && (*param_1 == '$')) {
    param_1 = param_1 + 4;
LAB_00421420:
    *param_2 = param_1;
    return 1;
  }
  *param_2 = pcVar1;
  uVar2 = (int)pcVar1 - (int)param_1;
  pcVar3 = param_1;
  do {
    pcVar3 = pcVar3 + 1;
    if (pcVar1 <= param_1) {
      return 0;
    }
    if (*param_1 == '\n') {
      if (uVar2 < 3) {
        if (uVar2 != 2) {
          return 0;
        }
LAB_00421408:
        cVar4 = *pcVar3;
      }
      else {
        cVar4 = *pcVar3;
        if (cVar4 == '\r') {
          if (param_1[2] != '\n') goto LAB_00421408;
          param_1 = param_1 + 3;
          goto LAB_00421420;
        }
      }
      if (cVar4 == '\n') {
        param_1 = param_1 + 2;
        goto LAB_00421420;
      }
    }
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}

