/* FUN_00402158 @ 00402158 */

void FUN_00402158(char *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(code *)PTR_strlen_00423484)();
  puVar1 = PTR___ctype_tolower_00423464;
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    *param_1 = (char)*(undefined2 *)(*(int *)puVar1 + *param_1 * 2);
    param_1 = param_1 + 1;
  }
  return;
}

