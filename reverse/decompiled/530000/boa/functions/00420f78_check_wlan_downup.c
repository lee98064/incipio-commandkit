/* check_wlan_downup @ 00420f78 */

uint check_wlan_downup(char param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auStack_38 [16];
  ushort local_28;
  int local_18;
  
  local_18 = (int)param_1;
  (*(code *)PTR_memset_0046a87c)(auStack_38,0,0x20);
  (*(code *)PTR_snprintf_0046abe4)(auStack_38,0x10,"wlan%d",local_18);
  pcVar1 = (char *)(*(code *)PTR_socket_0046aad4)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket error!";
    pcVar3 = (code *)PTR_puts_0046ab3c;
  }
  else {
    iVar2 = (*(code *)PTR_ioctl_0046ac40)(pcVar1,0x8913,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_close_0046a694)(pcVar1);
      return local_28 & 1;
    }
    (*(code *)PTR_puts_0046ab3c)("SIOCGIFFLAGS error!");
    pcVar3 = (code *)PTR_close_0046a694;
  }
  (*pcVar3)(pcVar1);
  return 0xffffffff;
}

