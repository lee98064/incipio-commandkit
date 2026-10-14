/* read_productInfo @ 004040d0 */

void read_productInfo(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_44 [14];
  undefined1 auStack_36 [20];
  undefined1 auStack_22 [26];
  
  iVar1 = (*(code *)PTR_open_0041628c)("/dev/mtdblock5",2);
  if (iVar1 < 1) {
    (*(code *)PTR_puts_00416300)("read production from flash open fail......");
  }
  else {
    iVar2 = (*(code *)PTR_lseek_004162ec)(iVar1,0x18000,0);
    if (iVar2 == -1) {
      (*(code *)PTR_puts_00416300)("read production from flash lseek fail......");
    }
    else {
      iVar2 = (*(code *)PTR_read_004162d0)(iVar1,auStack_44,0x36);
      if (iVar2 != -1) {
        (*(code *)PTR_puts_00416300)("[METER] Read Product Info :");
        (*(code *)PTR_printf_00416324)("              Serial NUM : [%s] \n",auStack_36);
        (*(code *)PTR_printf_00416324)("              Write perimt : [%s] \n",auStack_22);
        (*(code *)PTR_close_00416284)(iVar1);
        return;
      }
      (*(code *)PTR_puts_00416300)("read production from flash fail.......");
    }
  }
  (*(code *)PTR_close_00416284)(iVar1);
  return;
}

