/* bt_saveTorrentfile @ 00421090 */

undefined4 bt_saveTorrentfile(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_fopen_0046a894)(param_1,"w");
  if (iVar1 == 0) {
    (*(code *)PTR_puts_0046ab3c)("Can not create bt file");
    uVar2 = 0xffffffff;
  }
  else {
    (*(code *)PTR_fwrite_0046a798)(param_2,param_3,1,iVar1);
    (*(code *)PTR_fclose_0046a85c)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}

