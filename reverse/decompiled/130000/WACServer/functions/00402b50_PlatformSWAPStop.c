/* PlatformSWAPStop @ 00402b50 */

undefined4 PlatformSWAPStop(void)

{
  undefined1 auStack_88 [128];
  
  (*(code *)PTR_memset_00433190)(auStack_88,0,0x80);
  (*(code *)PTR_sprintf_00433144)(auStack_88,"echo 1 > %s;","/tmp/net/wac_notify_stop_swap.txt");
  (*(code *)PTR_system_00433284)(auStack_88);
  return 0;
}

