/* ranges_reset @ 0040a2b0 */

void ranges_reset(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    *(int *)(iVar1 + 8) = DAT_0046dfb0;
    DAT_0046dfb0 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

