/* strnicmp_suffix @ 004066f4 */

undefined4 strnicmp_suffix(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_strnlen_00433234)();
  uVar2 = (*(code *)PTR_strlen_004330cc)(param_3);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = strnicmpx(param_1 + (uVar1 - uVar2),uVar2,param_3);
  return uVar3;
}

