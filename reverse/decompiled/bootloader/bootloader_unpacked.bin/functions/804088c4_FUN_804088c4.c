/* FUN_804088c4 @ 804088c4 */

void FUN_804088c4(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int local_8;
  
  if (param_1 == 0) {
    puVar1 = (uint *)&DAT_b8b01000;
  }
  else if (param_1 == 1) {
    puVar1 = (uint *)&DAT_b8b21000;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    puVar1 = (uint *)&DAT_b8b410c0;
  }
  *puVar1 = (param_2 & 0x1f) << 8 | 1 | param_3 << 0x10;
  local_8 = 0;
  do {
    local_8 = local_8 + 1;
  } while (local_8 < 0x15b3);
  return;
}

