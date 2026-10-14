/* FUN_0041aee4 @ 0041aee4 */

undefined4 FUN_0041aee4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    FUN_0041ac24(param_1,iVar1);
    iVar1 = iVar2;
  } while (iVar2 != 0x10);
  return 0;
}

