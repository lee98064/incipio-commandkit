/* to_upper @ 004100e0 */

char * to_upper(char *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  
  puVar1 = PTR___ctype_toupper_0046aab0;
  pcVar2 = param_1;
  while( true ) {
    iVar3 = (int)*pcVar2;
    if (iVar3 == 0) break;
    if (iVar3 == 0x2d) {
      *pcVar2 = '_';
    }
    else {
      *pcVar2 = (char)*(undefined2 *)(*(int *)puVar1 + iVar3 * 2);
    }
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}

