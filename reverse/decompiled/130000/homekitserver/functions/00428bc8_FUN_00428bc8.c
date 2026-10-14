/* FUN_00428bc8 @ 00428bc8 */

undefined4 FUN_00428bc8(void)

{
  longlong lVar1;
  int local_10;
  int local_c;
  
  (*(code *)PTR_clock_gettime_006138fc)(0,&local_10);
  lVar1 = (*(code *)PTR___udivdi3_00611abc)(local_c >> 0x1f,local_c,0,10000000);
  return (int)((ulonglong)((longlong)local_10 * 100 + lVar1) >> 0x20);
}

