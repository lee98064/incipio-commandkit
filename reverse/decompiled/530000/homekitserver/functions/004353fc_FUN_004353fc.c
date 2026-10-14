/* FUN_004353fc @ 004353fc */

undefined4 FUN_004353fc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b90 == -1) {
    DAT_00600b90 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexwrite",0);
    uVar1 = 0;
    if (DAT_00600b90 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

