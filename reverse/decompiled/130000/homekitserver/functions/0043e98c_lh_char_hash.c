/* lh_char_hash @ 0043e98c */

int lh_char_hash(char *param_1)

{
  char *local_10;
  int local_c;
  
  local_c = 0;
  for (local_10 = param_1; *local_10 != '\0'; local_10 = local_10 + 1) {
    local_c = local_c * 0x81 + (int)*local_10 + -0x61c8ffff;
  }
  return local_c;
}

