/* get_mime_type @ 0040921c */

undefined4 get_mime_type(char *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (param_1 == (char *)0x0) {
    uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar2 = "Attempt to hash NULL string! [get_mime_type]\n";
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = (*(code *)PTR_strrchr_0046aa24)(param_1,0x2e);
      if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
        uVar3 = FUN_00408c10(iVar1 + 1);
        iVar1 = FUN_00408cc0(&DAT_0046c600,iVar1 + 1,uVar3);
        if (iVar1 != 0) {
          return *(undefined4 *)(iVar1 + 4);
        }
      }
      goto LAB_004092ec;
    }
    uVar3 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar2 = "Attempt to hash empty string! [get_mime_type]\n";
  }
  (*(code *)PTR_fputs_0046a6e4)(pcVar2,uVar3);
LAB_004092ec:
  return *(undefined4 *)PTR_default_type_0046ac4c;
}

