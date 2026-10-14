/* FUN_00404718 @ 00404718 */

int FUN_00404718(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  
  if ((int)param_2 % 3 == 0) {
    iVar1 = (int)param_2 / 3;
  }
  else {
    iVar1 = (int)param_2 / 3 + 1;
  }
  uVar2 = iVar1 * 4;
  iVar1 = (*(code *)PTR_malloc_004162f4)(uVar2 + 1);
  (*(code *)PTR_memset_004162b8)(iVar1,0,uVar2 + 1);
  local_14 = 0;
  local_18 = 0;
  do {
    if (param_2 <= local_14) {
LAB_00404c48:
      for (local_18 = 0; local_18 < uVar2; local_18 = local_18 + 1) {
        *(char *)(iVar1 + local_18) =
             s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00416200[*(byte *)(iVar1 + local_18)];
      }
      return iVar1;
    }
    if (param_2 <= local_14 + 2) {
      *(byte *)(iVar1 + local_18) = *(byte *)(param_1 + local_14) >> 2;
      if ((int)param_2 % 3 == 1) {
        *(byte *)(iVar1 + local_18 + 1) = (*(byte *)(param_1 + local_14) & 3) << 4;
        *(undefined1 *)(iVar1 + local_18 + 2) = 0x40;
        *(undefined1 *)(iVar1 + local_18 + 3) = 0x40;
        goto LAB_00404c48;
      }
      if ((int)param_2 % 3 == 2) {
        *(byte *)(iVar1 + local_18 + 1) =
             (byte)(((*(byte *)(param_1 + local_14) & 3) << 0x1c) >> 0x18) |
             *(byte *)(param_1 + local_14 + 1) >> 4;
        *(byte *)(iVar1 + local_18 + 2) = (*(byte *)(param_1 + local_14 + 1) & 0xf) << 2;
        *(undefined1 *)(iVar1 + local_18 + 3) = 0x40;
        goto LAB_00404c48;
      }
    }
    *(byte *)(iVar1 + local_18) = *(byte *)(param_1 + local_14) >> 2;
    *(byte *)(iVar1 + local_18 + 1) =
         (byte)(((*(byte *)(param_1 + local_14) & 3) << 0x1c) >> 0x18) |
         *(byte *)(param_1 + local_14 + 1) >> 4;
    *(byte *)(iVar1 + local_18 + 2) =
         (byte)(((*(byte *)(param_1 + local_14 + 1) & 0xf) << 0x1a) >> 0x18) |
         *(byte *)(param_1 + local_14 + 2) >> 6;
    *(byte *)(iVar1 + local_18 + 3) = *(byte *)(param_1 + local_14 + 2) & 0x3f;
    local_14 = local_14 + 3;
    local_18 = local_18 + 4;
  } while( true );
}

