/* FUN_00422e30 @ 00422e30 */

undefined4 FUN_00422e30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int local_148;
  undefined1 auStack_144 [4];
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [304];
  
  local_148 = 0;
  (*(code *)PTR_apmib_get_0046aadc)(0xc0,auStack_144);
  (*(code *)PTR_apmib_get_0046aadc)(0x4a,auStack_140);
  iVar1 = (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_148);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  if (local_148 == 0) {
    (*(code *)PTR_memset_0046a87c)(auStack_13c,0,300);
    (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"<option selected value=\"0\">AP</option>");
    pcVar3 = "<option value=\"1\">Client</option>";
  }
  else {
    if (local_148 != 1) {
      if (local_148 == 2) {
        (*(code *)PTR_memset_0046a87c)(auStack_13c,0,300);
        (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"<option value=\"0\">AP</option>");
        (*(code *)PTR_strcat_0046a9c8)(auStack_13c,"<option value=\"1\">Client</option>");
        pcVar3 = "<option selected value=\"2\">WDS</option><option value=\"3\">AP+WDS</option>";
      }
      else {
        if (local_148 != 3) {
          return 0;
        }
        (*(code *)PTR_memset_0046a87c)(auStack_13c,0,300);
        (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"<option value=\"0\">AP</option>");
        (*(code *)PTR_strcat_0046a9c8)(auStack_13c,"<option value=\"1\">Client</option>");
        pcVar3 = "<option value=\"2\">WDS</option><option selected value=\"3\">AP+WDS</option>";
      }
      goto LAB_0042303c;
    }
    (*(code *)PTR_memset_0046a87c)(auStack_13c,0,300);
    (*(code *)PTR_strcpy_0046ac60)(auStack_13c,"<option value=\"0\">AP</option>");
    pcVar3 = "<option selected value=\"1\">Client</option>";
  }
  (*(code *)PTR_strcat_0046a9c8)(auStack_13c,pcVar3);
  pcVar3 = "<option value=\"2\">WDS</option><option value=\"3\">AP+WDS</option>";
LAB_0042303c:
  (*(code *)PTR_strcat_0046a9c8)(auStack_13c,pcVar3);
  uVar2 = (*(code *)PTR_req_format_write_0046a95c)(param_1,auStack_13c);
  return uVar2;
}

