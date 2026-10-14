/* FUN_80408870 @ 80408870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80408870(int param_1)

{
  undefined4 *puVar1;
  
  _DAT_b8000010 = _DAT_b8000010 | 0x1d3000;
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_b8b01008;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar1 = (undefined4 *)&DAT_b8b21008;
  }
  *puVar1 = 1;
  *puVar1 = 0x81;
  return;
}

