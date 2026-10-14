/* strnicmp @ 004065e0 */

undefined4 strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  
  pbVar4 = param_1 + param_3;
  do {
    if (pbVar4 <= param_1) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)bVar1 * 2);
    sVar3 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)*param_2 * 2);
    param_2 = param_2 + 1;
    if (sVar2 < sVar3) {
      return 0xffffffff;
    }
    if (sVar3 < sVar2) {
      return 1;
    }
  } while (sVar2 != 0);
  return 0;
}

