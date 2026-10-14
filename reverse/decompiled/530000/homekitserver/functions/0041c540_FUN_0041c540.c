/* FUN_0041c540 @ 0041c540 */

void FUN_0041c540(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGBUS with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigbus",0x60,uVar1);
  (*(code *)PTR_pthread_exit_00612d68)(0);
  return;
}

