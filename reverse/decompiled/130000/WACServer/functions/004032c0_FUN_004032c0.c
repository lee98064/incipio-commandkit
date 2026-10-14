/* FUN_004032c0 @ 004032c0 */

undefined8 FUN_004032c0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = CONCAT44(DAT_004335d8,DAT_004335dc);
  if (DAT_004335d8 == 0 && DAT_004335dc == 0) {
    lVar1 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
  }
  DAT_004335d8 = (int)((ulonglong)lVar1 >> 0x20);
  DAT_004335dc = (int)lVar1;
  lVar1 = lVar1 * CONCAT44(param_1,param_2);
  return CONCAT44((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
}

