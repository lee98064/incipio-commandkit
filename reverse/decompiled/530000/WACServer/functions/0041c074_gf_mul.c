/* gf_mul @ 0041c074 */

void gf_mul(uint *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_b8 [32];
  uint *local_38;
  int local_34;
  uint *local_30;
  uint *local_2c;
  
  puVar3 = local_b8;
  local_b8[1] = param_1[1];
  local_b8[2] = param_1[2];
  local_b8[0] = *param_1;
  local_b8[3] = param_1[3];
  puVar6 = param_1 + 2;
  do {
    uVar2 = *(ushort *)(&DAT_00422b50 + (puVar3[3] & 1) * 0x100);
    puVar3[6] = puVar3[1] << 0x1f | puVar3[2] >> 1;
    puVar3[7] = puVar3[2] << 0x1f | puVar3[3] >> 1;
    puVar3[4] = (uint)uVar2 << 0x10 ^ *puVar3 >> 1;
    puVar3[5] = *puVar3 << 0x1f | puVar3[1] >> 1;
    puVar3 = puVar3 + 4;
    local_30 = local_b8;
  } while (puVar3 != local_b8 + 0x1c);
  if (param_1 != param_2) {
    local_30 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_34 = 0xf;
  local_2c = local_b8 + 4;
  local_38 = local_b8 + 2;
  while( true ) {
    bVar1 = *(byte *)((int)local_30 + local_34);
    if ((char)bVar1 < '\0') {
      uVar5 = *local_38;
      *param_1 = *param_1 ^ local_b8[0];
      param_1[1] = param_1[1] ^ local_b8[1];
      uVar4 = local_38[1];
      *puVar6 = *puVar6 ^ uVar5;
      param_1[3] = param_1[3] ^ uVar4;
    }
    if ((bVar1 & 0x40) != 0) {
      uVar4 = local_2c[1];
      uVar5 = local_2c[2];
      *param_1 = *param_1 ^ *local_2c;
      param_1[1] = param_1[1] ^ uVar4;
      uVar4 = local_2c[3];
      *puVar6 = *puVar6 ^ uVar5;
      param_1[3] = param_1[3] ^ uVar4;
    }
    if ((bVar1 & 0x20) != 0) {
      *param_1 = *param_1 ^ local_b8[8];
      param_1[1] = param_1[1] ^ local_b8[9];
      *puVar6 = *puVar6 ^ local_b8[10];
      param_1[3] = param_1[3] ^ local_b8[0xb];
    }
    if ((bVar1 & 0x10) != 0) {
      *param_1 = *param_1 ^ local_b8[0xc];
      param_1[1] = param_1[1] ^ local_b8[0xd];
      *puVar6 = *puVar6 ^ local_b8[0xe];
      param_1[3] = param_1[3] ^ local_b8[0xf];
    }
    if ((bVar1 & 8) != 0) {
      *param_1 = *param_1 ^ local_b8[0x10];
      param_1[1] = param_1[1] ^ local_b8[0x11];
      *puVar6 = *puVar6 ^ local_b8[0x12];
      param_1[3] = param_1[3] ^ local_b8[0x13];
    }
    if ((bVar1 & 4) != 0) {
      *param_1 = *param_1 ^ local_b8[0x14];
      param_1[1] = param_1[1] ^ local_b8[0x15];
      *puVar6 = *puVar6 ^ local_b8[0x16];
      param_1[3] = param_1[3] ^ local_b8[0x17];
    }
    if ((bVar1 & 2) != 0) {
      *param_1 = *param_1 ^ local_b8[0x18];
      param_1[1] = param_1[1] ^ local_b8[0x19];
      *puVar6 = *puVar6 ^ local_b8[0x1a];
      param_1[3] = param_1[3] ^ local_b8[0x1b];
    }
    if ((bVar1 & 1) != 0) {
      *param_1 = *param_1 ^ local_b8[0x1c];
      param_1[1] = param_1[1] ^ local_b8[0x1d];
      *puVar6 = *puVar6 ^ local_b8[0x1e];
      param_1[3] = param_1[3] ^ local_b8[0x1f];
    }
    if (local_34 == 0) break;
    FUN_0041b990(param_1);
    local_34 = local_34 + -1;
  }
  return;
}

