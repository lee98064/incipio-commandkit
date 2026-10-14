/* FUN_004137e4 @ 004137e4 */

undefined4 FUN_004137e4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_50 [4];
  undefined1 auStack_4c [48];
  
  if (param_1 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = 1;
    if (param_3 < 1) {
      return 0;
    }
    do {
      local_50[0] = (undefined1)iVar2;
      iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x8126,local_50);
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        (*(code *)PTR_puts_0046ab3c)("get mib MIB_DHCPRSVDIP_TBL fail!");
        return 0xffffffff;
      }
      iVar1 = (*(code *)PTR_memcmp_0046a8d0)(param_1,local_50,4);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = (*(code *)PTR_memcmp_0046a8d0)(param_2,auStack_4c,6);
      if (iVar1 == 0) {
        return 2;
      }
    } while (iVar2 <= param_3);
  }
  return 0;
}

