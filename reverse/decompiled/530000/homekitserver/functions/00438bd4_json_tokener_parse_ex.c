/* json_tokener_parse_ex @ 00438bd4 */

undefined4 json_tokener_parse_ex(int param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *local_res4;
  int local_60;
  int local_38;
  char local_30;
  
  local_30 = '\x01';
  local_38 = 0;
  iVar2 = (*(code *)PTR_setlocale_00612680)(1,0);
  if (iVar2 != 0) {
    local_38 = (*(code *)PTR_strdup_00612688)(iVar2);
  }
  (*(code *)PTR_setlocale_00612680)(1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1510);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_res4 = param_2;
  do {
    if (*(int *)(param_1 + 0x18) == param_3) {
      if (((*(int *)(param_1 + 0xc) == 0) &&
          (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14) == 0)) &&
         (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 4) == 2)) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
      bVar1 = false;
    }
    else {
      local_30 = *local_res4;
      bVar1 = true;
    }
    if (!bVar1) break;
    uVar3 = *(uint *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14);
    if (uVar3 < 0x18) {
                    /* WARNING: Could not emulate address calculation at 0x00438d08 */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&_gp + *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 +
                                        uVar3 * 4 + -0x14f8)))();
      return uVar4;
    }
    local_res4 = local_res4 + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  } while (local_30 != '\0');
  if (((local_30 == '\0') &&
      (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14) != 2)) &&
     (*(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 4) != 2)) {
    *(undefined4 *)(param_1 + 0x1c) = 3;
  }
  (*(code *)PTR_setlocale_00612680)(1,local_38);
  if (local_38 != 0) {
    (*(code *)PTR_free_0061286c)(local_38);
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar4 = (*(code *)PTR_json_object_get_00613598)
                      (*(undefined4 *)
                        (*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0xc) * 0x14 + 0xc));
    for (local_60 = *(int *)(param_1 + 0xc); -1 < local_60; local_60 = local_60 + -1) {
      (*(code *)(PTR_LAB_00612348 + -0x77f8))(param_1,local_60);
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

