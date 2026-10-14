/* FUN_0041c3ac @ 0041c3ac */

void FUN_0041c3ac(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_pthread_self_00612614)();
  (*(code *)PTR_fprintf_006120cc)
            (*(undefined4 *)PTR_stderr_0061292c,
             "\nFILE %s FUNCTION %s LINE %d: caught SIGBUS with pthread id\n",
             "/home/vendor/rtl819x_v3464_homekit/users/phytrex-homekit/lib_homekitserver/signals.c",
             "_handle_sigbus",0x60,uVar1);
  (*(code *)PTR_pthread_exit_00611ed8)(0);
  return;
}

