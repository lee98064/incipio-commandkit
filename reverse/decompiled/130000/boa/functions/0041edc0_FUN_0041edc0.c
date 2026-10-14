/* FUN_0041edc0 @ 0041edc0 */

undefined4 FUN_0041edc0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  undefined1 auStack_24 [20];
  
  if (param_1 == 1) {
    (*(code *)PTR_system_0046ab18)("killall solar_monitor");
    (*(code *)PTR_puts_0046ab3c)("kill solar ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/solar.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/solar");
      (*(code *)PTR_unlink_0046a900)("/bin/solar_monitor");
    }
    (*(code *)PTR_system_0046ab18)("rm /web -rf");
    (*(code *)PTR_sync_0046a8fc)();
    (*(code *)PTR_sleep_0046ab0c)(1);
  }
  else {
    (*(code *)PTR_puts_0046ab3c)("kill process");
    (*(code *)PTR_kill_0046a9e4)(1,0x18);
    (*(code *)PTR_kill_0046a9e4)(1,0x17);
    (*(code *)PTR_kill_0046a9e4)(2,0x17);
    (*(code *)PTR_kill_0046a9e4)(3,0x17);
    (*(code *)PTR_kill_0046a9e4)(4,0x17);
    (*(code *)PTR_kill_0046a9e4)(5,0x17);
    (*(code *)PTR_kill_0046a9e4)(6,0x17);
    (*(code *)PTR_kill_0046a9e4)(7,0x17);
    (*(code *)PTR_puts_0046ab3c)("kill boa ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/webs.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/boa");
    }
    (*(code *)PTR_puts_0046ab3c)("kill wscd ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/wscd-wlan0.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/wscd");
    }
    (*(code *)PTR_puts_0046ab3c)("kill ivrserver ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/ivrserver.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/ivrserver");
    }
    (*(code *)PTR_puts_0046ab3c)("kill dns_task");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/dns_task.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/dns_task");
    }
    (*(code *)PTR_puts_0046ab3c)("kill lld2d ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/lld2d-br0.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/lld2d");
    }
    (*(code *)PTR_puts_0046ab3c)("kill iwcontrol ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/iwcontrol.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/iwcontrol");
    }
    (*(code *)PTR_puts_0046ab3c)("kill iapp ");
    iVar1 = (*(code *)PTR_fopen_0046a894)("/var/run/iapp.pid","r");
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0046ab78)(auStack_24,0x14,iVar1);
      iVar2 = (*(code *)PTR_sscanf_0046a8c4)(auStack_24,"%d",&local_28);
      if ((iVar2 != 0) && (1 < local_28)) {
        (*(code *)PTR_kill_0046a9e4)(local_28,0xf);
      }
      (*(code *)PTR_fclose_0046a85c)(iVar1);
      (*(code *)PTR_unlink_0046a900)("/bin/iapp");
    }
    (*(code *)PTR_sync_0046a8fc)();
    (*(code *)PTR_signal_0046a938)(0xf,1);
    (*(code *)PTR_setpgrp_0046a90c)();
    (*(code *)PTR_sleep_0046ab0c)(1);
    (*(code *)PTR_signal_0046a938)(1,1);
  }
  return 0;
}

