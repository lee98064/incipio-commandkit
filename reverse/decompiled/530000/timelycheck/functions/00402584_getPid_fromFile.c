/* getPid_fromFile @ 00402584 */

undefined4 getPid_fromFile(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_0042b118)(param_1,&DAT_00418704);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("can not open:%s\n",param_1);
    local_18[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_004179c4,local_18);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return local_18[0];
}

