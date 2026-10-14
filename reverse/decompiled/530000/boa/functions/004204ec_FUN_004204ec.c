/* FUN_004204ec @ 004204ec */

void FUN_004204ec(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  (*(code *)PTR_puts_0046ab3c)("dump Torrent");
  iVar2 = 0;
  while( true ) {
    if (param_2 <= iVar2) break;
    (*(code *)PTR_printf_0046ac28)("%d: \n",iVar2);
    iVar2 = iVar2 + 1;
    (*(code *)PTR_printf_0046ac28)("name %s\n",*param_1);
    (*(code *)PTR_printf_0046ac28)("status %d\n",*(undefined2 *)(param_1 + 1));
    (*(code *)PTR_printf_0046ac28)("ctorrent %d\n",param_1[2]);
    (*(code *)PTR_printf_0046ac28)("dfiles %s\n",param_1[3]);
    (*(code *)PTR_printf_0046ac28)("n_have %d\n",param_1[4]);
    (*(code *)PTR_printf_0046ac28)("n_total %d\n",param_1[5]);
    (*(code *)PTR_printf_0046ac28)("piece_size %d\n",param_1[6]);
    puVar1 = param_1 + 7;
    param_1 = param_1 + 8;
    (*(code *)PTR_printf_0046ac28)("index %d\n",*puVar1);
  }
  return;
}

