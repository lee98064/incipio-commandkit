/* FUN_80406a54 @ 80406a54 */

void FUN_80406a54(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      puVar2 = (undefined1 *)(param_1 + iVar1);
      puVar3 = (undefined1 *)(param_2 + iVar1);
      iVar1 = iVar1 + 1;
      *puVar2 = *puVar3;
    } while (iVar1 != param_3);
  }
  return;
}

