/* strnstr_suffix @ 00424324 */

int strnstr_suffix(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  char *pcVar11;
  
  uVar3 = (*(code *)PTR_strlen_00613f4c)(param_3);
  uVar4 = (*(code *)PTR_strnlen_00612d54)(param_1,param_2);
  iVar5 = (*(code *)PTR_calloc_006148c0)(uVar4 + 1,1);
  iVar6 = (*(code *)PTR_calloc_006148c0)(uVar3 + 1,1);
  puVar1 = PTR___ctype_tolower_00613388;
  uVar7 = 0;
  while( true ) {
    puVar2 = PTR___ctype_tolower_00613388;
    pcVar11 = (char *)(param_1 + uVar7);
    puVar10 = (undefined1 *)(iVar5 + uVar7);
    if (uVar4 <= uVar7) break;
    uVar7 = uVar7 + 1;
    *puVar10 = (char)*(undefined2 *)(*(int *)puVar1 + *pcVar11 * 2);
  }
  uVar7 = 0;
  while( true ) {
    pcVar11 = (char *)(param_3 + uVar7);
    puVar10 = (undefined1 *)(iVar6 + uVar7);
    if (uVar3 <= uVar7) break;
    uVar7 = uVar7 + 1;
    *puVar10 = (char)*(undefined2 *)(*(int *)puVar2 + *pcVar11 * 2);
  }
  iVar8 = 0;
  if (uVar3 <= uVar4) {
    iVar9 = (*(code *)PTR_strstr_00612aa4)(iVar5,iVar6);
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = param_1 + (iVar9 - iVar5);
    }
  }
  (*(code *)PTR_free_0061286c)(iVar5);
  (*(code *)PTR_free_0061286c)(iVar6);
  return iVar8;
}

