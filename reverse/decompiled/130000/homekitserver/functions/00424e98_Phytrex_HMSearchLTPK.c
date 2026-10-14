/* Phytrex_HMSearchLTPK @ 00424e98 */

undefined4 Phytrex_HMSearchLTPK(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = PTR_pthread_mutex_lock_0061308c;
  *param_3 = -1;
  (*(code *)puVar1)(&DAT_00613d60);
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar6,param_1,0x40);
    iVar4 = iVar3 + 1;
    if (iVar2 == 0) {
      (*(code *)PTR_memcpy_006137d0)(param_2,&DAT_00613db8 + iVar6,0x20);
      *param_3 = iVar3;
      uVar5 = 0;
      goto LAB_00424f68;
    }
    iVar6 = iVar4 * 0xa1;
    iVar3 = iVar4;
  } while (iVar4 != 0x10);
  uVar5 = 0xffffe5b9;
LAB_00424f68:
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar5;
}

