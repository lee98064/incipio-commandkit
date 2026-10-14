/* WACServerStop @ 00404d7c */

undefined4 WACServerStop(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_pthread_join_004330a4;
  *(undefined1 *)(param_1 + 0x40) = 1;
  (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x3c),0);
  return 0;
}

