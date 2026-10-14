/* FUN_804015f8 @ 804015f8 */

void FUN_804015f8(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 *puVar3;
  int iVar4;
  
  if ((DAT_8040ef94 != 0) &&
     (puVar3 = (undefined2 *)(DAT_8040ee48 + 0x22), *(short *)(DAT_8040ee48 + 0x24) == 0x45)) {
    FUN_804077a4(s_File_Start___x_length__x_8040d2d0,DAT_8040e5d8,DAT_8040ee58);
    DAT_8041005c = *(undefined4 *)(DAT_8040ee48 + 0x1a);
    DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
    DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
    DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
    DAT_8040ee52 = *puVar3;
    pcVar2 = (char *)(DAT_8040ee48 + 0x2c);
    if (*pcVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = 1;
      pcVar1 = (char *)(DAT_8040ee48 + 0x2d);
      do {
        if (*pcVar1 == '\0') break;
        iVar4 = iVar4 + 1;
        pcVar1 = pcVar2 + iVar4;
      } while (iVar4 != 0x200);
    }
    FUN_80406a54(&DAT_8040fe50,pcVar2,iVar4);
    (&DAT_8040fe50)[iVar4] = 0;
    DAT_80410060 = *(undefined4 *)(DAT_8040ee48 + 6);
    DAT_80410064 = *(undefined1 *)(DAT_8040ee48 + 10);
    DAT_80410065 = *(undefined1 *)(DAT_8040ee48 + 0xb);
    FUN_804077a4(s___TFTP_GET_File__s_Size__X_Byte_8040d2ec,&DAT_8040fe50,DAT_8040ee58);
    DAT_8040ef9c = 1;
    FUN_80401340(&DAT_8040fe50,1);
    DAT_8040ee44 = 1;
    DAT_8040ee54 = 1;
  }
  return;
}

