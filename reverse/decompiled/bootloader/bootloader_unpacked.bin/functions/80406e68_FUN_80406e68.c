/* FUN_80406e68 @ 80406e68 */

undefined4 FUN_80406e68(char *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      *param_2 = uVar4;
      return 1;
    }
    uVar3 = (uint)(byte)(cVar1 - 0x30);
    if (9 < uVar3) {
      if ((byte)(cVar1 + 0x9fU) < 6) {
        uVar3 = (uint)(byte)(cVar1 + 0xa9);
      }
      else {
        if (5 < (byte)(cVar1 + 0xbfU)) {
          return 0;
        }
        uVar3 = (uint)(byte)(cVar1 - 0x37);
      }
    }
    uVar3 = uVar3 + uVar4 * 0x10;
    bVar2 = uVar4 <= uVar3;
    uVar4 = uVar3;
  } while (bVar2);
  return 0;
}

