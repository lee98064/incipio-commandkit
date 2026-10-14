/* PlatformRandomBytes @ 004032c0 */

/* WARNING: Removing unreachable block (ram,0x00403348) */

undefined4 PlatformRandomBytes(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    (*(code *)PTR_gettimeofday_00433198)(&local_20,0);
    (*(code *)PTR_srand_0043317c)(local_1c + local_20);
    iVar1 = (*(code *)PTR_rand_004331e4)();
    *(char *)(param_1 + uVar2) = (char)(iVar1 % 0x100);
  }
  return 0;
}

