/* FUN_004326d4 @ 004326d4 */

void FUN_004326d4(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_108 [256];
  
  (*(code *)PTR_printf_0061185c)("Receive in status: %d\n",param_1);
  iVar1 = (*(code *)PTR_read_00612ef0)(DAT_00615058,auStack_108,0xff);
  auStack_108[iVar1] = 0;
  (*(code *)PTR_printf_0061185c)("%s:%d\n",auStack_108,iVar1);
  return;
}

