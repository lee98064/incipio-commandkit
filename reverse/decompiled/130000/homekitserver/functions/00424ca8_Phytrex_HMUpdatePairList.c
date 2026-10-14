/* Phytrex_HMUpdatePairList @ 00424ca8 */

undefined4 Phytrex_HMUpdatePairList(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
    uVar1 = 0xffffe5b8;
    if (param_2 < 0x10) {
      param_2 = param_2 * 0xa1;
      uVar1 = 0;
      (*(code *)PTR_memcpy_006137d0)(&DAT_00613d78 + param_2,param_1,0x24);
      (*(code *)PTR_memcpy_006137d0)(&DAT_00613db8 + param_2,param_1 + 0x40,0x20);
      (&DAT_00613dd8)[param_2] = *(undefined1 *)(param_1 + 0x60);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar1;
}

