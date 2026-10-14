/* FUN_8040188c @ 8040188c */

void FUN_8040188c(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_8040ef94 == 0) {
    return;
  }
  if (*(short *)(DAT_8040ee48 + 0x24) != 0x45) {
    return;
  }
  DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
  DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
  DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
  DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
  DAT_8041005c = *(undefined4 *)(DAT_8040ee48 + 0x1a);
  iVar2 = DAT_8040ee48 + 0x2c;
  FUN_804077a4(s___TFTP_Client_Upload__File_Name__8040d310,iVar2);
  iVar1 = FUN_80406ae8(iVar2,s_nfjrom_8040d338);
  if (iVar1 == 0) {
    iVar1 = FUN_80406978(iVar2,s_boot_img_8040d340);
    if (iVar1 != 0) goto LAB_8040199c;
    DAT_8040e5d8 = 0x80000000;
  }
  DAT_8040ef90 = 1;
LAB_8040199c:
  DAT_8040ee40 = DAT_8040e5d8;
  DAT_8040ee60 = 0;
  FUN_804017b4(0);
  DAT_8040ef9c = 1;
  DAT_8040ee54 = 2;
  DAT_8040ee44 = 1;
  return;
}

