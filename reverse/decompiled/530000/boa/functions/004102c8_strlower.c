/* strlower @ 004102c8 */

void strlower(char *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___ctype_tolower_0046a6a4;
  for (; *param_1 != 0; param_1 = param_1 + 1) {
    *param_1 = (char)*(undefined2 *)(*(int *)puVar1 + *param_1 * 2);
  }
  return;
}

