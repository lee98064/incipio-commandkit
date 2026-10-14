/* FUN_00411170 @ 00411170 */

int FUN_00411170(undefined4 param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 local_18;
  undefined2 local_16;
  undefined1 auStack_14 [12];
  
  puVar2 = (undefined1 *)(*(code *)PTR_strchr_0046a6e8)(param_1,0x3a);
  puVar1 = PTR_strtol_0046aa48;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
    local_16 = (*(code *)puVar1)(puVar2 + 1,0,10);
    local_18 = 2;
    iVar3 = (*(code *)PTR_gethostbyname_0046a814)(param_1);
    if (iVar3 == 0) {
      (*(code *)PTR_herror_0046a828)("open_net_fd");
      return -1;
    }
    (*(code *)PTR_memcpy_0046ab5c)
              (auStack_14,**(undefined4 **)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0xc));
    iVar3 = (*(code *)PTR_socket_0046aad4)(2,2,6);
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar4 = (*(code *)PTR_connect_0046ac14)(iVar3,&local_18,0x10);
    if (-1 < iVar4) {
      return iVar3;
    }
  }
  return -1;
}

