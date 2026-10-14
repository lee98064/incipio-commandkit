/* FUN_004033ac @ 004033ac */

undefined4
FUN_004033ac(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res4 [12];
  
  iVar1 = -(param_4 + 0xfU & 0xfffffff8);
  local_res4[0] = param_2;
  lVar7 = (*(code *)PTR_UpTicks_004330a0)();
  lVar8 = FUN_004032c0(0,1);
  uVar6 = (uint)(lVar7 + lVar8);
  uVar5 = (uint)((ulonglong)(lVar7 + lVar8) >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_004332a8)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00433218)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) goto LAB_004035d4;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00433218)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) goto LAB_004035d4;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_004331d4)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) {
LAB_004035d4:
        (*(code *)PTR_printf_004332e4)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}

