/* fwChecksumOk @ 0041e028 */

bool fwChecksumOk(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 2) {
    sVar1 = sVar1 + *(short *)(param_1 + iVar2);
  }
  return sVar1 == 0;
}

