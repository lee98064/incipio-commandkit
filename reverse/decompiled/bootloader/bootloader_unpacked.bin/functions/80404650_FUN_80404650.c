/* FUN_80404650 @ 80404650 */

void FUN_80404650(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint local_30 [8];
  
  if (param_2 == 0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_80404600();
  if (uVar1 == 0) {
    FUN_80404230(6,param_1,local_30);
  }
  else {
    FUN_80404620(uVar1 & 0xfffffffe);
    FUN_80404230(6,param_1,local_30);
    FUN_80404620(uVar1);
  }
  FUN_80406a30(local_30,0,0x20);
  local_30[0] = *(byte *)(param_2 + 3) & 0x3f | (*(byte *)(param_2 + 7) & 0x3f) << 9 |
                (*(uint *)(param_2 + 8) >> 0x1e) << 0x12 | param_1 << 0x14;
  iVar2 = FUN_804044a8(6,param_1,local_30);
  if (iVar2 == 0) {
    return;
  }
  FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

