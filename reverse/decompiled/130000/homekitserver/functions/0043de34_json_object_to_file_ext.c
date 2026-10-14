/* json_object_to_file_ext @ 0043de34 */

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
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x2020);
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = (*(code *)PTR_open_006138f8)(param_1,0x301,0x1a4);
    if (iVar2 < 0) {
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
      uVar1 = (*(code *)PTR_strerror_006118b8)(*puVar3);
      (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1ff8,param_1,uVar1);
      uVar1 = 0xffffffff;
    }
    else {
      iVar4 = (*(code *)PTR_json_object_to_json_string_ext_00613534)(param_2,param_3);
      if (iVar4 == 0) {
        (*(code *)PTR_close_0061276c)(iVar2);
        uVar1 = 0xffffffff;
      }
      else {
        uVar5 = (*(code *)PTR_strlen_006130b4)(iVar4);
        for (local_1c = 0; local_1c < uVar5; local_1c = local_1c + iVar6) {
          iVar6 = (*(code *)PTR_write_00612898)(iVar2,iVar4 + local_1c,uVar5 - local_1c);
          if (iVar6 < 0) {
            (*(code *)PTR_close_0061276c)(iVar2);
            puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
            uVar1 = (*(code *)PTR_strerror_006118b8)(*puVar3);
            (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x1fc8,param_1,uVar1);
            return 0xffffffff;
          }
        }
        (*(code *)PTR_close_0061276c)(iVar2);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

