/* FUN_80407480 @ 80407480 */

int FUN_80407480(byte *param_1,byte *param_2,int *param_3)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte bVar6;
  int iVar5;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte local_48 [24];
  int local_30;
  
  bVar6 = *param_2;
  pbVar9 = param_1;
  if (bVar6 != 0) {
    local_30 = 0x66666667;
    do {
      if (bVar6 == 0x25) {
        pbVar10 = param_2 + 1;
        if (*pbVar10 == 0x73) {
          pbVar7 = (byte *)*param_3;
          bVar6 = *pbVar7;
          param_3 = param_3 + 1;
          if (bVar6 != 0) {
            do {
              if (param_1 == (byte *)0x0) {
                FUN_80406880();
              }
              else {
                *pbVar9 = bVar6;
                pbVar9 = pbVar9 + 1;
              }
              pbVar7 = pbVar7 + 1;
              bVar6 = *pbVar7;
            } while (bVar6 != 0);
            param_2 = param_2 + 2;
            goto LAB_80407758;
          }
        }
        else {
          uVar3 = (uint)*pbVar10;
          if ((uVar3 - 0x30 & 0xff) < 10) {
            iVar5 = 0;
            do {
              iVar4 = iVar5 * 10 + uVar3;
              pbVar10 = pbVar10 + 1;
              uVar3 = (uint)*pbVar10;
              iVar5 = iVar4 + -0x30;
            } while ((uVar3 - 0x30 & 0xff) < 10);
            uVar3 = (iVar4 + -0x31) * 4;
          }
          else {
            uVar3 = 0x1c;
          }
          bVar6 = *pbVar10;
          if ((bVar6 == 0x78) || (bVar6 == 0x58)) {
            iVar5 = *param_3;
            param_3 = param_3 + 1;
            pbVar7 = local_48;
            if ((int)uVar3 < 0) goto LAB_80407754;
            do {
              *pbVar7 = s_0123456789ABCDEF_8040db0c[iVar5 >> (uVar3 & 0x1f) & 0xf] | bVar6 & 0x20;
              uVar3 = uVar3 - 4;
              pbVar7 = pbVar7 + 1;
            } while (-1 < (int)uVar3);
            bVar1 = local_48 < pbVar7;
          }
          else {
            if (bVar6 == 100) {
              iVar5 = *param_3;
              param_3 = param_3 + 1;
              pbVar7 = local_48;
              pbVar8 = local_48;
              if (iVar5 < 0) {
                local_48[0] = 0x2d;
                iVar5 = -iVar5;
                pbVar7 = local_48 + 1;
                pbVar8 = local_48 + 1;
              }
              do {
                pbVar2 = pbVar7;
                iVar4 = (int)((longlong)iVar5 * (longlong)local_30 >> 0x22) - (iVar5 >> 0x1f);
                *pbVar2 = (char)iVar5 + (char)iVar4 * -10 + 0x30;
                pbVar7 = pbVar2 + 1;
                iVar5 = iVar4;
              } while (iVar4 != 0);
              if (pbVar8 < pbVar2) {
                do {
                  bVar6 = *pbVar2;
                  *pbVar2 = *pbVar8;
                  *pbVar8 = bVar6;
                  pbVar8 = pbVar8 + 1;
                  pbVar2 = pbVar2 + -1;
                } while (pbVar8 < pbVar2);
                bVar1 = local_48 < pbVar7;
                goto LAB_80407710;
              }
            }
            else {
              pbVar7 = local_48 + 1;
              if (bVar6 == 99) {
                local_48[0] = (byte)*param_3;
                param_3 = param_3 + 1;
              }
              else {
                local_48[0] = bVar6;
              }
            }
            bVar1 = local_48 < pbVar7;
          }
LAB_80407710:
          pbVar8 = local_48;
          if (bVar1) {
            do {
              if (param_1 == (byte *)0x0) {
                FUN_80406880((int)(char)*pbVar8);
              }
              else {
                *pbVar9 = *pbVar8;
                pbVar9 = pbVar9 + 1;
              }
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 < pbVar7);
          }
        }
LAB_80407754:
        param_2 = pbVar10 + 1;
      }
      else {
        if (param_1 != (byte *)0x0) {
          *pbVar9 = bVar6;
          pbVar9 = pbVar9 + 1;
          pbVar10 = param_2;
          goto LAB_80407754;
        }
        param_2 = param_2 + 1;
        FUN_80406880();
      }
LAB_80407758:
      bVar6 = *param_2;
    } while (bVar6 != 0);
  }
  if (param_1 != (byte *)0x0) {
    *pbVar9 = 0;
  }
  return (int)pbVar9 - (int)param_1;
}

