/* FUN_80404760 @ 80404760 */

undefined4 FUN_80404760(undefined4 param_1,ushort *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  if (param_2 == (ushort *)0x0) {
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = FUN_80404600();
  if (uVar1 == 0) {
    FUN_80404230(4,param_1,&local_30);
  }
  else {
    FUN_80404620(uVar1 & 0xfffffffe);
    FUN_80404230(4,param_1,&local_30);
    FUN_80404620(uVar1);
  }
  uVar2 = 0x11;
  if ((local_30 & 1) == 0) {
    FUN_80406a30(&local_30,0,0x20);
    local_30 = *(uint *)(param_2 + 0x10) >> 0x1e & 1 | (param_2[5] & 0xfff) << 1 |
               *(int *)(param_2 + 1) << 0xd;
    local_2c = (uint)(param_2[1] >> 3) | (*param_2 & 0x7fff) << 0xd | *(uint *)(param_2 + 6) << 0x1e
               | (*(uint *)(param_2 + 0x10) >> 0x1f) << 0x1d;
    local_24 = local_24 & 0xfffff000 | *(uint *)(param_2 + 0xe) >> 3 & 0xfff;
    local_28 = *(uint *)(param_2 + 6) >> 2 & 0x1f | (*(byte *)((int)param_2 + 0x13) & 0x7f) << 5 |
               (*(byte *)((int)param_2 + 0x17) & 0x7f) << 0xc |
               (*(byte *)((int)param_2 + 0x1b) & 0x7f) << 0x13 |
               (-(uint)*(byte *)((int)param_2 + 9) & 7) << 0x1a | *(uint *)(param_2 + 0xe) << 0x1d;
    iVar3 = FUN_804044a8(4,param_1,&local_30);
    uVar2 = 0;
    if (iVar3 != 0) {
      FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  }
  return uVar2;
}

