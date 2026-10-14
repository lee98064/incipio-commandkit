/* FUN_80406fd4 @ 80406fd4 */

void FUN_80406fd4(char *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  
  if (param_2 != 0) {
    uVar5 = 0;
    pcVar6 = param_1;
    do {
      iVar2 = FUN_804068e8();
      cVar3 = (char)iVar2;
      if (iVar2 == -1) {
LAB_804070f0:
        bVar1 = uVar5 < param_2;
      }
      else {
        if (cVar3 == '\n') {
          return;
        }
        if (cVar3 == '\r') {
          *pcVar6 = '\0';
          return;
        }
        if ((cVar3 != '\b') && (cVar3 != '\x7f')) {
          if (cVar3 == '\t') {
            iVar2 = 0;
            pcVar4 = pcVar6;
            do {
              *pcVar4 = ' ';
              pcVar4 = pcVar4 + 1;
              if (param_3 != 0) {
                FUN_80406880(0x20);
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 != 8);
            pcVar6 = pcVar6 + 8;
            uVar5 = uVar5 + 8;
          }
          else {
            *pcVar6 = cVar3;
            pcVar6 = pcVar6 + 1;
            uVar5 = uVar5 + 1;
            if (param_3 != 0) {
              FUN_80406880();
            }
          }
          goto LAB_804070f0;
        }
        bVar1 = uVar5 < param_2;
        if (pcVar6 != param_1) {
          pcVar6 = pcVar6 + -1;
          uVar5 = uVar5 - 1;
          if (param_3 == 0) goto LAB_804070f0;
          FUN_80406880(8);
          FUN_80406880(0x20);
          FUN_80406880(8);
          bVar1 = uVar5 < param_2;
        }
      }
    } while (bVar1);
  }
  return;
}

