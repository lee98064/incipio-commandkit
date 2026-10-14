/* ChangeLEDConfiguring @ 0040624c */

undefined4 ChangeLEDConfiguring(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 auStack_38 [16];
  undefined1 *local_28;
  undefined2 local_24;
  undefined1 *local_18;
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423548)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar3 = (code *)PTR_puts_00423564;
  }
  else {
    local_18 = auStack_38;
    local_40[0] = 0x77;
    local_3c = param_1;
    (*(code *)PTR_strcpy_004235e0)(local_18,"wlan0");
    local_28 = local_40;
    local_24 = 8;
    iVar2 = (*(code *)PTR_ioctl_004235d0)(pcVar1,0x89ff,local_18);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004233ac)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_00423564)("ioctl failed");
    pcVar3 = (code *)PTR_close_004233ac;
  }
  (*pcVar3)(pcVar1);
  return 0xffffffff;
}

