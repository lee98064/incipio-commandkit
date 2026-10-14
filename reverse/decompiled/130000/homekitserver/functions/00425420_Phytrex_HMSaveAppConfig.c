/* Phytrex_HMSaveAppConfig @ 00425420 */

undefined4 Phytrex_HMSaveAppConfig(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",2);
  if (iVar1 == -1) {
    uVar2 = 0xffffe5c2;
    Phytrex_HMInitFlash();
  }
  else {
    (*(code *)PTR_lseek_00612fd4)(iVar1,0xc,0);
    (*(code *)PTR_write_00612898)(iVar1,param_1,0x41);
    uVar2 = 0;
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}

