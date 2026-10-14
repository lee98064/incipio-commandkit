/* FUN_00401df4 @ 00401df4 */

void FUN_00401df4(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00401cc8();
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004232d4)
              ("[%s:%d]--------------------start avahi first time----------------------------\n",
               "start_avahi_daemon",0x37);
    pcVar2 = "avahi-autoipd -t /etc/avahi-autoipd.action --debug --no-drop-root br0";
  }
  else {
    (*(code *)PTR_printf_004232d4)
              ("[%s:%d] AVAHI process already exist!!!!!!!!!!!!!!!!!!!!!\n","start_avahi_daemon",
               0x34);
    pcVar2 = "avahi-autoipd -r br0";
  }
                    /* WARNING: Could not recover jumptable at 0x00401e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423270)(pcVar2);
  return;
}

