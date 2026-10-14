/* SocketSend @ 00424a58 */

undefined4 SocketSend(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 *local_b0 [32];
  undefined4 *local_30;
  int local_2c;
  
  if ((int)param_1 < 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      ppuVar2 = local_b0;
      do {
        *ppuVar2 = (undefined4 *)0x0;
        ppuVar2 = ppuVar2 + 1;
        uVar5 = param_1 >> 5;
      } while (ppuVar2 != &local_30);
      uVar6 = 1 << (param_1 & 0x1f);
      local_30 = &local_b8;
      local_b0[uVar5] = (undefined4 *)((uint)local_b0[uVar5] | uVar6);
      uVar4 = 0;
      local_2c = param_1 + 1;
      ppuVar2 = local_b0;
      do {
        do {
          iVar3 = local_2c;
          *ppuVar2 = (undefined4 *)0x0;
          ppuVar2 = ppuVar2 + 1;
        } while (ppuVar2 != &local_30);
        local_b0[uVar5] = (undefined4 *)((uint)local_b0[uVar5] | uVar6);
        local_b8 = 2;
        local_b4 = 0;
        iVar3 = (*(code *)PTR_select_00613cc4)(iVar3,0,local_b0,0,local_30);
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        if ((uVar6 & (uint)local_b0[uVar5]) != 0) {
          iVar3 = (*(code *)PTR_write_00613734)(param_1,param_2 + uVar4,param_3 - uVar4);
          uVar4 = uVar4 + iVar3;
          if (iVar3 < 1) {
            return 0xffffe5ad;
          }
        }
        uVar1 = 0xffffe5a2;
        ppuVar2 = local_b0;
      } while (uVar4 < param_3);
      if (uVar4 == param_3) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

