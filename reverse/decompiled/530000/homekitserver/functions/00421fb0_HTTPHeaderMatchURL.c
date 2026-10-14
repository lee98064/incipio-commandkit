/* HTTPHeaderMatchURL @ 00421fb0 */

undefined4 HTTPHeaderMatchURL(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmp_suffix_00614494)
                    (*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x144),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

