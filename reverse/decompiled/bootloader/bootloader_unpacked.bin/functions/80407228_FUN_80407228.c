/* FUN_80407228 @ 80407228 */

uint FUN_80407228(uint param_1)

{
  DAT_8040eca0 = (DAT_8040eca0 & 0xffff) * 0x13 + 0x25 ^ (DAT_8040eca0 >> 0x10) * 0x130000 ^
                 (DAT_8040eca0 >> 0x10) * 0x13;
  if (param_1 == 0) {
    trap(0x1c00);
  }
  return DAT_8040eca0 % param_1;
}

