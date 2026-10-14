/* FUN_00414b88 @ 00414b88 */

void FUN_00414b88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [32];
  
  local_34 = 0;
  if (param_1 == 4) {
    uVar2 = 0x157;
  }
  else {
    uVar2 = 499;
    if (param_1 != 6) {
      return;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,&local_34);
  if (local_34 == 0) {
    return;
  }
  if (param_1 == 4) {
    uVar2 = 0x156;
LAB_00414c1c:
    (*(code *)PTR_apmib_get_0042b1a0)(uVar2,auStack_30);
  }
  else if (param_1 == 6) {
    uVar2 = 500;
    goto LAB_00414c1c;
  }
  iVar1 = FUN_00414a98(auStack_30,auStack_38);
  if (iVar1 != 0) {
    (*(code *)PTR_printf_0042b1f0)("can\'t get ServerDomain:%s \'s IP",auStack_30);
    return;
  }
  if (param_1 == 4) {
    uVar2 = 0x93;
  }
  else {
    uVar2 = 0x14d;
    if (param_1 != 6) goto LAB_00414c7c;
  }
  (*(code *)PTR_apmib_set_0042b184)(uVar2,auStack_38);
LAB_00414c7c:
  (*(code *)PTR_apmib_update_0042b188)(4);
  return;
}

