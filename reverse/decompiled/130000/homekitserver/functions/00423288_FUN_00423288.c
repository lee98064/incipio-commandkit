/* FUN_00423288 @ 00423288 */

void FUN_00423288(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_28 [12];
  
  (*(code *)PTR_memset_0061223c)(param_2,0);
  uVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    (*(code *)PTR_sprintf_00611f90)(auStack_28,&DAT_005aba68,*puVar1);
    (*(code *)PTR_strcat_006134b0)(param_2,auStack_28);
  }
  return;
}

