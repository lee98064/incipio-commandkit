/* FUN_80406c50 @ 80406c50 */

uint FUN_80406c50(char *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  do {
    pcVar5 = param_1;
    cVar1 = *pcVar5;
    iVar2 = FUN_8040691c((int)cVar1);
    param_1 = pcVar5 + 1;
  } while (iVar2 != 0);
  if (cVar1 == 0x2b) {
    pcVar5 = pcVar5 + 1;
  }
  if (param_3 == 0x10) {
    uVar4 = (uint)*pcVar5;
    if (uVar4 != 0x30) goto LAB_80406d00;
LAB_80406cd8:
    if ((pcVar5[1] == 'x') || (pcVar5[1] == 'X')) {
      pcVar5 = pcVar5 + 2;
      param_3 = 0x10;
    }
  }
  else if (param_3 == 0) {
    uVar4 = (uint)*pcVar5;
    param_3 = 10;
    if (uVar4 != 0x30) goto LAB_80406d00;
    param_3 = 8;
    goto LAB_80406cd8;
  }
  uVar4 = (uint)*pcVar5;
LAB_80406d00:
  uVar3 = 0;
  while (uVar4 != 0) {
    uVar4 = uVar4 & 0xff;
    if (uVar4 < 0x61) {
      if (uVar4 < 0x41) {
        if (uVar4 < 0x3a) {
          uVar4 = uVar4 - 0x30 & 0xff;
        }
        else {
          uVar4 = 0xff;
        }
      }
      else {
        uVar4 = uVar4 - 0x37 & 0xff;
      }
    }
    else {
      uVar4 = uVar4 - 0x57 & 0xff;
    }
    if (param_3 <= (int)uVar4) break;
    pcVar5 = pcVar5 + 1;
    if (uVar3 * param_3 < uVar3) {
      return 0xffffffff;
    }
    uVar3 = uVar4 + uVar3 * param_3;
    uVar4 = (uint)*pcVar5;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pcVar5;
  }
  return uVar3;
}

