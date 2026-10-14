/* VSNScanF @ 004068e4 */

int VSNScanF(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte *pbVar18;
  byte *pbVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  short sVar24;
  uint uVar23;
  byte bVar27;
  byte *pbVar25;
  uint uVar26;
  uint uVar28;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_004330cc)();
  }
  puVar6 = PTR___ctype_b_004332c8;
  puVar5 = PTR___ctype_tolower_0043309c;
  pbVar13 = param_1 + param_2;
  iVar8 = 0;
  pbVar14 = param_1;
LAB_0040697c:
  do {
    iVar21 = *(int *)puVar6;
    pbVar19 = pbVar14;
    if ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0) {
      do {
        param_3 = param_3 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0);
      do {
        pbVar19 = pbVar14;
        if (pbVar13 <= pbVar19) break;
        pbVar14 = pbVar19 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) != 0);
    }
    bVar27 = *param_3;
    if (bVar27 == 0) {
      return iVar8;
    }
    if (bVar27 == 0x25) {
      bVar2 = false;
      iVar22 = 0;
      bVar4 = false;
      while( true ) {
        while( true ) {
          while( true ) {
            pbVar14 = param_3 + 1;
            uVar15 = (uint)*pbVar14;
            if (uVar15 != 0x2a) break;
            bVar4 = true;
            param_3 = pbVar14;
          }
          if (uVar15 != 0x23) break;
          iVar22 = iVar22 + 1;
          param_3 = pbVar14;
        }
        if (uVar15 != 0x26) break;
        bVar2 = true;
        param_3 = pbVar14;
      }
      if ((*(ushort *)(iVar21 + uVar15 * 2) & 8) == 0) {
        uVar9 = 0x7fffffff;
        if (uVar15 == 0x2e) {
          uVar9 = *param_4;
          pbVar14 = param_3 + 2;
          if ((int)uVar9 < 0) {
            return iVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else {
        uVar9 = 0;
        do {
          bVar27 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar9 = (bVar27 - 0x30) + uVar9 * 10;
        } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 8) != 0);
      }
      bVar27 = *pbVar14;
      if (bVar27 == 0x6c) {
        bVar17 = 0x6c;
        pbVar10 = pbVar14 + 1;
        if (pbVar14[1] == 0x6c) {
          bVar17 = 0x4c;
          pbVar10 = pbVar14 + 2;
        }
LAB_00406b90:
        bVar27 = *pbVar10;
      }
      else {
        if (0x6c < bVar27) {
          bVar16 = 0x7a;
          if (bVar27 != 0x74) goto LAB_00406b38;
LAB_00406b88:
          pbVar10 = pbVar14 + 1;
          bVar17 = bVar27;
          goto LAB_00406b90;
        }
        bVar16 = 0x6a;
        if (bVar27 != 0x68) {
LAB_00406b38:
          bVar17 = 0;
          pbVar10 = pbVar14;
          if (bVar27 != bVar16) goto LAB_00406b90;
          goto LAB_00406b88;
        }
        pbVar10 = pbVar14 + 1;
        bVar27 = *pbVar10;
        bVar17 = 0x68;
        if (bVar27 == 0x68) {
          bVar17 = 0x48;
          pbVar10 = pbVar14 + 2;
          goto LAB_00406b90;
        }
      }
      if (bVar27 == 0) {
        return iVar8;
      }
      param_3 = pbVar10 + 1;
      if (bVar27 == 0x69) {
        uVar15 = 0;
      }
      else {
        pbVar14 = pbVar19;
        if (bVar27 < 0x6a) {
          if (bVar27 == 0x62) {
            uVar15 = 2;
            goto LAB_004070f8;
          }
          if (bVar27 < 99) {
            if (bVar27 == 0x58) goto LAB_00406c78;
            if (bVar27 == 0x5b) {
              if (bVar17 != 0) {
                return iVar8;
              }
              bVar27 = *param_3;
              pbVar18 = param_3;
              if (bVar27 == 0x5e) {
                pbVar18 = pbVar10 + 2;
              }
              param_3 = pbVar18 + 1;
              if (*pbVar18 != 0x5d) {
                param_3 = pbVar18;
              }
              do {
                pbVar10 = param_3;
                param_3 = pbVar10 + 1;
                if (*pbVar10 == 0) {
                  return iVar8;
                }
              } while (*pbVar10 != 0x5d);
              if (bVar27 == 0x5e) {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar25 < pbVar10) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              else {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar10 <= pbVar25) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              if ((pbVar19 == pbVar14) && (iVar22 == 0)) {
                return iVar8;
              }
              if (!bVar4) {
                pbVar10 = (byte *)*param_4;
                if (bVar2) {
                  puVar11 = param_4 + 1;
                  if (pbVar10 != (byte *)0x0) {
                    *(byte **)pbVar10 = pbVar19;
                  }
                  param_4 = param_4 + 2;
                  if ((int *)*puVar11 != (int *)0x0) {
                    *(int *)*puVar11 = (int)pbVar14 - (int)pbVar19;
                  }
                }
                else {
                  if (pbVar10 == (byte *)0x0) {
                    return iVar8;
                  }
                  for (; pbVar19 < pbVar14; pbVar19 = pbVar19 + 1) {
                    *pbVar10 = *pbVar19;
                    pbVar10 = pbVar10 + 1;
                  }
                  *pbVar10 = 0;
                  param_4 = param_4 + 1;
                }
                iVar8 = iVar8 + 1;
              }
            }
            else {
              if (bVar27 != 0x25) {
                return iVar8;
              }
              if (bVar17 != 0) {
                return iVar8;
              }
              if (uVar9 != 0x7fffffff) {
                return iVar8;
              }
              if (bVar4) {
                return iVar8;
              }
              if (pbVar13 <= pbVar19) {
                return iVar8;
              }
              pbVar14 = pbVar19 + 1;
              if (*pbVar19 != 0x25) {
                return iVar8;
              }
            }
          }
          else {
            if (bVar27 != 99) {
              uVar15 = 10;
              if (bVar27 != 100) {
                return iVar8;
              }
              bVar2 = pbVar19 < pbVar13;
              goto LAB_004070fc;
            }
            if (bVar17 != 0) {
              return iVar8;
            }
            if (!bVar2) {
              if (uVar9 == 0x7fffffff) {
                uVar9 = 1;
              }
              if ((int)pbVar13 - (int)pbVar19 < (int)uVar9) {
                return iVar8;
              }
              if (bVar4) goto LAB_00406d00;
              pbVar14 = (byte *)*param_4;
              if (pbVar14 == (byte *)0x0) {
                return iVar8;
              }
              while (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2) {
                bVar27 = *pbVar19;
                pbVar19 = pbVar19 + 1;
                *pbVar14 = bVar27;
                pbVar14 = pbVar14 + 1;
              }
              param_4 = param_4 + 1;
              goto LAB_004074fc;
            }
            if ((uint)((int)pbVar13 - (int)pbVar19) < uVar9) {
              uVar9 = (int)pbVar13 - (int)pbVar19;
            }
            if (!bVar4) {
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar19;
              }
              if ((uint *)*param_4 != (uint *)0x0) {
                *(uint *)*param_4 = uVar9;
              }
              pbVar19 = pbVar19 + uVar9;
              goto LAB_004074f8;
            }
LAB_00406d00:
            pbVar14 = pbVar19 + uVar9;
          }
          goto LAB_0040697c;
        }
        if (bVar27 == 0x70) {
          if (bVar17 == 0) {
            uVar15 = 0x10;
            bVar17 = 0x70;
          }
          else {
LAB_00406c78:
            uVar15 = 0x10;
          }
          goto LAB_004070f8;
        }
        if (bVar27 < 0x71) {
          if (bVar27 != 0x6e) {
            uVar15 = 8;
            if (bVar27 != 0x6f) {
              return iVar8;
            }
            bVar2 = pbVar19 < pbVar13;
            goto LAB_004070fc;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          if (uVar9 != 0x7fffffff) {
            return iVar8;
          }
          if (bVar4) {
            return iVar8;
          }
          if ((int *)*param_4 == (int *)0x0) {
            return iVar8;
          }
          *(int *)*param_4 = (int)pbVar19 - (int)param_1;
          param_4 = param_4 + 1;
          goto LAB_0040697c;
        }
        uVar15 = 10;
        if ((bVar27 != 0x75) && (uVar15 = 0x10, bVar27 != 0x78)) {
          if (bVar27 != 0x73) {
            return iVar8;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          do {
            pbVar14 = pbVar19;
            if (pbVar13 <= pbVar14) break;
            pbVar19 = pbVar14 + 1;
          } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0);
          if (iVar22 == 0) {
            if (pbVar13 <= pbVar14) {
              return iVar8;
            }
            if (*pbVar14 == 0) {
              return iVar8;
            }
          }
          if (bVar4) {
            while ((((pbVar14 < pbVar13 && (*pbVar14 != 0)) &&
                    ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) == 0)) &&
                   (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))) {
              pbVar14 = pbVar14 + 1;
            }
          }
          else {
            pbVar19 = pbVar14;
            if (bVar2) {
              while (((pbVar19 < pbVar13 && (*pbVar19 != 0)) &&
                     (((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) == 0 &&
                      (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))))) {
                pbVar19 = pbVar19 + 1;
              }
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar14;
              }
              if ((int *)*param_4 != (int *)0x0) {
                *(int *)*param_4 = (int)pbVar19 - (int)pbVar14;
              }
            }
            else {
              pbVar19 = (byte *)*param_4;
              if (pbVar19 == (byte *)0x0) {
                return iVar8;
              }
              for (; pbVar14 < pbVar13; pbVar14 = pbVar14 + 1) {
                bVar27 = *pbVar14;
                if (((bVar27 == 0) || ((*(ushort *)(*(int *)puVar6 + (uint)bVar27 * 2) & 0x20) != 0)
                    ) || (bVar2 = (int)uVar9 < 1, uVar9 = uVar9 - 1, bVar2)) break;
                *pbVar19 = bVar27;
                pbVar19 = pbVar19 + 1;
              }
              *pbVar19 = 0;
              pbVar19 = pbVar14;
            }
            param_4 = param_4 + 1;
            iVar8 = iVar8 + 1;
            pbVar14 = pbVar19;
          }
          goto LAB_0040697c;
        }
      }
LAB_004070f8:
      do {
        bVar2 = pbVar19 < pbVar13;
        pbVar14 = pbVar19;
LAB_004070fc:
      } while ((bVar2) &&
              (pbVar19 = pbVar14 + 1, (*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0));
      bVar2 = false;
      if ((1 < (int)pbVar13 - (int)pbVar14) && (0 < (int)uVar9)) {
        if (*pbVar14 == 0x2d) {
          pbVar14 = pbVar14 + 1;
          uVar9 = uVar9 - 1;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          if (*pbVar14 == 0x2b) {
            pbVar14 = pbVar14 + 1;
            uVar9 = uVar9 - 1;
          }
        }
      }
      pbVar19 = pbVar14;
      if (uVar15 != 0) {
        if (uVar15 == 0x10) {
          if ((((int)pbVar13 - (int)pbVar14 < 2) || ((int)uVar9 < 2)) || (*pbVar14 != 0x30))
          goto LAB_0040735c;
          sVar24 = *(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2);
          sVar20 = 0x78;
        }
        else {
          if ((((uVar15 != 2) || ((int)pbVar13 - (int)pbVar14 < 2)) || ((int)uVar9 < 2)) ||
             (*pbVar14 != 0x30)) goto LAB_0040735c;
          sVar24 = *(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2);
          sVar20 = 0x62;
        }
        if (sVar24 == sVar20) {
          uVar9 = uVar9 - 2;
          pbVar19 = pbVar14 + 2;
        }
        goto LAB_0040735c;
      }
      if ((int)pbVar13 - (int)pbVar14 < 3) {
        if ((int)pbVar13 - (int)pbVar14 == 2) goto LAB_00407258;
      }
      else {
        if ((int)uVar9 < 2) {
LAB_00407258:
          if ((int)uVar9 < 1) goto LAB_00407358;
        }
        else {
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2) == 0x78)) &&
             ((*(ushort *)(iVar21 + (uint)pbVar14[2] * 2) & 0x10) != 0)) {
            uVar9 = uVar9 - 2;
            uVar15 = 0x10;
            pbVar19 = pbVar14 + 2;
            goto LAB_0040735c;
          }
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2) == 0x62)) &&
             ((byte)(pbVar14[2] - 0x30) < 2)) {
            uVar9 = uVar9 - 2;
            uVar15 = 2;
            pbVar19 = pbVar14 + 2;
            goto LAB_0040735c;
          }
        }
        if (*pbVar14 == 0x30) {
          if ((0x2f < pbVar14[1]) && (pbVar14[1] < 0x38)) {
            uVar9 = uVar9 - 1;
            uVar15 = 8;
            pbVar19 = pbVar14 + 1;
            goto LAB_0040735c;
          }
        }
      }
LAB_00407358:
      uVar15 = 10;
LAB_0040735c:
      uVar28 = 0;
      uVar26 = 0;
      do {
        if ((pbVar13 <= pbVar19) || ((int)uVar9 < 1)) goto LAB_00407410;
        uVar9 = uVar9 - 1;
        iVar22 = (uint)*pbVar19 * 2;
        uVar1 = *(ushort *)(iVar21 + iVar22);
        uVar23 = *pbVar19 - 0x30;
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) goto LAB_00407410;
          uVar23 = (int)*(short *)(*(int *)puVar5 + iVar22) - 0x57;
        }
        if ((int)uVar15 <= (int)uVar23) goto LAB_00407410;
        pbVar19 = pbVar19 + 1;
        uVar3 = (ulonglong)uVar28;
        uVar28 = uVar23 + (int)(uVar3 * uVar15);
        uVar26 = (uint)(uVar28 < uVar23) +
                 ((int)uVar23 >> 0x1f) + uVar15 * uVar26 + (int)(uVar3 * uVar15 >> 0x20);
      } while( true );
    }
    if (pbVar13 <= pbVar19) {
      return iVar8;
    }
    param_3 = param_3 + 1;
    if (*pbVar19 != bVar27) {
      return iVar8;
    }
    pbVar14 = pbVar19 + 1;
  } while( true );
LAB_00407410:
  if (pbVar19 == pbVar14) {
    return iVar8;
  }
  pbVar14 = pbVar19;
  if (bVar4) goto LAB_0040697c;
  if (bVar2) {
    uVar28 = -uVar28;
    uVar26 = -(uint)(uVar28 != 0) - uVar26;
  }
  puVar11 = (uint *)*param_4;
  if (puVar11 == (uint *)0x0) {
    return iVar8;
  }
  if (bVar17 == 0x6a) {
LAB_004074e8:
    puVar11[1] = uVar28;
    *puVar11 = uVar26;
  }
  else {
    if (bVar17 < 0x6b) {
      if (bVar17 == 0x4c) goto LAB_004074e8;
      if (0x4c < bVar17) {
        if (bVar17 != 0x68) {
          return iVar8;
        }
        *(short *)puVar11 = (short)uVar28;
        param_4 = param_4 + 1;
        goto LAB_004074fc;
      }
      if (bVar17 != 0) {
        if (bVar17 != 0x48) {
          return iVar8;
        }
        *(char *)puVar11 = (char)uVar28;
        param_4 = param_4 + 1;
        goto LAB_004074fc;
      }
    }
    else if (bVar17 != 0x70) {
      if (bVar17 < 0x71) {
        if (bVar17 != 0x6c) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      else {
        if (bVar17 == 0x74) goto LAB_004074f4;
        if (bVar17 != 0x7a) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      goto LAB_004074f8;
    }
LAB_004074f4:
    *puVar11 = uVar28;
  }
LAB_004074f8:
  param_4 = param_4 + 1;
LAB_004074fc:
  iVar8 = iVar8 + 1;
  pbVar14 = pbVar19;
  goto LAB_0040697c;
}

