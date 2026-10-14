/* FUN_00406bd0 @ 00406bd0 */

void FUN_00406bd0(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_30 [32];
  
  (*(code *)PTR_memset_004231a8)(auStack_30,0,0x1e);
  pcVar1 = (code *)PTR_strcpy_004232f4;
  if (*param_1 != '\0') {
    (*(code *)PTR_sprintf_00423164)(auStack_30," %s",param_2);
    param_2 = auStack_30;
    pcVar1 = (code *)PTR_strcat_00423220;
  }
  (*pcVar1)(param_1,param_2);
  return;
}

