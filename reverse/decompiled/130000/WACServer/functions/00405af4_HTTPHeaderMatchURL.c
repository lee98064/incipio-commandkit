/* HTTPHeaderMatchURL @ 00405af4 */

undefined4 HTTPHeaderMatchURL(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmp_suffix_0043312c)
                    (*(undefined4 *)(param_1 + 0x83c),*(undefined4 *)(param_1 + 0x840),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

