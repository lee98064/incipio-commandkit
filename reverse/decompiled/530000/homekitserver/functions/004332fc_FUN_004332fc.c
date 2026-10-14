/* FUN_004332fc @ 004332fc */

int FUN_004332fc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = PTR_receivebuffer_006136c0;
  (*(code *)PTR_memset_006130cc)(PTR_receivebuffer_006136c0,0,0x32);
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar2 = (*(code *)PTR_read_00613d88)(DAT_00600b80,puVar1,0x32);
  if (iVar2 < 1) {
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
    iVar2 = -1;
  }
  else {
    DAT_00615f4c = iVar2;
    (*(code *)PTR_printf_006126e8)("0x%x, 0x%x, 0x%x, 0x%x\n",*puVar1,puVar1[1],puVar1[2],puVar1[3])
    ;
    if (puVar1[DAT_00615f4c + -4] == -2) {
      if (puVar1[DAT_00615f4c + -1] == 'V') {
        if ((puVar1[DAT_00615f4c + -3] == '0') && (puVar1[DAT_00615f4c + -2] == '0')) {
          DAT_00615ee0 = 0;
          DAT_00615f20 = '\0';
          (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
          DAT_00615ee0 = 1;
          DAT_00615f20 = '\x01';
          (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
        }
        (*(code *)PTR_printf_006126e8)("relay_switchstate = %d\n",(int)DAT_00615f20);
        (*(code *)PTR_HKUpdateValueToGlobalEventTable_006149fc)(9,uVar3);
      }
    }
    else if (((puVar1[DAT_00615f4c + -4] == -0x56) && (puVar1[DAT_00615f4c + -1] == 'U')) &&
            (puVar1[DAT_00615f4c + -3] == -1)) {
      if (puVar1[DAT_00615f4c + -2] == '\0') {
        (*(code *)PTR_puts_00612670)("hardware button trigger reset flow");
        DAT_00615f24 = 1;
      }
      else if (puVar1[DAT_00615f4c + -2] == -1) {
        DAT_00615f24 = 0;
        (*(code *)PTR_system_00614714)("flash default-sw");
        (*(code *)PTR_puts_00612670)(&DAT_005ae5cc);
        (*(code *)PTR_system_00614714)("homekitserver -c");
        (*(code *)PTR_system_00614714)("reboot");
      }
    }
    (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
    iVar2 = (int)DAT_00615f20;
  }
  return iVar2;
}

