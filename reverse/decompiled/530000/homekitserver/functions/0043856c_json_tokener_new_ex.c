/* json_tokener_new_ex @ 0043856c */

int json_tokener_new_ex(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_calloc_006148c0)(1,0x30);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = (*(code *)PTR_calloc_006148c0)(param_1,0x14);
    *(undefined4 *)(iVar1 + 0x28) = uVar2;
    if (*(int *)(iVar1 + 0x28) == 0) {
      (*(code *)PTR_free_0061286c)(iVar1);
      iVar1 = 0;
    }
    else {
      uVar2 = (*(code *)PTR_printbuf_new_00613ac0)();
      *(undefined4 *)(iVar1 + 4) = uVar2;
      *(undefined4 *)(iVar1 + 8) = param_1;
      (*(code *)PTR_json_tokener_reset_00614b14)(iVar1);
    }
  }
  return iVar1;
}

