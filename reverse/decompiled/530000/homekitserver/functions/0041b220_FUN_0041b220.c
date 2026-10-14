/* FUN_0041b220 @ 0041b220 */

bool FUN_0041b220(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (*(code *)PTR_fcntl_00613e84)(param_1,3,0);
  bVar3 = false;
  if (uVar1 != 0xffffffff) {
    uVar4 = uVar1 | 0x80;
    if (param_2 != 0) {
      uVar4 = uVar1 & 0xffffff7f;
    }
    iVar2 = (*(code *)PTR_fcntl_00613e84)(param_1,4,uVar4);
    bVar3 = iVar2 != -1;
  }
  return bVar3;
}

