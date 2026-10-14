/* Phytrex_HMGetPairListPermission @ 00424c60 */

undefined4 Phytrex_HMGetPairListPermission(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  uVar1 = 0xffffe5b7;
  if (param_1 < 0x10) {
    uVar1 = 0;
    *param_2 = (&DAT_00614c78)[param_1 * 0xa1];
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}

