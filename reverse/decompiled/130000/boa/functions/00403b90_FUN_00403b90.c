/* FUN_00403b90 @ 00403b90 */

void FUN_00403b90(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_inner_req_1356__0046a648[-0x52c0] == '\0') {
    if (PTR___cxa_finalize_0046ab38 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0046ab38)(*(undefined4 *)PTR_LOOP_0046a64c);
    }
    puVar1 = PTR_inner_req_1356__0046a648;
    puVar4 = PTR_inner_req_1356__0046a648 + -0x7ff8;
    iVar5 = (int)PTR___DTOR_END___0046a650 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x52bc);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x52bc) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0046aa04 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0046aa04)
                (PTR_s_les_is_larger_than_the_total_dow_0044ffac_0x54_0046a654 + 0x7b58);
    }
    PTR_inner_req_1356__0046a648[-0x52c0] = 1;
  }
  return;
}

