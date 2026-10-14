/* FUN_0041c9b8 @ 0041c9b8 */

undefined4
FUN_0041c9b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,int param_6)

{
  int iVar1;
  undefined4 unaff_s1;
  int local_20;
  int local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if (param_4 == 0) {
    unaff_s1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                         (param_2,param_3,param_6,&local_20,local_1c);
    if (local_20 != 0) {
      iVar1 = (*(code *)PTR_calloc_006148c0)(param_6 + local_1c[0],1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,local_20,local_1c[0]);
        if (param_6 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar1 + local_1c[0],param_5,param_6);
        }
        unaff_s1 = (*(code *)PTR_SocketSend_00612dcc)(param_1,iVar1,param_6 + local_1c[0]);
        (*(code *)PTR_free_0061286c)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return unaff_s1;
}

