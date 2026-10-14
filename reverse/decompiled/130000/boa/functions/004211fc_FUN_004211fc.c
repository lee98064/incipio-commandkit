/* FUN_004211fc @ 004211fc */

undefined4 FUN_004211fc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  iVar1 = (*(code *)PTR_strtok_0046a8d8)(param_1,&DAT_00450994);
  iVar4 = 0;
  while (iVar1 != 0) {
    if (iVar4 == 0) {
      uVar2 = (*(code *)PTR_strdup_0046a8a4)();
      *param_2 = uVar2;
    }
    else if (iVar4 == 1) {
      uVar3 = (*(code *)PTR_atoi_0046a73c)();
      *(undefined2 *)(param_2 + 1) = uVar3;
    }
    else if (iVar4 == 2) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_2[2] = uVar2;
    }
    else if (iVar4 == 3) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_2[7] = uVar2;
    }
    else if (iVar4 == 4) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_2[4] = uVar2;
    }
    else if (iVar4 == 5) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_2[5] = uVar2;
    }
    else if (iVar4 == 6) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_2[6] = uVar2;
    }
    iVar1 = (*(code *)PTR_strtok_0046a8d8)(0,&DAT_00450994);
    iVar4 = iVar4 + 1;
  }
  return 0;
}

