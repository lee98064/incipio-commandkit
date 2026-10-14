/* Phytrex_HMCreatPairList @ 00425c4c */

undefined4 Phytrex_HMCreatPairList(void)

{
  int iVar1;
  code *pcVar2;
  char local_60;
  char local_5f;
  char local_5e;
  char local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00614c00);
  iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash(1);
  }
  else {
    (*(code *)PTR_lseek_00613e6c)(iVar1,0,0);
    (*(code *)PTR_read_00613d88)(iVar1,&local_60,0xc);
    if ((((local_60 == 'P') && (local_5f == 'H')) && (local_5e == 'R')) && (local_5d == 'X')) {
      (*(code *)PTR_lseek_00613e6c)(iVar1,0x4d,0);
      pcVar2 = (code *)PTR_read_00613d88;
    }
    else {
      (*(code *)PTR_close_00613604)(iVar1);
      iVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0x101,0x1b0);
      local_60 = 'P';
      local_5f = 'H';
      local_5e = 'R';
      local_5d = 'X';
      local_5c = 0;
      local_58 = 0;
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0);
      (*(code *)PTR_write_00613734)(iVar1,&local_60,0xc);
      (*(code *)PTR_memset_006130cc)(auStack_54,0,0x41);
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0xc);
      (*(code *)PTR_write_00613734)(iVar1,auStack_54,0x41);
      (*(code *)PTR_memset_006130cc)(&DAT_00614c18,0,0xa10);
      (*(code *)PTR_lseek_00613e6c)(iVar1,0,0x4d);
      pcVar2 = (code *)PTR_write_00613734;
    }
    (*pcVar2)(iVar1,&DAT_00614c18,0xa10);
    (*(code *)PTR_close_00613604)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00614c00);
  return 0;
}

