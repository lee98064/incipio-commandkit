/* FUN_004354f0 @ 004354f0 */

undefined4 FUN_004354f0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int local_res8;
  int local_14;
  int local_10;
  
  local_10 = 0;
  local_14 = 0;
  local_res8 = param_3;
  do {
    while( true ) {
      bVar2 = local_res8 == 0;
      local_res8 = local_res8 + -1;
      if (bVar2) {
        if (0 < local_10 - local_14) {
          (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14)
          ;
        }
        return 0;
      }
      bVar1 = *(byte *)(param_2 + local_10);
      uVar3 = (uint)bVar1;
      if (uVar3 < 0xe) break;
      if (((uVar3 != 0x2f) && (uVar3 != 0x5c)) && (uVar3 != 0x22)) goto LAB_0043583c;
LAB_004355a4:
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14);
      }
      if (bVar1 == 8) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1778,2);
      }
      else if (bVar1 == 10) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1774,2);
      }
      else if (bVar1 == 0xd) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -6000,2);
      }
      else if (bVar1 == 9) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x176c,2);
      }
      else if (bVar1 == 0xc) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1768,2);
      }
      else if (bVar1 == 0x22) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1764,2);
      }
      else if (bVar1 == 0x5c) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1760,2);
      }
      else if (bVar1 == 0x2f) {
        (*(code *)PTR_printbuf_memappend_006125f8)
                  (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x175c,2);
      }
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    if ((0xb < uVar3) || (uVar3 - 8 < 3)) goto LAB_004355a4;
LAB_0043583c:
    if (bVar1 < 0x20) {
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_006125f8)(param_1,param_2 + local_14,local_10 - local_14);
      }
      (*(code *)PTR_sprintbuf_00613dc4)
                (param_1,PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x1758,
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00612b70 + (uint)(bVar1 >> 4)),
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00612b70 + (bVar1 & 0xf)));
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    else {
      local_10 = local_10 + 1;
    }
  } while( true );
}

