/* HTTPServerCreate @ 00405628 */

int HTTPServerCreate(int param_1,int param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [32];
  undefined1 *local_20;
  
  local_48 = 1;
  if ((param_1 == 0) || (piVar6 = param_4 + 5, param_2 == 0)) {
    iVar4 = -0x1a31;
  }
  else {
    param_4[5] = 0;
    param_4[2] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    *param_4 = param_1;
    param_4[0xc] = param_2;
    param_4[0xe] = param_3;
    puVar2 = PTR_in6addr_any_00433308;
    puVar1 = PTR_memcpy_004332a8;
    param_4[1] = DAT_004335f0;
    DAT_004335f0 = DAT_004335f0 + 1;
    *(undefined2 *)(param_4 + 5) = 10;
    (*(code *)puVar1)(param_4 + 7,puVar2,0x10);
    puVar1 = PTR_socket_00433268;
    *(undefined2 *)((int)param_4 + 0x16) = 0xc351;
    iVar3 = (*(code *)puVar1)(10,2,0);
    param_4[3] = iVar3;
    iVar4 = -0x1a49;
    if (-1 < iVar3) {
      (*(code *)PTR_setsockopt_004331f4)(iVar3,0xffff,4,&local_48,4);
      if (*PTR_g_InputIface_004331ec != '\0') {
        local_20 = auStack_40;
        (*(code *)PTR_strncpy_004331c8)(auStack_40,PTR_g_InputIface_004331ec,0x10);
        iVar4 = (*(code *)PTR_setsockopt_004331f4)(param_4[3],0xffff,0x19,local_20,0x20);
        if (iVar4 < 0) {
          (*(code *)PTR_perror_004332a0)("setsockopt - SO_BINDTODEVICE");
        }
      }
      iVar4 = (*(code *)PTR_bind_00433208)(param_4[3],piVar6,0x1c);
      if (iVar4 != 0) {
        piVar5 = (int *)(*(code *)PTR___errno_location_004330f8)();
        (*(code *)PTR_perror_004332a0)("Bind perror");
        puVar1 = PTR_bind_00433208;
        *(undefined2 *)((int)param_4 + 0x16) = 0;
        (*(code *)puVar1)(param_4[3],piVar6,0x1c);
        local_44 = 0x1c;
        iVar4 = (*(code *)PTR_getsockname_00433080)(param_4[3],piVar6,&local_44);
        if (iVar4 != 0) {
          local_20 = (undefined1 *)*piVar5;
          if (local_20 == (undefined1 *)0x0) {
            local_20 = (undefined1 *)0xffffe5d4;
          }
          (*(code *)PTR_perror_004332a0)("Bind perror");
          iVar4 = 4;
          goto LAB_00405868;
        }
      }
      local_20 = (undefined1 *)(*(code *)PTR_listen_004331ac)(param_4[3],1);
      iVar4 = 1;
      if (local_20 != (undefined1 *)0x0) {
        iVar4 = 4;
      }
      goto LAB_00405868;
    }
  }
  local_20 = (undefined1 *)iVar4;
  iVar4 = 4;
LAB_00405868:
  param_4[2] = iVar4;
  return (int)local_20;
}

