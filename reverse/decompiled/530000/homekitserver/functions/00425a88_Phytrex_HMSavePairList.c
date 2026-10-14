/* Phytrex_HMSavePairList @ 00425a88 */

undefined4 Phytrex_HMSavePairList(void)

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
    (*(code *)PTR_lseek_00613e6c)(iVar1,0x4d,0);
    (*(code *)PTR_write_00613734)(iVar1,&DAT_00614c18,0xa10);
    uVar2 = 0;
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}

