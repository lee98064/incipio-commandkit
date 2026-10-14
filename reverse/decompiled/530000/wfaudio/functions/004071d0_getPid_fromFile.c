/* getPid_fromFile @ 004071d0 */

undefined4 getPid_fromFile(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_00423498)(param_1,&DAT_00411fe4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("can not open:%s\n",param_1);
    local_18[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_0042358c)(iVar1,&DAT_004117f4,local_18);
    (*(code *)PTR_fclose_00423480)(iVar1);
  }
  return local_18[0];
}

