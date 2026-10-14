/* Phytrex_HMInitFlash @ 00425904 */

void Phytrex_HMInitFlash(char param_1)

{
  undefined4 uVar1;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [72];
  
  if (param_1 != '\0') {
    FUN_00425670();
  }
  uVar1 = (*(code *)PTR_open_0061479c)("/dev/mtdblock2",0x101,0x1b0);
  local_60 = 0x50;
  local_5f = 0x48;
  local_5e = 0x52;
  local_5d = 0x58;
  local_5c = 0;
  local_58 = 0;
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0);
  (*(code *)PTR_write_00613734)(uVar1,&local_60,0xc);
  (*(code *)PTR_memset_006130cc)(auStack_54,0,0x41);
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0xc);
  (*(code *)PTR_write_00613734)(uVar1,auStack_54,0x41);
  (*(code *)PTR_memset_006130cc)(&DAT_00614c18,0,0xa10);
  (*(code *)PTR_lseek_00613e6c)(uVar1,0,0x4d);
  (*(code *)PTR_write_00613734)(uVar1,&DAT_00614c18,0xa10);
  (*(code *)PTR_close_00613604)(uVar1);
  return;
}

