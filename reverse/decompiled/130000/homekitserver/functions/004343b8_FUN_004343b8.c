/* FUN_004343b8 @ 004343b8 */

undefined4 FUN_004343b8(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_005ffd00 != -1) {
    (*(code *)PTR_clock_gettime_006138fc)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_006134d0)(DAT_005ffd00,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006138fc)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}

