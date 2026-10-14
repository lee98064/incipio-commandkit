/* FUN_804020e0 @ 804020e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804020e0(void)

{
  uint uVar1;
  
  if (DAT_8040ef94 != 0) {
    if (*(short *)(DAT_8040ee48 + 0x24) == DAT_8040ee50) {
      DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
      if (*(short *)(DAT_8040ee48 + 0x2c) == DAT_8040ee44) {
        uVar1 = *(ushort *)(DAT_8040ee48 + 0x26) - 0xc;
        FUN_80406a54(DAT_8040ee40,DAT_8040ee48 + 0x2e,uVar1);
        DAT_8040ee40 = DAT_8040ee40 + uVar1;
        DAT_8040ee60 = uVar1 + DAT_8040ee60;
        FUN_80407434();
        FUN_804017b4(DAT_8040ee44);
        DAT_8040ee44 = DAT_8040ee44 + 1;
        if (uVar1 < 0x200) {
          FUN_804077a4(s___TFTP_Client_Upload_File_Size___8040d4a0,DAT_8040ee60,DAT_8040e5d8);
          DAT_8040ee48 = &DAT_80410074;
          DAT_8040ee4c = 0;
          DAT_8040ee44 = 0;
          DAT_8040ee40 = DAT_8040e5d8;
          DAT_8040ee58 = DAT_8040ee60;
          DAT_8040efa0 = 0;
          DAT_8040ee54 = 0;
          DAT_8040ef9c = 0;
          DAT_8040ee50 = DAT_8040ee50 + 1;
          FUN_804077a4(s_Success___s_8040d4d4,s_<RealTek>_8040d2c4);
          if (DAT_8040ef90 == 1) {
            _DAT_b8000010 = _DAT_b8000010 & 0xfffff7ff;
            DAT_8040ef90 = 0;
            DAT_8040ee5c = DAT_8040e5d8;
            _DAT_b8003000 = 0;
            setCopReg(0,Status,(Status | 1) ^ 1);
            FUN_804077a4(s_Jump_to_0x_x_8040d4e4,DAT_8040e5d8);
            FUN_80406454();
            (*DAT_8040ee5c)();
          }
          else if (DAT_8040e6cc != 0) {
            FUN_804019e8(DAT_8040e5d8,DAT_8040ee60);
          }
        }
      }
      else {
        FUN_804077a4(s_TFTP___8040d498);
        FUN_804017b4(DAT_8040ee44 + -1);
      }
    }
  }
  return;
}

