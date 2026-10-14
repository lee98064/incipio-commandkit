/* FUN_00407688 @ 00407688 */

void FUN_00407688(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [104];
  
  iVar1 = (*(code *)PTR_open_00423100)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "WACCreate_bound_script",0x19c,param_1);
  }
  else {
    (*(code *)PTR_strcpy_004232f4)(auStack_80,"#!/bin/sh\n");
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n","if [ \"$router\" ];then");
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)
              (auStack_80,"%s\n","sysconf conn dhcp $interface wac a=$ip M=$subnet r=$router d=$dns"
              );
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n",&DAT_0041110c);
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n","if [ \"$serverid\" ];then");
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)
              (auStack_80,"%s\n",
               "sysconf conn dhcp $interface wac a=$ip M=$subnet s=$serverid d=$dns");
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n",&DAT_0041110c);
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)
              (auStack_80,"%s\n","sysconf conn dhcp wac $interface a=$ip M=$subnet d=$dns");
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n",&DAT_004111a8);
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_00423164)(auStack_80,"%s\n",&DAT_004111a8);
    uVar2 = (*(code *)PTR_strlen_00423108)(auStack_80);
    (*(code *)PTR_write_00423228)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_close_004230cc)(iVar1);
  }
  return;
}

