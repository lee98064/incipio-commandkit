/* HTTPHeaderMatchMethod @ 00405c98 */

undefined4 HTTPHeaderMatchMethod(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmpx_004330f4)
                    (*(undefined4 *)(param_1 + 0x80c),*(undefined4 *)(param_1 + 0x810),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}

