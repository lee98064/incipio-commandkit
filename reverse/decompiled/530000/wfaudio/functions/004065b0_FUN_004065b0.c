/* FUN_004065b0 @ 004065b0 */

undefined4 FUN_004065b0(char *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char local_20;
  char local_1f;
  undefined1 local_1e;
  
  iVar3 = 0;
  while( true ) {
    if (param_3 <= iVar3 << 1) {
      return 1;
    }
    local_20 = *param_1;
    local_1f = param_1[1];
    local_1e = 0;
    if ((((9 < (byte)(local_20 - 0x30U)) && (5 < (byte)(local_20 + 0xbfU))) &&
        (5 < (byte)(local_20 + 0x9fU))) ||
       (((9 < (byte)(local_1f - 0x30U) && (5 < (byte)(local_1f + 0xbfU))) &&
        (5 < (byte)(local_1f + 0x9fU))))) break;
    param_1 = param_1 + 2;
    uVar1 = (*(code *)PTR_strtol_00423534)(&local_20);
    puVar2 = (undefined1 *)(param_2 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar2 = uVar1;
  }
  (*(code *)PTR_puts_00423564)("Not HEX",0,0x10);
  return 0;
}

