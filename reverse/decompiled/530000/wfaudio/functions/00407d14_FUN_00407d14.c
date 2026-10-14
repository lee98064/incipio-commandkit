/* FUN_00407d14 @ 00407d14 */

void FUN_00407d14(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [104];
  
  iVar1 = (*(code *)PTR_open_004233e0)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: Create %s file error!\n\n","utility.c",
               "Create_bound_script",0x167,param_1);
  }
  else {
    (*(code *)PTR_strcpy_004235e0)(auStack_80,"#!/bin/sh\n");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$router\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp $interface p2p a=$ip M=$subnet r=$router d=$dns"
              );
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n","if [ \"$serverid\" ];then");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n",
               "sysconf conn dhcp $interface p2p a=$ip M=$subnet s=$serverid d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_004113ec);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)
              (auStack_80,"%s\n","sysconf conn dhcp p2p $interface a=$ip M=$subnet d=$dns");
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_sprintf_0042344c)(auStack_80,"%s\n",&DAT_00411488);
    uVar2 = (*(code *)PTR_strlen_004233e8)(auStack_80);
    (*(code *)PTR_write_00423510)(iVar1,auStack_80,uVar2);
    (*(code *)PTR_close_004233ac)(iVar1);
  }
  return;
}

