/* net_port @ 0040946c */

undefined4 net_port(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [32];
  
  iVar1 = (*(code *)PTR_getnameinfo_0046aa68)(param_1,0x80,0,0,auStack_28,0x20,2);
  if (iVar1 == 0) {
    uVar2 = (*(code *)PTR_atoi_0046a73c)(auStack_28);
  }
  else {
    (*(code *)PTR_fputs_0046a6e4)("[IPv6] getnameinfo failed\n",*(undefined4 *)PTR_stderr_0046a7f0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

