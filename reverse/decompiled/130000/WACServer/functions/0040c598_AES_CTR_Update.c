/* AES_CTR_Update @ 0040c598 */

undefined4 AES_CTR_Update(int param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char cVar9;
  int iVar8;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 0x114);
  while( true ) {
    iVar4 = param_1 + uVar10;
    if ((param_3 == 0) || (uVar10 == 0)) break;
    bVar1 = *param_2;
    uVar10 = uVar10 + 1 & 0xf;
    param_2 = param_2 + 1;
    *param_4 = *(byte *)(iVar4 + 0x104) ^ bVar1;
    param_3 = param_3 - 1;
    param_4 = param_4 + 1;
  }
  *(uint *)(param_1 + 0x114) = uVar10;
  iVar4 = 0;
  uVar3 = param_3;
  while( true ) {
    if (uVar3 < 0x10) break;
    (*(code *)PTR_aes_ecb_encrypt_00433248)(param_1 + 0xf4,param_1 + 0x104,0x10,param_1);
    iVar7 = 0xf;
    iVar5 = param_1;
    do {
      iVar7 = iVar7 + -1;
      cVar9 = *(char *)(iVar5 + 0x103) + '\x01';
      *(char *)(iVar5 + 0x103) = cVar9;
      if (cVar9 != '\0') break;
      iVar5 = iVar5 + -1;
    } while (iVar7 != -1);
    iVar5 = 0;
    do {
      iVar8 = param_1 + iVar5;
      iVar2 = iVar5 - iVar4;
      iVar7 = iVar5 - iVar4;
      iVar5 = iVar5 + 1;
      param_4[iVar7] = *(byte *)(iVar8 + 0x104) ^ param_2[iVar2];
    } while (iVar5 != 0x10);
    uVar3 = uVar3 - 0x10;
    iVar4 = iVar4 + -0x10;
  }
  param_4 = param_4 + (param_3 & 0xfffffff0);
  param_2 = param_2 + (param_3 & 0xfffffff0);
  if ((param_3 & 0xf) != 0) {
    (*(code *)PTR_aes_ecb_encrypt_00433248)(param_1 + 0xf4,param_1 + 0x104,0x10,param_1);
    iVar5 = 0xf;
    iVar4 = param_1;
    do {
      iVar5 = iVar5 + -1;
      cVar9 = *(char *)(iVar4 + 0x103) + '\x01';
      *(char *)(iVar4 + 0x103) = cVar9;
      if (cVar9 != '\0') break;
      iVar4 = iVar4 + -1;
    } while (iVar5 != -1);
    pbVar6 = (byte *)(param_1 + uVar10 + 0x104);
    uVar3 = 0;
    do {
      bVar1 = *param_2;
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      *param_4 = *pbVar6 ^ bVar1;
      pbVar6 = pbVar6 + 1;
      param_4 = param_4 + 1;
    } while (uVar3 != (param_3 & 0xf));
    if (*(char *)(param_1 + 0x118) == '\0') {
      *(uint *)(param_1 + 0x114) = uVar3 + uVar10;
    }
  }
  return 0;
}

