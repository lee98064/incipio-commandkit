/* FUN_004206a8 @ 004206a8 */

void FUN_004206a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (param_2 <= iVar1) break;
    iVar1 = iVar1 + 1;
    (*(code *)PTR_printf_0046ac28)("filename %s\n",*(undefined4 *)(param_1 + 0x20));
    (*(code *)PTR_printf_0046ac28)("filesize %lu\n");
    (*(code *)PTR_printf_0046ac28)("file download %d\n",*(undefined2 *)(param_1 + 0x24));
    param_1 = param_1 + 0x30;
  }
  return;
}

