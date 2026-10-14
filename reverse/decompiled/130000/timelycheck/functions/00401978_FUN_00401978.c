/* FUN_00401978 @ 00401978 */

void FUN_00401978(void)

{
  int iVar1;
  int local_28;
  undefined1 auStack_24 [24];
  
  local_28 = 0;
  iVar1 = (*(code *)PTR_fopen_0042b118)("/var/run/webs.pid",&DAT_004187f4);
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0042b1d0)(auStack_24,0x14,iVar1);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
    iVar1 = (*(code *)PTR_sscanf_0042b130)(auStack_24,&DAT_00417aa4,&local_28);
    if ((iVar1 != 0) && (1 < local_28)) {
      (*(code *)PTR_puts_0042b1b8)("reinit boa ");
      (*(code *)PTR_system_0042b1ac)("killall -9 boa > /dev/null");
      (*(code *)PTR_system_0042b1ac)("rm -rf /var/run/webs.pid");
      (*(code *)PTR_system_0042b1ac)(&DAT_0041793c);
    }
  }
  return;
}

