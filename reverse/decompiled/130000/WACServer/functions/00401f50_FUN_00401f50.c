/* FUN_00401f50 @ 00401f50 */

void FUN_00401f50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = 1;
  do {
    puVar5 = (undefined4 *)(param_2 + iVar3 * 4);
    do {
      iVar4 = iVar3;
      if (param_1 <= iVar4) {
        return;
      }
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar1 = (*(code *)PTR_strcmp_0043315c)(uVar2,&DAT_0041c990);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    iVar3 = iVar4 + 2;
    (*(code *)PTR_strcpy_004332fc)(&g_InputIface,*(undefined4 *)(param_2 + (iVar4 + 1) * 4));
  } while( true );
}

