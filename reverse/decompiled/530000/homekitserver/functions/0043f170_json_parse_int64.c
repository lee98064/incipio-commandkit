/* json_parse_int64 @ 0043f170 */

undefined4 json_parse_int64(char *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_res0;
  char *local_88;
  int local_84;
  char *local_7c;
  int local_78;
  int local_74;
  char local_70;
  char acStack_6f [103];
  
  local_res0 = param_1;
  if (*(int *)(PTR_DAT_00612328 + 0x5f54) == 0) {
    (*(code *)(PTR_LAB_00612348 + -0x102c))();
    *(undefined4 *)(PTR_DAT_00612328 + 0x5f54) = 1;
  }
  for (; ((*(ushort *)(*(int *)PTR___ctype_b_00613134 + *local_res0 * 2) & 0x20) != 0 &&
         (*local_res0 != '\0')); local_res0 = local_res0 + 1) {
  }
  puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
  *puVar2 = 0;
  iVar3 = (*(code *)PTR_sscanf_00613470)
                    (local_res0,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,&local_78)
  ;
  if (iVar3 != 1) {
    return 1;
  }
  piVar4 = (int *)(*(code *)PTR___errno_location_00614824)();
  local_84 = *piVar4;
  local_7c = local_res0;
  bVar1 = *local_res0 == '-';
  if (bVar1) {
    local_7c = local_res0 + 1;
  }
  if ((*(int *)(PTR_DAT_00612328 + 0x5f50) != 0) && (local_84 != 0x22)) {
    local_88 = &local_70;
    for (; (*local_7c == '0' && (local_7c[1] != '\0')); local_7c = local_7c + 1) {
    }
    bVar1 = (local_78 != 0 || local_74 != 0) && bVar1;
    (*(code *)PTR_snprintf_00613e24)
              (local_88,100,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x10d4,param_4,
               local_78,local_74);
    if (local_70 == '-') {
      local_88 = acStack_6f;
    }
    iVar3 = (*(code *)PTR_strlen_00613f4c)(local_88);
    if (bVar1 == (local_70 == '-')) {
      uVar5 = (*(code *)PTR_strlen_00613f4c)(local_88);
      iVar6 = (*(code *)PTR_strncmp_006140c8)(local_7c,local_88,uVar5);
      if ((iVar6 == 0) &&
         ((iVar6 = (*(code *)PTR_strlen_00613f4c)(local_7c), iVar6 == iVar3 ||
          ((*(ushort *)(*(int *)PTR___ctype_b_00613134 + local_7c[iVar3] * 2) & 8) == 0))))
      goto LAB_0043f51c;
    }
    local_84 = 0x22;
  }
LAB_0043f51c:
  if (local_84 == 0x22) {
    if (bVar1) {
      local_74 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1044);
      local_78 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1048);
    }
    else {
      local_74 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x103c);
      local_78 = *(int *)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1040);
    }
  }
  param_2[1] = local_74;
  *param_2 = local_78;
  return 0;
}

