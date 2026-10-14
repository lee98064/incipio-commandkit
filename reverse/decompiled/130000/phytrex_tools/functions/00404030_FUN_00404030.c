/* FUN_00404030 @ 00404030 */

int FUN_00404030(char param_1)

{
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x40 < local_10) {
      return -1;
    }
    if (param_1 == s_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef_00415e10[local_10]) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

