/* FUN_80403708 @ 80403708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80403708(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  
  DAT_8040fd24 = 0x800;
  puVar12 = &DAT_8040fcec;
  iVar6 = 0;
  iVar11 = 0;
  puVar1 = puVar12;
  do {
    uVar3 = *(uint *)(param_1 + iVar6);
    *puVar1 = uVar3;
    if (uVar3 != 0) {
      uVar3 = FUN_80406604(uVar3 << 2);
      *(uint *)((int)&DAT_8040fcd4 + iVar6) = uVar3 | 0xa0000000;
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(uVar3 | 0xa0000000,0,*puVar1 << 2);
      iVar11 = iVar11 + *puVar1;
    }
    iVar6 = iVar6 + 4;
    puVar1 = puVar1 + 1;
  } while (iVar6 != 0x18);
  if (iVar11 != 0) {
    puVar10 = &DAT_8040fd14;
    iVar6 = 0;
    iVar9 = 0;
    puVar1 = puVar10;
    do {
      uVar3 = *(uint *)(param_3 + iVar6);
      *puVar1 = uVar3;
      if (uVar3 != 0) {
        uVar3 = FUN_80406604(uVar3 << 2);
        *(uint *)((int)&DAT_8040fd04 + iVar6) = uVar3 | 0xa0000000;
        if ((uVar3 & 0xfffffff) == 0) {
          FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        FUN_80406a30(uVar3 | 0xa0000000,0,*puVar1 << 2);
        iVar9 = iVar9 + *puVar1;
      }
      iVar6 = iVar6 + 4;
      puVar1 = puVar1 + 1;
    } while (iVar6 != 0x10);
    if ((iVar9 != 0) && (DAT_8040ee68 = param_2, param_2 != 0)) {
      uVar3 = FUN_80406604(param_2 << 2);
      DAT_8040fcd0 = uVar3 | 0xa0000000;
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(DAT_8040fcd0,0,param_2 << 2);
      iVar6 = (iVar9 + iVar11) * 0x18;
      uVar3 = FUN_80406604(iVar6);
      puVar7 = (undefined4 *)(uVar3 | 0xa0000000);
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(puVar7,0,iVar6);
      uVar3 = FUN_80406604((iVar9 + DAT_8040ee68) * 0x18);
      puVar8 = (undefined4 *)(uVar3 | 0xa0000000);
      if ((uVar3 & 0xfffffff) == 0) {
        FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      FUN_80406a30(puVar8,0,(iVar9 + DAT_8040ee68) * 0x18);
      uVar3 = FUN_80406604((DAT_8040fd24 + 2) * DAT_8040ee68 + 7);
      if ((uVar3 & 0xfffffff) != 0) {
        FUN_80406a30(uVar3 | 0xa0000000,0,(DAT_8040fd24 + 2) * DAT_8040ee68 + 7);
        DAT_8040fd3c = 0;
        DAT_8040fd38 = 0;
        DAT_8040fd30 = 0;
        DAT_8040fd34 = 0;
        piVar4 = &DAT_8040fd04;
        uVar5 = 0;
        do {
          for (; uVar2 = *puVar10, uVar5 < uVar2; uVar5 = uVar5 + 1) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar7 = puVar8;
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined2 *)(puVar7 + 3) = 0x8800;
            puVar7[2] = puVar7[2] & 0x1fffffff;
            *(undefined1 *)((int)puVar7 + 0xf) = 0;
            *puVar8 = 0;
            puVar8[1] = puVar7;
            *(undefined2 *)((int)puVar8 + 10) = 0x9c;
            puVar8[3] = 0;
            puVar8[4] = 0;
            *(undefined2 *)(puVar8 + 5) = 0;
            *(undefined4 **)(*piVar4 + uVar5 * 4) = puVar7;
            puVar7 = puVar7 + 6;
            puVar8 = puVar8 + 6;
          }
          if (uVar2 != 0) {
            puVar1 = (uint *)(*piVar4 + (uVar2 - 1) * 4);
            *puVar1 = *puVar1 | 2;
          }
          piVar4 = piVar4 + 1;
          puVar10 = puVar10 + 1;
          uVar5 = 0;
        } while (piVar4 != &DAT_8040fd14);
        uVar3 = (uVar3 | 0xa0000000) + 7 & 0xfffffff8;
        _DAT_b8010020 = DAT_8040fd04;
        _DAT_b8010024 = DAT_8040fd08;
        _DAT_b8010060 = DAT_8040fd0c;
        _DAT_b8010064 = DAT_8040fd10;
        DAT_8040fd28 = 0;
        DAT_8040fd2c = 0;
        piVar4 = &DAT_8040fcd4;
        iVar6 = 0;
        do {
          iVar11 = iVar6 << 2;
          uVar5 = 0;
          while( true ) {
            uVar2 = *puVar12;
            if (uVar2 <= uVar5) break;
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            *puVar7 = puVar8;
            *(undefined2 *)(puVar7 + 1) = 0;
            *(undefined2 *)(puVar7 + 3) = 0x9000;
            puVar7[2] = puVar7[2] & 0x1fffffff;
            *(undefined1 *)((int)puVar7 + 0xf) = 0;
            *puVar8 = 0;
            puVar8[1] = puVar7;
            *(undefined2 *)(puVar8 + 2) = 0;
            *(undefined2 *)((int)puVar8 + 10) = 0x9c;
            puVar8[3] = 0;
            *(short *)(puVar8 + 5) = (short)DAT_8040fd24;
            puVar8[4] = uVar3 + 2;
            puVar8[3] = uVar3 + 2;
            uVar3 = uVar3 + DAT_8040fd24;
            *(uint *)(*piVar4 + uVar5 * 4) = (uint)puVar7 | 1;
            *(uint *)(DAT_8040fcd0 + iVar11) = (uint)puVar8 | 1;
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 6;
            puVar8 = puVar8 + 6;
            iVar11 = iVar11 + 4;
          }
          if (uVar2 != 0) {
            puVar1 = (uint *)(*piVar4 + (uVar2 - 1) * 4);
            *puVar1 = *puVar1 | 2;
          }
          piVar4 = piVar4 + 1;
          puVar12 = puVar12 + 1;
          iVar6 = uVar5 + iVar6;
        } while (piVar4 != &DAT_8040fcec);
        puVar1 = (uint *)(DAT_8040fcd0 + (DAT_8040ee68 + -1) * 4);
        *puVar1 = *puVar1 | 2;
        _DAT_b8010000 = 0xc4000000;
        _DAT_b8010004 = DAT_8040fcd4;
        _DAT_b8010008 = DAT_8040fcd8;
        _DAT_b801000c = DAT_8040fcdc;
        _DAT_b8010010 = DAT_8040fce0;
        _DAT_b8010014 = DAT_8040fce4;
        _DAT_b8010018 = DAT_8040fce8;
        _DAT_b801001c = DAT_8040fcd0;
        _DAT_b8010028 = 0x7f8;
        _DAT_bb804004 = 0x96181441;
        return 0;
      }
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return 0x16;
}

