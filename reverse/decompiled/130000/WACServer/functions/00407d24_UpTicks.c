/* UpTicks @ 00407d24 */

undefined4 UpTicks(void)

{
  longlong lVar1;
  int local_10;
  int local_c;
  
  (*(code *)PTR_clock_gettime_0043330c)(0,&local_10);
  lVar1 = (*(code *)PTR___udivdi3_004331b4)(local_c >> 0x1f,local_c,0,10000000);
  return (int)((ulonglong)((longlong)local_10 * 100 + lVar1) >> 0x20);
}

