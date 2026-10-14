/* FUN_00405dac @ 00405dac */

int FUN_00405dac(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = (*(code *)PTR_socket_00423548)(0x10,3,0x1a);
  if (iVar1 < 0) {
    (*(code *)PTR_printf_004235c0)("(WFD) Open NL Err (%d)\n",iVar1);
    iVar2 = iVar1;
  }
  else {
    local_1c = 0;
    local_20 = 0x100000;
    local_18 = 0;
    local_1c = (*(code *)PTR_getpid_00423594)();
    local_18 = 1;
    iVar2 = (*(code *)PTR_bind_00423504)(iVar1,&local_20,0xc);
    if (iVar2 < 0) {
      (*(code *)PTR_printf_004235c0)("(WFD) Bind NL Err (%d)\n",iVar1);
    }
    else {
      iVar2 = 0;
      DAT_00422520 = iVar1;
    }
  }
  return iVar2;
}

