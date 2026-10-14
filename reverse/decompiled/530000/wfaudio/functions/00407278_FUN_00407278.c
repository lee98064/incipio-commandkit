/* FUN_00407278 @ 00407278 */

undefined4 FUN_00407278(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [2];
  
  local_10[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_00423498)(param_1,&DAT_00411fe4);
  uVar2 = 0xffffffff;
  if (iVar1 != 0) {
    (*(code *)PTR_fscanf_0042358c)(iVar1,&DAT_004117f4,local_10);
    (*(code *)PTR_fclose_00423480)(iVar1);
    uVar2 = local_10[0];
  }
  return uVar2;
}

