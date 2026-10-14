/* Relay_SwitchSetup @ 0043485c */

undefined4 Relay_SwitchSetup(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_pthread_mutex_lock_00613f24)(&DAT_00615f34);
  iVar1 = FUN_00433b3c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
    goto LAB_0043497c;
  }
  if (param_1 == '\0') {
    (*(code *)PTR_puts_00612670)("Switch off");
    (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b00,0xe);
    DAT_00615f20 = 0;
LAB_00434930:
    uVar2 = 0;
  }
  else {
    if (param_1 == '\x01') {
      (*(code *)PTR_puts_00612670)("Switch on");
      (*(code *)PTR_write_00613734)(DAT_00600b80,&DAT_00600b10,0xe);
      DAT_00615f20 = 1;
      goto LAB_00434930;
    }
    (*(code *)PTR_puts_00612670)("Every fail");
    uVar2 = 0xffffffff;
  }
  DAT_00615ee0 = param_1;
  (*(code *)PTR_Store_hksettinginfo_00614810)(&DAT_00615ee0);
LAB_0043497c:
  (*(code *)PTR_pthread_mutex_unlock_00612b1c)(&DAT_00615f34);
  return uVar2;
}

