/* FUN_004033b0 @ 004033b0 */

undefined8 FUN_004033b0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = CONCAT44(DAT_00433598,DAT_0043359c);
  if (DAT_00433598 == 0 && DAT_0043359c == 0) {
    lVar1 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
  }
  DAT_00433598 = (int)((ulonglong)lVar1 >> 0x20);
  DAT_0043359c = (int)lVar1;
  lVar1 = lVar1 * CONCAT44(param_1,param_2);
  return CONCAT44((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
}

