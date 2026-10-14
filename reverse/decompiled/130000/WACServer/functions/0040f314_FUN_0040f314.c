/* FUN_0040f314 @ 0040f314 */

void FUN_0040f314(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[0x25];
  uVar2 = uVar4 * 0x10 + param_1[0x11];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0x10] =
       (uint)(uVar1 + uVar4 < uVar1) +
       (uint)(uVar1 < uVar2) +
       (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x24] << 4) + param_1[0x10] +
       (uVar4 >> 0x1f | param_1[0x24] << 1) + param_1[0x24];
  param_1[0x11] = uVar1 + uVar4;
  uVar4 = param_1[0x23];
  uVar2 = uVar4 * 0x10 + param_1[0xf];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0xe] = (uint)(uVar1 + uVar4 < uVar1) +
                 (uint)(uVar1 < uVar2) +
                 (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x22] << 4) + param_1[0xe]
                 + (uVar4 >> 0x1f | param_1[0x22] << 1) + param_1[0x22];
  param_1[0xf] = uVar1 + uVar4;
  uVar4 = param_1[0x21];
  uVar2 = uVar4 * 0x10 + param_1[0xd];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0xc] = (uint)(uVar1 + uVar4 < uVar1) +
                 (uint)(uVar1 < uVar2) +
                 (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x20] << 4) + param_1[0xc]
                 + (uVar4 >> 0x1f | param_1[0x20] << 1) + param_1[0x20];
  param_1[0xd] = uVar1 + uVar4;
  uVar4 = param_1[0x1f];
  uVar2 = uVar4 * 0x10 + param_1[0xb];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[10] = (uint)(uVar1 + uVar4 < uVar1) +
                (uint)(uVar1 < uVar2) +
                (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1e] << 4) + param_1[10] +
                (uVar4 >> 0x1f | param_1[0x1e] << 1) + param_1[0x1e];
  param_1[0xb] = uVar1 + uVar4;
  uVar4 = param_1[0x1d];
  uVar2 = uVar4 * 0x10 + param_1[9];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[8] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1c] << 4) + param_1[8] +
               (uVar4 >> 0x1f | param_1[0x1c] << 1) + param_1[0x1c];
  param_1[9] = uVar1 + uVar4;
  uVar4 = param_1[0x1b];
  uVar2 = uVar4 * 0x10 + param_1[7];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[6] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1a] << 4) + param_1[6] +
               (uVar4 >> 0x1f | param_1[0x1a] << 1) + param_1[0x1a];
  param_1[7] = uVar1 + uVar4;
  uVar4 = param_1[0x19];
  uVar2 = uVar4 * 0x10 + param_1[5];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[4] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x18] << 4) + param_1[4] +
               (uVar4 >> 0x1f | param_1[0x18] << 1) + param_1[0x18];
  param_1[5] = uVar1 + uVar4;
  uVar4 = param_1[0x17];
  uVar2 = uVar4 * 0x10 + param_1[3];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[2] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x16] << 4) + param_1[2] +
               (uVar4 >> 0x1f | param_1[0x16] << 1) + param_1[0x16];
  param_1[3] = uVar1 + uVar4;
  uVar4 = param_1[0x15];
  iVar3 = param_1[0x14];
  uVar2 = uVar4 * 0x10 + param_1[1];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[1] = uVar1 + uVar4;
  *param_1 = (uint)(uVar1 + uVar4 < uVar1) +
             (uint)(uVar1 < uVar2) +
             (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | iVar3 << 4) + *param_1 +
             (uVar4 >> 0x1f | iVar3 << 1) + iVar3;
  return;
}

