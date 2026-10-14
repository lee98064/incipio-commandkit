/* FUN_00413750 @ 00413750 */

void FUN_00413750(int param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (*(code *)PTR_strstr_0046a940)(param_1 + 0x8d4,"/boafrm/");
  if (iVar2 == 0) {
    return;
  }
  pcVar1 = (char *)(iVar2 + 8);
  do {
    pcVar3 = pcVar1;
    if (*pcVar3 == 0) break;
    pcVar1 = pcVar3 + 1;
  } while ((*(ushort *)(*(int *)PTR___ctype_b_0046abc0 + *pcVar3 * 2) & 0x20) == 0);
  *pcVar3 = '\0';
                    /* WARNING: Could not recover jumptable at 0x004137cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_log_boaform_0046a9d8)();
  return;
}

