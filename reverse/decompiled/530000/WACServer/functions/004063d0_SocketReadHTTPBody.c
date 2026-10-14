/* SocketReadHTTPBody @ 004063d0 */

undefined4 SocketReadHTTPBody(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint local_98 [32];
  uint uStack_18;
  
  uVar1 = 0xffffe5cf;
  if (param_2 != 0) {
    puVar2 = local_98;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != &uStack_18);
    puVar2 = local_98 + (param_1 >> 5);
    *puVar2 = *puVar2 | 1 << (param_1 & 0x1f);
    while( true ) {
      if ((*(int *)(param_2 + 0x878) == 0) &&
         (*(uint *)(param_2 + 0x87c) <= *(uint *)(param_2 + 0x808))) {
        return 0;
      }
      iVar3 = (*(code *)PTR_select_00433264)(param_1 + 1,local_98,0,0,0);
      if ((iVar3 < 1) ||
         (iVar3 = (*(code *)PTR_read_004331d4)
                            (param_1,*(int *)(param_2 + 0x804) + *(int *)(param_2 + 0x808),
                             *(int *)(param_2 + 0x87c) - *(int *)(param_2 + 0x808)), iVar3 < 0))
      break;
      *(int *)(param_2 + 0x808) = *(int *)(param_2 + 0x808) + iVar3;
    }
    uVar1 = 0xffffe5ae;
  }
  return uVar1;
}

