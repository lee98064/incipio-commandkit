/* FUN_0043db50 @ 0043db50 */

undefined4 FUN_0043db50(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_1008 [4096];
  
  iVar1 = (*(code *)PTR_open_006138f8)(param_1,0);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
    uVar3 = (*(code *)PTR_strerror_006118b8)(*puVar2);
    (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x2080,param_1,uVar3);
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)PTR_printbuf_new_00612c24)();
    if (puVar2 == (undefined4 *)0x0) {
      (*(code *)PTR_close_0061276c)(iVar1);
      (*(code *)PTR_mc_error_00613364)(PTR_PTR_006114b0 + -0x204c);
      uVar3 = 0;
    }
    else {
      while( true ) {
        iVar4 = (*(code *)PTR_read_00612ef0)(iVar1,auStack_1008,0x1000);
        if (iVar4 < 1) break;
        (*(code *)PTR_printbuf_memappend_00611768)(puVar2,auStack_1008,iVar4);
      }
      (*(code *)PTR_close_0061276c)(iVar1);
      if (iVar4 < 0) {
        puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0061397c)();
        uVar3 = (*(code *)PTR_strerror_006118b8)(*puVar5);
        (*(code *)PTR_mc_abort_00612ee0)(PTR_PTR_006114b0 + -0x2080,param_1,uVar3);
        (*(code *)PTR_printbuf_free_00611904)(puVar2);
        uVar3 = 0;
      }
      else {
        uVar3 = (*(code *)PTR_json_tokener_parse_00612c48)(*puVar2);
        (*(code *)PTR_printbuf_free_00611904)(puVar2);
      }
    }
  }
  return uVar3;
}

