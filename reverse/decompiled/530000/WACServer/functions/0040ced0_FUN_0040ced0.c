/* FUN_0040ced0 @ 0040ced0 */

void FUN_0040ced0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 == 0) {
      uVar1 = 0xffffe5a7;
    }
    else {
      *(char *)(param_1 + iVar2) = ((char)*(undefined4 *)(param_1 + 0x100) + -1) - (char)iVar2;
      *(undefined4 *)(param_1 + 0x108) = 0;
      uVar1 = 0;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = uVar1;
    }
  }
  return;
}

