/* FUN_0040cf2c @ 0040cf2c */

void FUN_0040cf2c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 + 6U < 0x100) {
      puVar3 = (undefined1 *)(param_1 + iVar2);
      *puVar3 = 0xdd;
      *(int *)(param_1 + 0x108) = iVar2 + 1;
      *(undefined1 *)(param_1 + iVar2 + 1) = 0;
      puVar3[2] = (char)((uint)param_2 >> 0x18);
      puVar3[3] = (char)((uint)param_2 >> 0x10);
      puVar3[4] = (char)((uint)param_2 >> 8);
      puVar3[5] = (char)param_2;
      *(uint *)(param_1 + 0x100) = iVar2 + 6U;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffe5a9;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = uVar1;
    }
  }
  return;
}

