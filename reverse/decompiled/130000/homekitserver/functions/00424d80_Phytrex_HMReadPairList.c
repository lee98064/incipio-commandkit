/* Phytrex_HMReadPairList @ 00424d80 */

undefined4 Phytrex_HMReadPairList(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
    uVar2 = 0xffffe5c2;
    if (iVar1 != -1) {
      (*(code *)PTR_close_0061276c)(iVar1);
      uVar2 = 0xffffe5b8;
      if (param_2 < 0x10) {
        param_2 = param_2 * 0xa1;
        if ((&DAT_00613d78)[param_2] != '\0') {
          (*(code *)PTR_memcpy_006137d0)(param_1,&DAT_00613d78 + param_2,0x24);
          uVar2 = 0;
          (*(code *)PTR_memcpy_006137d0)(param_1 + 0x40,&DAT_00613db8 + param_2,0x20);
          *(undefined1 *)(param_1 + 0x60) = (&DAT_00613dd8)[param_2];
        }
      }
    }
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return uVar2;
}

