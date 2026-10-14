/* FUN_004213c0 @ 004213c0 */

undefined4 FUN_004213c0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
      param_3[0x1a] = uVar2;
    }
    else if (iVar4 == 1) {
      uVar2 = (*(code *)PTR_strdup_0046a8a4)();
      param_3[0x1c] = uVar2;
    }
    else if (iVar4 == 2) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      *param_3 = uVar2;
    }
    else if (iVar4 == 3) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[1] = uVar2;
    }
    else if (iVar4 == 4) {
      uVar5 = (*(code *)PTR_atoll_0046a704)();
      *(undefined8 *)(param_3 + 0xe) = uVar5;
    }
    else if (iVar4 == 5) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[5] = uVar2;
    }
    else if (iVar4 == 6) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[6] = uVar2;
    }
    else if (iVar4 == 7) {
      uVar5 = (*(code *)PTR_atoll_0046a704)();
      *(undefined8 *)(param_3 + 8) = uVar5;
    }
    else if (iVar4 == 8) {
      uVar5 = (*(code *)PTR_atoll_0046a704)();
      *(undefined8 *)(param_3 + 10) = uVar5;
    }
    else if (iVar4 == 9) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0x36] = uVar2;
    }
    else if (iVar4 == 10) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0xc] = uVar2;
    }
    else if (iVar4 == 0xb) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0xd] = uVar2;
    }
    else if (iVar4 == 0xc) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[2] = uVar2;
    }
    else if (iVar4 == 0xd) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[3] = uVar2;
    }
    else if (iVar4 == 0xe) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0x18] = uVar2;
    }
    else if (iVar4 == 0xf) {
      uVar3 = (*(code *)PTR_atoi_0046a73c)();
      *(undefined2 *)(param_3 + 0x26) = uVar3;
    }
    else if (iVar4 == 0x10) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0x13] = uVar2;
    }
    else if (iVar4 == 0x11) {
      uVar2 = (*(code *)PTR_atoi_0046a73c)();
      param_3[0x12] = uVar2;
    }
    else if (iVar4 == 0x12) {
      uVar5 = (*(code *)PTR_atoll_0046a704)();
      *(undefined8 *)(param_3 + 0x10) = uVar5;
    }
    iVar1 = (*(code *)PTR_strtok_0046a8d8)(0,&DAT_00450994);
    iVar4 = iVar4 + 1;
  }
  return 0;
}

