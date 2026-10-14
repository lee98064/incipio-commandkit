/* HTTPServerSend @ 00405398 */

undefined4 HTTPServerSend(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint local_98 [32];
  
  if (param_1 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      puVar2 = local_98;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (puVar2 != (uint *)&stack0xffffffe8);
      puVar2 = local_98 + (*(uint *)(param_1 + 0x10) >> 5);
      uVar4 = 0;
      *puVar2 = *puVar2 | 1 << (*(uint *)(param_1 + 0x10) & 0x1f);
      do {
        iVar3 = (*(code *)PTR_select_00433264)(*(int *)(param_1 + 0x10) + 1,0,local_98,0,0);
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        iVar3 = (*(code *)PTR_write_00433218)
                          (*(undefined4 *)(param_1 + 0x10),param_2 + uVar4,param_3 - uVar4);
        uVar4 = uVar4 + iVar3;
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        uVar1 = 0xffffe5a2;
      } while (uVar4 < param_3);
      if (uVar4 == param_3) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

