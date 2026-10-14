/* FUN_00423408 @ 00423408 */

void FUN_00423408(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auStack_28 [12];
  
  (*(code *)PTR_memset_006130cc)(param_2,0);
  uVar2 = 0;
  while( true ) {
    puVar1 = (undefined1 *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    (*(code *)PTR_sprintf_00612e20)(auStack_28,&DAT_005ac8ac,*puVar1);
    (*(code *)PTR_strcat_00614354)(param_2,auStack_28);
  }
  return;
}

