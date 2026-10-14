/* gcm_compute_tag @ 0041ace8 */

uint gcm_compute_tag(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  if ((*(int *)(param_3 + 0x1150) == *(int *)(param_3 + 0x114c)) ||
     (uVar3 = 0xffffffff, *(int *)(param_3 + 0x114c) == 0)) {
    iVar10 = param_3 + 0x1020;
    (*(code *)PTR_gf_mul_4k_0043321c)(iVar10,param_3,auStack_30);
    (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1030,param_3,auStack_30);
    if (*(int *)(param_3 + 0x1148) != 0) {
      uVar3 = *(int *)(param_3 + 0x1150) + 0xfU >> 4;
      if (uVar3 != 0) {
        (*(code *)PTR_memcpy_004332a8)(auStack_40,param_3 + 0x1040,0x10);
        while( true ) {
          uVar4 = uVar3 & 1;
          uVar3 = uVar3 >> 1;
          if (uVar4 != 0) {
            (*(code *)PTR_gf_mul_004332b8)(iVar10,auStack_40);
          }
          if (uVar3 == 0) break;
          (*(code *)PTR_gf_mul_004332b8)(auStack_40,auStack_40);
        }
      }
    }
    uVar4 = *(uint *)(param_3 + 0x1150) << 3;
    uVar3 = *(uint *)(param_3 + 0x1150) >> 0x1d;
    iVar9 = 0xf;
    do {
      pbVar5 = (byte *)(param_3 + 0x1020 + iVar9);
      uVar8 = uVar3 << 0x18;
      *pbVar5 = *pbVar5 ^ *(byte *)(param_3 + 0x1030 + iVar9) ^ (byte)uVar4;
      uVar3 = 0;
      uVar4 = uVar8 | uVar4 >> 8;
      if (iVar9 == 8) {
        uVar4 = *(uint *)(param_3 + 0x1148) << 3;
        uVar3 = *(uint *)(param_3 + 0x1148) >> 0x1d;
      }
      bVar1 = iVar9 != 0;
      iVar9 = iVar9 + -1;
    } while (bVar1);
    (*(code *)PTR_gf_mul_4k_0043321c)(iVar10,param_3,auStack_30);
    iVar10 = param_3 + 0x1010;
    (*(code *)PTR_memcpy_004332a8)(iVar10,param_3 + 0x1000,0x10);
    puVar2 = PTR_aes_encrypt_00433084;
    *(undefined4 *)(param_3 + 0x101c) = *(undefined4 *)(param_3 + 0x1144);
    (*(code *)puVar2)(iVar10,iVar10,param_3 + 0x1050);
    uVar3 = 0;
    while( true ) {
      pbVar7 = (byte *)(iVar10 + uVar3);
      pbVar6 = (byte *)(param_3 + 0x1020 + uVar3);
      pbVar5 = (byte *)(param_1 + uVar3);
      if (param_2 <= uVar3) break;
      uVar3 = uVar3 + 1;
      *pbVar5 = *pbVar7 ^ *pbVar6;
    }
    uVar3 = (uint)(*(int *)(param_3 + 0x114c) != *(int *)(param_3 + 0x1150));
  }
  return uVar3;
}

