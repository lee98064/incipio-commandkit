/* Phytrex_HMAddPairKey @ 0042535c */

undefined4 Phytrex_HMAddPairKey(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  (*(code *)PTR_printf_006126e8)("[Add Pair] ControllerName=[%s]\n",param_1);
  pcVar4 = &DAT_00614c18;
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    iVar5 = iVar5 + 1;
    iVar2 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar6,param_1,0x40);
    if (iVar2 == 0) {
      uVar3 = 0xffffe5ae;
      goto LAB_0042546c;
    }
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 0xa1;
    if (cVar1 == '\0') break;
    iVar6 = iVar5 * 0xa1;
    if (iVar5 == 0x10) {
      uVar3 = 0xffffe5b8;
LAB_0042546c:
      (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
      return uVar3;
    }
  }
  (*(code *)PTR_memcpy_00614674)(&DAT_00614c58 + iVar6,param_1 + 0x40,0x20);
  (*(code *)PTR_memcpy_00614674)(&DAT_00614c18 + iVar6,param_1,0x24);
  uVar3 = 0;
  (&DAT_00614c78)[iVar6] = *(undefined1 *)(param_1 + 0x60);
  goto LAB_0042546c;
}

