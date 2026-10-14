/* FUN_804069a8 @ 804069a8 */

char * FUN_804069a8(char *param_1,char param_2)

{
  if (*param_1 != param_2) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    while( true ) {
      param_1 = param_1 + 1;
      if (*param_1 == param_2) break;
      if (*param_1 == '\0') {
        return (char *)0x0;
      }
    }
  }
  return param_1;
}

