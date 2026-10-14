/* FUN_00406e80 @ 00406e80 */

void FUN_00406e80(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_30 [32];
  
  (*(code *)PTR_memset_00423490)(auStack_30,0,0x1e);
  pcVar1 = (code *)PTR_strcpy_004235e0;
  if (*param_1 != '\0') {
    (*(code *)PTR_sprintf_0042344c)(auStack_30," %s",param_2);
    param_2 = auStack_30;
    pcVar1 = (code *)PTR_strcat_00423508;
  }
  (*pcVar1)(param_1,param_2);
  return;
}

