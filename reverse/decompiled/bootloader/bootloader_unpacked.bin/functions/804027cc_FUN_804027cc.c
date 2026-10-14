/* FUN_804027cc @ 804027cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_804027cc(void)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_804025ac(&DAT_8040efb0,&DAT_8040efb8);
  iVar1 = FUN_80403268();
  if (iVar1 == 0) {
    local_60 = 4;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 4;
    local_44 = 2;
    local_40 = 2;
    local_3c = 2;
    iVar1 = FUN_80403708(&local_60,4,&local_48,0x800);
    if (iVar1 == 0) {
      local_22 = 8;
      local_c = 0x40000000;
      local_1c = 0;
      local_20 = 0;
      local_14 = 0;
      local_18 = 0;
      local_2c = _DAT_8040e8f0;
      local_28 = (uint)_DAT_8040e8f4 << 0x10;
      local_24 = 1;
      local_10 = 0x5dc;
      iVar1 = FUN_80404760(0);
      if (iVar1 == 0) {
        local_30 = 0;
        local_34 = 0x3f;
        local_38 = 0x3f;
        iVar1 = FUN_80404650(8);
        if (iVar1 == 0) {
          _DAT_b800300c = _DAT_b800300c | 0x30000000;
          FUN_80400a54(0xf,&PTR_FUN_8040e8f8,&DAT_8040fc3c);
        }
        else {
          FUN_804077a4(s_Creating_vlan_fails__d_8040d5f4,iVar1);
        }
      }
      else {
        FUN_804077a4(s_Creating_intif_fails__d_8040d5d8,iVar1);
      }
    }
    else {
      FUN_804077a4(s_Switch_nic_initialization_failed_8040d5b4);
    }
  }
  else {
    FUN_804077a4(s_Switch_core_initialization_faile_8040d58c);
  }
  return;
}

