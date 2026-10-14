/* Phytrex_HMSaveAppConfig @ 00425b64 */

undefined4 Phytrex_HMSaveAppConfig(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash(1);
    uVar2 = 0xffffe5c2;
  }
  else {
    (*(code *)PTR_lseek_00613e6c)(iVar1,0xc,0);
    (*(code *)PTR_write_00613734)(iVar1,param_1,0x41);
    uVar2 = 0;
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}

