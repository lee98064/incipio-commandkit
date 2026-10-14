/* aes_ecb_decrypt @ 00413098 */

undefined4 aes_ecb_decrypt(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 & 0xf) == 0) {
    iVar3 = (int)param_3 >> 4;
    iVar2 = 0;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = (*(code *)PTR_aes_decrypt_0043326c)(param_1 + iVar2,param_2 + iVar2,param_4);
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar1 == 0);
  }
  return 1;
}

