/* DataToHexString @ 004077b0 */

int DataToHexString(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00433280)(param_2 * 2 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00433144)(iVar4,&DAT_0041d450,*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}

