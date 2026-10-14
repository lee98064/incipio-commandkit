/* memcmp_constant_time @ 0040cd30 */

byte memcmp_constant_time(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  bVar1 = 0;
  while( true ) {
    pbVar4 = (byte *)(param_2 + uVar2);
    pbVar3 = (byte *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    bVar1 = bVar1 | *pbVar4 ^ *pbVar3;
  }
  return bVar1;
}

