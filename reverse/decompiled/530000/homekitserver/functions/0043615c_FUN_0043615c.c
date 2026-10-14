/* FUN_0043615c @ 0043615c */

void FUN_0043615c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_14;
  
  bVar1 = false;
  (*(code *)PTR_sprintbuf_00613dc4)
            (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1728);
  if ((param_4 & 2) != 0) {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
  }
  iVar2 = (*(code *)PTR_json_object_get_object_00613b90)(param_1);
  for (local_14 = *(undefined4 **)(iVar2 + 0x20); local_14 != (undefined4 *)0x0;
      local_14 = (undefined4 *)local_14[2]) {
    uVar4 = *local_14;
    iVar2 = local_14[1];
    if ((bVar1) &&
       ((*(code *)PTR_sprintbuf_00613dc4)
                  (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1720),
       (param_4 & 2) != 0)) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1724);
    }
    bVar1 = true;
    if ((param_4 & 1) != 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x171c);
    }
    (*(code *)(PTR_LAB_00612344 + 0x60d0))(param_2,param_3 + 1,param_4);
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1718);
    uVar3 = (*(code *)PTR_strlen_00613f4c)(uVar4);
    (*(code *)(PTR_LAB_00612344 + 0x54f0))(param_2,uVar4,uVar3);
    if ((param_4 & 1) == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1710);
    }
    else {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1714);
    }
    if (iVar2 == 0) {
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1730);
    }
    else {
      (**(code **)(iVar2 + 8))(iVar2,param_2,param_3 + 1,param_4);
    }
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
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1708);
  }
  else {
    (*(code *)PTR_sprintbuf_00613dc4)
              (param_2,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x170c);
  }
  return;
}

