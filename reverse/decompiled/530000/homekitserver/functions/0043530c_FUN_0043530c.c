/* FUN_0043530c @ 0043530c */

undefined4 FUN_0043530c(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b98 == -1) {
    DAT_00600b98 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexread",1);
    uVar1 = 0;
    if (DAT_00600b98 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

