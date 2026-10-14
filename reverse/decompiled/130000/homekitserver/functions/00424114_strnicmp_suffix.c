/* strnicmp_suffix @ 00424114 */

undefined4 strnicmp_suffix(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_strnlen_00611ec4)();
  uVar2 = (*(code *)PTR_strlen_006130b4)(param_3);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = strnicmpx(param_1 + (uVar1 - uVar2),uVar2,param_3);
  return uVar3;
}

