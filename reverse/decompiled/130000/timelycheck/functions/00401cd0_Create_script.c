/* Create_script @ 00401cd0 */

void Create_script(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [108];
  
  iVar1 = (*(code *)PTR_open_0042b0b4)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042b174)
              (*(undefined4 *)PTR_stderr_0042b0e4,"Create %s file error!\n",param_1);
  }
  else {
    if (param_3 == 0) {
      (*(code *)PTR_strcpy_0042b208)(auStack_80,"#!/bin/sh\n");
      uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_80);
      (*(code *)PTR_write_0042b178)(iVar1,auStack_80,uVar2);
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_80,
                 "echo \"Enter Deconfig Script From BOA Since DONOT Get IP address for  %s\"\n",
                 param_2);
      uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_80);
      (*(code *)PTR_write_0042b178)(iVar1,auStack_80,uVar2);
    }
    (*(code *)PTR_close_0042b098)(iVar1);
  }
  return;
}

