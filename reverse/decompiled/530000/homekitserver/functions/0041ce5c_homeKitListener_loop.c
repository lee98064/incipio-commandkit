/* homeKitListener_loop @ 0041ce5c */

undefined4 homeKitListener_loop(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_f0 [4];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  undefined *local_e0;
  undefined *local_dc;
  undefined *local_d8;
  undefined1 auStack_d4 [36];
  uint local_b0 [34];
  
  (*(code *)PTR_HKCreateGlobalEventTable_00612b84)();
  (*(code *)PTR_pthread_list_init_00614740)();
  (*(code *)PTR_HomekitSerialThreadStart_006144dc)();
  iVar3 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00614aa0)();
  if (iVar3 == 0) {
    pcVar7 = "1";
  }
  else {
    pcVar7 = "0";
  }
  uVar8 = param_1 >> 5;
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f4,pcVar7);
  uVar4 = (*(code *)PTR_calloc_006148c0)(100,1);
  (*(code *)PTR_HKSetupFirmwareVersion_00614ae0)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3f8,uVar4);
  (*(code *)PTR_free_0061286c)(uVar4);
  uVar9 = 1 << (param_1 & 0x1f);
  uVar4 = (*(code *)PTR_calloc_006148c0)(10,1);
  (*(code *)PTR_HKSetupAccessoryType_00613f18)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_00612f60)(&DAT_005ac3fc,uVar4);
  (*(code *)PTR_free_0061286c)(uVar4);
  local_e4 = PTR_homekitUserSerialOpen_006147dc;
  local_e0 = PTR_homekitUserSerialWrite_00613424;
  local_dc = PTR_homekitUserSerialRead_00613dd0;
  local_d8 = PTR_homekitUserSerialClose_006143f4;
  (*(code *)PTR_HomekitSerialFuncRegister_006143a8)(&local_e4);
  (*(code *)PTR_HomekitSerialOpen_00612550)(0);
  DAT_00614bf0 = (*(code *)PTR_calloc_006148c0)(0x15c,1);
  (*(code *)PTR_Phytrex_HMGetAppConfig_00614b2c)(DAT_00614bf0 + 0xbc);
  local_b0[0x20] = param_1 + 1;
  (*(code *)PTR_HKCharacteristicInit_00614288)(DAT_00614bf0);
  (*(code *)PTR_HKSetPassword_00612648)(*(undefined4 *)(DAT_00614bf0 + 0x158));
  DAT_00614bec = 0;
  do {
    uVar5 = 0;
    while( true ) {
      do {
        while( true ) {
          uVar2 = local_b0[0x20];
          if (0x1f < uVar5) break;
          local_b0[uVar5] = 0;
          uVar5 = uVar5 + 1;
        }
        local_ec = 2;
        local_b0[uVar8] = local_b0[uVar8] | uVar9;
        local_e8 = 0;
        iVar3 = (*(code *)PTR_select_00613cc4)(uVar2,local_b0,0,0,&local_ec);
        uVar5 = 0;
      } while (iVar3 + 1U < 2);
      if ((uVar9 & local_b0[uVar8]) == 0) break;
      piVar6 = (int *)(*(code *)PTR_calloc_006148c0)(0x24,1);
      iVar3 = (*(code *)PTR_accept_00612890)(param_1,piVar6 + 1,piVar6 + 8);
      puVar1 = PTR_pthread_attr_init_006143b4;
      *piVar6 = iVar3;
      if (iVar3 < 1) {
        (*(code *)PTR_free_0061286c)(piVar6);
      }
      else {
        (*(code *)puVar1)(auStack_d4);
        (*(code *)PTR_pthread_attr_setdetachstate_00614770)(auStack_d4,1);
        iVar3 = (*(code *)PTR_pthread_create_00613740)(auStack_f0,auStack_d4,&DAT_0041fdb4,piVar6);
        if (iVar3 < 0) {
          (*(code *)PTR_close_00613604)(param_1);
          (*(code *)PTR_free_0061286c)(piVar6);
          return 1;
        }
        (*(code *)PTR_pthread_attr_destroy_00613830)(auStack_d4);
      }
      uVar5 = 0;
    }
  } while( true );
}

