/* FUN_00403d30 @ 00403d30 */

/* WARNING: Removing unreachable block (ram,0x00403d7c) */

uint FUN_00403d30(char *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != (char *)0x0) {
    uVar1 = (uint)*param_1;
    if (uVar1 == 0) {
      return 0;
    }
    do {
      iVar2 = (int)param_1[1];
      param_1 = param_1 + 1;
      if (iVar2 == 0) goto LAB_00403d6c;
      uVar1 = uVar1 + iVar2;
    } while (iVar2 != 0x2f);
    uVar1 = uVar1 - 0x2f;
LAB_00403d6c:
    uVar1 = uVar1 % 0x11;
  }
  return uVar1;
}

