/* json_object_to_file_ext @ 0043ec04 */

undefined4 json_object_to_file_ext(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  
  if (param_2 == 0) {
    (*(code *)PTR_mc_error_00614208)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1180);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (*(code *)PTR_open_0061479c)(param_1,0x301,0x1a4);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
      uVar1 = (*(code *)PTR_strerror_00612748)(*puVar3);
      (*(code *)PTR_mc_error_00614208)
                (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1158,param_1,uVar1);
      uVar1 = 0xffffffff;
    }
    else {
      iVar4 = (*(code *)PTR_json_object_to_json_string_ext_006143d8)(param_2,param_3);
      if (iVar4 == 0) {
        (*(code *)PTR_close_00613604)(iVar2);
        uVar1 = 0xffffffff;
      }
      else {
        uVar5 = (*(code *)PTR_strlen_00613f4c)(iVar4);
        for (local_1c = 0; local_1c < uVar5; local_1c = local_1c + iVar6) {
          iVar6 = (*(code *)PTR_write_00613734)(iVar2,iVar4 + local_1c,uVar5 - local_1c);
          if (iVar6 < 0) {
            (*(code *)PTR_close_00613604)(iVar2);
            puVar3 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
            uVar1 = (*(code *)PTR_strerror_00612748)(*puVar3);
            (*(code *)PTR_mc_error_00614208)
                      (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1128,param_1,uVar1);
            return 0xffffffff;
          }
        }
        (*(code *)PTR_close_00613604)(iVar2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

