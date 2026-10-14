/* FUN_00401110 @ 00401110 */

void FUN_00401110(undefined *param_1,byte *param_2,byte *param_3,int param_4,byte param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  byte *local_res4;
  byte *local_res8;
  byte *local_30;
  uint local_2c;
  byte local_28 [24];
  byte local_10;
  
  local_10 = param_5;
  local_30 = local_28;
  if (param_2 != (byte *)0x0) {
    if ((param_5 & 1) != 0) {
      (*(code *)PTR_putchar_00415f40)(10);
    }
    local_res8 = param_3;
    if (param_3 == (byte *)0x0) {
      iVar2 = param_4;
      if (param_4 == 0) {
        iVar2 = 0x20;
      }
      local_res8 = param_2 + iVar2;
    }
    if (param_1 == (undefined *)0x0) {
      param_1 = &DAT_004051b0;
    }
    (*(code *)PTR_printf_00415f30)
              ("dump %s %p-%p len:%u flag:%u\n",param_1,param_2,local_res8,param_4,local_10);
    local_2c = 0;
    for (local_res4 = param_2; local_res4 < local_res8; local_res4 = local_res4 + 1) {
      if ((*local_res4 < 0x20) || (0x7e < *local_res4)) {
        if ((*local_res4 == 10) || (*local_res4 == 0xd)) {
          *local_30 = 0x2e;
        }
        else {
          *local_30 = 0x2e;
        }
      }
      else {
        *local_30 = *local_res4;
      }
      local_30 = local_30 + 1;
      *local_30 = 0;
      if ((local_2c & 0xf) == 0) {
        (*(code *)PTR_printf_00415f30)
                  ("%p:%08X(%010u) %02X ",local_res4,local_2c,local_2c,*local_res4);
      }
      else if ((local_2c == 0) || ((local_2c & 0xf) != 0xf)) {
        if ((local_2c & 7) == 7) {
          (*(code *)PTR_printf_00415f30)("%02X:",*local_res4);
        }
        else if ((local_2c & 3) == 3) {
          (*(code *)PTR_printf_00415f30)("%02X-",*local_res4);
        }
        else {
          (*(code *)PTR_printf_00415f30)("%02X ",*local_res4);
        }
      }
      else {
        (*(code *)PTR_printf_00415f30)("%02X %s\n",*local_res4,local_28);
        local_30 = local_28;
        local_28[0] = 0;
        if (param_6 != 0) {
          local_res4 = local_res4 + param_6 + -0x10;
          local_2c = (local_2c + param_6) - 0x10;
        }
      }
      local_2c = local_2c + 1;
    }
    local_2c = local_2c & 0xf;
    while ((local_2c != 0 && (bVar1 = local_2c != 0x10, local_2c = local_2c + 1, bVar1))) {
      (*(code *)PTR_printf_00415f30)(&DAT_004051f0);
    }
    (*(code *)PTR_printf_00415f30)(&DAT_004051f4,local_28);
    if ((local_10 & 2) != 0) {
      (*(code *)PTR_putchar_00415f40)(10);
    }
  }
  return;
}

