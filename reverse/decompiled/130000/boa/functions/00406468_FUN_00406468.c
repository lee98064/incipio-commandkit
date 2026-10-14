/* FUN_00406468 @ 00406468 */

void FUN_00406468(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *local_10 [2];
  
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)("User %s = ",param_1);
  }
  uVar1 = (*(code *)PTR_strtol_0046aa48)(param_1,local_10,0);
  if ((*param_1 == '\0') || (*local_10[0] != '\0')) {
    iVar2 = (*(code *)PTR_getpwnam_0046a810)(param_1);
    if (iVar2 == 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"No such user: %s\n",param_1);
      if (DAT_0046c5e4 != 0) {
        return;
      }
      (*(code *)PTR_exit_0046a75c)(1);
      return;
    }
    *(undefined4 *)PTR_server_uid_0046a97c = *(undefined4 *)(iVar2 + 8);
  }
  else {
    *(undefined4 *)PTR_server_uid_0046a97c = uVar1;
  }
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x100) != 0) {
    (*(code *)PTR_printf_0046ac28)("%d\n",*(undefined4 *)PTR_server_uid_0046a97c);
  }
  return;
}

