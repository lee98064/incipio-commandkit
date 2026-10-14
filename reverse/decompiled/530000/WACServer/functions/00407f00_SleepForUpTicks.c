/* SleepForUpTicks @ 00407f00 */

void SleepForUpTicks(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_v1;
  undefined4 extraout_v1_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = param_1;
  local_24 = param_2;
  lVar6 = UpTicks();
  lVar7 = lVar6 + CONCAT44(local_28,local_24);
  uVar2 = (uint)lVar7;
  uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
  while( true ) {
    uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar4 = uVar2 - (uint)lVar6;
    iVar5 = (uVar3 - uVar1) - (uint)(uVar2 < uVar4);
    if ((uVar3 <= uVar1) && ((uVar3 != uVar1 || (uVar2 <= (uint)lVar6)))) break;
    (*(code *)PTR___udivdi3_004331b4)(iVar5,uVar4,0,100);
    local_30 = extraout_v1;
    lVar7 = (*(code *)PTR___umoddi3_00433304)(iVar5,uVar4,0,100);
    (*(code *)PTR___udivdi3_004331b4)
              ((int)((ulonglong)(lVar7 * 1000000000) >> 0x20),(int)(lVar7 * 1000000000),0,100);
    local_2c = extraout_v1_00;
    (*(code *)PTR_nanosleep_00433228)(&local_30,0);
    lVar6 = UpTicks();
  }
  return;
}

