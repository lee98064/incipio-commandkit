/* FUN_00421bb0 @ 00421bb0 */

void FUN_00421bb0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [128];
  
  uVar1 = FUN_00421134();
  (*(code *)PTR_write_0046a9fc)(uVar1,"GETSTATS",8);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  iVar4 = 0;
  while( true ) {
    iVar3 = FUN_004218dc(uVar1,auStack_a8,0x80);
    if (iVar3 < 1) break;
    iVar3 = (*(code *)PTR_strtok_0046a8d8)(auStack_a8,&DAT_00450994);
    while (iVar3 != 0) {
      if (iVar4 == 0) {
        uVar5 = (*(code *)PTR_atoll_0046a704)();
        *param_1 = uVar5;
      }
      else if (iVar4 == 1) {
        uVar5 = (*(code *)PTR_atoll_0046a704)();
        param_1[1] = uVar5;
      }
      else if (iVar4 == 2) {
        uVar2 = (*(code *)PTR_atoi_0046a73c)();
        *(undefined4 *)(param_1 + 2) = uVar2;
      }
      else if (iVar4 == 3) {
        uVar2 = (*(code *)PTR_atoi_0046a73c)();
        *(undefined4 *)((int)param_1 + 0x14) = uVar2;
      }
      else if (iVar4 == 4) {
        uVar5 = (*(code *)PTR_atoll_0046a704)();
        param_1[4] = uVar5;
      }
      else if (iVar4 == 5) {
        uVar5 = (*(code *)PTR_atoll_0046a704)(iVar3);
        param_1[5] = uVar5;
      }
      iVar3 = (*(code *)PTR_strtok_0046a8d8)(0,&DAT_00450994);
      iVar4 = iVar4 + 1;
    }
  }
  (*(code *)PTR_close_0046a694)(uVar1);
  return;
}

