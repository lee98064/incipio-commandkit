/* FUN_00408e50 @ 00408e50 */

int * FUN_00408e50(int param_1,int param_2,char *param_3,char *param_4)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  
  if (param_3 == (char *)0x0) {
    uVar8 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar6 = "Yipes! Null value sent as key! [hash_insert]!\n";
  }
  else if (*param_3 == '\0') {
    uVar8 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar6 = "Attempt to hash NULL or empty key! [hash_insert]!\n";
  }
  else if (param_4 == (char *)0x0) {
    uVar8 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar6 = "Yipes! Null value sent as value! [hash_insert]!\n";
  }
  else {
    if (*param_4 != '\0') {
      if ((*(uint *)PTR_debug_level_0046abf4 & 0x2000) != 0) {
        (*(code *)PTR_fprintf_0046a9ec)
                  (*(undefined4 *)PTR_stderr_0046a7f0,
                   "Adding key \"%s\" for value \"%s\" (hash=%u)\n",param_3,param_4,param_2);
      }
      piVar9 = (int *)(param_1 + param_2 * 4);
      piVar10 = (int *)*piVar9;
      piVar2 = piVar10;
      while (piVar1 = piVar10, piVar1 != (int *)0x0) {
        iVar4 = (*(code *)PTR_strcmp_0046a824)(*piVar1,param_3);
        if (iVar4 == 0) {
          return piVar1;
        }
        piVar2 = piVar1;
        piVar10 = (int *)piVar1[2];
      }
      piVar10 = (int *)(*(code *)PTR_malloc_0046ab14)(0xc);
      if (piVar10 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar4 = (*(code *)PTR_strdup_0046a8a4)(param_3);
      puVar3 = PTR_strdup_0046a8a4;
      *piVar10 = iVar4;
      iVar4 = (*(code *)puVar3)(param_4);
      iVar7 = *piVar10;
      piVar10[1] = iVar4;
      piVar10[2] = 0;
      if ((iVar7 != 0) && (iVar4 != 0)) {
        if (piVar2 == (int *)0x0) {
          *piVar9 = (int)piVar10;
          return piVar10;
        }
        piVar2[2] = (int)piVar10;
        return piVar10;
      }
      puVar5 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
      uVar8 = *puVar5;
      if (iVar7 != 0) {
        (*(code *)PTR_free_0046a680)();
      }
      if (piVar10[1] != 0) {
        (*(code *)PTR_free_0046a680)();
      }
      (*(code *)PTR_free_0046a680)(piVar10);
      *puVar5 = uVar8;
      return (int *)0x0;
    }
    uVar8 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar6 = "Attempt to hash NULL or empty value! [hash_insert]!\n";
  }
  (*(code *)PTR_fputs_0046a6e4)(pcVar6,uVar8);
  return (int *)0x0;
}

