/* FUN_80404230 @ 80404230 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80404230(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  do {
  } while ((_DAT_bb804418 & 0x80000) == 0);
  if (param_3 == (undefined4 *)0x0) {
    _DAT_bb804418 = _DAT_bb804418 | 0x40000;
    FUN_804077a4(s_Assertion_fail_at_file_8040d7b4);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = (param_2 + param_1 * 0x800) * 0x20;
  do {
  } while ((_DAT_bb804d00 & 1) != 0);
  _DAT_bb804418 = _DAT_bb804418 | 0x40000;
  param_3[7] = *(undefined4 *)(iVar1 + -0x44ffffe4);
  param_3[6] = *(undefined4 *)(iVar1 + -0x44ffffe8);
  param_3[5] = *(undefined4 *)(iVar1 + -0x44ffffec);
  param_3[4] = *(undefined4 *)(iVar1 + -0x44fffff0);
  param_3[3] = *(undefined4 *)(iVar1 + -0x44fffff4);
  param_3[2] = *(undefined4 *)(iVar1 + -0x44fffff8);
  param_3[1] = *(undefined4 *)(iVar1 + -0x44fffffc);
  *param_3 = *(undefined4 *)(iVar1 + -0x45000000);
  _DAT_bb804418 = _DAT_bb804418 & 0xfffbffff;
  return 0;
}

