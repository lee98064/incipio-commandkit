/* FUN_00403e9c @ 00403e9c */

void FUN_00403e9c(int param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_30 [20];
  
  *param_3 = 0;
  iVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + iVar2);
    if (param_2 <= iVar2) break;
    iVar2 = iVar2 + 1;
    (*(code *)PTR_sprintf_004234e0)(auStack_30,"%02x",*puVar1);
    (*(code *)PTR_strcat_00423564)(param_3,auStack_30);
  }
  return;
}

