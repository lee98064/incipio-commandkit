/* FUN_00402dfc @ 00402dfc */

/* WARNING: Removing unreachable block (ram,0x00402e78) */

void FUN_00402dfc(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  (*(code *)PTR_gettimeofday_004231b8)(&local_20,0);
  iVar5 = 0;
  (*(code *)PTR_srand_0042319c)(local_1c + local_20);
  do {
    iVar1 = (*(code *)PTR_rand_0042320c)();
    uVar2 = iVar1 % 0x100 & 0xff;
    cVar3 = (char)(iVar1 % 0x100);
    if ((uVar2 < 0x21) ||
       ((0x7e < uVar2 && (cVar3 = (char)(uVar2 - 0x7e), (uVar2 - 0x7e & 0xff) < 0x21)))) {
      cVar3 = cVar3 + '!';
    }
    pcVar4 = (char *)(param_1 + iVar5);
    iVar5 = iVar5 + 1;
    *pcVar4 = cVar3;
  } while (iVar5 != 0x20);
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

