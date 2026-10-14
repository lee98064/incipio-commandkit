/* FUN_00402c4c @ 00402c4c */

/* WARNING: Type propagation algorithm not settling */

void FUN_00402c4c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_50;
  int local_4c [13];
  int *local_18;
  int *local_14;
  
  if (3 < param_1) {
    local_4c[9] = 0;
    local_4c[10] = 0;
    local_4c[0xb] = 0;
    local_4c[0xc] = 0;
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[0] = 0;
    local_50 = 0;
    (*(code *)PTR_apmib_get_0042b1a0)(0xc0,local_4c);
    if (local_4c[0] != 1) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_50);
      piVar1 = local_4c + 9;
      (*(code *)PTR_strcpy_0042b208)(piVar1,*(undefined4 *)(param_2 + 4));
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,"pppoe");
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,&DAT_004194bc);
        uVar3 = 4;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,"l2tp");
          uVar3 = 6;
          if (iVar2 != 0) {
            (*(code *)PTR_puts_0042b1b8)("Un-support wan type for init");
            return;
          }
        }
      }
      local_14 = local_4c + 1;
      (*(code *)PTR_strcpy_0042b208)(local_14,&DAT_00417ad0);
      local_18 = local_4c + 5;
      (*(code *)PTR_strcpy_0042b208)(local_18,*(undefined4 *)(param_2 + 0xc));
      (*(code *)PTR_start_wan_0042b20c)(uVar3,local_4c[0],local_18,local_14,local_50,0);
    }
  }
  return;
}

