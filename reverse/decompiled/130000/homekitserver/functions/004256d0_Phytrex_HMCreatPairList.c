/* Phytrex_HMCreatPairList @ 004256d0 */

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
  
  (*(code *)PTR_pthread_mutex_lock_0061308c)(&DAT_00613d60);
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0);
  if (iVar1 == -1) {
    Phytrex_HMInitFlash();
  }
  else {
    (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
    (*(code *)PTR_read_00612ef0)(iVar1,&local_60,0xc);
    if ((((local_60 == 'P') && (local_5f == 'H')) && (local_5e == 'R')) && (local_5d == 'X')) {
      (*(code *)PTR_lseek_00612fd4)(iVar1,0x4d,0);
      pcVar2 = (code *)PTR_read_00612ef0;
    }
    else {
      (*(code *)PTR_close_0061276c)(iVar1);
      iVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0x101,0x1b0);
      local_60 = 'P';
      local_5f = 'H';
      local_5e = 'R';
      local_5d = 'X';
      local_5c = 0;
      local_58 = 0;
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0);
      (*(code *)PTR_write_00612898)(iVar1,&local_60,0xc);
      (*(code *)PTR_memset_0061223c)(auStack_54,0,0x41);
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0xc);
      (*(code *)PTR_write_00612898)(iVar1,auStack_54,0x41);
      (*(code *)PTR_memset_0061223c)(&DAT_00613d78,0,0xa10);
      (*(code *)PTR_lseek_00612fd4)(iVar1,0,0x4d);
      pcVar2 = (code *)PTR_write_00612898;
    }
    (*pcVar2)(iVar1,&DAT_00613d78,0xa10);
    (*(code *)PTR_close_0061276c)(iVar1);
  }
  (*(code *)PTR_pthread_mutex_unlock_00611c8c)(&DAT_00613d60);
  return 0;
}

