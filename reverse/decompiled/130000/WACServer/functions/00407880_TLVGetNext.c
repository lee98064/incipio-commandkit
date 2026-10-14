/* TLVGetNext @ 00407880 */

undefined4
TLVGetNext(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,
          uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  uVar2 = 0xffffe5b9;
  if (1 < (uint)((int)param_2 - (int)param_1)) {
    bVar1 = param_1[1];
    puVar3 = param_1 + 2 + bVar1;
    uVar2 = 0xffffe5a2;
    if ((param_1 <= puVar3) && (puVar3 <= param_2)) {
      uVar2 = 0;
      *param_3 = *param_1;
      *param_4 = param_1 + 2;
      *param_5 = (uint)bVar1;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = puVar3;
      }
    }
  }
  return uVar2;
}

