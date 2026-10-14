/* FUN_80407de0 @ 80407de0 */

int FUN_80407de0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_80409050();
  iVar1 = FUN_80407ad0(0x1b);
  iVar2 = 1;
  if ((iVar1 != 1) && (iVar2 = FUN_80407d94(0xffffffff), iVar2 < 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

