/* getPid_fromFile @ 00406f20 */

undefined4 getPid_fromFile(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_004231b0)(param_1,&DAT_00411d04);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004232d4)("can not open:%s\n",param_1);
    local_18[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_004232a0)(iVar1,&DAT_00411514,local_18);
    (*(code *)PTR_fclose_00423198)(iVar1);
  }
  return local_18[0];
}

