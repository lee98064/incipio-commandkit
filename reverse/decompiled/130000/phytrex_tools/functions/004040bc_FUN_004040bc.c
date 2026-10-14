/* FUN_004040bc @ 004040bc */

int FUN_004040bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40;
  uint local_2c;
  uint local_28;
  int local_20 [5];
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = param_2 + 3;
  }
  iVar1 = (iVar1 >> 2) * 3;
  iVar2 = (*(code *)PTR_malloc_00415f04)(iVar1 + 1);
  (*(code *)PTR_memset_00415ec8)(iVar2,0,iVar1 + 1);
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  local_28 = 0;
  while( true ) {
    if ((uint)(param_2 >> 2) <= local_28) {
      return iVar2;
    }
    iVar1 = local_28 * 3;
    local_40 = 0;
    for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
      iVar3 = FUN_00404030((int)*(char *)(param_1 + local_28 * 4 + local_2c));
      local_20[local_2c] = iVar3;
    }
    if ((param_2 >> 2) - 1U == local_28) {
      for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
        if (local_20[local_2c] == 0x40) {
          local_40 = local_40 + 1;
        }
      }
    }
    *(byte *)(iVar2 + iVar1) =
         (byte)((uint)(local_20[0] << 0x1a) >> 0x18) | (byte)((int)(local_20[1] & 0x30U) >> 4);
    if (local_40 == 2) break;
    *(byte *)(iVar2 + iVar1 + 1) =
         (byte)((uint)(local_20[1] << 0x1c) >> 0x18) | (byte)((int)(local_20[2] & 0x3cU) >> 2);
    if (local_40 == 1) {
      return iVar2;
    }
    *(byte *)(iVar2 + iVar1 + 2) =
         (byte)((uint)(local_20[2] << 0x1e) >> 0x18) | (byte)local_20[3] & 0x3f;
    local_28 = local_28 + 1;
  }
  return iVar2;
}

