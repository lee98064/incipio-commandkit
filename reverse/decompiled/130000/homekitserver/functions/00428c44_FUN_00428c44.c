/* FUN_00428c44 @ 00428c44 */

undefined4
FUN_00428c44(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
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
  lVar7 = FUN_00428bc8();
  if (DAT_006147c8 == 0 && DAT_006147cc == 0) {
    DAT_006147cc = 100;
    DAT_006147c8 = 0;
  }
  lVar7 = lVar7 + CONCAT44(DAT_006147c8,DAT_006147cc);
  uVar6 = (uint)lVar7;
  uVar5 = (uint)((ulonglong)lVar7 >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_006137d0)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00612898)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_00428e50;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00612898)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) goto LAB_00428e50;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_00612ef0)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_006137e0)(5000);
      uVar8 = FUN_00428bc8();
      uVar3 = (uint)((ulonglong)uVar8 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar8)))) {
LAB_00428e50:
        (*(code *)PTR_printf_0061185c)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}

