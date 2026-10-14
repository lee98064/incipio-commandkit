/* FUN_00421744 @ 00421744 */

undefined4 FUN_00421744(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar1 = (*(code *)PTR_strtok_0046a8d8)(param_1,&DAT_00450994);
  iVar4 = 0;
  while (iVar1 != 0) {
    if (iVar4 == 0) {
      uVar2 = (*(code *)PTR_strdup_0046a8a4)();
      param_3[8] = uVar2;
    }
    else if (iVar4 == 1) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      *param_3 = uVar2;
    }
    else if (iVar4 == 2) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[3] = uVar2;
    }
    else if (iVar4 == 3) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[2] = uVar2;
    }
    else if (iVar4 == 4) {
      uVar5 = (*(code *)PTR_atoll_0046a704)();
      *(undefined8 *)(param_3 + 6) = uVar5;
    }
    else if (iVar4 == 5) {
      uVar3 = (*(code *)PTR_atoi_0046a73c)();
      *(undefined2 *)(param_3 + 9) = uVar3;
    }
    iVar1 = (*(code *)PTR_strtok_0046a8d8)(0,&DAT_00450994);
    iVar4 = iVar4 + 1;
  }
  return 0;
}

