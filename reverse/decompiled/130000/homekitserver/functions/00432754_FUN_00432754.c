/* FUN_00432754 @ 00432754 */

int FUN_00432754(undefined1 *param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [32];
  uint uStack_10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = local_90;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != &uStack_10);
  local_90[DAT_0061505c >> 5] = local_90[DAT_0061505c >> 5] | 1 << (DAT_0061505c & 0x1f);
  local_98 = 1;
  local_94 = 0;
  iVar2 = (*(code *)PTR_select_00612e2c)(DAT_0061505c + 1,local_90,0,0,&local_98);
  if ((iVar2 < 0) && (piVar3 = (int *)(*(code *)PTR___errno_location_0061397c)(), *piVar3 != 4)) {
    (*(code *)PTR_printf_0061185c)("select error");
    iVar2 = 0;
  }
  else if ((((int)local_90[DAT_0061505c >> 5] >> (DAT_0061505c & 0x1f) & 1U) == 0) ||
          (iVar2 = (*(code *)PTR_read_00612ef0)(DAT_0061505c,param_1,param_2), iVar2 < 1)) {
    (*(code *)PTR_fputs_00612428)("Receieve non data \n",*(undefined4 *)PTR_stdout_00612c98);
    iVar2 = 0;
  }
  return iVar2;
}

