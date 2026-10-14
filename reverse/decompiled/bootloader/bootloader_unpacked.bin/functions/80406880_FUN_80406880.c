/* FUN_80406880 @ 80406880 */

void FUN_80406880(char param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    iVar1 = iVar1 + 1;
    if ((DAT_b8002014 & 0x60) != 0) break;
  } while (iVar1 != 0x198c);
  DAT_b8002000 = param_1;
  if (param_1 == '\n') {
    DAT_b8002000 = '\r';
  }
  return;
}

