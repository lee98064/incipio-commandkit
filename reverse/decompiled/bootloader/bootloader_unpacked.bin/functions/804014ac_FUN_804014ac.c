/* FUN_804014ac @ 804014ac */

void FUN_804014ac(void)

{
  if (DAT_8040ef94 != 0) {
    if (*(short *)(DAT_8040ee48 + 0x24) == DAT_8040ee50) {
      DAT_8040ee52 = *(undefined2 *)(DAT_8040ee48 + 0x22);
      if (*(short *)(DAT_8040ee48 + 0x2c) == DAT_8040ee44) {
        DAT_8040ee44 = DAT_8040ee44 + 1;
        if (DAT_8040efa0 == 0) {
          FUN_80401340(&DAT_8040fe50,DAT_8040ee44);
        }
        else {
          DAT_8040ee54 = 0;
          DAT_8040ef9c = 0;
          FUN_804077a4(s__TFTP_Client_Download_Success__F_8040d27c,DAT_8040ee58);
          FUN_804077a4(s__Success___s_8040d2b4,s_<RealTek>_8040d2c4);
          DAT_8040ee48 = &DAT_80410074;
          DAT_8040ee4c = 0;
          DAT_8040ee44 = 0;
          DAT_8040efa0 = 0;
        }
      }
      else {
        FUN_804077a4(s___TFTP___8040d270);
        FUN_80401340(&DAT_8040fe50,DAT_8040ee44);
      }
    }
  }
  return;
}

