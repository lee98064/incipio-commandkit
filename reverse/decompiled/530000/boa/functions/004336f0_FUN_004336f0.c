/* FUN_004336f0 @ 004336f0 */

void FUN_004336f0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x29);
    iVar3 = 0x28;
    uVar2 = 2;
    if ((bVar1 & 4) == 0) {
      uVar2 = bVar1 & 1;
    }
    if ((bVar1 & 2) == 0) {
      iVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0043376c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_sprintf_0046a808)
              (param_2,"%d",
               *(ushort *)
                (&DAT_00456560 +
                (uVar2 * 0x28 + ((int)((*(byte *)(param_1 + 0x16) + 0x70) * 0x1000000) >> 0x18)) * 2
                + iVar3) >> 1);
    return;
  }
  return;
}

