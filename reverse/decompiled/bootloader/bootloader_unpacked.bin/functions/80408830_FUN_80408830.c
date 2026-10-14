/* FUN_80408830 @ 80408830 */

void FUN_80408830(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_b8000050;
  }
  else {
    if (param_1 != 1) {
      return;
    }
    puVar1 = (undefined4 *)&DAT_b8000054;
  }
  *puVar1 = 8;
  *puVar1 = 9;
  *puVar1 = 0xb;
  return;
}

