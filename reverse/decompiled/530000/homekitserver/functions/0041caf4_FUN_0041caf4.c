/* FUN_0041caf4 @ 0041caf4 */

int FUN_0041caf4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_20;
  int local_1c;
  
  local_20 = 0;
  local_1c = 0;
  if (param_2 == 0) {
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                      (200,"application/hap+json",param_5,&local_20,&local_1c);
    iVar4 = 0;
LAB_0041cd44:
    if (iVar1 == 0) goto LAB_0041cd4c;
  }
  else {
    if (param_2 != 0x10) {
      iVar4 = (*(code *)PTR_json_object_new_object_0061278c)();
      uVar2 = (*(code *)PTR_json_object_new_int_00613484)(param_2);
      (*(code *)PTR_json_object_object_add_006137b4)(iVar4,"status",uVar2);
      if (param_2 == -0x1130b) {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 0x193;
      }
      else if ((param_2 + 0x11305U < 2) || (param_2 == -0x11302)) {
        uVar2 = 0xcf;
      }
      else if ((param_2 == -0x1130d) || (param_2 == -0x11301)) {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 400;
      }
      else {
        param_4 = (*(code *)PTR_json_object_to_json_string_00612474)(iVar4);
        param_5 = (*(code *)PTR_strlen_00613f4c)(param_4);
        uVar2 = 500;
      }
      iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                        (uVar2,"application/hap+json",param_5,&local_20,&local_1c);
      goto LAB_0041cd44;
    }
    iVar1 = (*(code *)PTR_CreateHTTPRespondMessageNoCopy_00613b88)
                      (0xcc,"application/hap+json",0,&local_20,&local_1c);
    if (iVar1 != 0) goto LAB_0041ce18;
    param_5 = 0;
    iVar4 = 0;
LAB_0041cd4c:
    if (local_20 != 0) {
      iVar3 = (*(code *)PTR_calloc_006148c0)(param_5 + local_1c,1);
      if (iVar3 != 0) {
        (*(code *)PTR_memcpy_00614674)(iVar3,local_20,local_1c);
        if (param_5 != 0) {
          (*(code *)PTR_memcpy_00614674)(iVar3 + local_1c,param_4,param_5);
        }
        iVar1 = (*(code *)PTR_HKSecureSocketSend_006125b8)
                          (param_1,iVar3,param_5 + local_1c,*(undefined4 *)(param_6 + 0xc));
        (*(code *)PTR_free_0061286c)(iVar3);
        goto LAB_0041cdfc;
      }
    }
    iVar1 = 0;
  }
LAB_0041cdfc:
  if (iVar4 != 0) {
    (*(code *)PTR_json_object_put_00612524)(iVar4);
  }
LAB_0041ce18:
  if (local_20 != 0) {
    (*(code *)PTR_free_0061286c)();
  }
  return iVar1;
}

