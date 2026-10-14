/* FUN_00410904 @ 00410904 */

void FUN_00410904(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char local_270 [100];
  undefined1 auStack_20c [100];
  undefined1 auStack_1a8 [100];
  undefined1 auStack_144 [100];
  undefined1 auStack_e0 [200];
  
  (*(code *)PTR_sprintf_0042b0e8)(auStack_20c,"/usr/share/udhcpc/%s.sh",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_1a8,"/usr/share/udhcpc/%s.deconfig",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_144,"/etc/udhcpc/udhcpc-%s.pid",param_1);
  (*(code *)PTR_killDaemonByPidFile_0042b128)(auStack_144);
  pcVar2 = (char *)0x0;
  (*(code *)PTR_Create_script_0042b168)(auStack_1a8,param_1,1,0,0,0);
  (*(code *)PTR_memset_0042b114)(local_270,0,100);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc5,local_270);
  if (local_270[0] == '\0') {
    pcVar1 = "udhcpc -i %s -p %s -s %s -a 30 &";
  }
  else {
    pcVar1 = "udhcpc -i %s -p %s -s %s -h %s -a 30 &";
    pcVar2 = local_270;
  }
  (*(code *)PTR_sprintf_0042b0e8)(auStack_e0,pcVar1,param_1,auStack_144,auStack_20c,pcVar2);
  (*(code *)PTR_system_0042b1ac)(auStack_e0);
  return;
}

