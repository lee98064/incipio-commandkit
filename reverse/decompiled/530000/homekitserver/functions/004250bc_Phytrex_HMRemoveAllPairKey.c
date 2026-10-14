/* Phytrex_HMRemoveAllPairKey @ 004250bc */

undefined4 Phytrex_HMRemoveAllPairKey(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  puVar1 = &DAT_00614c18;
  do {
    puVar2 = puVar1 + 0xa1;
    (*(code *)PTR_memset_006130cc)(puVar1,0,0xa1);
    puVar1 = puVar2;
  } while (puVar2 != &DAT_00615628);
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return 0;
}

