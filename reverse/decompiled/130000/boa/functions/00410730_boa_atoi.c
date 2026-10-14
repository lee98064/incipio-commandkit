/* boa_atoi @ 00410730 */

int boa_atoi(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (((*(ushort *)(*(int *)PTR___ctype_b_0046abc0 + *param_1 * 2) & 8) != 0) &&
     (iVar1 = (*(code *)PTR_atoi_0046a73c)(), -1 < iVar1)) {
    uVar2 = simple_itoa(iVar1);
    uVar3 = (*(code *)PTR_strlen_0046a714)(param_1);
    iVar4 = (*(code *)PTR_memcmp_0046a8d0)(param_1,uVar2,uVar3);
    if (iVar4 == 0) {
      return iVar1;
    }
  }
  return -1;
}

