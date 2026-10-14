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
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  char *pcVar15;
  undefined *puVar16;
  int iVar17;
  code *pcVar18;
  undefined1 auStack_848 [3];
  undefined1 local_845;
  undefined1 auStack_844 [3];
  undefined1 local_841;
  undefined1 auStack_840 [3];
  undefined1 local_83d;
  undefined1 auStack_83c [3];
  undefined1 local_839;
  undefined1 auStack_838 [3];
  undefined1 local_835;
  undefined1 auStack_834 [3];
  undefined1 local_831;
  undefined1 auStack_830 [512];
  undefined1 auStack_630 [512];
  undefined1 auStack_430 [512];
  char local_230 [512];
  char *local_30;
  
  (*(code *)PTR_puts_00433294)("[WAC-Server: getDeviceInfo]=============  begin =====  \n");
  while( true ) {
    if (DAT_00433584 != '\0') {
      return;
    }
    iVar9 = (*(code *)PTR_access_00433108)("/tmp/net/wac_device_info.txt",4);
    if (iVar9 == 0) break;
    (*(code *)PTR_puts_00433294)
              (
              "[WAC-Server: getDeviceInfo]============= wait for device info file ready, sleep (1) sec!"
              );
    (*(code *)PTR_sleep_0043327c)(1);
  }
  (*(code *)PTR_memcpy_004332a8)(auStack_848,&DAT_0041cf8c,0x18);
  (*(code *)PTR_memset_00433190)(auStack_630,0,0x200);
  (*(code *)PTR_memset_00433190)(auStack_430,0,0x200);
  (*(code *)PTR_memset_00433190)(local_230,0,0x200);
  iVar9 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_device_info.txt","r");
  if (iVar9 != 0) {
    iVar17 = 0;
    while( true ) {
      iVar12 = (*(code *)PTR_fgets_004332ac)(auStack_630,0x200,iVar9);
      if (iVar12 == 0) break;
      (*(code *)PTR_sscanf_004331a8)(auStack_630,"%s %s\n",auStack_430,local_230);
      iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,&DAT_0041cbe4);
      if (iVar12 == 0) {
        (*(code *)PTR_sscanf_004331a8)
                  (local_230,"%02X:%02X:%02X:%02X:%02X:%02X",auStack_848,auStack_844,auStack_840,
                   auStack_83c,auStack_838,auStack_834);
      }
      else {
        iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,&DAT_0041cc08);
        if (iVar12 == 0) {
          (*(code *)PTR_memset_00433190)(&DAT_00433408,0,0x40);
          iVar12 = (*(code *)PTR_MFiisFileExist_004331fc)("/tmp/net/asink_name");
          if ((iVar12 == 0) ||
             (iVar12 = (*(code *)PTR_fopen_00433194)("/tmp/net/asink_name","r"), iVar12 == 0)) {
            iVar12 = (*(code *)PTR_strlen_004330cc)(auStack_430);
            iVar10 = (*(code *)PTR_strlen_004330cc)(auStack_630);
            puVar14 = auStack_630 + iVar12 + 1;
            pcVar15 = (char *)((iVar10 + -2) - iVar12);
            pcVar13 = &DAT_00433408;
            pcVar18 = (code *)PTR_strncpy_004331c8;
LAB_004026d8:
            (*pcVar18)(pcVar13,puVar14,pcVar15);
          }
          else {
            iVar10 = (*(code *)PTR_fgets_004332ac)(auStack_830,0x200,iVar12);
            if (iVar10 != 0) {
              (*(code *)PTR_strcpy_004332fc)(&DAT_00433408,auStack_830);
            }
            (*(code *)PTR_fclose_00433178)(iVar12);
          }
        }
        else {
          iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"model");
          if (iVar12 == 0) {
            puVar16 = &DAT_00433448;
          }
          else {
            iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"manufacturer");
            if (iVar12 == 0) {
              puVar16 = &DAT_00433488;
            }
            else {
              iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"firmwareRevision");
              if (iVar12 == 0) {
                puVar16 = &DAT_00433348;
              }
              else {
                iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"hardwareRevision");
                if (iVar12 == 0) {
                  puVar16 = &DAT_00433388;
                }
                else {
                  iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"serialNumber");
                  if (iVar12 != 0) {
                    iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"isUnconfigured");
                    if (iVar12 == 0) {
                      iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                      DAT_004334c8 = iVar12 != 0;
                    }
                    else {
                      iVar12 = (*(code *)PTR_strcmp_0043315c)(auStack_430,"supportsAirPlay");
                      puVar14 = auStack_430;
                      if (iVar12 == 0) {
                        iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                        DAT_004334c9 = iVar12 != 0;
                      }
                      else {
                        iVar12 = (*(code *)PTR_strcmp_0043315c)(puVar14,"supportsAirPrint");
                        if (iVar12 == 0) {
                          iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                          DAT_004334ca = iVar12 != 0;
                        }
                        else {
                          iVar12 = (*(code *)PTR_strcmp_0043315c)(puVar14,"supports2_4GHzWiFi");
                          if (iVar12 == 0) {
                            iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                            DAT_00433030 = iVar12 != 0;
                          }
                          else {
                            iVar12 = (*(code *)PTR_strcmp_0043315c)(puVar14,"supports5GHzWiFi");
                            if (iVar12 == 0) {
                              iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                              DAT_004334cb = iVar12 != 0;
                            }
                            else {
                              iVar12 = (*(code *)PTR_strcmp_0043315c)
                                                 (puVar14,"supportsWakeOnWireless");
                              if (iVar12 == 0) {
                                iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                                DAT_004334cc = iVar12 != 0;
                              }
                              else {
                                iVar12 = (*(code *)PTR_strcmp_0043315c)
                                                   (puVar14,"supportsHKAccessoryProtocol");
                                if (iVar12 == 0) {
                                  iVar12 = (*(code *)PTR_atoi_004330e0)(local_230);
                                  DAT_004334cd = iVar12 != 0;
                                }
                                else {
                                  iVar12 = (*(code *)PTR_strcmp_0043315c)(puVar14,"eaProtocols");
                                  if (iVar12 == 0) {
                                    if ((local_230[0] != '\0') && (iVar17 < 0x10)) {
                                      local_30 = local_230;
                                      iVar12 = (*(code *)PTR_strlen_004330cc)(local_230);
                                      uVar11 = (*(code *)PTR_malloc_00433280)(iVar12 + 1);
                                      (&DAT_004334d0)[iVar17] = uVar11;
                                      iVar17 = iVar17 + 1;
                                      (*(code *)PTR_strcpy_004332fc)(uVar11,local_30);
                                    }
                                  }
                                  else {
                                    iVar12 = (*(code *)PTR_strncmp_004331cc)
                                                       (puVar14,"eaBundleSeedID",10);
                                    if (iVar12 == 0) {
                                      puVar16 = &DAT_00433514;
                                      goto LAB_0040236c;
                                    }
                                    iVar12 = (*(code *)PTR_strcmp_0043315c)
                                                       (puVar14,"numEAProtocols");
                                    pcVar15 = local_230;
                                    if (iVar12 != 0) {
                                      pcVar13 = "unknown title=%s, content=%s \n";
                                      pcVar18 = (code *)PTR_printf_004332e4;
                                      goto LAB_004026d8;
                                    }
                                    DAT_00433510 = (*(code *)PTR_atoi_004330e0)(pcVar15);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_004026e8;
                  }
                  puVar16 = &DAT_004333c8;
                }
              }
            }
          }
LAB_0040236c:
          (*(code *)PTR_strcpy_004332fc)(puVar16,local_230);
        }
      }
LAB_004026e8:
      (*(code *)PTR_memset_00433190)(auStack_630,0,0x200);
      (*(code *)PTR_memset_00433190)(auStack_430,0,0x200);
      (*(code *)PTR_memset_00433190)(local_230,0,0x200);
    }
    (*(code *)PTR_fclose_00433178)(iVar9);
  }
  puVar2 = PTR_printf_004332e4;
  puVar16 = PTR_myParam_0043316c;
  *PTR_myParam_0043316c = local_845;
  puVar16[1] = local_841;
  puVar16[2] = local_83d;
  puVar16[3] = local_839;
  puVar16[4] = local_835;
  puVar16[5] = local_831;
  (*(code *)puVar2)("[WAC-Server: mac here... =%02X:%02X:%02X:%02X:%02X:%02X \n",local_845,local_841
                    ,local_83d,local_839,local_835,local_831);
  DAT_00433544 = puVar16;
  *(undefined **)(puVar16 + 0x14) = &DAT_00433388;
  uVar11 = DAT_00433510;
  *(undefined **)(puVar16 + 0x18) = &DAT_004333c8;
  uVar4 = DAT_004334c9;
  uVar3 = DAT_004334c8;
  *(undefined **)(puVar16 + 0x20) = &DAT_00433448;
  uVar5 = DAT_004334ca;
  uVar1 = DAT_00433030;
  *(undefined **)(puVar16 + 0x1c) = &DAT_00433408;
  uVar7 = DAT_004334cc;
  uVar6 = DAT_004334cb;
  *(undefined **)(puVar16 + 0x10) = &DAT_00433348;
  uVar8 = DAT_004334cd;
  puVar2 = PTR_puts_00433294;
  *(undefined **)(puVar16 + 0x24) = &DAT_00433488;
  puVar16[0x2c] = (char)uVar11;
  puVar16[10] = uVar6;
  *(undefined4 **)(puVar16 + 0x28) = &DAT_004334d0;
  *(undefined **)(puVar16 + 0x30) = &DAT_00433514;
  puVar16[6] = uVar3;
  puVar16[7] = uVar4;
  puVar16[8] = uVar5;
  puVar16[9] = uVar1;
  puVar16[0xb] = uVar7;
  puVar16[0xc] = uVar8;
  (*(code *)puVar2)("[WAC-Server: getDeviceInfo]=============  end =====  \n");
  return;
}

