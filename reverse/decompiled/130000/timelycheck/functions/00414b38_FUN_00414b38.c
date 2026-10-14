/* FUN_00414b38 @ 00414b38 */

undefined4 FUN_00414b38(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar1 = (*(code *)PTR_gethostbyname_0042b0f0)(param_1);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_inet_ntop_0042b0c8)
                        (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(iVar1 + 0x10),auStack_38,0x20)
      ;
      (*(code *)PTR_strcpy_0042b208)(auStack_58,uVar2);
      (*(code *)PTR_inet_aton_0042b120)(auStack_58,param_2);
      return 0;
    }
    (*(code *)PTR_printf_0042b1f0)(" gethostbyname error for host:%s try again!\n",param_1);
  } while (iVar3 != 4);
  return 0xffffffff;
}

