/* InsertWlanIE @ 004065a0 */

undefined4 InsertWlanIE(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined1 auStack_248 [16];
  undefined1 *local_238;
  undefined2 local_234;
  undefined1 auStack_228 [256];
  undefined1 local_128;
  undefined1 local_127;
  undefined2 local_126;
  undefined2 local_124;
  undefined1 auStack_122 [258];
  undefined1 *local_20;
  
  pcVar1 = (char *)(*(code *)PTR_socket_00423260)(2,1,0);
  if ((int)pcVar1 < 0) {
    pcVar1 = "socket() error!";
    pcVar4 = (code *)PTR_puts_0042327c;
  }
  else {
    uVar3 = (param_3 & 0xffff) >> 1;
    local_128 = 0x76;
    local_126 = 1;
    local_127 = 0;
    local_124 = (undefined2)uVar3;
    FUN_00406300(param_2,auStack_228,param_3 & 0xffff);
    (*(code *)PTR_memcpy_00423294)(auStack_122,auStack_228,uVar3);
    local_20 = auStack_248;
    (*(code *)PTR_strcpy_004232f4)(local_20,param_1);
    local_238 = &local_128;
    local_234 = 0x106;
    iVar2 = (*(code *)PTR_ioctl_004232e4)(pcVar1,0x89ff,local_20);
    if (-1 < iVar2) {
      (*(code *)PTR_close_004230cc)(pcVar1);
      return 0;
    }
    (*(code *)PTR_puts_0042327c)("ioctl failed");
    pcVar4 = (code *)PTR_close_004230cc;
  }
  (*pcVar4)(pcVar1);
  return 0xffffffff;
}

