/* FUN_00435188 @ 00435188 */

undefined4 FUN_00435188(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 auStack_1c [12];
  
  if (DAT_00600b90 != -1) {
    (*(code *)PTR_clock_gettime_006147a0)(0,&local_2c);
    local_20 = local_28 + 0x457;
    local_24 = local_2c + 5;
    iVar1 = (*(code *)PTR_mq_timedreceive_00614374)(DAT_00600b90,param_1,0x100,auStack_30,&local_24)
    ;
    (*(code *)PTR_clock_gettime_006147a0)(0,auStack_1c);
    if (-1 < iVar1) {
      *param_2 = iVar1;
      return 0;
    }
  }
  return 0xffffffff;
}

