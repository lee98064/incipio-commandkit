/* Phytrex_HMUpdatePairList @ 00424e28 */

undefined4 Phytrex_HMUpdatePairList(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
    uVar1 = 0xffffe5b8;
    if (param_2 < 0x10) {
      param_2 = param_2 * 0xa1;
      uVar1 = 0;
      (*(code *)PTR_memcpy_00614674)(&DAT_00614c18 + param_2,param_1,0x24);
      (*(code *)PTR_memcpy_00614674)(&DAT_00614c58 + param_2,param_1 + 0x40,0x20);
      (&DAT_00614c78)[param_2] = *(undefined1 *)(param_1 + 0x60);
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}

