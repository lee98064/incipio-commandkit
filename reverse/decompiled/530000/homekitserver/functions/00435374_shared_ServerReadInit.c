/* shared_ServerReadInit @ 00435374 */

undefined4 shared_ServerReadInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_00600b94 == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_00600b94 = (*(code *)PTR_mq_open_0061358c)("/mqphytrexread",0x100,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_00600b94 == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

