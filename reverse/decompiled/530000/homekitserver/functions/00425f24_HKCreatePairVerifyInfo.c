/* HKCreatePairVerifyInfo @ 00425f24 */

void HKCreatePairVerifyInfo(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_006148c0)(1,0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}

