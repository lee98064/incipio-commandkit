/* timestamp @ 00448ab0 */

void timestamp(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_stderr_0046a7f0;
  (*(code *)PTR_fprintf_0046a9ec)
            (*(undefined4 *)PTR_stderr_0046a7f0,"boa: server version %s\n","Boa/0.94.14rc21");
  (*(code *)PTR_fputs_0046a6e4)
            ("boa: server built Nov 18 2015 at 17:10:50.\n",*(undefined4 *)puVar1);
  uVar3 = *(undefined4 *)puVar1;
  uVar2 = (*(code *)PTR_getpid_0046ab88)();
  (*(code *)PTR_fprintf_0046a9ec)
            (uVar3,"boa: starting server pid=%d, port %d\n",uVar2,
             *(undefined4 *)PTR_server_port_0046a7c0);
  return;
}

