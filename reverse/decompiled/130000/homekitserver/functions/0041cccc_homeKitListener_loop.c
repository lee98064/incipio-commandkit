/* homeKitListener_loop @ 0041cccc */

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
  
  (*(code *)PTR_HKCreateGlobalEventTable_00611cf4)();
  (*(code *)PTR_pthread_list_init_0061389c)();
  (*(code *)PTR_HomekitSerialThreadStart_00613638)();
  iVar3 = (*(code *)PTR_Phytrex_HMPairListIsEmpty_00613bf8)();
  if (iVar3 == 0) {
    pcVar7 = "1";
  }
  else {
    pcVar7 = "0";
  }
  uVar8 = param_1 >> 5;
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c4,pcVar7);
  uVar4 = (*(code *)PTR_calloc_00613a18)(100,1);
  (*(code *)PTR_HKSetupFirmwareVersion_00613c38)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5c8,uVar4);
  (*(code *)PTR_free_006119dc)(uVar4);
  uVar9 = 1 << (param_1 & 0x1f);
  uVar4 = (*(code *)PTR_calloc_00613a18)(10,1);
  (*(code *)PTR_HKSetupAccessoryType_00613080)(uVar4);
  (*(code *)PTR_mdnsPhytrex_HomekitUpdate_006120d0)(&DAT_005ab5cc,uVar4);
  (*(code *)PTR_free_006119dc)(uVar4);
  local_e4 = PTR_homekitUserSerialOpen_00613938;
  local_e0 = PTR_homekitUserSerialWrite_00612590;
  local_dc = PTR_homekitUserSerialRead_00612f38;
  local_d8 = PTR_homekitUserSerialClose_00613550;
  (*(code *)PTR_HomekitSerialFuncRegister_00613504)(&local_e4);
  (*(code *)PTR_HomekitSerialOpen_006116c0)(0);
  DAT_00613d50 = (*(code *)PTR_calloc_00613a18)(0x15c,1);
  (*(code *)PTR_Phytrex_HMGetAppConfig_00613c84)(DAT_00613d50 + 0xbc);
  local_b0[0x20] = param_1 + 1;
  (*(code *)PTR_HKCharacteristicInit_006133e4)(DAT_00613d50);
  (*(code *)PTR_HKSetPassword_006117bc)(*(undefined4 *)(DAT_00613d50 + 0x158));
  DAT_00613d4c = 0;
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
        iVar3 = (*(code *)PTR_select_00612e2c)(uVar2,local_b0,0,0,&local_ec);
        uVar5 = 0;
      } while (iVar3 + 1U < 2);
      if ((uVar9 & local_b0[uVar8]) == 0) break;
      piVar6 = (int *)(*(code *)PTR_calloc_00613a18)(0x24,1);
      iVar3 = (*(code *)PTR_accept_00611a00)(param_1,piVar6 + 1,piVar6 + 8);
      puVar1 = PTR_pthread_attr_init_00613510;
      *piVar6 = iVar3;
      if (iVar3 < 1) {
        (*(code *)PTR_free_006119dc)(piVar6);
      }
      else {
        (*(code *)puVar1)(auStack_d4);
        (*(code *)PTR_pthread_attr_setdetachstate_006138cc)(auStack_d4,1);
        iVar3 = (*(code *)PTR_pthread_create_006128a4)(auStack_f0,auStack_d4,&DAT_0041fb6c,piVar6);
        if (iVar3 < 0) {
          (*(code *)PTR_close_0061276c)(param_1);
          (*(code *)PTR_free_006119dc)(piVar6);
          return 1;
        }
        (*(code *)PTR_pthread_attr_destroy_00612994)(auStack_d4);
      }
      uVar5 = 0;
    }
  } while( true );
}

