/* FUN_00434a3c @ 00434a3c */

void FUN_00434a3c(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  int local_b8;
  int local_b4;
  int local_b0 [2];
  uint local_a8 [33];
  
  while (iVar1 = FUN_00433b3c(), iVar1 == 0) {
    (*(code *)PTR_sleep_0061454c)(1);
  }
  FUN_0043499c();
  iVar1 = (*(code *)PTR_access_00613bac)("/tmp/net/wac_state.txt",4);
  if (iVar1 < 0) {
    (*(code *)PTR_time_00613804)(&local_b8);
  }
  local_b4 = local_b8;
  uVar2 = 0;
  do {
    for (; uVar2 < 0x20; uVar2 = uVar2 + 1) {
      local_a8[uVar2] = 0;
    }
    local_b0[0] = (local_b8 + 5) - local_b4;
    if (4 < (uint)(local_b4 - local_b8)) {
      local_b0[0] = 0;
    }
    local_a8[DAT_00600b80 >> 5] = local_a8[DAT_00600b80 >> 5] | 1 << (DAT_00600b80 & 0x1f);
    iVar1 = (*(code *)PTR_select_00613cc4)(DAT_00600b80 + 1,local_a8,0,0,local_b0);
    if (iVar1 == -1) {
      pcVar3 = "select error.";
      pcVar4 = (code *)PTR_puts_00612670;
LAB_00434bf0:
      (*pcVar4)(pcVar3);
    }
    else {
      if (iVar1 != 0) {
        FUN_004332fc(&local_b8);
        pcVar3 = (char *)&local_b4;
        pcVar4 = (code *)PTR_time_00613804;
        goto LAB_00434bf0;
      }
      (*(code *)PTR_time_00613804)();
      local_b4 = local_b8;
      FUN_004345d4();
    }
    uVar2 = 0;
  } while( true );
}

