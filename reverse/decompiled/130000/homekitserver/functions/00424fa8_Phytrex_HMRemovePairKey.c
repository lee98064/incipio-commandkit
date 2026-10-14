/* Phytrex_HMRemovePairKey @ 00424fa8 */

undefined4 Phytrex_HMRemovePairKey(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar2 + 1;
    iVar1 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar4,param_1,0x40);
    if (iVar1 == 0) {
      (*(code *)PTR_memset_0061223c)(&DAT_00613d78 + iVar4,0,0xa1);
      uVar3 = 0;
      goto LAB_00425058;
    }
    iVar4 = iVar2 * 0xa1;
  } while (iVar2 != 0x10);
  uVar3 = 0xffffe5b9;
LAB_00425058:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar3;
}

