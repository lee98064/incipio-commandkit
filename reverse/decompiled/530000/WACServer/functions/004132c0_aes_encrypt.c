/* aes_encrypt @ 004132c0 */

undefined4 aes_encrypt(byte *param_1,undefined1 *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  cVar1 = *(char *)(param_3 + 0x3c);
  if (((cVar1 != -0x60) && (cVar1 != -0x40)) && (cVar1 != -0x20)) {
    return 1;
  }
  uVar10 = ((uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8) ^ param_3[3];
  uVar9 = ((uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8) ^ *param_3;
  uVar5 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8) ^ param_3[1];
  uVar3 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8) ^ param_3[2];
  if (cVar1 == -0x40) {
LAB_0041373c:
    uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^ param_3[5] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
    uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^ param_3[6] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
    uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
    uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^ param_3[7] ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
    uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[8] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
    uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
    uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    param_3 = param_3 + 8;
  }
  else {
    if (cVar1 == -0x20) {
      uVar6 = *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[5] ^
              *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
      uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4) ^ param_3[6] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4);
      uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
      uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^ param_3[7] ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[8] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
      uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
      uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
      param_3 = param_3 + 8;
      goto LAB_0041373c;
    }
    if (cVar1 != -0x60) goto LAB_00414ad0;
  }
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^ param_3[5] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^ param_3[6] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^ param_3[7] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[8] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0xc] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0xd] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0xe] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0xf] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x10] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x11] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x12] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x13] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x14] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x15] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x16] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x17] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x18] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x19] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x1a] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x1b] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x1c] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x1d] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x1e] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x1f] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(PTR_t_fn_004331a4 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x21] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x20] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0x22] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x23] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x25] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar8 & 0xff) + 0x300) * 4) ^ param_3[0x26] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x24] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x27] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fl_00433100 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x28] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fl_00433100 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x29] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fl_00433100 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0x2a] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fl_00433100 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x2b] ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
LAB_00414ad0:
  param_2[0xe] = (char)(uVar10 >> 8);
  param_2[0xf] = (char)uVar10;
  *param_2 = (char)(uVar9 >> 0x18);
  param_2[1] = (char)(uVar9 >> 0x10);
  param_2[2] = (char)(uVar9 >> 8);
  param_2[3] = (char)uVar9;
  param_2[4] = (char)(uVar5 >> 0x18);
  param_2[5] = (char)(uVar5 >> 0x10);
  param_2[6] = (char)(uVar5 >> 8);
  param_2[7] = (char)uVar5;
  param_2[8] = (char)(uVar3 >> 0x18);
  param_2[9] = (char)(uVar3 >> 0x10);
  param_2[10] = (char)(uVar3 >> 8);
  param_2[0xb] = (char)uVar3;
  param_2[0xc] = (char)(uVar10 >> 0x18);
  param_2[0xd] = (char)(uVar10 >> 0x10);
  return 0;
}

