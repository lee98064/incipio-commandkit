/* lh_table_insert @ 0043f024 */

undefined4 lh_table_insert(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_20;
  
  param_1[5] = param_1[5] + 1;
  uVar3 = (*(code *)PTR___floatsidf_00612908)(param_1[1]);
  uVar4 = (*(code *)PTR___floatsidf_00612908)(*param_1);
  uVar4 = (*(code *)PTR___muldf3_00612854)
                    ((int)((ulonglong)uVar4 >> 0x20),(int)uVar4,
                     *(undefined4 *)(PTR_PTR_006114b0 + -0x1eb0),
                     *(undefined4 *)(PTR_PTR_006114b0 + -0x1eac));
  iVar1 = (*(code *)PTR___gedf2_00611f40)
                    ((int)((ulonglong)uVar3 >> 0x20),(int)uVar3,(int)((ulonglong)uVar4 >> 0x20),
                     (int)uVar4);
  if (-1 < iVar1) {
    (*(code *)PTR_lh_table_resize_006130b8)(param_1,*param_1 << 1);
  }
  local_20 = (*(code *)param_1[0xc])(param_2);
  local_20 = local_20 % *param_1;
  if (*param_1 == 0) {
    trap(0x1c00);
  }
  while ((*(int *)(param_1[10] + local_20 * 0x10) != -1 &&
         (*(int *)(param_1[10] + local_20 * 0x10) != -2))) {
    param_1[2] = param_1[2] + 1;
    local_20 = local_20 + 1;
    if (local_20 == *param_1) {
      local_20 = 0;
    }
  }
  *(undefined4 *)(param_1[10] + local_20 * 0x10) = param_2;
  *(undefined4 *)(param_1[10] + local_20 * 0x10 + 4) = param_3;
  param_1[1] = param_1[1] + 1;
  if (param_1[8] == 0) {
    param_1[9] = param_1[10] + local_20 * 0x10;
    param_1[8] = param_1[9];
    uVar2 = param_1[10];
    iVar1 = param_1[10] + local_20 * 0x10;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(uVar2 + local_20 * 0x10 + 8) = *(undefined4 *)(iVar1 + 0xc);
  }
  else {
    *(uint *)(param_1[9] + 8) = param_1[10] + local_20 * 0x10;
    *(uint *)(param_1[10] + local_20 * 0x10 + 0xc) = param_1[9];
    *(undefined4 *)(param_1[10] + local_20 * 0x10 + 8) = 0;
    param_1[9] = param_1[10] + local_20 * 0x10;
  }
  return 0;
}

