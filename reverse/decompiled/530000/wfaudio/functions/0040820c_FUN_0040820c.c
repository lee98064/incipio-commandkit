/* FUN_0040820c @ 0040820c */

void FUN_0040820c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [260];
  
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "Create_script",0xb1,param_1);
  }
  else {
    if (param_3 == 0) {
      (*(code *)PTR_strcpy_004235e0)(auStack_118,"#!/bin/sh\n");
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_118);
      (*(code *)PTR_write_00423510)(iVar1,auStack_118,uVar2);
      (*(code *)PTR_sprintf_0042344c)
                (auStack_118,"echo \"Enter Deconfig Script Since DONOT Get IP address for  %s\"\n",
                 param_2);
      uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_118);
      (*(code *)PTR_write_00423510)(iVar1,auStack_118,uVar2);
    }
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return;
}

