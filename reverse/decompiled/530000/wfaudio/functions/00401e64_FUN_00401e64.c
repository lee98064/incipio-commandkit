/* FUN_00401e64 @ 00401e64 */

void FUN_00401e64(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00401d38();
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)
              ("[%s:%d]--------------------start avahi first time----------------------------\n",
               "start_avahi_daemon",0x37);
    pcVar2 = "avahi-autoipd -t /etc/avahi-autoipd.action --debug --no-drop-root br0";
  }
  else {
    (*(code *)PTR_printf_004235c0)
              ("[%s:%d] AVAHI process already exist!!!!!!!!!!!!!!!!!!!!!\n","start_avahi_daemon",
               0x34);
    pcVar2 = "avahi-autoipd -r br0";
  }
                    /* WARNING: Could not recover jumptable at 0x00401ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_system_00423558)(pcVar2);
  return;
}

