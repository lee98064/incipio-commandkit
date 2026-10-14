/* FUN_00419e40 @ 00419e40 */

uint FUN_00419e40(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_b8;
  undefined1 local_b4 [23];
  byte local_9d;
  int local_94;
  int local_90;
  
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x136,&local_b8);
  iVar3 = 1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    while (iVar3 <= local_b8) {
      local_b4[0] = (undefined1)iVar3;
      iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x8137,local_b4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      iVar3 = iVar3 + 1;
      if ((local_9d & 1) != 0) {
        param_1 = param_1 + local_94;
        param_2 = param_2 + local_90;
      }
    }
    uVar2 = (uint)(param_3 < param_1);
    if (param_4 < param_2) {
      uVar2 = (param_3 < param_1) + 2;
    }
  }
  return uVar2;
}

