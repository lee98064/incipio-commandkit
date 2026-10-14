/* FUN_00434720 @ 00434720 */

undefined4 FUN_00434720(undefined4 param_1,int param_2,int param_3)

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
          (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14)
          ;
        }
        return 0;
      }
      bVar1 = *(byte *)(param_2 + local_10);
      uVar3 = (uint)bVar1;
      if (uVar3 < 0xe) break;
      if (((uVar3 != 0x2f) && (uVar3 != 0x5c)) && (uVar3 != 0x22)) goto LAB_00434a6c;
LAB_004347d4:
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14);
      }
      if (bVar1 == 8) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2618,2);
      }
      else if (bVar1 == 10) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2614,2);
      }
      else if (bVar1 == 0xd) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2610,2);
      }
      else if (bVar1 == 9) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x260c,2);
      }
      else if (bVar1 == 0xc) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2608,2);
      }
      else if (bVar1 == 0x22) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2604,2);
      }
      else if (bVar1 == 0x5c) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x2600,2);
      }
      else if (bVar1 == 0x2f) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,PTR_PTR_006114b0 + -0x25fc,2);
      }
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    if ((0xb < uVar3) || (uVar3 - 8 < 3)) goto LAB_004347d4;
LAB_00434a6c:
    if (bVar1 < 0x20) {
      if (0 < local_10 - local_14) {
        (*(code *)PTR_printbuf_memappend_00611768)(param_1,param_2 + local_14,local_10 - local_14);
      }
      (*(code *)PTR_sprintbuf_00612f2c)
                (param_1,PTR_PTR_006114b0 + -0x25f8,
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00611ce0 + (uint)(bVar1 >> 4)),
                 (int)*(char *)(*(int *)PTR_json_hex_chars_00611ce0 + (bVar1 & 0xf)));
      local_14 = local_10 + 1;
      local_10 = local_14;
    }
    else {
      local_10 = local_10 + 1;
    }
  } while( true );
}

