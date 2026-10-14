/* FUN_00403b80 @ 00403b80 */

void FUN_00403b80(int param_1,char param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    if (param_2 != '\0') {
      param_3 = param_3 + 8;
LAB_00403c24:
                    /* WARNING: Could not recover jumptable at 0x00403c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_sem_post_00433270)(param_3);
      return;
    }
    if (param_1 != 0) {
      iVar2 = (*(code *)PTR_HTTPHeaderMatchMethod_00433240)(param_1,&DAT_0041d1b8);
      puVar1 = PTR_malloc_00433280;
      if (iVar2 == 0) {
        *(int *)(param_3 + 0x1c) = param_1;
        iVar2 = (*(code *)puVar1)(0x888);
        *(int *)(param_3 + 0x1c) = iVar2;
        if (iVar2 != 0) {
          (*(code *)PTR_memcpy_004332a8)(iVar2,param_1,0x888);
          param_3 = param_3 + 0x24;
          goto LAB_00403c24;
        }
      }
    }
  }
  return;
}

