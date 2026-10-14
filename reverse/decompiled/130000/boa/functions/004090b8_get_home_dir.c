/* get_home_dir @ 004090b8 */

/* WARNING: Removing unreachable block (ram,0x00409168) */

undefined4 get_home_dir(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar5 = 0;
    (*(code *)PTR_fputs_0046a6e4)
              ("Attempt to hash NULL or empty string! [boa_hash]!\n",
               *(undefined4 *)PTR_stderr_0046a7f0);
  }
  else {
    uVar5 = 0x811c9dc5;
    iVar3 = 4;
    pcVar2 = param_1;
    while( true ) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      if ((*pcVar2 == '\0') || (iVar3 == 0)) break;
      iVar3 = (iVar3 + -1) * 0x10000 >> 0x10;
    }
  }
  iVar3 = FUN_00408cc0(&DAT_0046c6bc,param_1,uVar5 % 0x2f);
  if ((iVar3 == 0) &&
     ((iVar3 = (*(code *)PTR_getpwnam_0046a810)(param_1), iVar3 == 0 ||
      (iVar3 = FUN_00408e50(&DAT_0046c6bc,uVar5 % 0x2f,param_1,*(undefined4 *)(iVar3 + 0x14)),
      iVar3 == 0)))) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 4);
  }
  return uVar4;
}

