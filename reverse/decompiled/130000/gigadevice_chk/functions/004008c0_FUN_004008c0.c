/* FUN_004008c0 @ 004008c0 */

undefined4 FUN_004008c0(int param_1)

{
  int iVar1;
  int iVar2;
  char *local_48;
  undefined1 auStack_44 [10];
  undefined1 auStack_3a [50];
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (*(code *)PTR_open_00410f0c)("/proc/OTP",0x82);
    if (iVar1 < 0) {
      (*(code *)PTR_puts_00410f34)("/proc open error");
    }
    else {
      (*(code *)PTR_strcpy_00410f3c)(auStack_44,*(undefined4 *)(param_1 + 4));
      iVar2 = (*(code *)PTR_strcmp_00410f14)(auStack_44,&DAT_00400e70);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 8) == 0) {
          return 1;
        }
        for (local_48 = *(char **)(param_1 + 8); (*local_48 != '\0' && (*local_48 != '='));
            local_48 = local_48 + 1) {
        }
        if (*local_48 == '\0') {
          local_48 = "None";
        }
        else {
          local_48 = local_48 + 1;
        }
        (*(code *)PTR_strcpy_00410f3c)(auStack_3a,local_48);
        (*(code *)PTR_strcat_00410f20)(auStack_3a,&DAT_00400e7c);
        (*(code *)PTR_strcat_00410f20)(auStack_3a,&DAT_00400e80);
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_00410f14)(auStack_44,&DAT_00400e88);
        if (iVar2 == 0) {
          if (*(int *)(param_1 + 8) == 0) {
            return 1;
          }
          for (local_48 = *(char **)(param_1 + 8); (*local_48 != '\0' && (*local_48 != '='));
              local_48 = local_48 + 1) {
          }
          if (*local_48 == '\0') {
            local_48 = "None";
          }
          else {
            local_48 = local_48 + 1;
          }
          (*(code *)PTR_strcpy_00410f3c)(auStack_3a,local_48);
        }
      }
      iVar2 = (*(code *)PTR_write_00410f24)(iVar1,auStack_44,0x3c);
      if (iVar2 < 1) {
        (*(code *)PTR_puts_00410f34)("write error");
      }
      (*(code *)PTR_close_00410f04)(iVar1);
    }
  }
  return 1;
}

