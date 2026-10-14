/* FUN_00406fc8 @ 00406fc8 */

undefined4 FUN_00406fc8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_004231b0)(param_1,&DAT_00411d04);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_fscanf_004232a0)(iVar1,&DAT_00411514,local_10);
    (*(code *)PTR_fclose_00423198)(iVar1);
    uVar2 = local_10[0];
  }
  return uVar2;
}

