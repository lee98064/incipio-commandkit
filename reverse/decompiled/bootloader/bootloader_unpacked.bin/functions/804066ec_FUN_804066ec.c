/* FUN_804066ec @ 804066ec */

void FUN_804066ec(int param_1)

{
  uint *in_v0;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  puVar3 = DAT_8040fd40;
  if (param_1 == 0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (DAT_8040fd40 == (uint *)0x0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  puVar4 = (uint *)(param_1 + -8);
  iVar5 = *(int *)(param_1 + -4);
  DAT_8040fd44 = DAT_8040fd44 + iVar5;
  if (puVar4 < DAT_8040fd40) {
    if (DAT_8040fd40 == puVar4 + iVar5 * 2) {
      puVar2 = DAT_8040fd40 + 1;
      DAT_8040fd40 = puVar4;
      *(uint *)(param_1 + -4) = *puVar2 + iVar5;
      *puVar4 = *puVar3;
    }
    else {
      *puVar4 = (uint)DAT_8040fd40;
      DAT_8040fd40 = puVar4;
    }
  }
  else if (DAT_8040fd40 < puVar4) {
    uVar1 = DAT_8040fd40[1] + iVar5;
    in_v0 = DAT_8040fd40;
    if (puVar4 == DAT_8040fd40 + DAT_8040fd40[1] * 2) {
      DAT_8040fd40[1] = uVar1;
    }
    else {
      do {
        puVar3 = (uint *)*in_v0;
        if ((puVar3 == (uint *)0x0) || (puVar4 <= puVar3)) goto LAB_8040682c;
        in_v0 = puVar3;
      } while (puVar4 != puVar3 + puVar3[1] * 2);
      uVar1 = puVar3[1] + iVar5;
      puVar3[1] = uVar1;
    }
    puVar4 = (uint *)*puVar3;
    if (puVar4 == puVar3 + uVar1 * 2) {
      puVar3[1] = uVar1 + puVar4[1];
      *puVar3 = *puVar4;
    }
  }
  else {
LAB_8040682c:
    *in_v0 = (uint)puVar4;
    puVar2 = puVar4 + *(int *)(param_1 + -4) * 2;
    if (puVar2 == puVar3) {
      *(uint *)(param_1 + -4) = puVar2[1] + *(int *)(param_1 + -4);
      *puVar4 = *puVar2;
    }
    else {
      *puVar4 = (uint)puVar3;
    }
  }
  return;
}

