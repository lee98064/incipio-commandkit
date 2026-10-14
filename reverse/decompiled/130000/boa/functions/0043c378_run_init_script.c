/* run_init_script @ 0043c378 */

void run_init_script(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_110 [260];
  
  if (*(int *)PTR_run_init_script_flag_0046a7e0 == 1) {
    (*(code *)PTR_memset_0046a87c)(auStack_110,0,0x100);
    (*(code *)PTR_system_0046ab18)("killall -9 mnet 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 hub-ctrl 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 usb_modeswitch 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 ppp_inet 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("killall -9 pppd 2> /dev/null");
    (*(code *)PTR_system_0046ab18)("rm /etc/ppp/connectfile >/dev/null 2>&1");
    (*(code *)PTR_snprintf_0046abe4)(auStack_110,0x100,"%s/%s.pid","/var/run","udhcpd");
    iVar2 = (*(code *)PTR_getPid_0046a6dc)(auStack_110);
    if (0 < iVar2) {
      (*(code *)PTR_kill_0046a9e4)(iVar2,0x10);
    }
    (*(code *)PTR_usleep_0046aba0)(1000);
    if (0 < iVar2) {
      (*(code *)PTR_system_0046ab18)("killall -9 udhcpd 2> /dev/null");
      (*(code *)PTR_system_0046ab18)("rm -f /var/run/udhcpd.pid 2> /dev/null");
    }
    FUN_00433c3c();
    (*(code *)PTR_system_0046ab18)("killsh.sh");
    puVar1 = PTR_fork_0046a8c8;
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 0;
    *(undefined4 *)PTR_needReboot_0046a9b4 = 0;
    iVar2 = (*(code *)puVar1)();
    if (iVar2 == 0) {
      (*(code *)PTR_sprintf_0046a808)(auStack_110,"%s gw %s","init.sh",param_1);
      iVar2 = 3;
      while( true ) {
        iVar3 = (*(code *)PTR_sysconf_0046ac2c)(4);
        if (iVar3 <= iVar2) break;
        (*(code *)PTR_close_0046a694)(iVar2);
        iVar2 = iVar2 + 1;
      }
      (*(code *)PTR_sleep_0046ab0c)(1);
      (*(code *)PTR_system_0046ab18)(auStack_110);
      (*(code *)PTR_exit_0046a75c)(1);
      return;
    }
  }
  return;
}

