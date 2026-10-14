/* FUN_0041c828 @ 0041c828 */

undefined4
FUN_0041c828(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  undefined4 unaff_s1;
  int local_20;
  int local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_4 == 0) {
    unaff_s1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00612cf0)
                         (param_2,param_3,param_6,&local_20,local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_00613a18)(param_6 + local_1c[0],1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_006137d0)(iVar1,local_20,local_1c[0]);
        if (param_6 != 0) {
          (*(code *)PTR_memcpy_006137d0)(iVar1 + local_1c[0],param_5,param_6);
        }
        unaff_s1 = (*(code *)PTR_SocketSend_00611f3c)(param_1,iVar1,param_6 + local_1c[0]);
        (*(code *)PTR_free_006119dc)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_006119dc)();
  }
  return unaff_s1;
}

