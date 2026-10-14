/* setInAddr @ 004022dc */

undefined4 setInAddr(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint local_60;
  uint local_5c;
  undefined2 local_58;
  undefined1 auStack_56 [14];
  undefined1 auStack_48 [16];
  undefined2 local_38 [2];
  uint local_34;
  
  iVar1 = (*(code *)PTR_socket_0042b19c)(2,1,0);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_48,param_1);
  iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8913,auStack_48);
  if (iVar2 < 0) {
    (*(code *)PTR_close_0042b098)(iVar1);
    return 0xffffffff;
  }
  if ((param_5 & 0xf) == 1) {
    return 0;
  }
  local_38[0] = 0x1043;
  if (((param_5 & 2) != 0) && (param_2 != 0)) {
    (*(code *)PTR_inet_aton_0042b120)(param_2,&local_60);
    local_34 = local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8916,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
  }
  if ((((param_5 & 4) != 0) && (param_2 != 0)) && (param_3 != 0)) {
    (*(code *)PTR_inet_aton_0042b120)(param_3,&local_5c);
    local_34 = local_5c;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x891c,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
    local_34 = ~local_5c | local_5c & local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x891a,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
  }
  if (((param_5 & 8) != 0) && (param_4 != 0)) {
    local_58 = 1;
    (*(code *)PTR_memcpy_0042b1c8)(auStack_56,param_4,6);
    (*(code *)PTR_memcpy_0042b1c8)(local_38,&local_58,0x10);
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8924,auStack_48);
    if (iVar2 < 0) {
LAB_0040252c:
      (*(code *)PTR_close_0042b098)(iVar1);
      (*(code *)PTR_perror_0042b1c0)(param_1);
      return 0xffffffff;
    }
  }
  (*(code *)PTR_close_0042b098)(iVar1);
  return 0;
}

