/* Phytrex_HMAddPairKey @ 00425090 */

undefined4 Phytrex_HMAddPairKey(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  (*(code *)PTR_printf_0061185c)("[Add Pair] ControllerName=[%s]\n",param_1);
  pcVar4 = &DAT_00613d78;
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar2 = (*(code *)PTR_strncmp_0061322c)(&DAT_00613d78 + iVar6,param_1,0x40);
    if (iVar2 == 0) {
      uVar3 = 0xffffe5ae;
      goto LAB_004251a0;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0xa1;
    if (cVar1 == '\0') break;
    iVar6 = iVar5 * 0xa1;
    if (iVar5 == 0x10) {
      uVar3 = 0xffffe5b8;
LAB_004251a0:
      (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
      return uVar3;
    }
  }
  (*(code *)PTR_memcpy_006137d0)(&DAT_00613db8 + iVar6,param_1 + 0x40,0x20);
  (*(code *)PTR_memcpy_006137d0)(&DAT_00613d78 + iVar6,param_1,0x24);
  uVar3 = 0;
  (&DAT_00613dd8)[iVar6] = *(undefined1 *)(param_1 + 0x60);
  goto LAB_004251a0;
}

