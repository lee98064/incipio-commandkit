/* Phytrex_HMGetPairListPermission @ 00424ae0 */

undefined4 Phytrex_HMGetPairListPermission(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  uVar1 = 0xffffe5b7;
  if (param_1 < 0x10) {
    uVar1 = 0;
    *param_2 = (&DAT_00613dd8)[param_1 * 0xa1];
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar1;
}

