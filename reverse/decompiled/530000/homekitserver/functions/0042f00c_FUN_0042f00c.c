/* FUN_0042f00c @ 0042f00c */

undefined4 FUN_0042f00c(undefined4 param_1)

{
  int iVar1;
  char local_78 [104];
  
  (*(code *)PTR_system_00614714)("hostname > /tmp/net/jc_hostname.txt");
  iVar1 = (*(code *)PTR_fopen_0061395c)("/tmp/net/jc_hostname.txt","r");
  if (iVar1 != 0) {
    (*(code *)PTR_fseek_00612d1c)(iVar1,0,0);
    (*(code *)PTR_fgets_006134d4)(local_78,100,iVar1);
    (*(code *)PTR_fclose_00613a3c)(iVar1);
    if (local_78[0] != '\0') {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"JHOSTNAME=%s",local_78);
      (*(code *)PTR_strcpy_00612464)(param_1,local_78);
      return 0;
    }
  }
  return 1;
}

