/* printbuf_memset @ 0043ff7c */

undefined4 printbuf_memset(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_res4;
  
  local_res4 = param_2;
  if (param_2 == -1) {
    local_res4 = param_1[1];
  }
  iVar1 = local_res4 + param_4;
  if ((param_1[2] < iVar1) &&
     (iVar2 = (*(code *)(PTR_LAB_006114bc + -0x2f0))(param_1,iVar1), iVar2 < 0)) {
    return 0xffffffff;
  }
  (*(code *)PTR_memset_0061223c)(*param_1 + local_res4,param_3,param_4);
  if (param_1[1] < iVar1) {
    param_1[1] = iVar1;
  }
  return 0;
}

