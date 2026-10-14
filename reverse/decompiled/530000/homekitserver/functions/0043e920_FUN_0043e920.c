/* FUN_0043e920 @ 0043e920 */

undefined4 FUN_0043e920(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1008 [4096];
  
  iVar1 = (*(code *)PTR_open_0061479c)(param_1,0);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
    uVar3 = (*(code *)PTR_strerror_00612748)(*puVar2);
    (*(code *)PTR_mc_error_00614208)
              (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11e0,param_1,uVar3);
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)PTR_printbuf_new_00613ac0)();
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_close_00613604)(iVar1);
      (*(code *)PTR_mc_error_00614208)(PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11ac);
      uVar3 = 0;
    }
    else {
      while( true ) {
        iVar4 = (*(code *)PTR_read_00613d88)(iVar1,auStack_1008,0x1000);
        if (iVar4 < 1) break;
        (*(code *)PTR_printbuf_memappend_006125f8)(puVar2,auStack_1008,iVar4);
      }
      (*(code *)PTR_close_00613604)(iVar1);
      if (iVar4 < 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_00614824)();
        uVar3 = (*(code *)PTR_strerror_00612748)(*puVar5);
        (*(code *)PTR_mc_abort_00613d78)
                  (PTR_s_bfPjPmmrJagyc0JnT6m8oXWXV3AGNaOk_00612340 + -0x11e0,param_1,uVar3);
        (*(code *)PTR_printbuf_free_00612794)(puVar2);
        uVar3 = 0;
      }
      else {
        uVar3 = (*(code *)PTR_json_tokener_parse_00613ae4)(*puVar2);
        (*(code *)PTR_printbuf_free_00612794)(puVar2);
      }
    }
  }
  return uVar3;
}

