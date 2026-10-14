/* FUN_0040c5d0 @ 0040c5d0 */

void FUN_0040c5d0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = param_1[0x232] - param_1[0x12];
    if (iVar2 != 0) {
      (*(code *)PTR_memmove_0046abf0)
                ((int)param_1 + 0x10d5,(int)param_1 + 0x10d5 + param_1[0x12],iVar2);
    }
    param_1[0x232] = iVar2;
  }
  else {
    param_1[0x231] = *(undefined4 *)PTR_ka_max_0046a69c;
    uVar1 = *(undefined4 *)PTR_current_time_0046ab68;
    param_1[0x232] = 0;
    param_1[0x2e] = uVar1;
  }
  if ((*(uint *)PTR_debug_level_0046abf4 & 0x1000) != 0) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,"req: %p, offset: %u\n",param_1,0xb4);
  }
  (*(code *)PTR_memset_0046a87c)(param_1,0,0xb4);
  param_1[0x10] = (int)param_1 + 0x10d5;
  *param_1 = 0;
  return;
}

