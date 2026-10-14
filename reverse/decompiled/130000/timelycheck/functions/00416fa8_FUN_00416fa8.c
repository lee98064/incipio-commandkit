/* FUN_00416fa8 @ 00416fa8 */

uint FUN_00416fa8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [6];
  undefined1 auStack_5e [6];
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined2 local_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_28;
  
  local_78 = 1;
  iVar1 = (*(code *)PTR_socket_0042b19c)(0x11,10,0x806);
  uVar3 = 0xffffffff;
  if (iVar1 != -1) {
    iVar2 = (*(code *)PTR_setsockopt_0042b164)(iVar1,0xffff,0x20,&local_78,4);
    if (iVar2 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      (*(code *)PTR_memset_0042b114)(auStack_64,0,0x3c);
      (*(code *)PTR_memcpy_0042b1c8)(auStack_64,&DAT_00419bec,6);
      (*(code *)PTR_memcpy_0042b1c8)(auStack_5e,param_1,6);
      local_58 = 0x806;
      local_54 = 0x800;
      local_51 = 4;
      local_50 = 1;
      local_56 = 1;
      local_52 = 6;
      local_48 = param_2;
      local_28 = param_2;
      (*(code *)PTR_memcpy_0042b1c8)(auStack_4e,param_1,6);
      local_3e = (undefined2)((uint)param_3 >> 0x10);
      local_3c = (undefined2)param_3;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_28 = param_3;
      (*(code *)PTR_strcpy_0042b208)((int)&local_74 + 2,&DAT_00417f3c);
      uVar3 = (*(code *)PTR_sendto_0042b140)(iVar1,auStack_64,0x3c,0,&local_74,0x10);
      uVar3 = ~uVar3 >> 0x1f;
    }
    (*(code *)PTR_close_0042b098)(iVar1);
  }
  return uVar3;
}

