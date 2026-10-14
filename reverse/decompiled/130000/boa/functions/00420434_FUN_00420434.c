/* FUN_00420434 @ 00420434 */

void FUN_00420434(int param_1,int param_2)

{
  int iVar1;
  
  (*(code *)PTR_puts_0046ab3c)("dump clients");
  iVar1 = 0;
  while( true ) {
    if (param_2 <= iVar1) break;
    (*(code *)PTR_printf_0046ac28)("%d: \n",iVar1);
    (*(code *)PTR_printf_0046ac28)("fname %s",*(undefined4 *)(param_1 + 0x68));
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0xe0;
  }
  return;
}

