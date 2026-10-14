/* Phytrex_HMGetAppConfig @ 004254a8 */

undefined4 Phytrex_HMGetAppConfig(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
    uVar2 = 0xffffe5c2;
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
    if (iVar1 != -1) {
      (*(code *)PTR_lseek_00613e6c)(iVar1,0xc,0);
      uVar2 = 0;
      (*(code *)PTR_read_00613d88)(iVar1,param_1,0x41);
      (*(code *)PTR_close_00613604)(iVar1);
    }
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  }
  return uVar2;
}

