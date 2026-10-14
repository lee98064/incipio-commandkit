/* FUN_00407004 @ 00407004 */

undefined4
FUN_00407004(undefined2 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res0;
  undefined1 uStackX_1;
  int aiStack_68 [2];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar4 = -(param_2 + 0xeU & 0xfffffff8);
  local_48 = 1;
  local_58 = 0;
  FUN_00404bc0(param_4,&local_58,8);
  local_54 = 0;
  FUN_00404bc0(param_5,&local_54,8);
  local_50 = local_58;
  local_4c = local_54;
  FUN_00404bc0(param_3,&stack0xffffffa0 + iVar4,param_2 << 1);
  local_3c = 0;
  local_38 = 0;
  local_44 = 2;
  local_40 = 0;
  local_42 = 0x6a5;
  iVar1 = (*(code *)PTR_socket_00423578)(2,1,0x11);
  *(undefined4 *)((int)aiStack_68 + iVar4) = 4;
  (*(code *)PTR_setsockopt_00423528)(iVar1,0xffff,4,&local_48);
  if (iVar1 < 0) {
    (*(code *)PTR_puts_00423594)("Create Socket Failed!");
    uVar2 = (*(code *)PTR_exit_00423494)(1);
    return uVar2;
  }
  iVar3 = (*(code *)PTR_bind_00423530)(iVar1,&local_44,0x10);
  if (iVar3 == -1) {
    (*(code *)PTR_perror_0042359c)(&DAT_0041196c);
    (*(code *)PTR_close_00423460)(iVar1);
  }
  else {
    local_res0 = (undefined1)((ushort)param_1 >> 8);
    *(undefined1 *)((int)&local_58 + iVar4) = local_res0;
    uStackX_1 = (undefined1)param_1;
    local_34 = 2;
    local_32 = 0x6a5;
    *(undefined1 *)((int)&local_58 + iVar4 + 1) = uStackX_1;
    uVar2 = local_4c;
    *(undefined2 **)((int)aiStack_68 + iVar4) = &local_34;
    local_30 = uVar2;
    *(undefined4 *)((int)aiStack_68 + iVar4 + 4) = 0x10;
    local_2c = 0;
    local_28 = 0;
    iVar4 = (*(code *)PTR_sendto_00423500)(iVar1,&stack0xffffffa0 + iVar4,param_2,0);
    if ((-1 < iVar4) && (iVar4 == param_2)) {
      (*(code *)PTR_close_00423460)(iVar1);
      return 0;
    }
    (*(code *)PTR_printf_004235c4)("\r\n \r\n l2tp sendto is failed: c = %d",iVar4);
  }
  return 0xffffffff;
}

