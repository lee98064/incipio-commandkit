/* FUN_0041c860 @ 0041c860 */

int FUN_0041c860(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  int unaff_s4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    unaff_s4 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                         (200,"application/pairing+tlv8",param_5,&local_20,&local_1c);
    if ((unaff_s4 == 0) && (local_20 != 0)) {
      iVar1 = (*(code *)PTR_calloc_006148c0)(param_5 + local_1c,1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar1,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar1 + local_1c,param_4,param_5);
        }
        unaff_s4 = (*(code *)PTR_HKSecureSocketSend_006125b8)
                             (param_1,iVar1,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_0061286c)(iVar1);
      }
    }
  }
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return unaff_s4;
}

