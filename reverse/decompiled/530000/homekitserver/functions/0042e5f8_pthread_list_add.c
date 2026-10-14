/* pthread_list_add @ 0042e5f8 */

undefined4 pthread_list_add(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615670);
  uVar4 = 0xffffffff;
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x30,1);
  puVar1 = PTR_memset_006130cc;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = param_1;
    (*(code *)puVar1)(puVar3 + 1,0,0x24);
    uVar4 = 0;
    DAT_006156b0[1] = puVar3 + 10;
    puVar3[0xb] = &DAT_006156b0;
    puVar2 = puVar3 + 10;
    puVar3[10] = DAT_006156b0;
    DAT_006156b0 = puVar2;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615670);
  return uVar4;
}

