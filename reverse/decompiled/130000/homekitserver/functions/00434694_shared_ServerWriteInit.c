/* shared_ServerWriteInit @ 00434694 */

undefined4 shared_ServerWriteInit(void)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0xfffffffe;
  if (DAT_005ffd0c == -1) {
    local_2c = 10;
    local_28 = 0x100;
    local_30 = 0;
    local_24 = 0;
    DAT_005ffd0c = (*(code *)PTR_mq_open_006126f8)("/mqphytrexwrite",0x101,0x1a4,&local_30);
    uVar1 = 0;
    if (DAT_005ffd0c == -1) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

