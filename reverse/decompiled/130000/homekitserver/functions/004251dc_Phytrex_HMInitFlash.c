/* Phytrex_HMInitFlash @ 004251dc */

void Phytrex_HMInitFlash(void)

{
  undefined4 uVar1;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  uVar1 = (*(code *)PTR_open_006138f8)("/dev/mtdblock2",0x101,0x1b0);
  local_60 = 0x50;
  local_5f = 0x48;
  local_5e = 0x52;
  local_5d = 0x58;
  local_5c = 0;
  local_58 = 0;
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0);
  (*(code *)PTR_write_00612898)(uVar1,&local_60,0xc);
  (*(code *)PTR_memset_0061223c)(auStack_54,0,0x41);
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0xc);
  (*(code *)PTR_write_00612898)(uVar1,auStack_54,0x41);
  (*(code *)PTR_memset_0061223c)(&DAT_00613d78,0,0xa10);
  (*(code *)PTR_lseek_00612fd4)(uVar1,0,0x4d);
  (*(code *)PTR_write_00612898)(uVar1,&DAT_00613d78,0xa10);
  (*(code *)PTR_close_0061276c)(uVar1);
  return;
}

