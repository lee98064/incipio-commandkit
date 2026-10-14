/* Phytrex_HMSearchLTPK @ 0042524c */

undefined4 Phytrex_HMSearchLTPK(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar1 = PTR_pthread_mutex_lock_00613f24;
  *param_3 = -1;
  (*(code *)puVar1)(&DAT_00614c00);
  iVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = (*(code *)PTR_strncmp_006140c8)(&DAT_00614c18 + iVar6,param_1,0x40);
    iVar4 = iVar3 + 1;
    if (iVar2 == 0) {
      (*(code *)PTR_memcpy_00614674)(param_2,&DAT_00614c58 + iVar6,0x20);
      *param_3 = iVar3;
      uVar5 = 0;
      goto LAB_0042531c;
    }
    iVar6 = iVar4 * 0xa1;
    iVar3 = iVar4;
  } while (iVar4 != 0x10);
  uVar5 = 0xffffe5b9;
LAB_0042531c:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return uVar5;
}

