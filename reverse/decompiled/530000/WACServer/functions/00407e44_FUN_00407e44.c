/* FUN_00407e44 @ 00407e44 */

int FUN_00407e44(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((longlong)param_1 * 1000000000);
  return (uint)(uVar1 + param_2 < uVar1) +
         (int)((ulonglong)((longlong)param_1 * 1000000000) >> 0x20) + (param_2 >> 0x1f);
}

