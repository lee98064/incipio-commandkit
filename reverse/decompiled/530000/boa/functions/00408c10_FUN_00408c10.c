/* FUN_00408c10 @ 00408c10 */

/* WARNING: Removing unreachable block (ram,0x00408cac) */

uint FUN_00408c10(char *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    (*(code *)PTR_fputs_0046a6e4)
              ("Attempt to hash NULL or empty string! [boa_hash]!\n",
               *(undefined4 *)PTR_stderr_0046a7f0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x811c9dc5;
    iVar3 = 4;
    while( true ) {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar2 = (uVar2 ^ (int)cVar1) * 0x1000193;
      if ((*param_1 == '\0') || (iVar3 == 0)) break;
      iVar3 = (iVar3 + -1) * 0x10000 >> 0x10;
    }
  }
  return uVar2 % 0x2f;
}

