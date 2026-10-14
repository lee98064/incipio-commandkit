/* FUN_00407f5c @ 00407f5c */

void FUN_00407f5c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [260];
  
  iVar1 = (*(code *)PTR_open_00423100)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "Create_script",0xb1,param_1);
  }
  else {
    if (param_3 == 0) {
      (*(code *)PTR_strcpy_004232f4)(auStack_118,"#!/bin/sh\n");
      uVar2 = (*(code *)PTR_strlen_00423108)(auStack_118);
      (*(code *)PTR_write_00423228)(iVar1,auStack_118,uVar2);
      (*(code *)PTR_sprintf_00423164)
                (auStack_118,"echo \"Enter Deconfig Script Since DONOT Get IP address for  %s\"\n",
                 param_2);
      uVar2 = (*(code *)PTR_strlen_00423108)(auStack_118);
      (*(code *)PTR_write_00423228)(iVar1,auStack_118,uVar2);
    }
    (*(code *)PTR_close_004230cc)(iVar1);
  }
  return;
}

