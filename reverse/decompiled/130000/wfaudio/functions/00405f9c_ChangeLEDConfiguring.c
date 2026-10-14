/* ChangeLEDConfiguring @ 00405f9c */

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
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423260)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar3 = (code *)PTR_puts_0042327c;
  }
  else {
    local_18 = auStack_38;
    local_40[0] = 0x77;
    local_3c = param_1;
    (*(code *)PTR_strcpy_004232f4)(local_18,"wlan0");
    local_28 = local_40;
    local_24 = 8;
    iVar2 = (*(code *)PTR_ioctl_004232e4)(pcVar1,0x89ff,local_18);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004230cc)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_0042327c)("ioctl failed");
    pcVar3 = (code *)PTR_close_004230cc;
  }
  (*pcVar3)(pcVar1);
  return 0xffffffff;
}

