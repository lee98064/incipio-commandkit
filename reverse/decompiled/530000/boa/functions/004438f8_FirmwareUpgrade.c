/* FirmwareUpgrade @ 004438f8 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FirmwareUpgrade(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  int local_60 [7];
  undefined4 local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  int local_30;
  
  local_68 = 0;
  local_44 = (*(code *)PTR_get_shm_id_0046a7d4)();
  if (DAT_0046f464 == 0) {
    (*(code *)PTR_system_0046ab18)("ifconfig br0 down 2> /dev/null");
  }
  (*(code *)PTR_apmib_get_0046aadc)(0x514,&local_68);
  get_bank_info(local_68,&local_70,&local_6c);
  iVar1 = FUN_00442e04(param_1);
  if (iVar1 == -1) {
LAB_00443b58:
    pcVar6 = "Invalid file format!";
LAB_00443b64:
    (*(code *)PTR_strcpy_0046ac60)(param_4,pcVar6);
LAB_00443c58:
    (*(code *)PTR_fprintf_0046a9ec)(*(undefined4 *)PTR_stderr_0046a7f0,"%s\n",param_4);
    (*(code *)PTR_clear_fwupload_shm_0046a8b8)(local_44);
    return 0;
  }
  iVar11 = 1;
  local_40 = 0;
  do {
    local_60[6] = iVar1 + 0x10;
    if (param_2 <= (uint)local_60[6]) {
LAB_00444194:
      DAT_0046f450 = 1;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      (*(code *)PTR_sprintf_0046a808)(local_60 + 1,"%d",local_44);
      (*(code *)PTR_write_line_to_file_0046ab10)("/var/fwd.ready",1,local_60 + 1);
      (*(code *)PTR_sync_0046a8fc)();
      uVar4 = (*(code *)PTR_exit_0046a75c)(0);
      return uVar4;
    }
    iVar12 = param_1 + iVar1;
    uVar10 = *(uint *)(iVar12 + 0xc);
    iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,&DAT_004568a4,4);
    local_3c = uVar10 + 0x10;
    local_38 = local_3c;
    if ((iVar2 == 0) || (iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,&DAT_004568ac,4), iVar2 == 0)
       ) {
      iVar2 = 1;
LAB_00443b78:
      if (0x400000 < (int)uVar10) {
        pcVar6 = "Image len exceed max size 0x%x ! len=0x%x</b><br>";
        uVar7 = 0x400000;
        uVar9 = uVar10;
LAB_00443bfc:
        (*(code *)PTR_sprintf_0046a808)(param_4,pcVar6,uVar7,uVar9);
        goto LAB_00443c58;
      }
      if ((iVar2 == 1) || (cVar5 = '\0', iVar2 == 3)) {
        local_30 = iVar2;
        iVar2 = (*(code *)PTR_fwChecksumOk_0046ac70)(param_1 + local_60[6],uVar10);
        if (iVar2 == 0) {
          uVar9 = (uint)*(ushort *)(param_1 + uVar10 + -2);
          pcVar6 = "Image checksum mismatched! len=0x%x, checksum=0x%x</b><br>";
          uVar7 = uVar10;
          goto LAB_00443bfc;
        }
        if (local_30 == 3) {
          local_60[6] = (*(code *)PTR_open_0046a710)
                                  ((&PTR_s__dev_mtdblock1_0046a618)[local_6c + -1],2);
          piVar8 = (int *)(&PTR_s__dev_mtdblock1_0046a618)[local_6c + -1];
          iVar2 = 1;
          if (iVar11 != 1) {
            iVar2 = 2;
          }
        }
        else {
          iVar2 = local_30;
          if (local_30 != 1) goto LAB_00443d8c;
          local_60[6] = (*(code *)PTR_open_0046a710)
                                  ((&PTR_s__dev_mtdblock0_0046a610)[local_6c + -1],2);
          piVar8 = (int *)(&PTR_s__dev_mtdblock0_0046a610)[local_6c + -1];
          iVar2 = 2;
          if (iVar11 == 1) {
            iVar2 = local_30;
          }
        }
      }
      else {
        for (iVar3 = 0; iVar3 < (int)uVar10; iVar3 = iVar3 + 1) {
          cVar5 = cVar5 + *(char *)(param_1 + local_60[6] + iVar3);
        }
        if (cVar5 != '\0') {
          (*(code *)PTR_sprintf_0046a808)
                    (param_4,"Image checksum mismatched! len=0x%x</b><br>",uVar10);
          goto LAB_00443c58;
        }
LAB_00443d8c:
        local_34 = (int *)0x450000;
        local_30 = iVar2;
        local_60[6] = (*(code *)PTR_open_0046a710)("/dev/mtdblock0",2);
        iVar2 = 1;
        if (iVar11 != 1) {
          iVar2 = 2;
        }
        piVar8 = local_34 + 0x1b00;
      }
      (*(code *)PTR_write_line_to_file_0046ab10)("/var/fwd.conf",iVar2,piVar8);
      if (local_60[6] == -1) {
        (*(code *)PTR_strcpy_0046ac60)(param_4,"File open failed!");
        iVar11 = 2;
      }
      else {
        if ((local_30 == 1) || (uVar4 = 0, local_30 != 3)) {
          uVar4 = *(undefined4 *)(iVar12 + 8);
        }
        (*(code *)PTR_lseek_0046aa9c)(local_60[6],uVar4,0);
        local_34 = local_60 + 1;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        (*(code *)PTR_sprintf_0046a808)(local_34,&DAT_00456c24,uVar4);
        (*(code *)PTR_write_line_to_file_0046ab10)("/var/fwd.conf",2,local_34);
        if (local_30 == 3) {
          local_3c = uVar10;
          (*(code *)PTR_system_0046ab18)("ifconfig br0 down 2> /dev/null");
          iVar11 = 0x10;
          (*(code *)PTR_system_0046ab18)("ifconfig eth0 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig eth1 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig ppp0 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-vxd down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-va0 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-va1 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-va2 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-va3 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds0 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds1 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds2 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds3 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds4 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds5 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds6 down 2> /dev/null");
          (*(code *)PTR_system_0046ab18)("ifconfig wlan0-wds7 down 2> /dev/null");
          (*(code *)PTR_kill_processes_0046a7ac)();
          (*(code *)PTR_sleep_0046ab0c)(2);
        }
        else {
          iVar11 = 0;
          if (local_30 == 1) {
            uVar4 = FUN_004437ec((&PTR_s__dev_mtdblock0_0046a610)[local_70 + -1],local_68);
            *(undefined4 *)(iVar12 + 8) = uVar4;
          }
        }
        piVar8 = local_60 + 1;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        (*(code *)PTR_sprintf_0046a808)(piVar8,&DAT_00456c24,local_3c);
        (*(code *)PTR_write_line_to_file_0046ab10)("/var/fwd.conf",2,piVar8);
        (*(code *)PTR_sprintf_0046a808)(piVar8,&DAT_00456eb4,iVar11 + iVar1);
        iVar11 = 2;
        (*(code *)PTR_write_line_to_file_0046ab10)("/var/fwd.conf",2,piVar8);
        iVar1 = local_38 + iVar1;
        (*(code *)PTR_sync_0046a8fc)();
        (*(code *)PTR_close_0046a694)(local_60[6]);
      }
    }
    else {
      iVar3 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,&DAT_004568b4,4);
      iVar2 = 2;
      if (iVar3 == 0) goto LAB_00443b78;
      iVar3 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,&DAT_004568bc,4);
      iVar2 = 3;
      if (iVar3 == 0) goto LAB_00443b78;
      iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,"COMPHS",6);
      if (((iVar2 != 0) && (iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,"COMPDS",6), iVar2 != 0))
         && (iVar2 = (*(code *)PTR_memcmp_0046a8d0)(iVar12,"COMPCS",6), iVar2 != 0)) {
        if (local_40 == 0) goto LAB_00443b58;
        goto LAB_00444194;
      }
      local_64 = 0;
      local_60[0] = 0;
      iVar2 = FUN_004428e4(param_1 + iVar1,DAT_0046f46c,&local_64,local_60);
      if ((local_60[0] == 0) || (local_64 == 0)) {
        pcVar6 = "Invalid configuration file!";
        goto LAB_00443b64;
      }
      (*(code *)PTR_strcpy_0046ac60)(param_4,"Update successfully!");
      iVar1 = iVar1 + iVar2;
    }
    local_40 = 1;
  } while( true );
}

