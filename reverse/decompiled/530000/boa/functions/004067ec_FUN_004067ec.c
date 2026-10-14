/* FUN_004067ec @ 004067ec */

undefined ** FUN_004067ec(undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)("Checking string \'%s\' against keyword list\n",param_1);
  }
  ppuVar2 = &PTR_s_Port_0044fab8_4_00468060;
  while( true ) {
    if (ppuVar2 == (undefined **)&DAT_004682e0) {
      return (undefined **)0x0;
    }
    iVar1 = (*(code *)PTR_strcasecmp_0046a8f4)(param_1,*ppuVar2);
    if (iVar1 == 0) break;
    ppuVar2 = ppuVar2 + 4;
  }
  return ppuVar2;
}

