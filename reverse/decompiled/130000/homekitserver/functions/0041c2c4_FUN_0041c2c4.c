/* FUN_0041c2c4 @ 0041c2c4 */

void FUN_0041c2c4(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGINT with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigint",0x77,uVar1);
  (*(code *)PTR_exit_00611d48)(1);
  return;
}

