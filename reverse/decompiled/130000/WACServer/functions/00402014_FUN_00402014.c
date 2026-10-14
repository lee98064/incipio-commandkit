/* FUN_00402014 @ 00402014 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00402014(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  code *pcVar14;
  undefined1 local_840 [3];
  undefined1 uStack_83d;
  undefined1 local_83c [3];
  undefined1 uStack_839;
  undefined1 local_838 [3];
  undefined1 uStack_835;
  undefined1 local_834 [3];
  undefined1 uStack_831;
  undefined1 local_830 [3];
  undefined1 uStack_82d;
  undefined1 local_82c [3];
  undefined1 uStack_829;
  undefined1 auStack_828 [512];
  undefined1 auStack_628 [512];
  undefined1 auStack_428 [512];
  undefined1 auStack_228 [512];
  
  (*(code *)PTR_puts_00433294)("[WAC-Server: getDeviceInfo]=============  begin =====  \n");
  while( true ) {
    if (DAT_004335c0 != '\0') {
      return;
    }
    iVar7 = (*(code *)PTR_access_00433108)("/tmp/net/wac_device_info.txt",4);
    if (iVar7 == 0) break;
    (*(code *)PTR_puts_00433294)
              (
              "[WAC-Server: getDeviceInfo]============= wait for device info file ready, sleep (1) sec!"
              );
    (*(code *)PTR_sleep_0043327c)(1);
  }
  (*(code *)PTR_memcpy_004332a8)(local_840,&DAT_0041cdac,0x18);
  (*(code *)PTR_memset_00433190)(auStack_628,0,0x200);
  (*(code *)PTR_memset_00433190)(auStack_428,0,0x200);
  (*(code *)PTR_memset_00433190)(auStack_228,0,0x200);
  iVar7 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_device_info.txt","r");
  if (iVar7 != 0) {
    while( true ) {
      iVar9 = (*(code *)PTR_fgets_004332ac)(auStack_628,0x200,iVar7);
      if (iVar9 == 0) break;
      (*(code *)PTR_sscanf_004331a8)(auStack_628,"%s %s\n",auStack_428,auStack_228);
      iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,&DAT_0041ca54);
      if (iVar9 == 0) {
        (*(code *)PTR_sscanf_004331a8)
                  (auStack_228,"%02X:%02X:%02X:%02X:%02X:%02X",local_840,local_83c,local_838,
                   local_834,local_830,local_82c);
      }
      else {
        iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,&DAT_0041ca78);
        if (iVar9 == 0) {
          (*(code *)PTR_memset_00433190)(&DAT_00433408,0,0x40);
          iVar9 = (*(code *)PTR_MFiisFileExist_004331fc)("/tmp/net/asink_name");
          if ((iVar9 == 0) ||
             (iVar9 = (*(code *)PTR_fopen_00433194)("/tmp/net/asink_name","r"), iVar9 == 0)) {
            iVar9 = (*(code *)PTR_strlen_004330cc)(auStack_428);
            iVar8 = (*(code *)PTR_strlen_004330cc)(auStack_628);
            puVar12 = auStack_628 + iVar9 + 1;
            puVar13 = (undefined1 *)((iVar8 + -2) - iVar9);
            pcVar11 = &DAT_00433408;
            pcVar14 = (code *)PTR_strncpy_004331c8;
LAB_00402608:
            (*pcVar14)(pcVar11,puVar12,puVar13);
          }
          else {
            iVar8 = (*(code *)PTR_fgets_004332ac)(auStack_828,0x200,iVar9);
            if (iVar8 != 0) {
              (*(code *)PTR_strcpy_004332fc)(&DAT_00433408,auStack_828);
            }
            (*(code *)PTR_fclose_00433178)(iVar9);
          }
        }
        else {
          iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"model");
          if (iVar9 == 0) {
            puVar10 = &DAT_00433448;
          }
          else {
            iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"manufacturer");
            if (iVar9 == 0) {
              puVar10 = &DAT_00433488;
            }
            else {
              iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"firmwareRevision");
              if (iVar9 == 0) {
                puVar10 = &DAT_00433348;
              }
              else {
                iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"hardwareRevision");
                if (iVar9 == 0) {
                  puVar10 = &DAT_00433388;
                }
                else {
                  iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"serialNumber");
                  if (iVar9 != 0) {
                    iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"isUnconfigured");
                    if (iVar9 == 0) {
                      iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                      DAT_004334c8 = iVar9 != 0;
                    }
                    else {
                      iVar9 = (*(code *)PTR_strcmp_0043315c)(auStack_428,"supportsAirPlay");
                      puVar12 = auStack_428;
                      if (iVar9 == 0) {
                        iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                        DAT_004334c9 = iVar9 != 0;
                      }
                      else {
                        iVar9 = (*(code *)PTR_strcmp_0043315c)(puVar12,"supportsAirPrint");
                        if (iVar9 == 0) {
                          iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                          DAT_004334ca = iVar9 != 0;
                        }
                        else {
                          iVar9 = (*(code *)PTR_strcmp_0043315c)(puVar12,"supports2_4GHzWiFi");
                          if (iVar9 == 0) {
                            iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                            DAT_00433030 = iVar9 != 0;
                          }
                          else {
                            iVar9 = (*(code *)PTR_strcmp_0043315c)(puVar12,"supports5GHzWiFi");
                            if (iVar9 == 0) {
                              iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                              DAT_004334cb = iVar9 != 0;
                            }
                            else {
                              iVar9 = (*(code *)PTR_strcmp_0043315c)
                                                (puVar12,"supportsWakeOnWireless");
                              if (iVar9 != 0) {
                                iVar9 = (*(code *)PTR_strcmp_0043315c)(puVar12,"eaProtocols");
                                if (iVar9 == 0) {
                                  puVar10 = &DAT_004334d0;
                                }
                                else {
                                  iVar9 = (*(code *)PTR_strncmp_004331cc)
                                                    (puVar12,"eaBundleSeedID",10);
                                  if (iVar9 == 0) {
                                    puVar10 = (undefined *)0x433550;
                                  }
                                  else {
                                    iVar9 = (*(code *)PTR_strcmp_0043315c)(puVar12,"numEAProtocols")
                                    ;
                                    puVar13 = auStack_228;
                                    if (iVar9 != 0) {
                                      pcVar11 = "unknown title=%s, content=%s \n";
                                      pcVar14 = (code *)PTR_printf_004332e4;
                                      goto LAB_00402608;
                                    }
                                    puVar10 = &DAT_00433510;
                                  }
                                }
                                goto LAB_004025e8;
                              }
                              iVar9 = (*(code *)PTR_atoi_004330e0)(auStack_228);
                              DAT_004334cc = iVar9 != 0;
                            }
                          }
                        }
                      }
                    }
                    goto LAB_00402618;
                  }
                  puVar10 = &DAT_004333c8;
                }
              }
            }
          }
LAB_004025e8:
          (*(code *)PTR_strcpy_004332fc)(puVar10,auStack_228);
        }
      }
LAB_00402618:
      (*(code *)PTR_memset_00433190)(auStack_628,0,0x200);
      (*(code *)PTR_memset_00433190)(auStack_428,0,0x200);
      (*(code *)PTR_memset_00433190)(auStack_228,0,0x200);
    }
    (*(code *)PTR_fclose_00433178)(iVar7);
  }
  uVar6 = DAT_004334cc;
  uVar5 = DAT_004334ca;
  uVar4 = DAT_004334c9;
  uVar3 = DAT_004334c8;
  puVar2 = PTR_puts_00433294;
  puVar10 = PTR_myParam_0043316c;
  uVar1 = DAT_00433030;
  DAT_00433580 = PTR_myParam_0043316c;
  PTR_myParam_0043316c[10] = DAT_004334cb;
  *puVar10 = uStack_83d;
  puVar10[6] = uVar3;
  puVar10[7] = uVar4;
  puVar10[1] = uStack_839;
  puVar10[8] = uVar5;
  puVar10[9] = uVar1;
  puVar10[2] = uStack_835;
  puVar10[0xb] = uVar6;
  puVar10[3] = uStack_831;
  puVar10[4] = uStack_82d;
  puVar10[5] = uStack_829;
  *(undefined **)(puVar10 + 0x10) = &DAT_00433388;
  *(undefined **)(puVar10 + 0x14) = &DAT_004333c8;
  *(undefined **)(puVar10 + 0x1c) = &DAT_00433448;
  *(undefined **)(puVar10 + 0x18) = &DAT_00433408;
  *(undefined **)(puVar10 + 0xc) = &DAT_00433348;
  *(undefined **)(puVar10 + 0x20) = &DAT_00433488;
  *(undefined4 *)(puVar10 + 0x2c) = 0x433550;
  (*(code *)puVar2)("[WAC-Server: getDeviceInfo]=============  end =====  \n");
  return;
}

