/* FUN_0042e8ac @ 0042e8ac */

undefined4 FUN_0042e8ac(undefined4 param_1)

{
  int iVar1;
  char local_78 [104];
  
  (*(code *)PTR_system_00613870)("hostname > /tmp/net/jc_hostname.txt");
  iVar1 = (*(code *)PTR_fopen_00612ac0)("/tmp/net/jc_hostname.txt","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00611e8c)(iVar1,0,0);
    (*(code *)PTR_fgets_00612640)(local_78,100,iVar1);
    (*(code *)PTR_fclose_00612ba0)(iVar1);
    if (local_78[0] != '\0') {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"JHOSTNAME=%s",local_78);
      (*(code *)PTR_strcpy_006115d0)(param_1,local_78);
      return 0;
    }
  }
  return 1;
}

