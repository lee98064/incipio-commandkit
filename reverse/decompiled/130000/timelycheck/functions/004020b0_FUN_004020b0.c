/* FUN_004020b0 @ 004020b0 */

void FUN_004020b0(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_30 [32];
  
  (*(code *)PTR_memset_0042b114)(auStack_30,0,0x1e);
  pcVar1 = (code *)PTR_strcpy_0042b208;
  if (*param_1 != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_30," %s",param_2);
    param_2 = auStack_30;
    pcVar1 = (code *)PTR_strcat_0042b170;
  }
  (*pcVar1)(param_1,param_2);
  return;
}

