/* sigHandler_autoconf @ 0043c604 */

void sigHandler_autoconf(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int local_130;
  int local_12c;
  undefined1 auStack_128 [19];
  undefined1 auStack_115 [109];
  undefined1 auStack_a8 [156];
  
  iVar3 = (*(code *)PTR_stat_0046a7a4)("/tmp/reinit_web",auStack_a8);
  puVar2 = PTR_apmib_get_0046aadc;
  puVar1 = PTR_wlan_idx_0046a93c;
  if (iVar3 == 0) {
    (*(code *)PTR_unlink_0046a900)("/tmp/reinit_web");
  }
  else {
    uVar4 = 0x844;
    if (*(int *)PTR_wlan_idx_0046a93c == 0) {
      uVar4 = 0x834;
    }
    *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
    (*(code *)puVar2)(uVar4,&local_130);
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_12c);
    if ((local_130 == 1) && (local_12c == 1)) {
      (*(code *)PTR_memcpy_0046ab5c)(auStack_128,"wps_client_profile",0x13);
      (*(code *)PTR_memset_0046a87c)(auStack_115,0,0x6d);
      addWlProfileHandler(0,auStack_128,*(undefined4 *)puVar1);
      (*(code *)PTR_apmib_update_0046aa2c)(4);
    }
    run_init_script(&DAT_0044d9f4);
  }
  (*(code *)PTR_apmib_reinit_0046aa6c)();
  return;
}

