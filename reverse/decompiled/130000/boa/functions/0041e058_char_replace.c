/* char_replace @ 0041e058 */

undefined4 char_replace(char *param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  if (param_1 != (char *)0x0) {
    iVar2 = (*(code *)PTR_strlen_0046a714)();
    iVar3 = 0;
    while (iVar3 < iVar2) {
      iVar3 = iVar3 + 1;
      if (*param_1 == param_2) {
        *param_1 = param_3;
      }
      param_1 = param_1 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

