/* FUN_00429394 @ 00429394 */

undefined4
FUN_00429394(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res4 [12];
  
  iVar1 = -(param_4 + 0xfU & 0xfffffff8);
  local_res4[0] = param_2;
  lVar7 = FUN_00429318();
  if (DAT_00615668 == 0 && DAT_0061566c == 0) {
    DAT_0061566c = 100;
    DAT_00615668 = 0;
  }
  lVar7 = lVar7 + CONCAT44(DAT_00615668,DAT_0061566c);
  uVar6 = (uint)lVar7;
  uVar5 = (uint)((ulonglong)lVar7 >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_00614674)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00613734)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_004295a0;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00613734)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_004295a0;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_00613d88)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_00614684)(5000);
      uVar8 = FUN_00429318();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) {
LAB_004295a0:
        (*(code *)PTR_printf_006126e8)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}

