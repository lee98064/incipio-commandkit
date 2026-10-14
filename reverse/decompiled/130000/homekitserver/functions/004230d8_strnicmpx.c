/* strnicmpx @ 004230d8 */

undefined4 strnicmpx(byte *param_1,int param_2,byte *param_3)

{
  short sVar1;
  short sVar2;
  
  do {
    if (param_2 == 0) {
      if (*param_3 == 0) {
        return 0;
      }
      return 0xffffffff;
    }
    sVar1 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)*param_3 * 2);
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_006124f4 + (uint)*param_1 * 2);
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    if (sVar2 < sVar1) {
      return 0xffffffff;
    }
    if (sVar1 < sVar2) {
      return 1;
    }
    param_3 = param_3 + 1;
  } while (sVar1 != 0);
  return 0;
}

