/* FUN_804053f4 @ 804053f4 */

int FUN_804053f4(undefined1 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    uVar1 = FUN_80405338(param_1,0,0x5000000,1);
  } while ((uVar1 & 1) != 0);
  return iVar2;
}

