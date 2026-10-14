/* FUN_00407538 @ 00407538 */

undefined4 FUN_00407538(byte *param_1,int param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_004330cc)();
  }
  puVar4 = PTR___ctype_b_004332c8;
  puVar3 = PTR___ctype_tolower_0043309c;
  pbVar5 = param_1 + param_2;
  do {
    uVar7 = 0;
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = 0;
LAB_00407634:
    do {
      if (pbVar5 <= param_1) {
        if (iVar6 == 0) {
          return 0xffffe5aa;
        }
        break;
      }
      bVar1 = *param_1;
      iVar8 = (int)(char)bVar1;
      param_1 = param_1 + 1;
      iVar9 = (uint)bVar1 * 2;
      uVar2 = *(ushort *)(*(int *)puVar4 + iVar9);
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 0x10) == 0) {
          if (iVar6 != 0) break;
          if (((iVar8 != 0x3a) && (iVar8 != 0x2d)) && (iVar8 != 0x20)) {
            return 0xffffe5aa;
          }
          goto LAB_00407634;
        }
        uVar7 = *(short *)(*(int *)puVar3 + iVar9) + -0x57 + uVar7 * 0x10;
      }
      else {
        uVar7 = iVar8 + -0x30 + uVar7 * 0x10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 == 1);
    if (0xff < uVar7) {
      return 0xffffe5ca;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = (char)uVar7;
      param_4 = param_4 + 1;
    }
    param_3 = param_3 + -1;
  } while( true );
}

