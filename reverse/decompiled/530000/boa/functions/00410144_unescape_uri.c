/* unescape_uri @ 00410144 */

undefined4 unescape_uri(char *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = param_1;
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
LAB_00410278:
      *pcVar3 = '\0';
      return 1;
    }
    if (cVar1 == '%') {
      uVar4 = (uint)param_1[1];
      if (uVar4 == 0) {
LAB_004101ec:
        *pcVar3 = '\0';
        return 0;
      }
      uVar2 = (uint)param_1[2];
      param_1 = param_1 + 2;
      if (uVar2 == 0) goto LAB_004101ec;
      if ((int)uVar4 < 0x41) {
        uVar4 = (uVar4 & 0xf) << 4;
      }
      else {
        uVar4 = ((uVar4 & 0xdf) - 0x37) * 0x10 & 0xff;
      }
      if ((int)uVar2 < 0x41) {
        uVar2 = uVar2 - 0x30;
      }
      else {
        uVar2 = (uVar2 & 0xffffffdf) - 0x37;
      }
      uVar4 = (uVar2 & 0xff) + uVar4;
      *pcVar3 = (char)uVar4;
      if (0x5e < ((uVar4 & 0xff) - 0x20 & 0xff)) goto LAB_004101ec;
    }
    else {
      if (cVar1 == '?') {
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = param_1 + 1;
        }
        *pcVar3 = '\0';
        return 1;
      }
      if (cVar1 == '#') {
        if (param_2 != (undefined4 *)0x0) {
          param_1 = param_1 + 1;
          do {
            cVar1 = *param_1;
            param_1 = param_1 + 1;
            if (cVar1 == '\0') {
              *pcVar3 = '\0';
              return 1;
            }
          } while (cVar1 != '?');
          *param_2 = param_1;
        }
        goto LAB_00410278;
      }
      *pcVar3 = cVar1;
    }
    param_1 = param_1 + 1;
    pcVar3 = pcVar3 + 1;
  } while( true );
}

