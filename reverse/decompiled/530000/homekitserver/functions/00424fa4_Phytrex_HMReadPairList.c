/* Phytrex_HMReadPairList @ 00424fa4 */

undefined4 Phytrex_HMReadPairList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
    uVar2 = 0xffffe5c2;
    if (iVar1 != -1) {
      (*(code *)PTR_close_00613604)(iVar1);
      uVar2 = 0xffffe5b8;
      if (param_2 < 0x10) {
        param_2 = param_2 * 0xa1;
        if ((&DAT_00614c18)[param_2] != '\0') {
          (*(code *)PTR_memcpy_00614674)(param_1,&DAT_00614c18 + param_2,0x24);
          uVar2 = 0;
          (*(code *)PTR_memcpy_00614674)(param_1 + 0x40,&DAT_00614c58 + param_2,0x20);
          *(undefined1 *)(param_1 + 0x60) = (&DAT_00614c78)[param_2];
        }
      }
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar2;
}

