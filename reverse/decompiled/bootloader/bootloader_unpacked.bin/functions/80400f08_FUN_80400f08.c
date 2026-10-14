/* FUN_80400f08 @ 80400f08 */

void FUN_80400f08(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = DAT_8040ee48;
  if (0x29 < DAT_8040ee4c) {
    uVar2 = (short)*(char *)(DAT_8040ee48 + 0xc) << 8 | (short)*(char *)(DAT_8040ee48 + 0xd);
    if (uVar2 == 0x800) {
      if ((((0x2a < DAT_8040ee4c) && (*(char *)(DAT_8040ee48 + 0xe) == 'E')) &&
          (((uint)*(byte *)(DAT_8040ee48 + 0x1e) << 0x18 |
            (uint)*(byte *)(DAT_8040ee48 + 0x1f) << 0x10 | (uint)*(byte *)(DAT_8040ee48 + 0x20) << 8
           | (uint)*(byte *)(DAT_8040ee48 + 0x21)) == DAT_80410050)) &&
         ((iVar3 = FUN_80400ebc((char *)(DAT_8040ee48 + 0xe),0x14), iVar3 == 0 &&
          (*(char *)(iVar1 + 0x17) == '\x11')))) {
        switch(*(undefined2 *)(DAT_8040ee48 + 0x2a)) {
        default:
          goto switchD_80401054_caseD_0;
        case 1:
          iVar1 = 2;
          if (DAT_8040ef9c != '\0') {
            return;
          }
          break;
        case 2:
          if (DAT_8040ef9c == '\0') {
            DAT_8040ef98 = FUN_80409050();
            iVar1 = 3;
          }
          else {
            if ((DAT_8040ee44 != 1) && (iVar1 = FUN_80409050(), iVar1 - DAT_8040ef98 < 0x7d1)) {
              return;
            }
            DAT_8040ef98 = FUN_80409050();
            iVar1 = 3;
          }
          break;
        case 3:
          DAT_8040ef98 = FUN_80409050();
          iVar1 = 4;
          break;
        case 4:
          iVar1 = 5;
          break;
        case 5:
          iVar1 = 6;
          break;
        case 6:
          iVar1 = 7;
        }
        (*(code *)(&PTR_LAB_8040a6fc)[DAT_8040ee54 * 8 + iVar1])();
      }
    }
    else if (uVar2 == 0x806) {
      if (*(short *)(DAT_8040ee48 + 0x14) == 1) {
        iVar1 = FUN_80406a80(DAT_8040ee48 + 0x26,&DAT_80410050,4);
        iVar3 = 0;
        if (iVar1 != 0) {
          return;
        }
      }
      else {
        iVar3 = 1;
        if (*(short *)(DAT_8040ee48 + 0x14) != 2) {
          return;
        }
      }
      (*(code *)(&PTR_LAB_8040a6fc)[DAT_8040ee54 * 8 + iVar3])();
    }
  }
switchD_80401054_caseD_0:
  return;
}

