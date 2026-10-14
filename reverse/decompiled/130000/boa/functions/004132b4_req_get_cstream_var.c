/* req_get_cstream_var @ 004132b4 */

int req_get_cstream_var(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    iVar2 = (*(code *)PTR_malloc_0046ab14)(*(int *)(param_1 + 0x78) + 1);
    puVar1 = PTR_memcpy_0046ab5c;
    if (iVar2 == 0) {
      return param_3;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    (*(code *)puVar1)(iVar2,*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
    iVar4 = *(int *)(param_1 + 0x78);
    puVar3 = (undefined1 *)(iVar2 + iVar4);
    *puVar3 = 0;
    for (; (iVar4 = iVar4 + -1, 0 < iVar4 && ((puVar3[-1] == '\n' || (puVar3[-1] == '\r'))));
        puVar3 = puVar3 + -1) {
      puVar3[-1] = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x8c);
    iVar4 = -1;
    if (iVar2 == 0) goto LAB_004133a8;
  }
  iVar4 = FUN_00413004(DAT_0046f050,iVar2,param_2,0x1000);
LAB_004133a8:
  if (*(int *)(param_1 + 0xc) == 4) {
    (*(code *)PTR_free_0046a680)(iVar2);
  }
  if (-1 < iVar4) {
    param_3 = (*(code *)PTR_malloc_0046ab14)(iVar4 + 1);
    (*(code *)PTR_memcpy_0046ab5c)(param_3,DAT_0046f050,iVar4);
    *(undefined1 *)(param_3 + iVar4) = 0;
    FUN_00411d58(param_3);
  }
  return param_3;
}

