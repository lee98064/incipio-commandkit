/* HKCreatePairVerifyInfo @ 004259a4 */

void HKCreatePairVerifyInfo(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_calloc_00613a18)(1,0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 1;
  }
  return;
}

