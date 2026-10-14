/* FUN_004343d8 @ 004343d8 */

bool FUN_004343d8(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_c0 [2];
  char local_b8;
  char local_b7;
  char local_b6;
  uint local_ac [33];
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
LAB_00434588:
    bVar3 = false;
  }
  else {
    uVar2 = 0;
LAB_0043446c:
    do {
      for (; uVar2 < 0x20; uVar2 = uVar2 + 1) {
        local_ac[uVar2] = 0;
      }
      local_c0[0] = 1;
      local_ac[DAT_00600b80 >> 5] = local_ac[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
      iVar1 = (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b40,0xe);
      if (iVar1 == -1) {
        FUN_0043357c();
        goto LAB_00434588;
      }
      iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_ac,0,0,local_c0);
      if (iVar1 == -1) {
        (*(code *)PTR_puts_00612670)("select error.");
      }
      else {
        uVar2 = 0;
        if (iVar1 == 0) goto LAB_0043446c;
        (*(code *)PTR_read_00613d88)(DAT_00600b80,&local_b8,10);
      }
      uVar2 = 0;
    } while (local_b8 != -2);
    bVar3 = local_b7 != '0' || local_b6 != '0';
    (*(code *)PTR_printf_006126e8)("relay_switchstate = %d\n",bVar3);
  }
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return bVar3;
}

