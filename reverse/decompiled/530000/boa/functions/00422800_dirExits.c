/* dirExits @ 00422800 */

bool dirExits(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_opendir_0046a848)();
  if (iVar1 != 0) {
    (*(code *)PTR_closedir_0046a6d8)(iVar1);
  }
  else {
    (*(code *)PTR_perror_0046ab44)("opendir");
  }
  return iVar1 != 0;
}

