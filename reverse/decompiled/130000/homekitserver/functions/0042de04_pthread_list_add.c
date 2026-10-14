/* pthread_list_add @ 0042de04 */

undefined4 pthread_list_add(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_006147d0);
  uVar4 = 0xffffffff;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_00613a18)(0x30,1);
  puVar1 = PTR_memset_0061223c;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    (*(code *)puVar1)(puVar3 + 1,0,0x24);
    uVar4 = 0;
    DAT_00614810[1] = puVar3 + 10;
    puVar3[0xb] = &DAT_00614810;
    puVar2 = puVar3 + 10;
    puVar3[10] = DAT_00614810;
    DAT_00614810 = puVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_006147d0);
  return uVar4;
}

