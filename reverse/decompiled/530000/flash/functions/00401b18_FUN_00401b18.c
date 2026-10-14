/* FUN_00401b18 @ 00401b18 */

undefined4 FUN_00401b18(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 auStack_38 [16];
  undefined2 local_28;
  undefined1 auStack_26 [14];
  undefined1 *local_18;
  
  local_48 = 0xff000000;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  uVar1 = (*(code *)PTR_socket_004235a8)(2,1,0);
  (*(code *)PTR_memcpy_004235d4)(&local_40,param_1,5);
  local_18 = auStack_38;
  local_28 = 2;
  (*(code *)PTR_strcpy_00423600)(local_18,&local_40);
  iVar2 = (*(code *)PTR_ioctl_004235f8)(uVar1,0x8927,local_18);
  if (iVar2 < 0) {
    (*(code *)PTR_close_00423490)(uVar1);
    uVar1 = 0xffffffff;
  }
  else {
    (*(code *)PTR_close_00423490)(uVar1);
    iVar2 = (*(code *)PTR_memcmp_0042352c)(auStack_26,&local_50,6);
    uVar1 = 0xffffffff;
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_memcmp_0042352c)(auStack_26,&local_48,6);
      if (iVar2 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        (*(code *)PTR_memcpy_004235d4)(param_2,auStack_26,6);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

