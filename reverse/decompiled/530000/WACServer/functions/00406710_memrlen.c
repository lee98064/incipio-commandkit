/* memrlen @ 00406710 */

void memrlen(int param_1,int param_2)

{
  char *pcVar1;
  
  param_1 = param_1 + param_2;
  while ((param_2 != 0 && (pcVar1 = (char *)(param_1 + -1), param_1 = param_1 + -1, *pcVar1 == '\0')
         )) {
    param_2 = param_2 + -1;
  }
  return;
}

