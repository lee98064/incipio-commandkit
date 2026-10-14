/* FUN_80406604 @ 80406604 */

int * FUN_80406604(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  if (DAT_8040fd40 != (int *)0x0) {
    uVar2 = (param_1 + 7U >> 3) + 1;
    uVar3 = DAT_8040fd40[1];
    piVar1 = DAT_8040fd40;
    while( true ) {
      if (uVar2 <= uVar3) {
        if (uVar2 < uVar3) {
          piVar4 = piVar1 + uVar2 * 2;
          DAT_8040fd40 = piVar4;
          *piVar4 = *piVar1;
          piVar4[1] = piVar1[1] - uVar2;
          piVar1[1] = uVar2;
        }
        else {
          DAT_8040fd40 = (int *)*piVar1;
        }
        DAT_8040fd44 = DAT_8040fd44 - uVar2;
        return piVar1 + 2;
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) break;
      uVar3 = piVar1[1];
    }
  }
  FUN_804077a4(s_Allocation_Failed__8040daf8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

