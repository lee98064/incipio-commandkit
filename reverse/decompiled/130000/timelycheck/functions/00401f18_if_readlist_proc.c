/* if_readlist_proc @ 00401f18 */

int if_readlist_proc(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [516];
  
  iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/net/dev",&DAT_004187f4);
  iVar4 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1);
    (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1);
    iVar4 = 0;
    while (iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1), iVar2 != 0) {
      FUN_004014b0(auStack_248,auStack_228);
      iVar2 = (*(code *)PTR_strstr_0042b160)(auStack_248,param_2);
      if (iVar2 != 0) {
        puVar3 = auStack_248;
        pcVar5 = (code *)PTR_strcpy_0042b208;
        if (*param_1 != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_238," %s",auStack_248);
          puVar3 = auStack_238;
          pcVar5 = (code *)PTR_strcat_0042b170;
        }
        iVar4 = iVar4 + 1;
        (*pcVar5)(param_1,puVar3);
      }
    }
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return iVar4;
}

