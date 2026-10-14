/* Phytrex_HMRemovePairKey @ 00425148 */

undefined4 Phytrex_HMRemovePairKey(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar5 = 0;
  iVar2 = 0;
  do {
    iVar1 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar5,param_1,0x40);
    iVar3 = iVar2 + 1;
    if (iVar1 == 0) {
      (*(code *)PTR_memset_006130cc)(&DAT_00614c18 + iVar5,0,0xa1);
      uVar4 = 0;
      if (iVar2 == 0) {
        *param_2 = 1;
      }
      goto LAB_00425210;
    }
    iVar5 = iVar3 * 0xa1;
    iVar2 = iVar3;
  } while (iVar3 != 0x10);
  uVar4 = 0xffffe5b9;
LAB_00425210:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar4;
}

