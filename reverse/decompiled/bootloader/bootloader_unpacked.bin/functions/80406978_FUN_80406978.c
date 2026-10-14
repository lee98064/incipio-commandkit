/* FUN_80406978 @ 80406978 */

void FUN_80406978(char *param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  
  do {
    cVar1 = *param_1;
    bVar2 = *param_2;
    param_2 = param_2 + 1;
    if ((int)(((int)cVar1 - (uint)bVar2) * 0x1000000) >> 0x18 != 0) {
      return;
    }
    param_1 = param_1 + 1;
  } while (cVar1 != 0);
  return;
}

