/* swapWlanMibSetting @ 0041e1f0 */

void swapWlanMibSetting(uint param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [36];
  undefined1 auStack_3c [40];
  
  (*(code *)PTR_apmib_sem_lock_0046a7a0)();
  iVar3 = (*(code *)PTR_malloc_0046ab14)(0x3b46);
  puVar2 = PTR_pMib_0046ac00;
  if (iVar3 != 0) {
    iVar4 = (param_1 & 0xff) * 0x3b46;
    iVar1 = (param_2 & 0xff) * 0x3b46;
    (*(code *)PTR_memcpy_0046ab5c)(iVar3,*(int *)PTR_pMib_0046ac00 + 0x2e4c + iVar4,0x3b46);
    iVar5 = *(int *)puVar2 + 0x2e4c;
    (*(code *)PTR_memcpy_0046ab5c)(iVar5 + iVar4,iVar5 + iVar1,0x3b46);
    (*(code *)PTR_memcpy_0046ab5c)(*(int *)puVar2 + 0x2e4c + iVar1,iVar3,0x3b46);
    (*(code *)PTR_free_0046a680)(iVar3);
  }
  (*(code *)PTR_apmib_sem_unlock_0046a858)();
  (*(code *)PTR_apmib_get_0046aadc)(0x834,auStack_78);
  (*(code *)PTR_apmib_get_0046aadc)(0x844,auStack_74);
  (*(code *)PTR_apmib_get_0046aadc)(0x835,auStack_70);
  (*(code *)PTR_apmib_get_0046aadc)(0x847,auStack_6c);
  (*(code *)PTR_apmib_set_0046aa28)(0x834,auStack_74);
  (*(code *)PTR_apmib_set_0046aa28)(0x844,auStack_78);
  (*(code *)PTR_apmib_set_0046aa28)(0x835,auStack_6c);
  (*(code *)PTR_apmib_set_0046aa28)(0x847,auStack_70);
  iVar3 = (*(code *)PTR_malloc_0046ab14)(0x424);
  puVar2 = PTR_pMib_0046ac00;
  if (iVar3 != 0) {
    (*(code *)PTR_memcpy_0046ab5c)(iVar3,*(int *)PTR_pMib_0046ac00 + 0xeae,0x424);
    iVar4 = *(int *)puVar2;
    (*(code *)PTR_memcpy_0046ab5c)(iVar4 + 0xeae,iVar4 + 0x12d4,0x424);
    (*(code *)PTR_memcpy_0046ab5c)(*(int *)puVar2 + 0x12d4,iVar3,0x424);
    (*(code *)PTR_free_0046a680)(iVar3);
  }
  (*(code *)PTR_memset_0046a87c)(auStack_60,0,0x21);
  (*(code *)PTR_memset_0046a87c)(auStack_3c,0,0x21);
  (*(code *)PTR_apmib_get_0046aadc)(0xfa,auStack_68);
  (*(code *)PTR_apmib_get_0046aadc)(0xfc,auStack_64);
  (*(code *)PTR_apmib_get_0046aadc)(0xfb,auStack_60);
  (*(code *)PTR_apmib_get_0046aadc)(0xfd,auStack_3c);
  (*(code *)PTR_apmib_set_0046aa28)(0xfa,auStack_64);
  (*(code *)PTR_apmib_set_0046aa28)(0xfc,auStack_68);
  (*(code *)PTR_apmib_set_0046aa28)(0xfb,auStack_3c);
  (*(code *)PTR_apmib_set_0046aa28)(0xfd,auStack_60);
  (*(code *)PTR_apmib_sem_lock_0046a7a0)();
  iVar3 = (*(code *)PTR_malloc_0046ab14)(0x6e);
  puVar2 = PTR_pMib_0046ac00;
  if (iVar3 != 0) {
    (*(code *)PTR_memcpy_0046ab5c)(iVar3,*(int *)PTR_pMib_0046ac00 + 0x1752,0x6e);
    iVar4 = *(int *)puVar2;
    (*(code *)PTR_memcpy_0046ab5c)(iVar4 + 0x1752,iVar4 + 0x17c0,0x6e);
    (*(code *)PTR_memcpy_0046ab5c)(*(int *)puVar2 + 0x17c0,iVar3,0x6e);
    (*(code *)PTR_free_0046a680)(iVar3);
  }
  (*(code *)PTR_apmib_sem_unlock_0046a858)();
  return;
}

