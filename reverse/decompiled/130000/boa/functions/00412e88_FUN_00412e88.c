/* FUN_00412e88 @ 00412e88 */

int FUN_00412e88(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_s1;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    iVar2 = (*(code *)PTR_malloc_0046ab14)(*(int *)(param_1 + 0x9c) + 1);
    puVar1 = PTR_memcpy_0046ab5c;
    if (iVar2 == 0) {
      return param_3;
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
    (*(code *)puVar1)(iVar2,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
    iVar4 = *(int *)(param_1 + 0x9c);
    puVar3 = (undefined1 *)(iVar2 + iVar4);
    *puVar3 = 0;
    for (; (iVar4 = iVar4 + -1, 0 < iVar4 && ((puVar3[-1] == '\n' || (puVar3[-1] == '\r'))));
        puVar3 = puVar3 + -1) {
      puVar3[-1] = 0;
    }
    unaff_s1 = FUN_00412c70(DAT_0046f050,iVar2,*(undefined4 *)(param_1 + 0x9c),param_2,0x1000);
  }
  if (-1 < unaff_s1) {
    param_3 = (*(code *)PTR_malloc_0046ab14)(unaff_s1 + 1);
    if (param_4 != (int *)0x0) {
      *param_4 = unaff_s1;
    }
    (*(code *)PTR_memcpy_0046ab5c)(param_3,DAT_0046f050,unaff_s1);
    *(undefined1 *)(param_3 + unaff_s1) = 0;
    FUN_00411d58(param_3);
  }
  return param_3;
}

