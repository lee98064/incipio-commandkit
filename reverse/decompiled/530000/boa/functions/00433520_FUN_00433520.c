/* FUN_00433520 @ 00433520 */

void FUN_00433520(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0 [212];
  undefined auStack_11c [260];
  
  iVar5 = *param_3;
  iVar1 = (*(code *)PTR_atoi_0046a73c)(param_3[1]);
  if (iVar5 == 0) {
    (*(code *)PTR_fputs_0046a6e4)("Insufficient args\n",*(undefined4 *)PTR_stderr_0046a7f0);
    return;
  }
  uVar2 = 0x834;
  uVar6 = 0x8848;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar6 = 0x8836;
  }
  else {
    uVar2 = 0x844;
  }
  uVar7 = 0x847;
  if (*(int *)PTR_wlan_idx_0046a93c == 0) {
    uVar7 = 0x835;
  }
  (*(code *)PTR_apmib_get_0046aadc)(uVar2,&local_1f4);
  if (local_1f4 != 0) {
    (*(code *)PTR_apmib_get_0046aadc)(uVar7,&local_1f8);
    if (iVar1 <= local_1f8) {
      local_1f0[0] = (undefined1)iVar1;
      iVar1 = (*(code *)PTR_apmib_get_0046aadc)(uVar6,local_1f0);
      if (iVar1 != 0) {
        iVar1 = (*(code *)PTR_strcmp_0046a824)(iVar5,"wlProfileTblEnable");
        if (iVar1 == 0) {
          pcVar3 = "%d";
          puVar4 = (undefined *)0x1;
        }
        else {
          iVar1 = (*(code *)PTR_strcmp_0046a824)(iVar5,"wlProfileSSID");
          puVar4 = auStack_11c;
          if (iVar1 != 0) {
            return;
          }
          (*(code *)PTR_strcpy_0046ac60)(puVar4,local_1f0);
          (*(code *)PTR_translate_control_code_0046a860)(puVar4);
          pcVar3 = "%s";
        }
        goto LAB_004336c8;
      }
    }
  }
  pcVar3 = "%s";
  puVar4 = &DAT_00450acc;
LAB_004336c8:
  (*(code *)PTR_req_format_write_0046a95c)(param_1,pcVar3,puVar4);
  return;
}

