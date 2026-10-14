/* FUN_804029e0 @ 804029e0 */

byte FUN_804029e0(byte *param_1,uint param_2)

{
  return param_1[1] ^ *param_1 ^ param_1[2] ^ param_1[3] ^ param_1[4] ^ param_1[5] ^
         (&DAT_8040a780)[param_2 & 0xffff];
}

