/* FUN_00437cdc @ 00437cdc */

void FUN_00437cdc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e4);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
  }
  local_14 = 0;
  while( true ) {
    iVar2 = (*(code *)PTR_json_object_array_length_00614790)(param_1);
    if (iVar2 <= local_14) break;
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1720);
      if ((param_4 & 2) != 0) {
        (*(code *)PTR_sprintbuf_00613dc4)
                  (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
      }
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x171c);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3 + 1,param_4);
    iVar2 = (*(code *)PTR_json_object_array_get_idx_00614110)(param_1,local_14);
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1730);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
    local_14 = local_14 + 1;
  }
  if ((param_4 & 2) != 0) {
    if (bVar1) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3,param_4);
  }
  if ((param_4 & 1) == 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16dc);
  }
  else {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x16e0);
  }
  return;
}

