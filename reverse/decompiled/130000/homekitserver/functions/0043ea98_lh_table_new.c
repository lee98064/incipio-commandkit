/* lh_table_new @ 0043ea98 */

int * lh_table_new(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int local_c;
  
  piVar1 = (int *)(*(code *)PTR_calloc_00613a18)(1,0x38);
  if (piVar1 == (int *)0x0) {
    (*(code *)PTR_lh_abort_006131e8)(PTR_PTR_006114b0 + -0x1ed0);
  }
  piVar1[1] = 0;
  *piVar1 = param_1;
  piVar1[7] = param_2;
  iVar2 = (*(code *)PTR_calloc_00613a18)(param_1,0x10);
  piVar1[10] = iVar2;
  if (piVar1[10] == 0) {
    (*(code *)PTR_lh_abort_006131e8)(PTR_PTR_006114b0 + -0x1ed0);
  }
  piVar1[0xb] = param_3;
  piVar1[0xc] = param_4;
  piVar1[0xd] = param_5;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *(undefined4 *)(piVar1[10] + local_c * 0x10) = 0xffffffff;
  }
  return piVar1;
}

