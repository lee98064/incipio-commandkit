/* HTTPServerStop @ 00405374 */

undefined4 HTTPServerStop(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_pthread_join_004330a4;
  uVar2 = 0xffffe5cf;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 3;
    (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x34),0);
    (*(code *)PTR_pthread_kill_004331e0)(*(undefined4 *)(param_1 + 0x34),0x10);
    uVar2 = 0;
  }
  return uVar2;
}

