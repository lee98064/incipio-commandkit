/* FUN_00433e48 @ 00433e48 */

/* WARNING: Unknown calling convention */

float FUN_00433e48(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_c0 [2];
  char local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_004340c4:
    fVar4 = 0.0;
  }
  else {
    uVar2 = 0;
LAB_00433edc:
    do {
      while( true ) {
        if (0x1f < uVar2) break;
        local_ac[uVar2] = 0;
        uVar2 = uVar2 + 1;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b60,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_004340c4;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_00433edc;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 == -2);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b6);
    uVar5 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar3 = (*(code *)PTR___floatunsisf_006136b0)(local_b7);
    uVar6 = (*(code *)PTR___extendsfdf2_00612dc0)(uVar3);
    uVar6 = (*(code *)PTR___muldf3_006136f0)
                      ((int)((ulonglong)uVar6 >> 0x20),(int)uVar6,DAT_005ae828,DAT_005ae82c);
    uVar5 = (*(code *)PTR___adddf3_0061364c)
                      ((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,(int)((ulonglong)uVar6 >> 0x20),
                       (int)uVar6);
    uVar5 = (*(code *)PTR___adddf3_0061364c)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5,0,0);
    fVar4 = (float)(*(code *)PTR___truncdfsf2_00614940)((int)((ulonglong)uVar5 >> 0x20),(int)uVar5);
    (*(code *)PTR___extendsfdf2_00612dc0)(fVar4);
    (*(code *)PTR_printf_006126e8)("Irms result value = %f\n");
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return fVar4;
}

