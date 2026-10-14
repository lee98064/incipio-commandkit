/* FUN_0041c454 @ 0041c454 */

void FUN_0041c454(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_006134a8)();
  (*(code *)PTR_fprintf_00612f5c)
            (*(undefined4 *)PTR_stderr_006137c8,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGINT with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigint",0x77,uVar1);
  (*(code *)PTR_exit_00612bd8)(1);
  return;
}

