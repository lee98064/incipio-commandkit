/* FUN_00433eb0 @ 00433eb0 */

uint FUN_00433eb0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 auStack_88 [4];
  int local_84;
  char local_7f;
  int local_7c;
  char local_74;
  char local_71;
  int local_70;
  char local_6c;
  int local_68;
  byte local_64;
  int local_60;
  uint local_40;
  undefined1 *local_3c;
  int local_38;
  int local_34;
  undefined *local_30;
  
  local_3c = auStack_88;
  piVar2 = (int *)(PTR_hapObjects_00613b3c + 4);
  iVar1 = 0;
  local_34 = 0xb5;
  local_30 = PTR_hapObjects_00613b3c;
  local_38 = param_2;
  do {
    if (*piVar2 == 0) {
      return 0xfffeecfe;
    }
    iVar4 = 0;
    puVar3 = local_30 + (iVar1 * local_34 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(local_3c,puVar3,0x48);
      local_40 = (uint)local_64;
      if ((local_7c != 0) && (local_84 == local_38)) {
        if (local_74 == '\0') {
          return 0xfffeecfe;
        }
        if (local_7f == '\0') {
          return 1;
        }
        if (local_7c == 1) {
          if ((local_71 != '\0') && (local_6c != '\0')) {
            if (param_3 < local_70) {
              return 1;
            }
            if (local_68 < param_3) {
              return 1;
            }
            if (local_40 == 0) {
              return 0;
            }
LAB_00434098:
            if (local_60 == 0) {
              trap(0x1c00);
            }
            return (uint)(param_3 % local_60 != 0);
          }
        }
        else {
          if (local_7c != 2) {
            return 0;
          }
          if ((local_71 != '\0') && (local_6c != '\0')) {
            iVar1 = (*(code *)PTR___ltsf2_006137b4)(param_3,local_70);
            if (iVar1 < 0) {
              return 1;
            }
            iVar1 = (*(code *)PTR___gtsf2_00611a8c)(param_3,local_68);
            if (0 < iVar1) {
              return 1;
            }
            if (local_40 == 0) {
              return 0;
            }
            param_3 = (*(code *)PTR___fixsfsi_00613488)(param_3);
            local_60 = (*(code *)PTR___fixsfsi_00613488)(local_60);
            goto LAB_00434098;
          }
        }
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x48;
    } while (iVar4 != 0x14);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x16a;
    if (iVar1 == 10) {
      return 0xfffeecfe;
    }
  } while( true );
}

