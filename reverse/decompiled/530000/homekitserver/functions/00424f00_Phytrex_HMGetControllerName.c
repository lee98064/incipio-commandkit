/* Phytrex_HMGetControllerName @ 00424f00 */

undefined4 Phytrex_HMGetControllerName(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  uVar1 = 0xffffe5b9;
  if ((&DAT_00614c18)[param_2 * 0xa1] != '\0') {
    (*(code *)PTR_memcpy_00614674)(param_1,&DAT_00614c18 + param_2 * 0xa1,0x24);
    uVar1 = 0;
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar1;
}

