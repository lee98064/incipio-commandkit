/* add_alias @ 00404de0 */

void add_alias(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar1 = (*(code *)PTR_strlen_0046a714)();
  uVar2 = (*(code *)PTR_strlen_0046a714)(param_2);
  iVar3 = FUN_00403d30(param_1);
  if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
    (*(code *)PTR_fprintf_0046a9ec)
              (*(undefined4 *)PTR_stderr_0046a7f0,
               "%s:%d - Going to add alias: \"%s\" -=> \"%s\" (hash: %u)\n","alias.c",0x6c,param_1,
               param_2,iVar3);
  }
  puVar8 = (undefined4 *)(&DAT_0046c56c)[iVar3];
  if (puVar8 == (undefined4 *)0x0) {
LAB_00404ef4:
    puVar5 = (undefined4 *)(*(code *)PTR_malloc_0046ab14)(0x18);
    if (puVar8 == (undefined4 *)0x0) {
      (&DAT_0046c56c)[iVar3] = puVar5;
    }
    else {
      puVar8[5] = puVar5;
    }
    uVar6 = (*(code *)PTR_strdup_0046a8a4)(param_1);
    *puVar5 = uVar6;
    puVar5[3] = uVar1;
    uVar1 = (*(code *)PTR_strdup_0046a8a4)(param_2);
    puVar5[1] = uVar1;
    puVar5[4] = uVar2;
    uVar7 = *(uint *)PTR_debug_level_0046abf4;
    puVar5[2] = param_3;
    puVar5[5] = 0;
    if ((uVar7 & 1) != 0) {
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,
                 "%s:%d - ADDED alias: \"%s\" -=> \"%s\" hash: %u\n","alias.c",0x96,param_1,param_2,
                 iVar3);
    }
  }
  else {
    do {
      puVar5 = (undefined4 *)puVar8[5];
      if (puVar5 == (undefined4 *)0x0) goto LAB_00404ef4;
      iVar4 = (*(code *)PTR_strcmp_0046a824)(param_1,*puVar8);
      puVar8 = puVar5;
    } while (iVar4 != 0);
  }
  return;
}

