/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 00401cb8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00401eb8();
  iVar1 = FUN_0041c460();
  return iVar1;
}


/* entry @ 00401d50 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_0043314c;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_004331a0)
            (PTR_main_0043318c,param_2,&stack0x00000004,PTR__init_0043323c);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00401db0 @ 00401db0 */

void FUN_00401db0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00433058[0x3320] == '\0') {
    if (PTR___cxa_finalize_00433290 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00433290)(*(undefined4 *)PTR_LOOP_0043305c);
    }
    puVar1 = PTR_DAT_00433058;
    puVar4 = PTR_DAT_00433058 + 0x3008;
    iVar5 = (int)PTR___DTOR_END___00433060 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3324);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3324) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00433220 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00433220)(PTR_t_in_1800__00433064 + 0x2b00);
    }
    PTR_DAT_00433058[0x3320] = 1;
  }
  return;
}


/* FUN_00401eb8 @ 00401eb8 */

void FUN_00401eb8(void)

{
  if (PTR___register_frame_info_004332c0 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_004332c0)
              (PTR_t_in_1800__00433064 + 0x2b00,PTR_DAT_00433058 + 0x3328);
  }
  if (*(int *)(PTR_DAT_00433058 + 0x3010) != 0) {
    if (PTR__Jv_RegisterClasses_004330b0 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_004330b0)(PTR_DAT_00433058 + 0x3010);
      return;
    }
  }
  return;
}


/* FUN_00401f50 @ 00401f50 */

void FUN_00401f50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = 1;
  do {
    puVar5 = (undefined4 *)(param_2 + iVar3 * 4);
    do {
      iVar4 = iVar3;
      if (param_1 <= iVar4) {
        return;
      }
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      iVar1 = (*(code *)PTR_strcmp_0043315c)(uVar2,&DAT_0041c990);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    iVar3 = iVar4 + 2;
    (*(code *)PTR_strcpy_004332fc)(&g_InputIface,*(undefined4 *)(param_2 + (iVar4 + 1) * 4));
  } while( true );
}


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


/* FUN_004027e8 @ 004027e8 */

void FUN_004027e8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_state.txt",&DAT_0041cbf4);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_fileno_004330d8)(iVar1);
    iVar3 = (*(code *)PTR_flock_004331dc)(uVar2,2);
    if (iVar3 == 0) {
      (*(code *)PTR_printf_004332e4)("[WAC-Server : updateWACState] %d \n",param_1);
      (*(code *)PTR_fprintf_00433214)(iVar1,&DAT_0041cc1c,param_1);
      uVar2 = (*(code *)PTR_fileno_004330d8)(iVar1);
      (*(code *)PTR_flock_004331dc)(uVar2,8);
    }
                    /* WARNING: Could not recover jumptable at 0x004028dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_fclose_00433178)(iVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00402904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_printf_004332e4)
            ("[WAC-Server : updateWACState] can not open file : %s \n","/tmp/net/wac_state.txt");
  return;
}


/* main @ 0040290c */

undefined4 main(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  (*(code *)PTR_printf_004332e4)
            ("[WAC-Server]============= WAC main() ===== start here!! WAC_DEVICE_INFO_FILE= [%s] \n\n"
             ,"/tmp/net/wac_device_info.txt");
  FUN_00401f50(param_1,param_2);
  FUN_00402014();
  FUN_004027e8(0xffffffff);
  (*(code *)PTR_puts_00433294)("[WAC-Server]============= WAC main() ===== call server start !!\n");
  iVar1 = (*(code *)PTR_WACServerStart_004331b8)(&DAT_00433580,FUN_00402a6c);
  if (iVar1 != 0) {
    (*(code *)PTR_puts_00433294)("[WAC-Server] retry start WAC server before sleep 1 sec! ");
    (*(code *)PTR_sleep_0043327c)(1);
    iVar1 = (*(code *)PTR_WACServerStart_004331b8)(&DAT_00433580,FUN_00402a6c);
    if (iVar1 != 0) goto LAB_00402a44;
  }
  while( true ) {
    if (DAT_0043357c != '\0') {
      (*(code *)PTR_WACServerStop_004332d8)(&DAT_00433580);
    }
    if (DAT_004335c0 != '\0') break;
    (*(code *)PTR_sleep_0043327c)(1);
  }
LAB_00402a44:
  (*(code *)PTR_puts_00433294)("[WAC-Server]============= WAC main() ===== stop! \n");
  return 0;
}


/* FUN_00402a6c @ 00402a6c */

void FUN_00402a6c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    DAT_0043357c = 1;
    (*(code *)PTR_puts_00433294)("[WACCallbackFunc]: should stop !! ");
  }
  switch(param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 4;
    break;
  case 5:
    FUN_004027e8(5);
    DAT_0043357c = 1;
    return;
  case 6:
    uVar1 = 6;
    break;
  default:
    return;
  }
  FUN_004027e8(uVar1);
  return;
}


/* PlatformSWAPStop @ 00402b50 */

undefined4 PlatformSWAPStop(void)

{
  undefined1 auStack_88 [128];
  
  (*(code *)PTR_memset_00433190)(auStack_88,0,0x80);
  (*(code *)PTR_sprintf_00433144)(auStack_88,"echo 1 > %s;","/tmp/net/wac_notify_stop_swap.txt");
  (*(code *)PTR_system_00433284)(auStack_88);
  return 0;
}


/* PlatformSWAPStart @ 00402bcc */

undefined4 PlatformSWAPStart(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_2 != 0) {
    (*(code *)PTR_printf_004332e4)("[WAC-Server] PlatformSWAPStart : inIELen=[%d] \n");
    if (param_1 == (undefined1 *)0x0) {
      pcVar1 = "[WAC-Server] inIE is NULL ";
      pcVar4 = (code *)PTR_puts_00433294;
    }
    else {
      pcVar1 = (char *)(*(code *)PTR_fopen_00433194)("/tmp/net/apple_ie.txt",&DAT_0041cbf4);
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR_printf_004332e4)
                  ("[WAC-Server] PlatformSWAPStart can not open file : %s \n",
                   "/tmp/net/apple_ie.txt");
        goto LAB_00402d34;
      }
      uVar2 = (*(code *)PTR_fileno_004330d8)(pcVar1);
      iVar3 = (*(code *)PTR_flock_004331dc)(uVar2,2);
      pcVar4 = (code *)PTR_fclose_00433178;
      if (iVar3 == 0) {
        (*(code *)PTR_printf_004332e4)
                  ("[WAC-Server] PlatformSWAPStart open file : %s \n","/tmp/net/apple_ie.txt");
        for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
          (*(code *)PTR_fprintf_00433214)(pcVar1,&DAT_0041ce7c,*param_1);
          param_1 = param_1 + 1;
        }
        uVar2 = (*(code *)PTR_fileno_004330d8)(pcVar1);
        (*(code *)PTR_flock_004331dc)(uVar2,8);
        pcVar4 = (code *)PTR_fclose_00433178;
      }
    }
    (*pcVar4)(pcVar1);
  }
LAB_00402d34:
  (*(code *)PTR_system_00433284)("ls /var/tmp/net");
  return 0;
}


/* PlatformApplyAirPlayPlayPassword @ 00402d70 */

undefined4 PlatformApplyAirPlayPlayPassword(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (*(code *)PTR_puts_00433294)("[WAC]PlatformApplyAirPlayPlayPassword : begin --");
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_password_info.txt",&DAT_0041cbf4);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
      (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
      (*(code *)PTR_printf_004332e4)("[WAC]PASS=[%s] \n",param_1);
      (*(code *)PTR_fclose_00433178)(iVar1);
    }
  }
  (*(code *)PTR_puts_00433294)("[WAC]PlatformApplyAirPlayPlayPassword : end --");
  return 0;
}


/* PlatformApplyName @ 00402e5c */

undefined4 PlatformApplyName(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    (*(code *)PTR_strcpy_004332fc)(*(undefined4 *)(PTR_myParam_0043316c + 0x18),param_1);
    iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_applyName_info.txt",&DAT_0041cbf4);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
      (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
      (*(code *)PTR_printf_004332e4)("[WAC]NAME=[%s] \n",param_1);
      (*(code *)PTR_fclose_00433178)(iVar1);
    }
  }
  return 0;
}


/* PlatformJoinDestinationWiFiNetwork @ 00402f38 */

undefined4 PlatformJoinDestinationWiFiNetwork(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((param_1 != 0) &&
     (iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_ssid_info.txt",&DAT_0041cbf4),
     iVar1 != 0)) {
    uVar2 = (*(code *)PTR_strlen_004330cc)(param_1);
    (*(code *)PTR_fwrite_0043310c)(param_1,uVar2,1,iVar1);
    (*(code *)PTR_printf_004332e4)("[WAC]inSSID=[%s]\n",param_1);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  if ((param_2 != 0) &&
     (iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_pass_info.txt",&DAT_0041cbf4),
     iVar1 != 0)) {
    (*(code *)PTR_fwrite_0043310c)(param_2,param_3,1,iVar1);
    (*(code *)PTR_printf_004332e4)("[WAC]inWiFiPSK=[%s]\n",param_2);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_pass_len_info.txt",&DAT_0041cbf4);
  if (iVar1 != 0) {
    (*(code *)PTR_fprintf_00433214)(iVar1,"%d\n",param_3);
    (*(code *)PTR_printf_004332e4)("[WAC]inWiFiPSKLen=[%d] \n",param_3);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = (*(code *)PTR_fopen_00433194)("/tmp/net/wac_wifi_info_ready.txt",&DAT_0041cbf4);
  if (iVar1 != 0) {
    (*(code *)PTR_fputs_004330b8)(&DAT_0041d084,iVar1);
    (*(code *)PTR_fclose_00433178)(iVar1);
  }
  iVar1 = 0;
  do {
    iVar3 = (*(code *)PTR_access_00433108)("/var/run/WAC_JOIN_DONE",0);
    iVar1 = iVar1 + 1;
    if (iVar3 == 0) {
      (*(code *)PTR_puts_00433294)("[WAC]WAC Join ok");
      return 0;
    }
    (*(code *)PTR_sleep_0043327c)(1);
  } while (iVar1 != 0x5a);
  (*(code *)PTR_puts_00433294)("[WAC]WAC Join fail");
  return 0xffffe5a7;
}


/* PlatformRandomBytes @ 004031d0 */

/* WARNING: Removing unreachable block (ram,0x00403258) */

undefined4 PlatformRandomBytes(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_20;
  int local_1c;
  
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    (*(code *)PTR_gettimeofday_00433198)(&local_20,0);
    (*(code *)PTR_srand_0043317c)(local_1c + local_20);
    iVar1 = (*(code *)PTR_rand_004331e4)();
    *(char *)(param_1 + uVar2) = (char)(iVar1 % 0x100);
  }
  return 0;
}


/* PlatformStartmDNSResponder @ 004032b0 */

undefined4 PlatformStartmDNSResponder(void)

{
  return 0;
}


/* PlatformStopmDNSResponder @ 004032b8 */

undefined4 PlatformStopmDNSResponder(void)

{
  return 0;
}


/* FUN_004032c0 @ 004032c0 */

undefined8 FUN_004032c0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = CONCAT44(DAT_004335d8,DAT_004335dc);
  if (DAT_004335d8 == 0 && DAT_004335dc == 0) {
    lVar1 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
  }
  DAT_004335d8 = (int)((ulonglong)lVar1 >> 0x20);
  DAT_004335dc = (int)lVar1;
  lVar1 = lVar1 * CONCAT44(param_1,param_2);
  return CONCAT44((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
}


/* PlatformMFiAuthFinalize @ 00403354 */

void PlatformMFiAuthFinalize(void)

{
  if (DAT_004335d0 != 0) {
    (*(code *)PTR_free_00433088)();
    DAT_004335d0 = 0;
  }
  DAT_004335d4 = 0;
  return;
}


/* FUN_004033ac @ 004033ac */

undefined4
FUN_004033ac(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 local_res4 [12];
  
  iVar1 = -(param_4 + 0xfU & 0xfffffff8);
  local_res4[0] = param_2;
  lVar7 = (*(code *)PTR_UpTicks_004330a0)();
  lVar8 = FUN_004032c0(0,1);
  uVar6 = (uint)(lVar7 + lVar8);
  uVar5 = (uint)((ulonglong)(lVar7 + lVar8) >> 0x20);
  if (param_5 == 0) {
    (&stack0xffffffc8)[iVar1] = local_res4[0];
    (*(code *)PTR_memcpy_004332a8)(&stack0xffffffc9 + iVar1,param_3,param_4);
    iVar4 = 1;
    while (iVar2 = (*(code *)PTR_write_00433218)(param_1,&stack0xffffffc8 + iVar1,param_4 + 1),
          iVar2 != param_4 + 1) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) goto LAB_004035d4;
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_write_00433218)(param_1,local_res4,1), iVar1 != 1) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) goto LAB_004035d4;
      iVar4 = iVar4 + 1;
    }
    iVar4 = 1;
    while (iVar1 = (*(code *)PTR_read_004331d4)(param_1,param_5,param_6), iVar1 != param_6) {
      (*(code *)PTR_usleep_004332b4)(5000);
      uVar9 = (*(code *)PTR_UpTicks_004330a0)();
      uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
      if ((uVar5 <= uVar3) && ((uVar5 != uVar3 || (uVar6 <= (uint)uVar9)))) {
LAB_004035d4:
        (*(code *)PTR_printf_004332e4)
                  ("### MFi auth register 0x%02X failed after %d tries: %d\n",local_res4[0],iVar4,
                   0xffffe5d4);
        return 0xffffe5d4;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}


/* PlatformMFiAuthCopyCertificate @ 00403630 */

int PlatformMFiAuthCopyCertificate(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_28 [6];
  
  if (DAT_004335d4 == 0) {
    iVar1 = (*(code *)PTR_open_004330c8)("/dev/mfi_cp",2);
    if (iVar1 < 0) {
      piVar2 = (int *)(*(code *)PTR___errno_location_004330f8)();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        iVar5 = -0x1a2c;
      }
    }
    else {
      iVar5 = FUN_004033ac(iVar1,0x30,0,0,local_28,2);
      if (iVar5 == 0) {
        uVar4 = (uint)local_28[0];
        iVar5 = -0x1a57;
        if (uVar4 != 0) {
          iVar5 = -0x1a48;
          iVar3 = (*(code *)PTR_malloc_00433280)(uVar4);
          if (iVar3 != 0) {
            iVar5 = FUN_004033ac(iVar1,0x31,0,0,iVar3,uVar4);
            if (iVar5 == 0) {
              (*(code *)PTR_printf_004332e4)("MFi auth copy certificate done: %d bytes\n",uVar4);
              *param_1 = iVar3;
              *param_2 = uVar4;
            }
            else {
              (*(code *)PTR_free_00433088)(iVar3);
            }
          }
        }
      }
      (*(code *)PTR_close_00433098)(iVar1);
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00433280)(DAT_004335d4);
    if (iVar1 != 0) {
      (*(code *)PTR_memcpy_004332a8)(iVar1,DAT_004335d0,DAT_004335d4);
      *param_1 = iVar1;
      *param_2 = DAT_004335d4;
      return 0;
    }
    iVar5 = -0x1a48;
  }
  (*(code *)PTR_printf_004332e4)("### MFi auth copy certificate failed: %d\n",iVar5);
  return iVar5;
}


/* PlatformMFiAuthInitialize @ 0040382c */

undefined4 PlatformMFiAuthInitialize(void)

{
  PlatformMFiAuthCopyCertificate(&DAT_004335d0,&DAT_004335d4);
  return 0;
}


/* PlatformMFiAuthCreateSignature @ 00403858 */

int PlatformMFiAuthCreateSignature(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  undefined1 auStack_3e [34];
  
  iVar1 = (*(code *)PTR_open_004330c8)("/dev/mfi_cp",2);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_004330f8)();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -0x1a2c;
    }
    goto LAB_00403a54;
  }
  if (param_2 == 0x14) {
    local_40 = 0x14;
    (*(code *)PTR_memcpy_004332a8)(auStack_3e,param_1,0x14);
    iVar5 = FUN_004033ac(iVar1,0x20,&local_40,0x16,0,0);
    if (iVar5 == 0) {
      local_40 = CONCAT11(1,(undefined1)local_40);
      iVar5 = FUN_004033ac(iVar1,0x10,&local_40,1,0,0);
      if ((((iVar5 == 0) && (iVar5 = FUN_004033ac(iVar1,0x10,0,0,&local_40,1), iVar5 == 0)) &&
          (iVar5 = -0x1a2c, -1 < (short)local_40)) &&
         (iVar5 = FUN_004033ac(iVar1,0x11,0,0,&local_40,2), iVar5 == 0)) {
        uVar4 = (uint)local_40;
        if (uVar4 == 0) goto LAB_00403a9c;
        iVar5 = -0x1a48;
        iVar3 = (*(code *)PTR_malloc_00433280)(uVar4);
        if (iVar3 != 0) {
          iVar5 = FUN_004033ac(iVar1,0x12,0,0,iVar3,uVar4);
          if (iVar5 == 0) {
            (*(code *)PTR_printf_004332e4)("MFi auth created signature:%p, len=%d\n",iVar3,uVar4);
            *param_3 = iVar3;
            *param_4 = uVar4;
          }
          else {
            (*(code *)PTR_free_00433088)(iVar3);
          }
        }
      }
    }
  }
  else {
LAB_00403a9c:
    iVar5 = -0x1a57;
  }
  (*(code *)PTR_close_00433098)(iVar1);
  if (iVar5 == 0) {
    return 0;
  }
LAB_00403a54:
  (*(code *)PTR_printf_004332e4)("### MFi auth create signature failed: %d\n",iVar5);
  return iVar5;
}


/* MFiisFileExist @ 00403b48 */

uint MFiisFileExist(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_00433118)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* FUN_00403b80 @ 00403b80 */

void FUN_00403b80(int param_1,char param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  if (param_3 != 0) {
    if (param_2 != '\0') {
      param_3 = param_3 + 8;
LAB_00403c24:
                    /* WARNING: Could not recover jumptable at 0x00403c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR_sem_post_00433270)(param_3);
      return;
    }
    if (param_1 != 0) {
      iVar2 = (*(code *)PTR_HTTPHeaderMatchMethod_00433240)(param_1,&DAT_0041d1b8);
      puVar1 = PTR_malloc_00433280;
      if (iVar2 == 0) {
        *(int *)(param_3 + 0x1c) = param_1;
        iVar2 = (*(code *)puVar1)(0x888);
        *(int *)(param_3 + 0x1c) = iVar2;
        if (iVar2 != 0) {
          (*(code *)PTR_memcpy_004332a8)(iVar2,param_1,0x888);
          param_3 = param_3 + 0x24;
          goto LAB_00403c24;
        }
      }
    }
  }
  return;
}


/* FUN_00403c4c @ 00403c4c */

undefined4 FUN_00403c4c(int param_1)

{
  undefined4 uVar1;
  undefined1 local_88 [12];
  undefined1 local_7c [44];
  int local_50;
  int local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_3c;
  
  local_50 = param_1 + 0x24;
  local_48 = param_1 + 8;
  local_3c = param_1 + 0x34;
  local_40 = local_7c;
  local_44 = local_88;
  if (*(char *)(param_1 + 0x40) != '\0') {
    (*(code *)PTR_RemoveWACBonjourService_0043328c)(param_1);
    (*(code *)PTR_PlatformStopmDNSResponder_004331f8)();
    (*(code *)PTR_HTTPServerStop_004331d8)(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_free_00433088)();
    }
    (*(code *)PTR_PlatformMFiAuthFinalize_00433238)();
    if (*(char *)(param_1 + 0x20) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(local_50);
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(local_48);
    }
    if (*(code **)(param_1 + 0x44) != (code *)0x0) {
      (**(code **)(param_1 + 0x44))(param_1,5);
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00403cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)switchD_00403cd4::switchdataD_0041d2e0)();
  return uVar1;
}


/* WACServerStop @ 00404d7c */

undefined4 WACServerStop(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_pthread_join_004330a4;
  *(undefined1 *)(param_1 + 0x40) = 1;
  (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x3c),0);
  return 0;
}


/* WACServerStart @ 00404dbc */

int WACServerStart(int *param_1,int param_2)

{
  int iVar1;
  
  (*(code *)PTR_puts_00433294)("\n###################################");
  (*(code *)PTR_printf_004332e4)("# WAC SERVER v%d.%d\n",1,0xe);
  (*(code *)PTR_printf_004332e4)("# BUILD DATE: %s, %s\n","Nov  6 2015","19:03:08");
  (*(code *)PTR_puts_00433294)("###################################\n");
  param_1[0x11] = param_2;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  iVar1 = -0x1a31;
  if (*param_1 != 0) {
    iVar1 = (*(code *)PTR_pthread_create_004332dc)(param_1 + 0xf,0,FUN_00403c4c,param_1);
    if (iVar1 != 0) {
      (*(code *)PTR_printf_004332e4)("%s, %d create thread fail\n","WACServerStart",0xaf);
    }
  }
  return iVar1;
}


/* RemoveWACBonjourService @ 00404ed0 */

undefined4 RemoveWACBonjourService(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffe5cf;
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      (*(code *)PTR_DNSServiceRefDeallocate_00433250)();
      *(undefined4 *)(param_1 + 0x38) = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* RegisterWACBonjourService @ 00404f2c */

int RegisterWACBonjourService(int *param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar6;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int local_28;
  undefined4 local_24;
  
  if (param_1 != (int *)0x0) {
    (*(code *)PTR_sprintf_00433144)(auStack_58,&DAT_0041cc1c,param_2);
    uVar2 = 5;
    if (*(char *)(*param_1 + 0x28) == '\0') {
      uVar2 = 4;
    }
    (*(code *)PTR_sprintf_00433144)(auStack_48,&DAT_0041cc1c,uVar2);
    (*(code *)PTR_sprintf_00433144)(auStack_38,"%d.%d",1,0xe);
    (*(code *)PTR_TXTRecordCreate_00433114)(auStack_68,0,0);
    iVar3 = (*(code *)PTR_DataToHexStringWithColons_004332ec)(*param_1,6);
    if (iVar3 != 0) {
      uVar6 = (*(code *)PTR_strlen_004330cc)(iVar3);
      local_28 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"deviceid",uVar6,iVar3);
      (*(code *)PTR_free_00433088)(iVar3);
      iVar3 = local_28;
      if (local_28 == 0) {
        uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_58);
        iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,&DAT_0041d324,uVar6,auStack_58)
        ;
        if (iVar3 == 0) {
          uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_48);
          iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"features",uVar6,auStack_48);
          if (iVar3 == 0) {
            uVar6 = (*(code *)PTR_strlen_004330cc)(auStack_38);
            iVar3 = (*(code *)PTR_TXTRecordSetValue_00433244)(auStack_68,"srcvers",uVar6,auStack_38)
            ;
            if (iVar3 == 0) {
              uVar2 = 0;
              if (*PTR_g_InputIface_004331ec != '\0') {
                uVar2 = (*(code *)PTR_if_nametoindex_00433200)();
              }
              local_24 = *(undefined4 *)(*param_1 + 0x18);
              uVar1 = *(undefined2 *)(param_1[1] + 0x16);
              local_28 = uVar2;
              uVar2 = (*(code *)PTR_TXTRecordGetLength_004331c0)(auStack_68);
              uVar4 = (*(code *)PTR_TXTRecordGetBytesPtr_0043325c)(auStack_68);
              iVar5 = (*(code *)PTR_DNSServiceRegister_00433168)
                                (param_1 + 0xe,0,local_28,local_24,"_mfi-config._tcp","local",0,
                                 uVar1,uVar2,uVar4,0,0);
              iVar3 = -0x1a6a;
              if (iVar5 == 0) {
                iVar3 = 0;
              }
            }
          }
        }
      }
      goto LAB_004051f4;
    }
  }
  iVar3 = -0x1a31;
LAB_004051f4:
  local_28 = iVar3;
  (*(code *)PTR_TXTRecordDeallocate_00433188)(auStack_68);
  return local_28;
}


/* HTTPServerSend @ 00405238 */

undefined4 HTTPServerSend(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint local_98 [32];
  
  if (param_1 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      puVar2 = local_98;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      } while (puVar2 != (uint *)&stack0xffffffe8);
      puVar2 = local_98 + (*(uint *)(param_1 + 0x10) >> 5);
      uVar4 = 0;
      *puVar2 = *puVar2 | 1 << (*(uint *)(param_1 + 0x10) & 0x1f);
      do {
        iVar3 = (*(code *)PTR_select_00433264)(*(int *)(param_1 + 0x10) + 1,0,local_98,0,0);
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        iVar3 = (*(code *)PTR_write_00433218)
                          (*(undefined4 *)(param_1 + 0x10),param_2 + uVar4,param_3 - uVar4);
        uVar4 = uVar4 + iVar3;
        if (iVar3 < 1) {
          return 0xffffe5ad;
        }
        uVar1 = 0xffffe5a2;
      } while (uVar4 < param_3);
      if (uVar4 == param_3) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* HTTPServerShutdownSocket @ 0040534c */

undefined4 HTTPServerShutdownSocket(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0xffffe5cf;
  }
                    /* WARNING: Could not recover jumptable at 0x0040536c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_close_00433098)(*(undefined4 *)(param_1 + 0x10));
  return uVar1;
}


/* HTTPServerStop @ 00405374 */

undefined4 HTTPServerStop(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_pthread_join_004330a4;
  uVar2 = 0xffffe5cf;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 3;
    (*(code *)puVar1)(*(undefined4 *)(param_1 + 0x34),0);
    (*(code *)PTR_pthread_kill_004331e0)(*(undefined4 *)(param_1 + 0x34),0x10);
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPServerStart @ 004053dc */

undefined4 HTTPServerStart(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0xffffe5cf;
  if (param_1 != 0) {
    iVar2 = (*(code *)PTR_pthread_create_004332dc)(param_1 + 0x34,0,FUN_00405454,param_1);
    if (iVar2 == 0) {
      return 0;
    }
    (*(code *)PTR_perror_004332a0)("pthread_create perror");
    uVar1 = 0xffffe5b0;
  }
  *(undefined4 *)(param_1 + 8) = 4;
  return uVar1;
}


/* FUN_00405454 @ 00405454 */

undefined4 FUN_00405454(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28 [2];
  int local_20;
  
  puVar1 = PTR_malloc_00433280;
  local_28[0] = 0x1c;
  iVar3 = 0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 2;
    iVar3 = (*(code *)puVar1)(0x888);
    iVar2 = -0x1a48;
    if (iVar3 == 0) goto LAB_004055a4;
    (*(code *)PTR_HTTPHeaderClear_00433110)(iVar3);
    iVar2 = (*(code *)PTR_accept_0043322c)(*(undefined4 *)(param_1 + 0xc),param_1 + 0x14,local_28);
    *(int *)(param_1 + 0x10) = iVar2;
    if (-1 < iVar2) {
      do {
        iVar2 = (*(code *)PTR_SocketReadHTTPHeader_004332bc)(*(undefined4 *)(param_1 + 0x10),iVar3);
        if (iVar2 == 0) {
          iVar2 = (*(code *)PTR_SocketReadHTTPBody_00433174)(*(undefined4 *)(param_1 + 0x10),iVar3);
          if (iVar2 != 0) break;
          local_20 = iVar2;
          (**(code **)(param_1 + 0x30))(iVar3,0,*(undefined4 *)(param_1 + 0x38));
          (*(code *)PTR_HTTPHeaderClear_00433110)(iVar3);
          iVar2 = local_20;
        }
        else if (iVar2 != 0xb) {
          if (iVar2 == -0x1a61) {
            iVar2 = 0;
          }
          break;
        }
      } while (*(int *)(param_1 + 8) != 3);
      goto LAB_004055a4;
    }
    (*(code *)PTR_perror_004332a0)("accept perror");
  }
  iVar2 = -0x1a31;
LAB_004055a4:
  *(undefined4 *)(param_1 + 8) = 3;
  local_20 = iVar2;
  (**(code **)(param_1 + 0x30))(0,1,*(undefined4 *)(param_1 + 0x38));
  if ((local_20 != 0) && (iVar3 != 0)) {
    (*(code *)PTR_free_00433088)(iVar3);
  }
  (*(code *)PTR_close_00433098)(*(undefined4 *)(param_1 + 0xc));
  return 0;
}


/* HTTPServerCreate @ 00405628 */

int HTTPServerCreate(int param_1,int param_2,int param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [32];
  undefined1 *local_20;
  
  local_48 = 1;
  if ((param_1 == 0) || (piVar6 = param_4 + 5, param_2 == 0)) {
    iVar4 = -0x1a31;
  }
  else {
    param_4[5] = 0;
    param_4[2] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    param_4[10] = 0;
    param_4[0xb] = 0;
    *param_4 = param_1;
    param_4[0xc] = param_2;
    param_4[0xe] = param_3;
    puVar2 = PTR_in6addr_any_00433308;
    puVar1 = PTR_memcpy_004332a8;
    param_4[1] = DAT_004335f0;
    DAT_004335f0 = DAT_004335f0 + 1;
    *(undefined2 *)(param_4 + 5) = 10;
    (*(code *)puVar1)(param_4 + 7,puVar2,0x10);
    puVar1 = PTR_socket_00433268;
    *(undefined2 *)((int)param_4 + 0x16) = 0xc351;
    iVar3 = (*(code *)puVar1)(10,2,0);
    param_4[3] = iVar3;
    iVar4 = -0x1a49;
    if (-1 < iVar3) {
      (*(code *)PTR_setsockopt_004331f4)(iVar3,0xffff,4,&local_48,4);
      if (*PTR_g_InputIface_004331ec != '\0') {
        local_20 = auStack_40;
        (*(code *)PTR_strncpy_004331c8)(auStack_40,PTR_g_InputIface_004331ec,0x10);
        iVar4 = (*(code *)PTR_setsockopt_004331f4)(param_4[3],0xffff,0x19,local_20,0x20);
        if (iVar4 < 0) {
          (*(code *)PTR_perror_004332a0)("setsockopt - SO_BINDTODEVICE");
        }
      }
      iVar4 = (*(code *)PTR_bind_00433208)(param_4[3],piVar6,0x1c);
      if (iVar4 != 0) {
        piVar5 = (int *)(*(code *)PTR___errno_location_004330f8)();
        (*(code *)PTR_perror_004332a0)("Bind perror");
        puVar1 = PTR_bind_00433208;
        *(undefined2 *)((int)param_4 + 0x16) = 0;
        (*(code *)puVar1)(param_4[3],piVar6,0x1c);
        local_44 = 0x1c;
        iVar4 = (*(code *)PTR_getsockname_00433080)(param_4[3],piVar6,&local_44);
        if (iVar4 != 0) {
          local_20 = (undefined1 *)*piVar5;
          if (local_20 == (undefined1 *)0x0) {
            local_20 = (undefined1 *)0xffffe5d4;
          }
          (*(code *)PTR_perror_004332a0)("Bind perror");
          iVar4 = 4;
          goto LAB_00405868;
        }
      }
      local_20 = (undefined1 *)(*(code *)PTR_listen_004331ac)(param_4[3],1);
      iVar4 = 1;
      if (local_20 != (undefined1 *)0x0) {
        iVar4 = 4;
      }
      goto LAB_00405868;
    }
  }
  local_20 = (undefined1 *)iVar4;
  iVar4 = 4;
LAB_00405868:
  param_4[2] = iVar4;
  return (int)local_20;
}


/* HTTPHeaderClear @ 00405890 */

void HTTPHeaderClear(int param_1)

{
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}


/* FUN_0040589c @ 0040589c */

void FUN_0040589c(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_DataToHexString_004332f8)
                    (*(undefined4 *)(param_1 + 0x804),*(undefined4 *)(param_1 + 0x808));
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004058d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_00433088)(iVar1);
    return;
  }
  return;
}


/* CreateSimpleHTTPOKMessage @ 004058f0 */

undefined4 CreateSimpleHTTPOKMessage(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_malloc_00433280)(200);
  *param_1 = iVar1;
  uVar2 = 0xffffe5b8;
  if (iVar1 != 0) {
    (*(code *)PTR_sprintf_00433144)
              (iVar1,"%s %s %s%s","HTTP/1.1",&DAT_0041d3c8,&DAT_0041d3cc,&DAT_0041d3d0);
    uVar2 = (*(code *)PTR_strlen_004330cc)(*param_1);
    *param_2 = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}


/* CreateSimpleHTTPMessage @ 004059a0 */

undefined4 CreateSimpleHTTPMessage(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar1 = 0xffffe5cf;
  }
  else {
    uVar1 = 0xffffe5cf;
    if ((param_2 != 0) && (param_3 != 0)) {
      iVar2 = (*(code *)PTR_malloc_00433280)(0x800);
      *param_4 = iVar2;
      uVar1 = 0xffffe5b8;
      if (iVar2 != 0) {
        (*(code *)PTR_sprintf_00433144)
                  (iVar2,"%s %s %s%s%s %s%s%s %d%s","HTTP/1.1",&DAT_0041d3c8,&DAT_0041d3cc,
                   &DAT_0041d3f4,"Content-Type:",param_1,&DAT_0041d3f4,"Content-Length:",param_3,
                   &DAT_0041d3d0);
        iVar2 = (*(code *)PTR_strlen_004330cc)(*param_4);
        *param_5 = iVar2 + param_3;
        iVar3 = *param_4;
        iVar2 = (*(code *)PTR_strlen_004330cc)(iVar3);
        (*(code *)PTR_memcpy_004332a8)(iVar3 + iVar2,param_2,param_3);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}


/* HTTPHeaderMatchURL @ 00405af4 */

undefined4 HTTPHeaderMatchURL(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmp_suffix_0043312c)
                    (*(undefined4 *)(param_1 + 0x83c),*(undefined4 *)(param_1 + 0x840),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* HTTPHeaderMatchMethod @ 00405b38 */

undefined4 HTTPHeaderMatchMethod(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_strnicmpx_004330f4)
                    (*(undefined4 *)(param_1 + 0x80c),*(undefined4 *)(param_1 + 0x810),param_2);
  uVar2 = 0xffffe5b9;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_00405b7c @ 00405b7c */

undefined4
FUN_00405b7c(char *param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5,
            undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_004330cc)();
  }
  pcVar10 = param_1 + param_2;
  uVar9 = 0;
  pcVar3 = param_1;
  if (param_3 != 0) {
    uVar9 = (*(code *)PTR_strlen_004330cc)(param_3);
  }
  do {
    while( true ) {
      do {
        pcVar8 = pcVar3;
        pcVar7 = param_1;
        if (pcVar10 <= pcVar7) {
          return 0xffffe5b9;
        }
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (param_1 = pcVar7 + 1, pcVar3 = pcVar8, cVar1 != '\n'));
      param_1 = pcVar7 + 1;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) {
        param_1 = param_1 + (*param_1 == '\n');
      }
      pcVar6 = pcVar8;
      pcVar3 = param_1;
      if (param_3 != 0) break;
      while (pcVar4 = pcVar6, pcVar4 < pcVar7) {
        pcVar6 = pcVar4 + 1;
        if (*pcVar4 == ':') {
          uVar9 = (int)pcVar4 - (int)pcVar8;
          goto LAB_00405cf4;
        }
      }
    }
  } while ((((uint)((int)pcVar7 - (int)pcVar8) <= uVar9) || (pcVar8[uVar9] != ':')) ||
          (iVar5 = (*(code *)PTR_strnicmp_00433130)(pcVar8,param_3,uVar9), iVar5 != 0));
LAB_00405cf4:
  pcVar3 = pcVar8 + uVar9 + 1;
  do {
    while( true ) {
      pcVar6 = pcVar3;
      if (pcVar7 <= pcVar6) goto LAB_00405d90;
      if (*pcVar6 != ' ') break;
      pcVar3 = pcVar6 + 1;
    }
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 == '\t');
LAB_00405d90:
  do {
    bVar2 = param_1 < pcVar10;
    while( true ) {
      if ((!bVar2) || ((*param_1 != ' ' && (*param_1 != '\t')))) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = pcVar8;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar9;
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = pcVar6;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = (int)pcVar7 - (int)pcVar6;
        }
        if (param_8 == (undefined4 *)0x0) {
          return 0;
        }
        *param_8 = param_1;
        return 0;
      }
      do {
        pcVar3 = param_1;
        pcVar7 = pcVar3 + 1;
        param_1 = pcVar7;
        if (pcVar10 <= pcVar7) goto LAB_00405d90;
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (cVar1 != '\n'));
      param_1 = pcVar3 + 2;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) break;
      bVar2 = false;
    }
    param_1 = param_1 + (*param_1 == '\n');
  } while( true );
}


/* FUN_00405e74 @ 00405e74 */

void FUN_00405e74(void)

{
  int iVar1;
  undefined4 in_a3;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  
  puVar3 = &local_18;
  puVar4 = &local_14;
  uVar2 = 0;
  uVar5 = 0;
  iVar1 = FUN_00405b7c();
  local_10 = &stack0x00000010;
  if (iVar1 == 0) {
    (*(code *)PTR_VSNScanF_0043324c)(local_18,local_14,in_a3,local_10,uVar2,puVar3,puVar4,uVar5);
  }
  return;
}


/* FUN_00405ee4 @ 00405ee4 */

int FUN_00405ee4(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  puVar2 = PTR_memset_00433190;
  if (0x7ff < *(uint *)(param_1 + 0x800)) {
    return -0x1a31;
  }
  *(undefined **)(param_1 + 0x80c) = &DAT_0041d3d4;
  param_1[0x810] = '\0';
  param_1[0x811] = '\0';
  param_1[0x812] = '\0';
  param_1[0x813] = '\0';
  *(undefined **)(param_1 + 0x814) = &DAT_0041d3d4;
  param_1[0x818] = '\0';
  param_1[0x819] = '\0';
  param_1[0x81a] = '\0';
  param_1[0x81b] = '\0';
  (*(code *)puVar2)(param_1 + 0x81c,0,0x40);
  param_1[0x864] = -1;
  param_1[0x865] = -1;
  param_1[0x866] = -1;
  param_1[0x867] = -1;
  param_1[0x878] = '\0';
  param_1[0x879] = '\0';
  param_1[0x87a] = '\0';
  param_1[0x87b] = '\0';
  *(undefined **)(param_1 + 0x868) = &DAT_0041d3d4;
  *(undefined **)(param_1 + 0x85c) = &DAT_0041d3d4;
  param_1[0x860] = '\0';
  param_1[0x861] = '\0';
  param_1[0x862] = '\0';
  param_1[0x863] = '\0';
  param_1[0x86c] = '\0';
  param_1[0x86d] = '\0';
  param_1[0x86e] = '\0';
  param_1[0x86f] = '\0';
  param_1[0x870] = '\0';
  param_1[0x87c] = '\0';
  param_1[0x87d] = '\0';
  param_1[0x87e] = '\0';
  param_1[0x87f] = '\0';
  param_1[0x880] = '\0';
  if ((*(int *)(param_1 + 0x800) == 4) && (*param_1 == '$')) {
    param_1[0x810] = '\0';
    param_1[0x811] = '\0';
    param_1[0x812] = '\0';
    param_1[0x813] = '\x01';
    param_1[0x870] = param_1[1];
    *(uint *)(param_1 + 0x87c) = (uint)*(ushort *)(param_1 + 2);
    param_1[0x878] = '\0';
    param_1[0x879] = '\0';
    param_1[0x87a] = '\0';
    param_1[0x87b] = '\0';
    *(char **)(param_1 + 0x80c) = param_1;
    return 0;
  }
  pcVar7 = param_1 + *(int *)(param_1 + 0x800);
  pcVar6 = param_1;
  do {
    if (pcVar7 <= pcVar6) {
      return -0x1a56;
    }
    cVar1 = *pcVar6;
    pcVar3 = pcVar6 + 1;
    if (cVar1 == ' ') {
      pcVar3 = pcVar6 + 1;
      *(int *)(param_1 + 0x810) = (int)pcVar6 - (int)param_1;
      *(char **)(param_1 + 0x80c) = param_1;
      *(char **)(param_1 + 0x814) = pcVar3;
      pcVar6 = pcVar3;
      goto LAB_00406010;
    }
    pcVar6 = pcVar3;
  } while (cVar1 != '/');
  *(char **)(param_1 + 0x85c) = param_1;
  do {
    pcVar6 = pcVar3;
    if (pcVar7 <= pcVar6) break;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != ' ');
  *(int *)(param_1 + 0x860) = (int)pcVar6 - (int)param_1;
  if (pcVar7 <= pcVar6) {
    return -0x1a56;
  }
  iVar5 = 0;
  iVar4 = 0;
  while (pcVar3 = pcVar6 + 1, pcVar3 < pcVar7) {
    iVar4 = (int)*pcVar3;
    if ((iVar4 < 0x30) || (0x39 < iVar4)) break;
    iVar5 = iVar4 + -0x30 + iVar5 * 10;
    pcVar6 = pcVar3;
  }
  pcVar6 = pcVar6 + 2;
  if (iVar4 != 0x20) {
    pcVar6 = pcVar3;
  }
  *(int *)(param_1 + 0x864) = iVar5;
  *(char **)(param_1 + 0x868) = pcVar6;
  pcVar8 = pcVar6;
  do {
    pcVar3 = pcVar8;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar8 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x86c) = (int)pcVar3 - (int)pcVar6;
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
LAB_00406188:
  if (pcVar3 + 1 < pcVar7) {
    iVar4 = FUN_00405b7c(param_1,*(undefined4 *)(param_1 + 0x800),"Connection",0,0,&local_20,
                         local_1c,0);
    if (iVar4 == 0) {
      pcVar6 = "close";
    }
    else {
      local_20 = *(undefined4 *)(param_1 + 0x85c);
      local_1c[0] = *(undefined4 *)(param_1 + 0x860);
      pcVar6 = "HTTP/1.0";
    }
    iVar4 = (*(code *)PTR_strnicmpx_004330f4)(local_20,local_1c[0],pcVar6);
    param_1[0x880] = iVar4 != 0;
    FUN_00405e74(param_1,*(undefined4 *)(param_1 + 0x800),"Content-Length",&DAT_0041d448,
                 param_1 + 0x878);
    return 0;
  }
  return -0x1a56;
  while (pcVar6 = pcVar8 + 1, *pcVar8 != ' ') {
LAB_00406010:
    pcVar8 = pcVar6;
    if (pcVar7 <= pcVar8) break;
  }
  *(int *)(param_1 + 0x818) = (int)pcVar8 - (int)pcVar3;
  if (pcVar7 <= pcVar8) {
    return -0x1a56;
  }
  iVar4 = (*(code *)PTR_URLParseComponents_004332a4)
                    (pcVar3,pcVar3 + ((int)pcVar8 - (int)pcVar3),param_1 + 0x81c,0);
  pcVar8 = pcVar8 + 1;
  if (iVar4 != 0) {
    return iVar4;
  }
  *(char **)(param_1 + 0x85c) = pcVar8;
  pcVar6 = pcVar8;
  do {
    pcVar3 = pcVar6;
    if ((pcVar7 <= pcVar3) || (*pcVar3 == '\r')) break;
    pcVar6 = pcVar3 + 1;
  } while (*pcVar3 != '\n');
  *(int *)(param_1 + 0x860) = (int)pcVar3 - (int)pcVar8;
  if (pcVar7 <= pcVar3) {
    return -0x1a56;
  }
  goto LAB_00406188;
}


/* SocketReadHTTPBody @ 00406270 */

undefined4 SocketReadHTTPBody(uint param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint local_98 [32];
  uint uStack_18;
  
  uVar1 = 0xffffe5cf;
  if (param_2 != 0) {
    puVar2 = local_98;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (puVar2 != &uStack_18);
    puVar2 = local_98 + (param_1 >> 5);
    *puVar2 = *puVar2 | 1 << (param_1 & 0x1f);
    while( true ) {
      if ((*(int *)(param_2 + 0x878) == 0) &&
         (*(uint *)(param_2 + 0x87c) <= *(uint *)(param_2 + 0x808))) {
        return 0;
      }
      iVar3 = (*(code *)PTR_select_00433264)(param_1 + 1,local_98,0,0,0);
      if ((iVar3 < 1) ||
         (iVar3 = (*(code *)PTR_read_004331d4)
                            (param_1,*(int *)(param_2 + 0x804) + *(int *)(param_2 + 0x808),
                             *(int *)(param_2 + 0x87c) - *(int *)(param_2 + 0x808)), iVar3 < 0))
      break;
      *(int *)(param_2 + 0x808) = *(int *)(param_2 + 0x808) + iVar3;
    }
    uVar1 = 0xffffe5ae;
  }
  return uVar1;
}


/* SocketReadHTTPHeader @ 00406390 */

int SocketReadHTTPHeader(undefined4 param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar5 = param_2 + *(int *)(param_2 + 0x800);
  pcVar7 = param_2;
  do {
    pcVar6 = *(char **)(param_2 + 0x808);
    if (pcVar6 == (char *)0x0) {
      while (pcVar6 = (char *)(*(code *)PTR_read_004331d4)
                                        (param_1,pcVar5,param_2 + (0x800 - (int)pcVar5)),
            (int)pcVar6 < 0) {
        piVar1 = (int *)(*(code *)PTR___errno_location_004330f8)();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          iVar3 = -0x1a2c;
          goto LAB_00406594;
        }
        if (iVar3 != 4) {
          if (pcVar6 != (char *)0x0) {
            return iVar3;
          }
          return -0x1a61;
        }
      }
      iVar3 = 0;
LAB_00406594:
      if ((int)pcVar6 < 1) {
        if (pcVar6 != (char *)0x0) {
          return iVar3;
        }
        return -0x1a61;
      }
    }
    else {
      if (param_2 + (0x800 - (int)pcVar5) < pcVar6) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_004332d4)(pcVar5,*(undefined4 *)(param_2 + 0x804),pcVar6);
      param_2[0x808] = '\0';
      param_2[0x809] = '\0';
      param_2[0x80a] = '\0';
      param_2[0x80b] = '\0';
    }
    pcVar5 = pcVar5 + (int)pcVar6;
    *(char **)(param_2 + 0x800) = pcVar6 + *(int *)(param_2 + 0x800);
    if ((3 < (int)pcVar5 - (int)param_2) && (*param_2 == '$')) {
      pcVar7 = param_2 + 4;
LAB_00406540:
      *(int *)(param_2 + 0x800) = (int)pcVar7 - (int)param_2;
      iVar3 = FUN_00405ee4(param_2);
      if (iVar3 == 0) {
        *(int *)(param_2 + 0x808) = (int)pcVar5 - (int)pcVar7;
        *(char **)(param_2 + 0x804) = pcVar7;
      }
      return iVar3;
    }
    uVar2 = (int)pcVar5 - (int)pcVar7;
    pcVar6 = pcVar7;
    for (; pcVar6 = pcVar6 + 1, pcVar7 < pcVar5; pcVar7 = pcVar7 + 1) {
      if (*pcVar7 == '\n') {
        if (uVar2 < 3) {
          if (uVar2 != 2) break;
LAB_00406528:
          cVar4 = *pcVar6;
        }
        else {
          cVar4 = *pcVar6;
          if (cVar4 == '\r') {
            if (pcVar7[2] != '\n') goto LAB_00406528;
            pcVar7 = pcVar7 + 3;
            goto LAB_00406540;
          }
        }
        if (cVar4 == '\n') {
          pcVar7 = pcVar7 + 2;
          goto LAB_00406540;
        }
      }
      uVar2 = uVar2 - 1;
    }
  } while( true );
}


/* memrlen @ 004065b0 */

void memrlen(int param_1,int param_2)

{
  char *pcVar1;
  
  param_1 = param_1 + param_2;
  while ((param_2 != 0 && (pcVar1 = (char *)(param_1 + -1), param_1 = param_1 + -1, *pcVar1 == '\0')
         )) {
    param_2 = param_2 + -1;
  }
  return;
}


/* strnicmp @ 004065e0 */

undefined4 strnicmp(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  byte *pbVar4;
  
  pbVar4 = param_1 + param_3;
  do {
    if (pbVar4 <= param_1) {
      return 0;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)bVar1 * 2);
    sVar3 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)*param_2 * 2);
    param_2 = param_2 + 1;
    if (sVar2 < sVar3) {
      return 0xffffffff;
    }
    if (sVar3 < sVar2) {
      return 1;
    }
  } while (sVar2 != 0);
  return 0;
}


/* strnicmpx @ 00406668 */

undefined4 strnicmpx(byte *param_1,int param_2,byte *param_3)

{
  short sVar1;
  short sVar2;
  
  do {
    if (param_2 == 0) {
      if (*param_3 == 0) {
        return 0;
      }
      return 0xffffffff;
    }
    sVar1 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)*param_3 * 2);
    sVar2 = *(short *)(*(int *)PTR___ctype_tolower_0043309c + (uint)*param_1 * 2);
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
    if (sVar2 < sVar1) {
      return 0xffffffff;
    }
    if (sVar1 < sVar2) {
      return 1;
    }
    param_3 = param_3 + 1;
  } while (sVar1 != 0);
  return 0;
}


/* strnicmp_suffix @ 004066f4 */

undefined4 strnicmp_suffix(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = (*(code *)PTR_strnlen_00433234)();
  uVar2 = (*(code *)PTR_strlen_004330cc)(param_3);
  if (uVar1 < uVar2) {
    return 0xffffffff;
  }
  uVar3 = strnicmpx(param_1 + (uVar1 - uVar2),uVar2,param_3);
  return uVar3;
}


/* VSNScanF @ 00406784 */

int VSNScanF(byte *param_1,int param_2,byte *param_3,uint *param_4)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte *pbVar18;
  byte *pbVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  short sVar24;
  uint uVar23;
  byte bVar27;
  byte *pbVar25;
  uint uVar26;
  uint uVar28;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_004330cc)();
  }
  puVar6 = PTR___ctype_b_004332c8;
  puVar5 = PTR___ctype_tolower_0043309c;
  pbVar13 = param_1 + param_2;
  iVar8 = 0;
  pbVar14 = param_1;
LAB_0040681c:
  do {
    iVar21 = *(int *)puVar6;
    pbVar19 = pbVar14;
    if ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0) {
      do {
        param_3 = param_3 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*param_3 * 2) & 0x20) != 0);
      do {
        pbVar19 = pbVar14;
        if (pbVar13 <= pbVar19) break;
        pbVar14 = pbVar19 + 1;
      } while ((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) != 0);
    }
    bVar27 = *param_3;
    if (bVar27 == 0) {
      return iVar8;
    }
    if (bVar27 == 0x25) {
      bVar2 = false;
      iVar22 = 0;
      bVar4 = false;
      while( true ) {
        while( true ) {
          while( true ) {
            pbVar14 = param_3 + 1;
            uVar15 = (uint)*pbVar14;
            if (uVar15 != 0x2a) break;
            bVar4 = true;
            param_3 = pbVar14;
          }
          if (uVar15 != 0x23) break;
          iVar22 = iVar22 + 1;
          param_3 = pbVar14;
        }
        if (uVar15 != 0x26) break;
        bVar2 = true;
        param_3 = pbVar14;
      }
      if ((*(ushort *)(iVar21 + uVar15 * 2) & 8) == 0) {
        uVar9 = 0x7fffffff;
        if (uVar15 == 0x2e) {
          uVar9 = *param_4;
          pbVar14 = param_3 + 2;
          if ((int)uVar9 < 0) {
            return iVar8;
          }
          param_4 = param_4 + 1;
        }
      }
      else {
        uVar9 = 0;
        do {
          bVar27 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          uVar9 = (bVar27 - 0x30) + uVar9 * 10;
        } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 8) != 0);
      }
      bVar27 = *pbVar14;
      if (bVar27 == 0x6c) {
        bVar17 = 0x6c;
        pbVar10 = pbVar14 + 1;
        if (pbVar14[1] == 0x6c) {
          bVar17 = 0x4c;
          pbVar10 = pbVar14 + 2;
        }
LAB_00406a30:
        bVar27 = *pbVar10;
      }
      else {
        if (0x6c < bVar27) {
          bVar16 = 0x7a;
          if (bVar27 != 0x74) goto LAB_004069d8;
LAB_00406a28:
          pbVar10 = pbVar14 + 1;
          bVar17 = bVar27;
          goto LAB_00406a30;
        }
        bVar16 = 0x6a;
        if (bVar27 != 0x68) {
LAB_004069d8:
          bVar17 = 0;
          pbVar10 = pbVar14;
          if (bVar27 != bVar16) goto LAB_00406a30;
          goto LAB_00406a28;
        }
        pbVar10 = pbVar14 + 1;
        bVar27 = *pbVar10;
        bVar17 = 0x68;
        if (bVar27 == 0x68) {
          bVar17 = 0x48;
          pbVar10 = pbVar14 + 2;
          goto LAB_00406a30;
        }
      }
      if (bVar27 == 0) {
        return iVar8;
      }
      param_3 = pbVar10 + 1;
      if (bVar27 == 0x69) {
        uVar15 = 0;
      }
      else {
        pbVar14 = pbVar19;
        if (bVar27 < 0x6a) {
          if (bVar27 == 0x62) {
            uVar15 = 2;
            goto LAB_00406f98;
          }
          if (bVar27 < 99) {
            if (bVar27 == 0x58) goto LAB_00406b18;
            if (bVar27 == 0x5b) {
              if (bVar17 != 0) {
                return iVar8;
              }
              bVar27 = *param_3;
              pbVar18 = param_3;
              if (bVar27 == 0x5e) {
                pbVar18 = pbVar10 + 2;
              }
              param_3 = pbVar18 + 1;
              if (*pbVar18 != 0x5d) {
                param_3 = pbVar18;
              }
              do {
                pbVar10 = param_3;
                param_3 = pbVar10 + 1;
                if (*pbVar10 == 0) {
                  return iVar8;
                }
              } while (*pbVar10 != 0x5d);
              if (bVar27 == 0x5e) {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar25 < pbVar10) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              else {
                while (((pbVar14 < pbVar13 && (*pbVar14 != 0)) && (pbVar7 = pbVar18, 0 < (int)uVar9)
                       )) {
                  do {
                    pbVar25 = pbVar7;
                    if (pbVar10 <= pbVar25) break;
                    pbVar7 = pbVar25 + 1;
                  } while (*pbVar25 != *pbVar14);
                  uVar9 = uVar9 - 1;
                  if (pbVar10 <= pbVar25) break;
                  pbVar14 = pbVar14 + 1;
                }
              }
              if ((pbVar19 == pbVar14) && (iVar22 == 0)) {
                return iVar8;
              }
              if (!bVar4) {
                pbVar10 = (byte *)*param_4;
                if (bVar2) {
                  puVar11 = param_4 + 1;
                  if (pbVar10 != (byte *)0x0) {
                    *(byte **)pbVar10 = pbVar19;
                  }
                  param_4 = param_4 + 2;
                  if ((int *)*puVar11 != (int *)0x0) {
                    *(int *)*puVar11 = (int)pbVar14 - (int)pbVar19;
                  }
                }
                else {
                  if (pbVar10 == (byte *)0x0) {
                    return iVar8;
                  }
                  for (; pbVar19 < pbVar14; pbVar19 = pbVar19 + 1) {
                    *pbVar10 = *pbVar19;
                    pbVar10 = pbVar10 + 1;
                  }
                  *pbVar10 = 0;
                  param_4 = param_4 + 1;
                }
                iVar8 = iVar8 + 1;
              }
            }
            else {
              if (bVar27 != 0x25) {
                return iVar8;
              }
              if (bVar17 != 0) {
                return iVar8;
              }
              if (uVar9 != 0x7fffffff) {
                return iVar8;
              }
              if (bVar4) {
                return iVar8;
              }
              if (pbVar13 <= pbVar19) {
                return iVar8;
              }
              pbVar14 = pbVar19 + 1;
              if (*pbVar19 != 0x25) {
                return iVar8;
              }
            }
          }
          else {
            if (bVar27 != 99) {
              uVar15 = 10;
              if (bVar27 != 100) {
                return iVar8;
              }
              bVar2 = pbVar19 < pbVar13;
              goto LAB_00406f9c;
            }
            if (bVar17 != 0) {
              return iVar8;
            }
            if (!bVar2) {
              if (uVar9 == 0x7fffffff) {
                uVar9 = 1;
              }
              if ((int)pbVar13 - (int)pbVar19 < (int)uVar9) {
                return iVar8;
              }
              if (bVar4) goto LAB_00406ba0;
              pbVar14 = (byte *)*param_4;
              if (pbVar14 == (byte *)0x0) {
                return iVar8;
              }
              while (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2) {
                bVar27 = *pbVar19;
                pbVar19 = pbVar19 + 1;
                *pbVar14 = bVar27;
                pbVar14 = pbVar14 + 1;
              }
              param_4 = param_4 + 1;
              goto LAB_0040739c;
            }
            if ((uint)((int)pbVar13 - (int)pbVar19) < uVar9) {
              uVar9 = (int)pbVar13 - (int)pbVar19;
            }
            if (!bVar4) {
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar19;
              }
              if ((uint *)*param_4 != (uint *)0x0) {
                *(uint *)*param_4 = uVar9;
              }
              pbVar19 = pbVar19 + uVar9;
              goto LAB_00407398;
            }
LAB_00406ba0:
            pbVar14 = pbVar19 + uVar9;
          }
          goto LAB_0040681c;
        }
        if (bVar27 == 0x70) {
          if (bVar17 == 0) {
            uVar15 = 0x10;
            bVar17 = 0x70;
          }
          else {
LAB_00406b18:
            uVar15 = 0x10;
          }
          goto LAB_00406f98;
        }
        if (bVar27 < 0x71) {
          if (bVar27 != 0x6e) {
            uVar15 = 8;
            if (bVar27 != 0x6f) {
              return iVar8;
            }
            bVar2 = pbVar19 < pbVar13;
            goto LAB_00406f9c;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          if (uVar9 != 0x7fffffff) {
            return iVar8;
          }
          if (bVar4) {
            return iVar8;
          }
          if ((int *)*param_4 == (int *)0x0) {
            return iVar8;
          }
          *(int *)*param_4 = (int)pbVar19 - (int)param_1;
          param_4 = param_4 + 1;
          goto LAB_0040681c;
        }
        uVar15 = 10;
        if ((bVar27 != 0x75) && (uVar15 = 0x10, bVar27 != 0x78)) {
          if (bVar27 != 0x73) {
            return iVar8;
          }
          if (bVar17 != 0) {
            return iVar8;
          }
          do {
            pbVar14 = pbVar19;
            if (pbVar13 <= pbVar14) break;
            pbVar19 = pbVar14 + 1;
          } while ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0);
          if (iVar22 == 0) {
            if (pbVar13 <= pbVar14) {
              return iVar8;
            }
            if (*pbVar14 == 0) {
              return iVar8;
            }
          }
          if (bVar4) {
            while ((((pbVar14 < pbVar13 && (*pbVar14 != 0)) &&
                    ((*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) == 0)) &&
                   (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))) {
              pbVar14 = pbVar14 + 1;
            }
          }
          else {
            pbVar19 = pbVar14;
            if (bVar2) {
              while (((pbVar19 < pbVar13 && (*pbVar19 != 0)) &&
                     (((*(ushort *)(iVar21 + (uint)*pbVar19 * 2) & 0x20) == 0 &&
                      (bVar2 = 0 < (int)uVar9, uVar9 = uVar9 - 1, bVar2))))) {
                pbVar19 = pbVar19 + 1;
              }
              puVar12 = (undefined4 *)*param_4;
              param_4 = param_4 + 1;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = pbVar14;
              }
              if ((int *)*param_4 != (int *)0x0) {
                *(int *)*param_4 = (int)pbVar19 - (int)pbVar14;
              }
            }
            else {
              pbVar19 = (byte *)*param_4;
              if (pbVar19 == (byte *)0x0) {
                return iVar8;
              }
              for (; pbVar14 < pbVar13; pbVar14 = pbVar14 + 1) {
                bVar27 = *pbVar14;
                if (((bVar27 == 0) || ((*(ushort *)(*(int *)puVar6 + (uint)bVar27 * 2) & 0x20) != 0)
                    ) || (bVar2 = (int)uVar9 < 1, uVar9 = uVar9 - 1, bVar2)) break;
                *pbVar19 = bVar27;
                pbVar19 = pbVar19 + 1;
              }
              *pbVar19 = 0;
              pbVar19 = pbVar14;
            }
            param_4 = param_4 + 1;
            iVar8 = iVar8 + 1;
            pbVar14 = pbVar19;
          }
          goto LAB_0040681c;
        }
      }
LAB_00406f98:
      do {
        bVar2 = pbVar19 < pbVar13;
        pbVar14 = pbVar19;
LAB_00406f9c:
      } while ((bVar2) &&
              (pbVar19 = pbVar14 + 1, (*(ushort *)(iVar21 + (uint)*pbVar14 * 2) & 0x20) != 0));
      bVar2 = false;
      if ((1 < (int)pbVar13 - (int)pbVar14) && (0 < (int)uVar9)) {
        if (*pbVar14 == 0x2d) {
          pbVar14 = pbVar14 + 1;
          uVar9 = uVar9 - 1;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          if (*pbVar14 == 0x2b) {
            pbVar14 = pbVar14 + 1;
            uVar9 = uVar9 - 1;
          }
        }
      }
      pbVar19 = pbVar14;
      if (uVar15 != 0) {
        if (uVar15 == 0x10) {
          if ((((int)pbVar13 - (int)pbVar14 < 2) || ((int)uVar9 < 2)) || (*pbVar14 != 0x30))
          goto LAB_004071fc;
          sVar24 = *(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2);
          sVar20 = 0x78;
        }
        else {
          if ((((uVar15 != 2) || ((int)pbVar13 - (int)pbVar14 < 2)) || ((int)uVar9 < 2)) ||
             (*pbVar14 != 0x30)) goto LAB_004071fc;
          sVar24 = *(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2);
          sVar20 = 0x62;
        }
        if (sVar24 == sVar20) {
          uVar9 = uVar9 - 2;
          pbVar19 = pbVar14 + 2;
        }
        goto LAB_004071fc;
      }
      if ((int)pbVar13 - (int)pbVar14 < 3) {
        if ((int)pbVar13 - (int)pbVar14 == 2) goto LAB_004070f8;
      }
      else {
        if ((int)uVar9 < 2) {
LAB_004070f8:
          if ((int)uVar9 < 1) goto LAB_004071f8;
        }
        else {
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2) == 0x78)) &&
             ((*(ushort *)(iVar21 + (uint)pbVar14[2] * 2) & 0x10) != 0)) {
            uVar9 = uVar9 - 2;
            uVar15 = 0x10;
            pbVar19 = pbVar14 + 2;
            goto LAB_004071fc;
          }
          if (((*pbVar14 == 0x30) && (*(short *)(*(int *)puVar5 + (uint)pbVar14[1] * 2) == 0x62)) &&
             ((byte)(pbVar14[2] - 0x30) < 2)) {
            uVar9 = uVar9 - 2;
            uVar15 = 2;
            pbVar19 = pbVar14 + 2;
            goto LAB_004071fc;
          }
        }
        if (*pbVar14 == 0x30) {
          if ((0x2f < pbVar14[1]) && (pbVar14[1] < 0x38)) {
            uVar9 = uVar9 - 1;
            uVar15 = 8;
            pbVar19 = pbVar14 + 1;
            goto LAB_004071fc;
          }
        }
      }
LAB_004071f8:
      uVar15 = 10;
LAB_004071fc:
      uVar28 = 0;
      uVar26 = 0;
      do {
        if ((pbVar13 <= pbVar19) || ((int)uVar9 < 1)) goto LAB_004072b0;
        uVar9 = uVar9 - 1;
        iVar22 = (uint)*pbVar19 * 2;
        uVar1 = *(ushort *)(iVar21 + iVar22);
        uVar23 = *pbVar19 - 0x30;
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 0x10) == 0) goto LAB_004072b0;
          uVar23 = (int)*(short *)(*(int *)puVar5 + iVar22) - 0x57;
        }
        if ((int)uVar15 <= (int)uVar23) goto LAB_004072b0;
        pbVar19 = pbVar19 + 1;
        uVar3 = (ulonglong)uVar28;
        uVar28 = uVar23 + (int)(uVar3 * uVar15);
        uVar26 = (uint)(uVar28 < uVar23) +
                 ((int)uVar23 >> 0x1f) + uVar15 * uVar26 + (int)(uVar3 * uVar15 >> 0x20);
      } while( true );
    }
    if (pbVar13 <= pbVar19) {
      return iVar8;
    }
    param_3 = param_3 + 1;
    if (*pbVar19 != bVar27) {
      return iVar8;
    }
    pbVar14 = pbVar19 + 1;
  } while( true );
LAB_004072b0:
  if (pbVar19 == pbVar14) {
    return iVar8;
  }
  pbVar14 = pbVar19;
  if (bVar4) goto LAB_0040681c;
  if (bVar2) {
    uVar28 = -uVar28;
    uVar26 = -(uint)(uVar28 != 0) - uVar26;
  }
  puVar11 = (uint *)*param_4;
  if (puVar11 == (uint *)0x0) {
    return iVar8;
  }
  if (bVar17 == 0x6a) {
LAB_00407388:
    puVar11[1] = uVar28;
    *puVar11 = uVar26;
  }
  else {
    if (bVar17 < 0x6b) {
      if (bVar17 == 0x4c) goto LAB_00407388;
      if (0x4c < bVar17) {
        if (bVar17 != 0x68) {
          return iVar8;
        }
        *(short *)puVar11 = (short)uVar28;
        param_4 = param_4 + 1;
        goto LAB_0040739c;
      }
      if (bVar17 != 0) {
        if (bVar17 != 0x48) {
          return iVar8;
        }
        *(char *)puVar11 = (char)uVar28;
        param_4 = param_4 + 1;
        goto LAB_0040739c;
      }
    }
    else if (bVar17 != 0x70) {
      if (bVar17 < 0x71) {
        if (bVar17 != 0x6c) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      else {
        if (bVar17 == 0x74) goto LAB_00407394;
        if (bVar17 != 0x7a) {
          return iVar8;
        }
        *puVar11 = uVar28;
      }
      goto LAB_00407398;
    }
LAB_00407394:
    *puVar11 = uVar28;
  }
LAB_00407398:
  param_4 = param_4 + 1;
LAB_0040739c:
  iVar8 = iVar8 + 1;
  pbVar14 = pbVar19;
  goto LAB_0040681c;
}


/* FUN_004073d8 @ 004073d8 */

undefined4 FUN_004073d8(byte *param_1,int param_2,int param_3,undefined1 *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_004330cc)();
  }
  puVar4 = PTR___ctype_b_004332c8;
  puVar3 = PTR___ctype_tolower_0043309c;
  pbVar5 = param_1 + param_2;
  do {
    uVar7 = 0;
    if (param_3 == 0) {
      return 0;
    }
    iVar6 = 0;
LAB_004074d4:
    do {
      if (pbVar5 <= param_1) {
        if (iVar6 == 0) {
          return 0xffffe5aa;
        }
        break;
      }
      bVar1 = *param_1;
      iVar8 = (int)(char)bVar1;
      param_1 = param_1 + 1;
      iVar9 = (uint)bVar1 * 2;
      uVar2 = *(ushort *)(*(int *)puVar4 + iVar9);
      if ((uVar2 & 8) == 0) {
        if ((uVar2 & 0x10) == 0) {
          if (iVar6 != 0) break;
          if (((iVar8 != 0x3a) && (iVar8 != 0x2d)) && (iVar8 != 0x20)) {
            return 0xffffe5aa;
          }
          goto LAB_004074d4;
        }
        uVar7 = *(short *)(*(int *)puVar3 + iVar9) + -0x57 + uVar7 * 0x10;
      }
      else {
        uVar7 = iVar8 + -0x30 + uVar7 * 0x10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 == 1);
    if (0xff < uVar7) {
      return 0xffffe5ca;
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = (char)uVar7;
      param_4 = param_4 + 1;
    }
    param_3 = param_3 + -1;
  } while( true );
}


/* FUN_0040754c @ 0040754c */

int FUN_0040754c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = (*(code *)PTR_malloc_00433280)(param_2 + 1);
      if (iVar1 != 0) {
        (*(code *)PTR_memcpy_004332a8)(iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + param_2) = 0;
      }
    }
  }
  return iVar1;
}


/* DataToHexStringWithColons @ 004075dc */

int DataToHexStringWithColons(undefined1 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == (undefined1 *)0x0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00433280)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      iVar4 = iVar1;
      for (uVar5 = 0; uVar5 < param_2; uVar5 = uVar5 + 1) {
        pcVar3 = "%02X:";
        if (uVar5 == param_2 - 1) {
          pcVar3 = "%02X";
        }
        iVar2 = (*(code *)PTR_sprintf_00433144)(iVar4,pcVar3,*param_1);
        iVar4 = iVar4 + iVar2;
        param_1 = param_1 + 1;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* FUN_004076dc @ 004076dc */

int FUN_004076dc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00433280)(param_2 * 3 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00433144)(iVar4,"%02X ",*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* DataToHexString @ 004077b0 */

int DataToHexString(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(code *)PTR_malloc_00433280)(param_2 * 2 + 1);
    if (iVar1 != 0) {
      uVar5 = 0;
      iVar4 = iVar1;
      while( true ) {
        puVar3 = (undefined1 *)(param_1 + uVar5);
        if (param_2 <= uVar5) break;
        uVar5 = uVar5 + 1;
        iVar2 = (*(code *)PTR_sprintf_00433144)(iVar4,&DAT_0041d450,*puVar3);
        iVar4 = iVar4 + iVar2;
      }
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return iVar1;
}


/* TLVGetNext @ 00407880 */

undefined4
TLVGetNext(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,
          uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  uVar2 = 0xffffe5b9;
  if (1 < (uint)((int)param_2 - (int)param_1)) {
    bVar1 = param_1[1];
    puVar3 = param_1 + 2 + bVar1;
    uVar2 = 0xffffe5a2;
    if ((param_1 <= puVar3) && (puVar3 <= param_2)) {
      uVar2 = 0;
      *param_3 = *param_1;
      *param_4 = param_1 + 2;
      *param_5 = (uint)bVar1;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = puVar3;
      }
    }
  }
  return uVar2;
}


/* URLParseComponents @ 004078e8 */

undefined4 URLParseComponents(char *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar3;
  char *pcVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  
  if (param_2 == (char *)0x0) {
    iVar1 = (*(code *)PTR_strlen_004330cc)();
    param_2 = param_1 + iVar1;
  }
  cVar3 = '\0';
  pcVar4 = param_1;
  while (pcVar4 < param_2) {
    cVar3 = *pcVar4;
    if (cVar3 == ':') goto LAB_0040798c;
    pcVar13 = (char *)0x0;
    if (cVar3 == '/') goto LAB_0040799c;
    pcVar14 = (char *)0x0;
    if ((cVar3 == '?') || (pcVar4 = pcVar4 + 1, cVar3 == '#')) goto LAB_004079a4;
  }
  if (cVar3 == ':') {
LAB_0040798c:
    pcVar13 = pcVar4;
    pcVar14 = param_1;
    param_1 = pcVar4 + 1;
  }
  else {
LAB_0040799c:
    pcVar13 = (char *)0x0;
    pcVar14 = (char *)0x0;
  }
LAB_004079a4:
  pcVar4 = (char *)0x0;
  if ((int)param_2 - (int)param_1 < 2) {
    pcVar11 = (char *)0x0;
LAB_00407a9c:
    pcVar10 = (char *)0x0;
    pcVar9 = (char *)0x0;
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)0x0;
    if ((*param_1 != '/') || (param_1[1] != '/')) goto LAB_00407a9c;
    pcVar7 = param_1 + 2;
    pcVar4 = pcVar7;
    do {
      param_1 = pcVar4;
      pcVar11 = pcVar7;
      if (((param_2 <= param_1) || (cVar3 = *param_1, cVar3 == '/')) || (cVar3 == '?')) break;
      pcVar4 = param_1 + 1;
    } while (cVar3 != '#');
    do {
      pcVar8 = pcVar11;
      pcVar11 = pcVar7;
      pcVar4 = param_1;
      if (param_1 <= pcVar8) goto LAB_00407a9c;
      pcVar11 = pcVar8 + 1;
      pcVar9 = pcVar7;
    } while (*pcVar8 != '@');
    do {
      pcVar6 = pcVar9;
      pcVar9 = (char *)0x0;
      if (pcVar8 <= pcVar6) {
        pcVar10 = (char *)0x0;
        break;
      }
      pcVar9 = pcVar6 + 1;
      pcVar10 = pcVar8;
    } while (*pcVar6 != ':');
    pcVar11 = pcVar8 + 1;
  }
  cVar3 = '\0';
  pcVar8 = param_1;
  do {
    pcVar2 = pcVar8;
    if (param_2 <= pcVar2) break;
    cVar3 = *pcVar2;
    if (cVar3 == '?') {
      pcVar12 = pcVar2 + 1;
      pcVar8 = pcVar12;
      goto LAB_00407af0;
    }
    pcVar8 = pcVar2 + 1;
  } while (cVar3 != '#');
  pcVar12 = (char *)0x0;
  pcVar5 = pcVar2;
  pcVar15 = (char *)0x0;
LAB_00407b1c:
  pcVar8 = (char *)0x0;
  if (cVar3 != '#') {
    param_2 = pcVar5;
    pcVar5 = (char *)0x0;
    goto LAB_00407b38;
  }
  goto LAB_00407b30;
  while( true ) {
    cVar3 = *pcVar5;
    pcVar8 = pcVar5 + 1;
    if (cVar3 == '#') break;
LAB_00407af0:
    pcVar5 = pcVar8;
    pcVar15 = pcVar5;
    if (param_2 <= pcVar5) goto LAB_00407b1c;
  }
LAB_00407b30:
  pcVar8 = pcVar5 + 1;
  pcVar5 = param_2;
LAB_00407b38:
  param_3[1] = (int)pcVar13 - (int)pcVar14;
  param_3[3] = (int)pcVar6 - (int)pcVar7;
  param_3[5] = (int)pcVar10 - (int)pcVar9;
  param_3[7] = (int)pcVar4 - (int)pcVar11;
  param_3[9] = (int)pcVar2 - (int)param_1;
  param_3[0xb] = (int)pcVar15 - (int)pcVar12;
  param_3[0xd] = (int)pcVar5 - (int)pcVar8;
  *param_3 = pcVar14;
  param_3[2] = pcVar7;
  param_3[4] = pcVar9;
  param_3[6] = pcVar11;
  param_3[8] = param_1;
  param_3[10] = pcVar12;
  param_3[0xc] = pcVar8;
  if ((pcVar2 <= param_1) || (pcVar4 = param_1 + 1, *param_1 != '/')) {
    pcVar4 = param_1;
  }
  param_3[0xe] = pcVar4;
  if ((pcVar2 <= param_1) || (pcVar4 = pcVar2 + -1, pcVar2[-1] != '/')) {
    pcVar4 = pcVar2;
  }
  param_3[0xf] = pcVar4;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_2;
  }
  return 0;
}


/* FUN_00407ce4 @ 00407ce4 */

int FUN_00407ce4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((longlong)param_1 * 1000000000);
  return (uint)(uVar1 + param_2 < uVar1) +
         (int)((ulonglong)((longlong)param_1 * 1000000000) >> 0x20) + (param_2 >> 0x1f);
}


/* UpTicksPerSecond @ 00407d18 */

undefined8 UpTicksPerSecond(void)

{
  return 0x6400000000;
}


/* UpTicks @ 00407d24 */

undefined4 UpTicks(void)

{
  longlong lVar1;
  int local_10;
  int local_c;
  
  (*(code *)PTR_clock_gettime_0043330c)(0,&local_10);
  lVar1 = (*(code *)PTR___udivdi3_004331b4)(local_c >> 0x1f,local_c,0,10000000);
  return (int)((ulonglong)((longlong)local_10 * 100 + lVar1) >> 0x20);
}


/* SleepForUpTicks @ 00407da0 */

void SleepForUpTicks(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 extraout_v1;
  undefined4 extraout_v1_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = param_1;
  local_24 = param_2;
  lVar6 = UpTicks();
  lVar7 = lVar6 + CONCAT44(local_28,local_24);
  uVar2 = (uint)lVar7;
  uVar3 = (uint)((ulonglong)lVar7 >> 0x20);
  while( true ) {
    uVar1 = (uint)((ulonglong)lVar6 >> 0x20);
    uVar4 = uVar2 - (uint)lVar6;
    iVar5 = (uVar3 - uVar1) - (uint)(uVar2 < uVar4);
    if ((uVar3 <= uVar1) && ((uVar3 != uVar1 || (uVar2 <= (uint)lVar6)))) break;
    (*(code *)PTR___udivdi3_004331b4)(iVar5,uVar4,0,100);
    local_30 = extraout_v1;
    lVar7 = (*(code *)PTR___umoddi3_00433304)(iVar5,uVar4,0,100);
    (*(code *)PTR___udivdi3_004331b4)
              ((int)((ulonglong)(lVar7 * 1000000000) >> 0x20),(int)(lVar7 * 1000000000),0,100);
    local_2c = extraout_v1_00;
    (*(code *)PTR_nanosleep_00433228)(&local_30,0);
    lVar6 = UpTicks();
  }
  return;
}


/* SHA1_Init_compat @ 00407ee0 */

void SHA1_Init_compat(undefined4 *param_1)

{
  param_1[2] = 0x67452301;
  param_1[3] = 0xefcdab89;
  param_1[4] = 0x98badcfe;
  param_1[5] = 0x10325476;
  param_1[6] = 0xc3d2e1f0;
  *param_1 = 0;
  param_1[7] = 0;
  param_1[1] = 0;
  return;
}


/* FUN_00407f34 @ 00407f34 */

void FUN_00407f34(int param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_150 [80];
  
  puVar1 = local_150;
  puVar2 = puVar1;
  do {
    *puVar2 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[3] |
              (uint)param_2[2] << 8;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 4;
  } while (puVar2 != local_150 + 0x10);
  uVar11 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x18);
  puVar2 = local_150 + 0xd;
  do {
    uVar7 = puVar2[-5] ^ *puVar2 ^ puVar2[-0xb] ^ puVar2[-0xd];
    puVar2[3] = uVar7 >> 0x1f | uVar7 << 1;
    puVar2 = puVar2 + 1;
  } while (puVar2 != local_150 + 0x4d);
  uVar7 = uVar11;
  do {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar6 = *puVar1 + 0x5a827999 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
            ((uVar4 ^ uVar5) & uVar6 ^ uVar4);
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar7 = puVar1[1] + 0x5a827999 + uVar4 + ((uVar9 ^ uVar5) & uVar7 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar1[2] + 0x5a827999 + uVar5 + (uVar6 & (uVar8 ^ uVar9) ^ uVar9) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    puVar2 = puVar1 + 4;
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar1[3] + 0x5a827999 + uVar9 + ((uVar3 ^ uVar8) & uVar7 ^ uVar8) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar1 = puVar1 + 5;
    uVar7 = *puVar2 + 0x5a827999 + uVar8 + ((uVar4 ^ uVar3) & uVar5 ^ uVar3) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar1 != local_150 + 0x14);
  puVar2 = local_150 + 0x14;
  do {
    uVar10 = *puVar2 + 0x6ed9eba1 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    uVar6 = puVar2[1] + 0x6ed9eba1 + uVar4 + (uVar5 ^ uVar7 ^ uVar9) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x6ed9eba1 + uVar5 + (uVar8 ^ uVar9 ^ uVar10) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    puVar1 = puVar2 + 4;
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x6ed9eba1 + uVar9 + (uVar3 ^ uVar8 ^ uVar6) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    puVar2 = puVar2 + 5;
    uVar7 = *puVar1 + 0x6ed9eba1 + uVar8 + (uVar4 ^ uVar3 ^ uVar5) + (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  } while (puVar2 != local_150 + 0x28);
  puVar2 = local_150 + 0x28;
  while( true ) {
    uVar9 = uVar6 << 0x1e | uVar6 >> 2;
    uVar8 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == local_150 + 0x3c) break;
    uVar10 = *puVar2 + 0x8f1bbcdc + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) +
             ((uVar5 | uVar6) & uVar4 | uVar5 & uVar6);
    uVar6 = puVar2[1] + 0x8f1bbcdc + uVar4 + ((uVar9 | uVar7) & uVar5 | uVar9 & uVar7) +
            (uVar10 >> 0x1b | uVar10 * 0x20);
    uVar3 = uVar10 * 0x40000000 | uVar10 >> 2;
    uVar5 = puVar2[2] + 0x8f1bbcdc + uVar5 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar10 | uVar8) & uVar9 | uVar10 & uVar8);
    uVar4 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar6 = puVar2[3] + 0x8f1bbcdc + uVar9 + ((uVar6 | uVar3) & uVar8 | uVar6 & uVar3) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0x8f1bbcdc + uVar8 + (uVar6 >> 0x1b | uVar6 * 0x20) +
            ((uVar5 | uVar4) & uVar3 | uVar5 & uVar4);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  puVar2 = local_150 + 0x3c;
  while( true ) {
    uVar8 = uVar6 << 0x1e | uVar6 >> 2;
    uVar9 = uVar7 << 0x1e | uVar7 >> 2;
    if (puVar2 == (uint *)&stack0xfffffff0) break;
    uVar6 = *puVar2 + 0xca62c1d6 + uVar3 + (uVar7 >> 0x1b | uVar7 << 5) + (uVar5 ^ uVar6 ^ uVar4);
    uVar7 = puVar2[1] + 0xca62c1d6 + uVar4 + (uVar5 ^ uVar7 ^ uVar8) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar3 = uVar6 * 0x40000000 | uVar6 >> 2;
    uVar5 = puVar2[2] + 0xca62c1d6 + uVar5 + (uVar9 ^ uVar8 ^ uVar6) +
            (uVar7 >> 0x1b | uVar7 * 0x20);
    uVar4 = uVar7 * 0x40000000 | uVar7 >> 2;
    uVar6 = puVar2[3] + 0xca62c1d6 + uVar8 + (uVar3 ^ uVar9 ^ uVar7) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = puVar2[4] + 0xca62c1d6 + uVar9 + (uVar4 ^ uVar3 ^ uVar5) +
            (uVar6 >> 0x1b | uVar6 * 0x20);
    uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
    puVar2 = puVar2 + 5;
  }
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar3;
  *(uint *)(param_1 + 8) = uVar7 + uVar11;
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar5;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar4;
  return;
}


/* SHA512_Init_compat @ 004084e4 */

void SHA512_Init_compat(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0041d7b4;
  uVar1 = DAT_0041d7b0;
  param_1[0x12] = 0;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar1 = DAT_0041d7b8;
  param_1[5] = DAT_0041d7bc;
  param_1[4] = uVar1;
  uVar1 = DAT_0041d7c0;
  param_1[7] = DAT_0041d7c4;
  param_1[6] = uVar1;
  uVar1 = DAT_0041d7c8;
  param_1[9] = DAT_0041d7cc;
  param_1[8] = uVar1;
  uVar1 = DAT_0041d7d0;
  param_1[0xb] = DAT_0041d7d4;
  param_1[10] = uVar1;
  uVar1 = DAT_0041d7d8;
  param_1[0xd] = DAT_0041d7dc;
  param_1[0xc] = uVar1;
  uVar1 = DAT_0041d7e0;
  param_1[0xf] = DAT_0041d7e4;
  param_1[0xe] = uVar1;
  uVar1 = DAT_0041d7e8;
  param_1[0x11] = DAT_0041d7ec;
  param_1[0x10] = uVar1;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* FUN_0040859c @ 0040859c */

void FUN_0040859c(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint local_328 [177];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar23 = 0;
  do {
    uVar13 = *(undefined4 *)(param_1 + iVar23 + 8);
    iVar5 = iVar23 + 8;
    *(undefined4 *)((int)local_328 + iVar23 + 4) = *(undefined4 *)(param_1 + iVar23 + 0xc);
    *(undefined4 *)((int)local_328 + iVar23) = uVar13;
    iVar23 = iVar5;
  } while (iVar5 != 0x40);
  puVar6 = local_328 + 0x10;
  puVar8 = puVar6;
  do {
    bVar1 = param_2[4];
    bVar2 = param_2[7];
    bVar3 = param_2[5];
    bVar4 = param_2[6];
    *puVar8 = (uint)*param_2 << 0x18 | (uint)param_2[1] << 0x10 | (uint)param_2[2] << 8 |
              (uint)param_2[3];
    puVar8[1] = (uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
    puVar8 = puVar8 + 2;
    param_2 = param_2 + 8;
  } while (puVar8 != local_328 + 0x30);
  puVar8 = local_328 + 0x2c;
  do {
    uVar10 = *puVar8;
    uVar12 = puVar8[1];
    uVar9 = puVar8[-0x1a];
    uVar11 = puVar8[-0x19];
    uVar15 = puVar8[-0x1b] + puVar8[-9];
    uVar14 = uVar15 + ((uVar10 >> 0x1d | uVar12 << 3) ^ (uVar10 << 0xd | uVar12 >> 0x13) ^
                      (uVar10 << 0x1a | uVar12 >> 6));
    uVar16 = uVar14 + ((uVar9 << 0x18 | uVar11 >> 8) ^ (uVar9 << 0x1f | uVar11 >> 1) ^
                      (uVar9 << 0x19 | uVar11 >> 7));
    puVar8[4] = (uint)(uVar16 < uVar14) +
                (uint)(uVar14 < uVar15) +
                (uint)(uVar15 < puVar8[-0x1b]) + puVar8[-0x1c] + puVar8[-10] +
                ((uVar12 >> 0x1d | uVar10 << 3) ^ (uVar12 << 0xd | uVar10 >> 0x13) ^ uVar10 >> 6) +
                ((uVar11 << 0x18 | uVar9 >> 8) ^ (uVar11 << 0x1f | uVar9 >> 1) ^ uVar9 >> 7);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 2;
  } while (puVar8 != local_328 + 0xac);
  piVar7 = &DAT_0041d530;
  do {
    local_328[0xb0] = local_328[9] >> 0x12;
    uVar10 = puVar6[1] + piVar7[1];
    uVar9 = uVar10 + local_328[0xf];
    local_40 = local_328[0] << 4 | local_328[1] >> 0x1c;
    local_4c = local_328[3] | local_328[1];
    local_48 = local_328[0] >> 7 | local_328[1] << 0x19;
    uVar11 = (local_328[3] | local_328[1]) & local_328[5] | local_328[3] & local_328[1];
    local_5c = local_328[1] >> 2 | local_328[0] << 0x1e;
    local_44 = local_328[1] << 4 | local_328[0] >> 0x1c;
    local_54 = (uint)(uVar9 < uVar10) +
               (uint)(uVar10 < puVar6[1]) + *puVar6 + *piVar7 + local_328[0xe] +
               ((local_328[9] << 0xe | local_328[8] >> 0x12) ^
                (local_328[9] << 0x12 | local_328[8] >> 0xe) ^
               (local_328[9] >> 9 | local_328[8] << 0x17));
    local_58 = (local_328[0] >> 2 | local_328[1] << 0x1e) ^ local_40;
    local_50 = (local_328[0xd] ^ local_328[0xb]) & local_328[9];
    local_64 = local_5c ^ local_44;
    uVar14 = uVar9 + ((local_328[8] << 0xe | local_328[9] >> 0x12) ^
                      (local_328[8] << 0x12 | local_328[9] >> 0xe) ^
                     (local_328[8] >> 9 | local_328[9] << 0x17));
    uVar10 = uVar14 + (local_50 ^ local_328[0xd]);
    local_328[0xb0] = (uVar14 < uVar9) + local_54;
    local_60 = (uint)(uVar10 < uVar14);
    uVar12 = uVar11 + (local_58 ^ local_48);
    iVar23 = (uint)(uVar10 < uVar14) +
             local_328[0xb0] + ((local_328[0xc] ^ local_328[10]) & local_328[8] ^ local_328[0xc]);
    uVar19 = uVar12 + uVar10;
    uVar9 = uVar10 + local_328[7];
    local_60 = (uint)(uVar19 < uVar12) +
               (uint)(uVar12 < uVar11) +
               ((local_328[2] | local_328[0]) & local_328[4] | local_328[2] & local_328[0]) +
               (local_64 ^ (local_328[1] >> 7 | local_328[0] << 0x19)) + iVar23;
    uVar10 = (uint)(uVar9 < uVar10) + iVar23 + local_328[6];
    uVar12 = puVar6[3] + piVar7[3];
    uVar11 = uVar12 + local_328[0xd];
    local_40 = uVar9 & (local_328[0xb] ^ local_328[9]) ^ local_328[0xb];
    local_44 = uVar10 & (local_328[10] ^ local_328[8]);
    local_3c = uVar19 | local_328[1];
    local_38 = uVar19 >> 2 | local_60 * 0x40000000;
    local_34 = uVar19 * 0x10 | local_60 >> 0x1c;
    local_4c = uVar10 >> 9 | uVar9 * 0x800000;
    local_58 = uVar9 * 0x40000 | uVar10 >> 0xe;
    local_30 = local_60 >> 7 | uVar19 * 0x2000000;
    local_50 = (uVar10 * 0x4000 | uVar9 >> 0x12) ^ (uVar10 * 0x40000 | uVar9 >> 0xe);
    uVar15 = (uVar19 | local_328[1]) & local_328[3] | uVar19 & local_328[1];
    local_48 = (local_60 >> 2 | uVar19 * 0x40000000) ^ (local_60 * 0x10 | uVar19 >> 0x1c);
    local_328[0xb0] =
         (uint)(uVar11 < uVar12) +
         (uint)(uVar12 < puVar6[3]) + puVar6[2] + piVar7[2] + local_328[0xc] +
         (local_44 ^ local_328[10]);
    local_40 = uVar11 + local_40;
    local_5c = (uVar9 * 0x4000 | uVar10 >> 0x12) ^ local_58;
    local_54 = local_60 | local_328[0];
    local_64 = local_50 ^ local_4c;
    uVar12 = uVar15 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar11) + local_328[0xb0] + (local_5c ^ (uVar9 >> 9 | uVar10 * 0x800000));
    uVar17 = uVar12 + local_64;
    uVar14 = puVar6[5] + piVar7[5];
    uVar11 = local_64 + local_328[5];
    uVar24 = (uint)(uVar17 < uVar12) +
             (uint)(uVar12 < uVar15) +
             ((local_60 | local_328[0]) & local_328[2] | local_60 & local_328[0]) +
             (local_38 ^ local_34 ^ (uVar19 >> 7 | local_60 * 0x2000000)) + iVar23;
    uVar12 = (uint)(uVar11 < local_64) + iVar23 + local_328[4];
    uVar15 = uVar14 + local_328[0xb];
    local_40 = uVar11 & (uVar9 ^ local_328[9]) ^ local_328[9];
    local_44 = uVar12 & (uVar10 ^ local_328[8]);
    local_58 = uVar11 * 0x40000 | uVar12 >> 0xe;
    local_50 = (uVar12 * 0x4000 | uVar11 >> 0x12) ^ (uVar12 * 0x40000 | uVar11 >> 0xe);
    local_48 = (uVar24 >> 2 | uVar17 * 0x40000000) ^ (uVar24 * 0x10 | uVar17 >> 0x1c);
    local_3c = uVar17 | uVar19;
    local_4c = uVar12 >> 9 | uVar11 * 0x800000;
    local_34 = uVar17 * 0x10 | uVar24 >> 0x1c;
    local_38 = uVar17 >> 2 | uVar24 * 0x40000000;
    local_30 = uVar24 >> 7 | uVar17 * 0x2000000;
    local_54 = uVar24 | local_60;
    uVar25 = (uVar17 | uVar19) & local_328[1] | uVar17 & uVar19;
    local_328[0xb0] =
         (uint)(uVar15 < uVar14) +
         (uint)(uVar14 < puVar6[5]) + puVar6[4] + piVar7[4] + local_328[10] +
         (local_44 ^ local_328[8]);
    local_5c = (uVar11 * 0x4000 | uVar12 >> 0x12) ^ local_58;
    local_40 = uVar15 + local_40;
    local_64 = local_50 ^ local_4c;
    uVar21 = uVar25 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar14 = local_64 + local_328[3];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar15) + local_328[0xb0] + (local_5c ^ (uVar11 >> 9 | uVar12 * 0x800000));
    uVar16 = puVar6[7] + piVar7[7];
    uVar15 = (uint)(uVar14 < local_64) + iVar23 + local_328[2];
    uVar18 = uVar21 + local_64;
    uVar22 = (uint)(uVar18 < uVar21) +
             (uint)(uVar21 < uVar25) +
             ((uVar24 | local_60) & local_328[0] | uVar24 & local_60) +
             (local_38 ^ local_34 ^ (uVar17 >> 7 | uVar24 * 0x2000000)) + iVar23;
    uVar21 = uVar16 + local_328[9];
    local_44 = uVar15 & (uVar12 ^ uVar10);
    local_40 = uVar14 & (uVar11 ^ uVar9) ^ uVar9;
    local_3c = uVar18 | uVar17;
    local_38 = uVar18 >> 2 | uVar22 * 0x40000000;
    local_58 = uVar14 * 0x40000 | uVar15 >> 0xe;
    local_4c = uVar15 >> 9 | uVar14 * 0x800000;
    local_48 = (uVar22 >> 2 | uVar18 * 0x40000000) ^ (uVar22 * 0x10 | uVar18 >> 0x1c);
    local_34 = uVar18 * 0x10 | uVar22 >> 0x1c;
    local_54 = uVar22 | uVar24;
    uVar26 = (uVar18 | uVar17) & uVar19 | uVar18 & uVar17;
    local_50 = (uVar15 * 0x4000 | uVar14 >> 0x12) ^ (uVar15 * 0x40000 | uVar14 >> 0xe);
    local_328[0xb0] =
         (uint)(uVar21 < uVar16) + (uint)(uVar16 < puVar6[7]) + puVar6[6] + piVar7[6] + local_328[8]
         + (local_44 ^ uVar10);
    local_30 = uVar22 >> 7 | uVar18 * 0x2000000;
    local_5c = (uVar14 * 0x4000 | uVar15 >> 0x12) ^ local_58;
    local_40 = uVar21 + local_40;
    local_64 = local_50 ^ local_4c;
    local_64 = local_40 + local_64;
    uVar20 = uVar26 + (local_48 ^ local_30);
    uVar16 = local_64 + local_328[1];
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar21) + local_328[0xb0] + (local_5c ^ (uVar14 >> 9 | uVar15 * 0x800000));
    uVar25 = puVar6[9] + piVar7[9];
    uVar21 = (uint)(uVar16 < local_64) + iVar23 + local_328[0];
    uVar27 = uVar20 + local_64;
    uVar20 = (uint)(uVar27 < uVar20) +
             (uint)(uVar20 < uVar26) +
             ((uVar22 | uVar24) & local_60 | uVar22 & uVar24) +
             (local_38 ^ local_34 ^ (uVar18 >> 7 | uVar22 * 0x2000000)) + iVar23;
    uVar9 = uVar25 + uVar9;
    local_44 = uVar21 & (uVar15 ^ uVar12);
    local_40 = uVar16 & (uVar14 ^ uVar11) ^ uVar11;
    local_58 = uVar16 * 0x40000 | uVar21 >> 0xe;
    local_3c = uVar27 | uVar18;
    local_4c = uVar21 >> 9 | uVar16 * 0x800000;
    local_38 = uVar27 >> 2 | uVar20 * 0x40000000;
    local_50 = (uVar21 * 0x4000 | uVar16 >> 0x12) ^ (uVar21 * 0x40000 | uVar16 >> 0xe);
    local_34 = uVar27 * 0x10 | uVar20 >> 0x1c;
    local_48 = (uVar20 >> 2 | uVar27 * 0x40000000) ^ (uVar20 * 0x10 | uVar27 >> 0x1c);
    local_30 = uVar20 >> 7 | uVar27 * 0x2000000;
    local_328[0xb0] =
         (uint)(uVar9 < uVar25) + (uint)(uVar25 < puVar6[9]) + puVar6[8] + piVar7[8] + uVar10 +
         (local_44 ^ uVar12);
    local_54 = uVar20 | uVar22;
    uVar26 = (uVar27 | uVar18) & uVar17 | uVar27 & uVar18;
    local_5c = (uVar16 * 0x4000 | uVar21 >> 0x12) ^ local_58;
    local_64 = local_50 ^ local_4c;
    local_40 = uVar9 + local_40;
    uVar25 = uVar26 + (local_48 ^ local_30);
    local_64 = local_40 + local_64;
    uVar10 = puVar6[0xb] + piVar7[0xb];
    local_328[0xf] = local_64 + uVar19;
    iVar23 = (uint)(local_64 < local_40) +
             (local_40 < uVar9) + local_328[0xb0] + (local_5c ^ (uVar16 >> 9 | uVar21 * 0x800000));
    local_328[7] = uVar25 + local_64;
    local_328[0xe] = (uint)(local_328[0xf] < local_64) + iVar23 + local_60;
    local_328[6] = (uint)(local_328[7] < uVar25) +
                   (uint)(uVar25 < uVar26) +
                   ((uVar20 | uVar22) & uVar24 | uVar20 & uVar22) +
                   (local_38 ^ local_34 ^ (uVar27 >> 7 | uVar20 * 0x2000000)) + iVar23;
    local_30 = local_328[6] * 0x10 | local_328[7] >> 0x1c;
    uVar11 = uVar10 + uVar11;
    local_44 = local_328[0xe] & (uVar21 ^ uVar15);
    local_40 = local_328[0xf] & (uVar16 ^ uVar14) ^ uVar14;
    local_3c = local_328[7] | uVar27;
    local_38 = local_328[7] >> 2 | local_328[6] * 0x40000000;
    local_4c = local_328[0xe] >> 9 | local_328[0xf] * 0x800000;
    local_34 = local_328[7] * 0x10 | local_328[6] >> 0x1c;
    local_50 = (local_328[0xe] * 0x4000 | local_328[0xf] >> 0x12) ^
               (local_328[0xe] * 0x40000 | local_328[0xf] >> 0xe);
    local_48 = (local_328[6] >> 2 | local_328[7] * 0x40000000) ^ local_30;
    local_40 = uVar11 + local_40;
    uVar9 = (local_328[7] | uVar27) & uVar18 | local_328[7] & uVar27;
    local_58 = (local_328[0xf] * 0x4000 | local_328[0xe] >> 0x12) ^
               (local_328[0xf] * 0x40000 | local_328[0xe] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[6] | uVar20;
    local_64 = local_48 ^ (local_328[6] >> 7 | local_328[7] * 0x2000000);
    local_60 = (uint)(local_40 < uVar11) +
               (uint)(uVar11 < uVar10) +
               (uint)(uVar10 < puVar6[0xb]) + puVar6[10] + piVar7[10] + uVar12 + (local_44 ^ uVar15)
    ;
    local_5c = local_58 ^ (local_328[0xf] >> 9 | local_328[0xe] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xd] = local_328[0xb0] + uVar17;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[5] = local_64 + local_328[0xb0];
    local_328[0xc] = (uint)(local_328[0xd] < local_328[0xb0]) + iVar23 + uVar24;
    uVar10 = puVar6[0xd] + piVar7[0xd];
    local_328[4] = (uint)(local_328[5] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[6] | uVar20) & uVar22 | local_328[6] & uVar20) +
                   (local_38 ^ local_34 ^ (local_328[7] >> 7 | local_328[6] * 0x2000000)) + iVar23;
    uVar14 = uVar10 + uVar14;
    local_30 = local_328[4] * 0x10 | local_328[5] >> 0x1c;
    local_44 = local_328[0xc] & (local_328[0xe] ^ uVar21);
    local_40 = local_328[0xd] & (local_328[0xf] ^ uVar16) ^ uVar16;
    local_3c = local_328[5] | local_328[7];
    local_50 = (local_328[0xc] * 0x4000 | local_328[0xd] >> 0x12) ^
               (local_328[0xc] * 0x40000 | local_328[0xd] >> 0xe);
    local_4c = local_328[0xc] >> 9 | local_328[0xd] * 0x800000;
    local_38 = local_328[5] >> 2 | local_328[4] * 0x40000000;
    local_34 = local_328[5] * 0x10 | local_328[4] >> 0x1c;
    local_40 = uVar14 + local_40;
    uVar9 = (local_328[5] | local_328[7]) & uVar27 | local_328[5] & local_328[7];
    local_48 = (local_328[4] >> 2 | local_328[5] * 0x40000000) ^ local_30;
    local_58 = (local_328[0xd] * 0x4000 | local_328[0xc] >> 0x12) ^
               (local_328[0xd] * 0x40000 | local_328[0xc] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[4] | local_328[6];
    local_64 = local_48 ^ (local_328[4] >> 7 | local_328[5] * 0x2000000);
    local_60 = (uint)(local_40 < uVar14) +
               (uint)(uVar14 < uVar10) +
               (uint)(uVar10 < puVar6[0xd]) + puVar6[0xc] + piVar7[0xc] + uVar15 +
               (local_44 ^ uVar21);
    local_5c = local_58 ^ (local_328[0xd] >> 9 | local_328[0xc] * 0x800000);
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[0xb] = local_328[0xb0] + uVar18;
    iVar23 = (uint)(local_328[0xb0] < local_40) + local_60 + local_5c;
    local_328[3] = local_64 + local_328[0xb0];
    local_328[10] = (uint)(local_328[0xb] < local_328[0xb0]) + iVar23 + uVar22;
    uVar10 = puVar6[0xf] + piVar7[0xf];
    local_328[2] = (uint)(local_328[3] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[4] | local_328[6]) & uVar20 | local_328[4] & local_328[6]) +
                   (local_38 ^ local_34 ^ (local_328[5] >> 7 | local_328[4] * 0x2000000)) + iVar23;
    uVar16 = uVar10 + uVar16;
    local_30 = local_328[2] * 0x10 | local_328[3] >> 0x1c;
    local_44 = local_328[10] & (local_328[0xc] ^ local_328[0xe]);
    local_50 = (local_328[10] * 0x4000 | local_328[0xb] >> 0x12) ^
               (local_328[10] * 0x40000 | local_328[0xb] >> 0xe);
    local_40 = local_328[0xb] & (local_328[0xd] ^ local_328[0xf]) ^ local_328[0xf];
    local_3c = local_328[3] | local_328[5];
    local_4c = local_328[10] >> 9 | local_328[0xb] * 0x800000;
    local_34 = local_328[3] * 0x10 | local_328[2] >> 0x1c;
    local_38 = local_328[3] >> 2 | local_328[2] * 0x40000000;
    local_40 = uVar16 + local_40;
    local_5c = local_328[2] >> 7 | local_328[3] * 0x2000000;
    uVar9 = (local_328[3] | local_328[5]) & local_328[7] | local_328[3] & local_328[5];
    local_48 = (local_328[2] >> 2 | local_328[3] * 0x40000000) ^ local_30;
    local_60 = (uint)(uVar16 < uVar10) +
               (uint)(uVar10 < puVar6[0xf]) + puVar6[0xe] + piVar7[0xe] + uVar21 +
               (local_44 ^ local_328[0xe]);
    local_58 = (local_328[0xb] * 0x4000 | local_328[10] >> 0x12) ^
               (local_328[0xb] * 0x40000 | local_328[10] >> 0xe);
    local_328[0xb0] = local_50 ^ local_4c;
    local_54 = local_328[2] | local_328[4];
    local_64 = local_48 ^ local_5c;
    local_328[0xb0] = local_40 + local_328[0xb0];
    local_64 = uVar9 + local_64;
    local_328[9] = local_328[0xb0] + uVar27;
    iVar23 = (uint)(local_328[0xb0] < local_40) +
             (local_40 < uVar16) + local_60 +
             (local_58 ^ (local_328[0xb] >> 9 | local_328[10] * 0x800000));
    local_328[1] = local_64 + local_328[0xb0];
    piVar7 = piVar7 + 0x10;
    local_328[8] = (uint)(local_328[9] < local_328[0xb0]) + iVar23 + uVar20;
    local_328[0] = (uint)(local_328[1] < local_64) +
                   (uint)(local_64 < uVar9) +
                   ((local_328[2] | local_328[4]) & local_328[6] | local_328[2] & local_328[4]) +
                   (local_38 ^ local_34 ^ (local_328[3] >> 7 | local_328[2] * 0x2000000)) + iVar23;
    puVar6 = puVar6 + 0x10;
  } while (piVar7 != &DAT_0041d7b0);
  puVar8 = local_328;
  do {
    uVar10 = *puVar8;
    uVar9 = *(uint *)(param_1 + 0xc) + puVar8[1];
    puVar8 = puVar8 + 2;
    *(uint *)(param_1 + 8) =
         (uint)(uVar9 < *(uint *)(param_1 + 0xc)) + *(int *)(param_1 + 8) + uVar10;
    *(uint *)(param_1 + 0xc) = uVar9;
    param_1 = param_1 + 8;
  } while (puVar8 != local_328 + 0x10);
  return;
}


/* FUN_00409c94 @ 00409c94 */

void FUN_00409c94(uint *param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  uint local_160;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_e8;
  
  local_e8 = *param_1 ^ CONCAT13(param_2[7],CONCAT12(param_2[6],CONCAT11(param_2[5],param_2[4])));
  local_160 = param_1[1] ^
              ((uint)param_2[1] << 8 | (uint)param_2[2] << 0x10 | (uint)*param_2 |
              (uint)param_2[3] << 0x18);
  local_138 = param_1[2] ^
              CONCAT13(param_2[0xf],CONCAT12(param_2[0xe],CONCAT11(param_2[0xd],param_2[0xc])));
  local_118 = param_1[4] ^
              CONCAT13(param_2[0x17],CONCAT12(param_2[0x16],CONCAT11(param_2[0x15],param_2[0x14])));
  uVar16 = param_1[3] ^
           ((uint)param_2[9] << 8 | (uint)param_2[10] << 0x10 | (uint)param_2[8] |
           (uint)param_2[0xb] << 0x18);
  local_114 = param_1[5] ^
              ((uint)param_2[0x11] << 8 | (uint)param_2[0x12] << 0x10 | (uint)param_2[0x10] |
              (uint)param_2[0x13] << 0x18);
  local_fc = param_1[6] ^
             CONCAT13(param_2[0x1f],CONCAT12(param_2[0x1e],CONCAT11(param_2[0x1d],param_2[0x1c])));
  local_f8 = param_1[7] ^
             ((uint)param_2[0x19] << 8 | (uint)param_2[0x1a] << 0x10 | (uint)param_2[0x18] |
             (uint)param_2[0x1b] << 0x18);
  local_104 = param_1[8] ^
              CONCAT13(param_2[0x27],CONCAT12(param_2[0x26],CONCAT11(param_2[0x25],param_2[0x24])));
  local_100 = param_1[9] ^
              ((uint)param_2[0x21] << 8 | (uint)param_2[0x22] << 0x10 | (uint)param_2[0x20] |
              (uint)param_2[0x23] << 0x18);
  local_11c = param_1[10] ^
              CONCAT13(param_2[0x2f],CONCAT12(param_2[0x2e],CONCAT11(param_2[0x2d],param_2[0x2c])));
  local_164 = param_1[0xb] ^
              ((uint)param_2[0x29] << 8 | (uint)param_2[0x2a] << 0x10 | (uint)param_2[0x28] |
              (uint)param_2[0x2b] << 0x18);
  local_178 = param_1[0xe] ^
              CONCAT13(param_2[0x3f],CONCAT12(param_2[0x3e],CONCAT11(param_2[0x3d],param_2[0x3c])));
  uVar18 = param_1[0xc] ^
           CONCAT13(param_2[0x37],CONCAT12(param_2[0x36],CONCAT11(param_2[0x35],param_2[0x34])));
  uVar42 = param_1[0xd] ^
           ((uint)param_2[0x31] << 8 | (uint)param_2[0x32] << 0x10 | (uint)param_2[0x30] |
           (uint)param_2[0x33] << 0x18);
  local_13c = param_1[0xf] ^
              ((uint)param_2[0x39] << 8 | (uint)param_2[0x3a] << 0x10 | (uint)param_2[0x38] |
              (uint)param_2[0x3b] << 0x18);
  local_124 = param_1[0x10] ^
              CONCAT13(param_2[0x47],CONCAT12(param_2[0x46],CONCAT11(param_2[0x45],param_2[0x44])));
  local_120 = param_1[0x11] ^
              ((uint)param_2[0x41] << 8 | (uint)param_2[0x42] << 0x10 | (uint)param_2[0x40] |
              (uint)param_2[0x43] << 0x18);
  local_144 = param_1[0x12];
  local_140 = param_1[0x13];
  local_190 = param_1[0x16];
  uVar20 = param_1[0x14];
  uVar22 = param_1[0x15];
  local_168 = param_1[0x17];
  local_108 = param_1[0x18];
  local_128 = param_1[0x19];
  local_16c = param_1[0x1a];
  local_12c = param_1[0x1b];
  local_198 = param_1[0x1c];
  local_194 = param_1[0x1d];
  local_134 = param_1[0x20];
  uVar46 = param_1[0x1e];
  uVar30 = param_1[0x1f];
  local_130 = param_1[0x21];
  local_174 = param_1[0x22];
  local_170 = param_1[0x23];
  local_19c = param_1[0x24];
  local_180 = param_1[0x26];
  uVar5 = param_1[0x25];
  local_17c = param_1[0x27];
  local_1a4 = param_1[0x2c];
  uVar24 = param_1[0x28];
  uVar13 = param_1[0x29];
  uVar28 = param_1[0x2a];
  uVar44 = param_1[0x2b];
  local_1a0 = param_1[0x2d];
  local_1a8 = param_1[0x2e];
  local_184 = param_1[0x2f];
  uVar7 = param_1[0x30];
  uVar14 = param_1[0x31];
  for (puVar1 = &DAT_0041d470; puVar1 != &DAT_0041d530; puVar1 = puVar1 + 2) {
    uVar2 = local_11c ^ local_e8 ^ uVar20 ^ uVar46 ^ uVar24;
    uVar11 = uVar18 ^ local_138 ^ local_190 ^ local_134 ^ uVar28;
    uVar9 = uVar42 ^ uVar16 ^ local_168 ^ local_130 ^ uVar44;
    uVar26 = local_144 ^ local_104 ^ local_198 ^ local_180 ^ uVar7;
    uVar40 = local_178 ^ local_118 ^ local_108 ^ local_174 ^ local_1a4;
    uVar3 = local_164 ^ local_160 ^ uVar22 ^ uVar30 ^ uVar13;
    uVar37 = local_13c ^ local_114 ^ local_128 ^ local_170 ^ local_1a0;
    uVar34 = local_120 ^ local_f8 ^ local_12c ^ uVar5 ^ local_184;
    uVar4 = local_140 ^ local_100 ^ local_194 ^ local_17c ^ uVar14;
    uVar36 = local_124 ^ local_fc ^ local_16c ^ local_19c ^ local_1a8;
    uVar12 = (uVar34 >> 0x1f | uVar36 << 1) ^ uVar11;
    uVar10 = (uVar36 >> 0x1f | uVar34 << 1) ^ uVar9;
    uVar41 = (uVar4 >> 0x1f | uVar26 << 1) ^ uVar40;
    uVar38 = (uVar26 >> 0x1f | uVar4 << 1) ^ uVar37;
    uVar36 = (uVar3 >> 0x1f | uVar2 << 1) ^ uVar36;
    uVar34 = (uVar2 >> 0x1f | uVar3 << 1) ^ uVar34;
    uVar26 = (uVar9 >> 0x1f | uVar11 << 1) ^ uVar26;
    uVar4 = (uVar11 >> 0x1f | uVar9 << 1) ^ uVar4;
    uVar2 = (uVar37 >> 0x1f | uVar40 << 1) ^ uVar2;
    uVar3 = (uVar40 >> 0x1f | uVar37 << 1) ^ uVar3;
    uVar45 = (uVar2 ^ uVar18) << 0xc | (uVar3 ^ uVar42) >> 0x14;
    uVar11 = (uVar3 ^ uVar42) << 0xc | (uVar2 ^ uVar18) >> 0x14;
    uVar42 = (uVar36 ^ local_144) >> 0xc | (uVar34 ^ local_140) << 0x14;
    uVar43 = (uVar12 ^ local_1a4) << 0x1d | (uVar10 ^ local_1a0) >> 3;
    uVar18 = (uVar34 ^ local_140) >> 0xc | (uVar36 ^ local_144) << 0x14;
    uVar15 = (uVar36 ^ local_198) << 7 | (uVar34 ^ local_194) >> 0x19;
    uVar37 = (uVar34 ^ local_194) << 7 | (uVar36 ^ local_198) >> 0x19;
    local_144 = (uVar10 ^ local_1a0) << 0x1d | (uVar12 ^ local_1a4) >> 3;
    local_194 = (uVar26 ^ uVar24) >> 0xe | (uVar4 ^ uVar13) << 0x12;
    uVar6 = (uVar12 ^ local_118) << 0x1e | (uVar10 ^ local_114) >> 2;
    local_198 = (uVar4 ^ uVar13) >> 0xe | (uVar26 ^ uVar24) << 0x12;
    uVar24 = (uVar10 ^ local_114) << 0x1e | (uVar12 ^ local_118) >> 2;
    local_114 = (uVar12 ^ local_108) << 0xb | (uVar10 ^ local_128) >> 0x15;
    local_118 = (uVar10 ^ local_128) << 0xb | (uVar12 ^ local_108) >> 0x15;
    uVar19 = (uVar34 ^ local_17c) >> 0x18 | (uVar36 ^ local_180) << 8;
    uVar21 = (uVar41 ^ local_16c) >> 7 | (uVar38 ^ local_12c) << 0x19;
    uVar23 = (uVar38 ^ local_12c) >> 7 | (uVar41 ^ local_16c) << 0x19;
    uVar17 = (uVar36 ^ local_180) >> 0x18 | (uVar34 ^ local_17c) << 8;
    uVar31 = (uVar26 ^ uVar46) << 9 | (uVar4 ^ uVar30) >> 0x17;
    uVar13 = (uVar41 ^ local_1a8) << 0x18 | (uVar38 ^ local_184) >> 8;
    uVar40 = (uVar38 ^ local_184) << 0x18 | (uVar41 ^ local_1a8) >> 8;
    uVar8 = (uVar34 ^ local_100) >> 5 | (uVar36 ^ local_104) << 0x1b;
    uVar32 = (uVar4 ^ uVar30) << 9 | (uVar26 ^ uVar46) >> 0x17;
    uVar30 = (uVar36 ^ local_104) >> 5 | (uVar34 ^ local_100) << 0x1b;
    uVar35 = (uVar36 ^ uVar7) >> 0x12 | (uVar34 ^ uVar14) << 0xe;
    uVar29 = (uVar2 ^ uVar28) >> 0x1e | (uVar3 ^ uVar44) << 2;
    uVar14 = (uVar34 ^ uVar14) >> 0x12 | (uVar36 ^ uVar7) << 0xe;
    uVar9 = (uVar38 ^ local_120) << 0x17 | (uVar41 ^ local_124) >> 9;
    uVar7 = (uVar3 ^ uVar44) >> 0x1e | (uVar2 ^ uVar28) << 2;
    uVar44 = (uVar41 ^ local_124) << 0x17 | (uVar38 ^ local_120) >> 9;
    uVar33 = (uVar26 ^ local_11c) << 4 | (uVar4 ^ local_164) >> 0x1c;
    uVar25 = (uVar2 ^ local_134) << 0xd | (uVar3 ^ local_130) >> 0x13;
    uVar27 = (uVar3 ^ local_130) << 0xd | (uVar2 ^ local_134) >> 0x13;
    uVar28 = (uVar4 ^ local_164) << 4 | (uVar26 ^ local_11c) >> 0x1c;
    local_11c = (uVar38 ^ local_f8) >> 4 | (uVar41 ^ local_fc) << 0x1c;
    local_164 = (uVar41 ^ local_fc) >> 4 | (uVar38 ^ local_f8) << 0x1c;
    uVar39 = (uVar41 ^ local_19c) >> 0xb | (uVar38 ^ uVar5) << 0x15;
    uVar41 = (uVar38 ^ uVar5) >> 0xb | (uVar41 ^ local_19c) << 0x15;
    uVar46 = (uVar10 ^ local_170) >> 0x11 | (uVar12 ^ local_174) << 0xf;
    uVar47 = (uVar12 ^ local_178) >> 0x1a | (uVar10 ^ local_13c) << 6;
    uVar34 = (uVar12 ^ local_174) >> 0x11 | (uVar10 ^ local_170) << 0xf;
    uVar36 = (uVar2 ^ local_190) >> 0x16 | (uVar3 ^ local_168) << 10;
    uVar48 = (uVar10 ^ local_13c) >> 0x1a | (uVar12 ^ local_178) << 6;
    uVar10 = (uVar3 ^ local_168) >> 0x16 | (uVar2 ^ local_190) << 10;
    uVar12 = (uVar26 ^ uVar20) >> 0x1d | (uVar4 ^ uVar22) << 3;
    uVar38 = (uVar4 ^ uVar22) >> 0x1d | (uVar26 ^ uVar20) << 3;
    uVar22 = (uVar2 ^ local_138) >> 0x1f | (uVar3 ^ uVar16) << 1;
    uVar20 = (uVar3 ^ uVar16) >> 0x1f | (uVar2 ^ local_138) << 1;
    uVar26 = uVar26 ^ local_e8;
    uVar4 = uVar4 ^ local_160;
    local_100 = ~uVar4 & uVar45 ^ uVar35;
    local_124 = ~local_144 & local_11c ^ uVar27;
    local_fc = ~uVar14 & uVar26 ^ uVar41;
    local_f8 = ~uVar35 & uVar4 ^ uVar39;
    local_104 = ~uVar26 & uVar11 ^ uVar14;
    local_13c = ~uVar25 & uVar43 ^ uVar12;
    local_178 = ~uVar27 & local_144 ^ uVar38;
    local_144 = ~local_11c & uVar18 ^ local_144;
    local_120 = ~uVar43 & local_164 ^ uVar25;
    local_140 = ~local_164 & uVar42 ^ uVar43;
    local_108 = ~uVar19 & local_198 ^ uVar23;
    local_128 = ~uVar17 & local_194 ^ uVar21;
    local_16c = ~local_198 & uVar20 ^ uVar19;
    local_12c = ~local_194 & uVar22 ^ uVar17;
    local_198 = ~uVar20 & uVar48 ^ local_198;
    local_194 = ~uVar22 & uVar47 ^ local_194;
    local_17c = ~uVar30 & uVar33 ^ uVar13;
    local_1a4 = ~uVar32 & uVar7 ^ uVar37;
    local_19c = ~uVar40 & uVar8 ^ uVar46;
    local_180 = ~uVar8 & uVar28 ^ uVar40;
    uVar5 = ~uVar13 & uVar30 ^ uVar34;
    local_170 = ~uVar34 & uVar13 ^ uVar36;
    local_174 = ~uVar46 & uVar40 ^ uVar10;
    local_1a0 = ~uVar31 & uVar29 ^ uVar15;
    local_1a8 = ~uVar7 & uVar24 ^ uVar32;
    local_184 = ~uVar29 & uVar6 ^ uVar31;
    local_e8 = *puVar1 ^ uVar26 ^ ~uVar11 & local_118;
    local_160 = puVar1[1] ^ uVar4 ^ ~uVar45 & local_114;
    local_138 = ~local_118 & uVar41 ^ uVar11;
    uVar7 = ~uVar24 & uVar9 ^ uVar7;
    uVar16 = ~local_114 & uVar39 ^ uVar45;
    local_114 = ~uVar39 & uVar35 ^ local_114;
    local_11c = ~uVar18 & uVar38 ^ local_11c;
    local_118 = ~uVar41 & uVar14 ^ local_118;
    uVar14 = ~uVar6 & uVar44 ^ uVar29;
    uVar20 = ~uVar48 & uVar23 ^ uVar20;
    local_164 = ~uVar42 & uVar12 ^ local_164;
    local_190 = ~uVar23 & uVar19 ^ uVar48;
    local_168 = ~uVar21 & uVar17 ^ uVar47;
    local_134 = ~uVar10 & uVar46 ^ uVar28;
    uVar18 = ~uVar38 & uVar27 ^ uVar18;
    uVar42 = ~uVar12 & uVar25 ^ uVar42;
    uVar22 = ~uVar47 & uVar21 ^ uVar22;
    uVar46 = ~uVar28 & uVar10 ^ uVar8;
    uVar30 = ~uVar33 & uVar36 ^ uVar30;
    local_130 = ~uVar36 & uVar34 ^ uVar33;
    uVar24 = ~uVar9 & uVar37 ^ uVar24;
    uVar13 = ~uVar44 & uVar15 ^ uVar6;
    uVar28 = ~uVar37 & uVar32 ^ uVar9;
    uVar44 = ~uVar15 & uVar31 ^ uVar44;
  }
  *param_1 = local_e8;
  param_1[1] = local_160;
  param_1[3] = uVar16;
  param_1[2] = local_138;
  param_1[4] = local_118;
  param_1[5] = local_114;
  param_1[6] = local_fc;
  param_1[7] = local_f8;
  param_1[8] = local_104;
  param_1[9] = local_100;
  param_1[10] = local_11c;
  param_1[0xc] = uVar18;
  param_1[0xd] = uVar42;
  param_1[0xb] = local_164;
  param_1[0xe] = local_178;
  param_1[0xf] = local_13c;
  param_1[0x10] = local_124;
  param_1[0x11] = local_120;
  param_1[0x12] = local_144;
  param_1[0x14] = uVar20;
  param_1[0x15] = uVar22;
  param_1[0x13] = local_140;
  param_1[0x16] = local_190;
  param_1[0x17] = local_168;
  param_1[0x18] = local_108;
  param_1[0x19] = local_128;
  param_1[0x1a] = local_16c;
  param_1[0x1b] = local_12c;
  param_1[0x1c] = local_198;
  param_1[0x1e] = uVar46;
  param_1[0x1f] = uVar30;
  param_1[0x1d] = local_194;
  param_1[0x20] = local_134;
  param_1[0x31] = uVar14;
  param_1[0x21] = local_130;
  param_1[0x22] = local_174;
  param_1[0x23] = local_170;
  param_1[0x24] = local_19c;
  param_1[0x25] = uVar5;
  param_1[0x26] = local_180;
  param_1[0x28] = uVar24;
  param_1[0x29] = uVar13;
  param_1[0x27] = local_17c;
  param_1[0x2a] = uVar28;
  param_1[0x2b] = uVar44;
  param_1[0x2c] = local_1a4;
  param_1[0x2d] = local_1a0;
  param_1[0x2e] = local_1a8;
  param_1[0x30] = uVar7;
  param_1[0x2f] = local_184;
  return;
}


/* FUN_0040b9c8 @ 0040b9c8 */

undefined4 FUN_0040b9c8(undefined1 *param_1,int param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_memset_00433190;
  *(undefined1 *)(param_2 + *(int *)(param_2 + 200) + 0xcc) = 1;
  (*(code *)puVar1)(param_2 + 0xcc + *(uint *)(param_2 + 200) + 1,0,~*(uint *)(param_2 + 200) + 0x48
                   );
  *(byte *)(param_2 + 0x113) = *(byte *)(param_2 + 0x113) | 0x80;
  FUN_00409c94(param_2,param_2 + 0xcc);
  iVar3 = 0;
  do {
    puVar2 = (undefined4 *)(param_2 + iVar3);
    iVar3 = iVar3 + 8;
    *param_1 = (char)puVar2[1];
    param_1[1] = (char)((uint)puVar2[1] >> 8);
    param_1[2] = (char)*(undefined2 *)(puVar2 + 1);
    param_1[3] = *(undefined1 *)(puVar2 + 1);
    param_1[4] = (char)*puVar2;
    param_1[5] = (char)((uint)*puVar2 >> 8);
    param_1[6] = (char)*(undefined2 *)puVar2;
    param_1[7] = *(undefined1 *)puVar2;
    param_1 = param_1 + 8;
  } while (iVar3 != 0x40);
  return 0;
}


/* FUN_0040bae0 @ 0040bae0 */

undefined4 FUN_0040bae0(undefined4 param_1)

{
  (*(code *)PTR_memset_00433190)(param_1,0,0x118);
  return 0;
}


/* SHA512_Final_compat @ 0040bb14 */

undefined4 SHA512_Final_compat(undefined1 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_2 + 9);
  *param_2 = (ulonglong)uVar2 * 8 + *param_2;
  *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0x80;
  *(uint *)(param_2 + 9) = uVar2 + 1;
  if (0x70 < uVar2 + 1) {
    while( true ) {
      uVar2 = *(uint *)(param_2 + 9);
      if (0x7f < uVar2) break;
      *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
      *(uint *)(param_2 + 9) = uVar2 + 1;
    }
    FUN_0040859c(param_2,(int)param_2 + 0x4c);
    *(undefined4 *)(param_2 + 9) = 0;
  }
  while( true ) {
    uVar2 = *(uint *)(param_2 + 9);
    if (0x77 < uVar2) break;
    *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
    *(uint *)(param_2 + 9) = uVar2 + 1;
  }
  uVar5 = *(undefined4 *)param_2;
  uVar3 = (undefined4)*param_2;
  *(char *)((int)param_2 + 199) = (char)uVar5;
  *(char *)((int)param_2 + 0xca) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_2 + 0xcb) = (char)uVar3;
  *(char *)((int)param_2 + 0xc4) = (char)((uint)uVar5 >> 0x18);
  *(char *)((int)param_2 + 0xc5) = (char)((uint)uVar5 >> 0x10);
  *(char *)((int)param_2 + 0xc6) = (char)((uint)uVar5 >> 8);
  *(char *)(param_2 + 0x19) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)param_2 + 0xc9) = (char)((uint)uVar3 >> 0x10);
  FUN_0040859c(param_2,(int)param_2 + 0x4c);
  iVar6 = 0;
  plVar4 = param_2;
  do {
    iVar6 = iVar6 + 1;
    *param_1 = *(undefined1 *)(plVar4 + 1);
    param_1[1] = (char)*(undefined2 *)(plVar4 + 1);
    param_1[2] = (char)((uint)*(undefined4 *)(plVar4 + 1) >> 8);
    param_1[3] = (char)*(undefined4 *)(plVar4 + 1);
    param_1[4] = *(undefined1 *)((int)plVar4 + 0xc);
    param_1[5] = (char)*(undefined2 *)((int)plVar4 + 0xc);
    param_1[6] = (char)((uint)*(undefined4 *)((int)plVar4 + 0xc) >> 8);
    puVar1 = (undefined4 *)((int)plVar4 + 0xc);
    plVar4 = plVar4 + 1;
    param_1[7] = (char)*puVar1;
    param_1 = param_1 + 8;
  } while (iVar6 != 8);
  (*(code *)PTR_memset_00433190)(param_2,0,0xd0);
  return 0;
}


/* SHA1_Final_compat @ 0040bcdc */

undefined4 SHA1_Final_compat(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_2[7];
  uVar6 = param_2[1];
  uVar5 = uVar6 + iVar2 * 8;
  param_2[1] = uVar5;
  *param_2 = (uint)(uVar5 < uVar6) + *param_2;
  *(undefined1 *)((int)param_2 + iVar2 + 0x20) = 0x80;
  param_2[7] = iVar2 + 1U;
  if (0x38 < iVar2 + 1U) {
    while( true ) {
      uVar5 = param_2[7];
      if (0x3f < uVar5) break;
      *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
      param_2[7] = uVar5 + 1;
    }
    FUN_00407f34(param_2,param_2 + 8);
    param_2[7] = 0;
  }
  while( true ) {
    uVar5 = param_2[7];
    if (0x37 < uVar5) break;
    *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
    param_2[7] = uVar5 + 1;
  }
  iVar4 = *param_2;
  iVar2 = param_2[1];
  *(char *)((int)param_2 + 0x5b) = (char)iVar4;
  *(char *)((int)param_2 + 0x5e) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_2 + 0x5f) = (char)iVar2;
  *(char *)(param_2 + 0x16) = (char)((uint)iVar4 >> 0x18);
  *(char *)((int)param_2 + 0x59) = (char)((uint)iVar4 >> 0x10);
  *(char *)((int)param_2 + 0x5a) = (char)((uint)iVar4 >> 8);
  *(char *)(param_2 + 0x17) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_2 + 0x5d) = (char)((uint)iVar2 >> 0x10);
  FUN_00407f34(param_2,param_2 + 8);
  iVar2 = 0;
  piVar3 = param_2;
  do {
    iVar2 = iVar2 + 1;
    *param_1 = *(undefined1 *)(piVar3 + 2);
    param_1[1] = (char)*(undefined2 *)(piVar3 + 2);
    param_1[2] = (char)((uint)piVar3[2] >> 8);
    piVar1 = piVar3 + 2;
    piVar3 = piVar3 + 1;
    param_1[3] = (char)*piVar1;
    param_1 = param_1 + 4;
  } while (iVar2 != 5);
  (*(code *)PTR_memset_00433190)(param_2,0,0x60);
  return 0;
}


/* FUN_0040be60 @ 0040be60 */

undefined4 FUN_0040be60(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 != 0) {
    uVar3 = 0x48U - iVar2;
    if (param_3 <= 0x48U - iVar2) {
      uVar3 = param_3;
    }
    (*(code *)PTR_memcpy_004332a8)(param_1 + 0xcc + iVar2,param_2,uVar3);
    uVar1 = uVar3 + *(int *)(param_1 + 200);
    *(uint *)(param_1 + 200) = uVar1;
    if (uVar1 < 0x48) {
      return 0;
    }
    FUN_00409c94(param_1,param_1 + 0xcc);
    param_3 = param_3 - uVar3;
    param_2 = param_2 + uVar3;
  }
  for (; 0x47 < param_3; param_3 = param_3 - 0x48) {
    FUN_00409c94(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  *(uint *)(param_1 + 200) = param_3;
  if (param_3 != 0) {
    (*(code *)PTR_memcpy_004332a8)(param_1 + 0xcc,param_2,param_3);
  }
  return 0;
}


/* FUN_0040bf54 @ 0040bf54 */

undefined4 FUN_0040bf54(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_130 [280];
  undefined4 local_18;
  
  local_18 = param_1;
  FUN_0040bae0(auStack_130);
  FUN_0040be60(auStack_130,local_18,param_2);
  FUN_0040b9c8(param_3,auStack_130);
  return param_3;
}


/* SHA512_Update_compat @ 0040bfbc */

undefined4 SHA512_Update_compat(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == 0) break;
    iVar2 = param_1[0x12];
    uVar1 = 0x80U - iVar2;
    if (param_3 <= 0x80U - iVar2) {
      uVar1 = param_3;
    }
    if ((iVar2 == 0) && (0x7f < param_3)) {
      FUN_0040859c(param_1,param_2);
      uVar1 = param_1[1] + 0x400;
      param_2 = param_2 + 0x80;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x80;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_004332a8)((int)(param_1 + 0x13) + iVar2,param_2,uVar1);
      iVar2 = param_1[0x12];
      param_2 = param_2 + uVar1;
      param_1[0x12] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x80) {
        FUN_0040859c(param_1,param_1 + 0x13);
        uVar1 = param_1[1] + 0x400;
        param_1[0x12] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0040c0ec @ 0040c0ec */

undefined4 FUN_0040c0ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [208];
  undefined4 local_18;
  
  local_18 = param_1;
  SHA512_Init_compat(auStack_e8);
  SHA512_Update_compat(auStack_e8,local_18,param_2);
  SHA512_Final_compat(param_3,auStack_e8);
  return param_3;
}


/* SHA1_Update_compat @ 0040c154 */

undefined4 SHA1_Update_compat(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 == 0) break;
    iVar2 = param_1[7];
    uVar1 = 0x40U - iVar2;
    if (param_3 <= 0x40U - iVar2) {
      uVar1 = param_3;
    }
    if ((iVar2 == 0) && (0x3f < param_3)) {
      FUN_00407f34(param_1,param_2);
      uVar1 = param_1[1] + 0x200;
      param_2 = param_2 + 0x40;
      *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
      param_1[1] = uVar1;
      param_3 = param_3 - 0x40;
    }
    else {
      param_3 = param_3 - uVar1;
      (*(code *)PTR_memcpy_004332a8)((int)(param_1 + 8) + iVar2,param_2,uVar1);
      iVar2 = param_1[7];
      param_2 = param_2 + uVar1;
      param_1[7] = uVar1 + iVar2;
      if (uVar1 + iVar2 == 0x40) {
        FUN_00407f34(param_1,param_1 + 8);
        uVar1 = param_1[1] + 0x200;
        param_1[7] = 0;
        *param_1 = (uint)(uVar1 < (uint)param_1[1]) + *param_1;
        param_1[1] = uVar1;
      }
    }
  }
  return 0;
}


/* FUN_0040c284 @ 0040c284 */

undefined4 FUN_0040c284(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_68 = 0x67452301;
  local_64 = 0xefcdab89;
  local_60 = 0x98badcfe;
  local_5c = 0x10325476;
  local_58 = 0xc3d2e1f0;
  local_6c = 0;
  local_70 = 0;
  local_54 = 0;
  SHA1_Update_compat(&local_70,param_1,param_2);
  SHA1_Final_compat(param_3,&local_70);
  return param_3;
}


/* FUN_0040c330 @ 0040c330 */

void FUN_0040c330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0040c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gcm_decrypt_004332e8)(param_4,param_2,param_3,param_1);
  return;
}


/* FUN_0040c428 @ 0040c428 */

void FUN_0040c428(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (param_2 == 0) {
    iVar2 = 0xf;
    iVar1 = param_1;
    do {
      iVar2 = iVar2 + -1;
      cVar3 = *(char *)(iVar1 + 0x1167) + '\x01';
      *(char *)(iVar1 + 0x1167) = cVar3;
      if (cVar3 != '\0') break;
      iVar1 = iVar1 + -1;
    } while (iVar2 != -1);
    param_2 = param_1 + 0x1158;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_gcm_init_message_00433148)(param_2,0x10);
  return;
}


/* FUN_0040c4c8 @ 0040c4c8 */

void FUN_0040c4c8(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_00433190)(param_1,0,0xf8);
  return;
}


/* AES_CTR_Final @ 0040c500 */

void AES_CTR_Final(undefined4 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0040c514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_memset_00433190)(param_1,0,0x11c);
  return;
}


/* AES_CTR_Update @ 0040c598 */

undefined4 AES_CTR_Update(int param_1,byte *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  char cVar9;
  int iVar8;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 0x114);
  while( true ) {
    iVar4 = param_1 + uVar10;
    if ((param_3 == 0) || (uVar10 == 0)) break;
    bVar1 = *param_2;
    uVar10 = uVar10 + 1 & 0xf;
    param_2 = param_2 + 1;
    *param_4 = *(byte *)(iVar4 + 0x104) ^ bVar1;
    param_3 = param_3 - 1;
    param_4 = param_4 + 1;
  }
  *(uint *)(param_1 + 0x114) = uVar10;
  iVar4 = 0;
  uVar3 = param_3;
  while( true ) {
    if (uVar3 < 0x10) break;
    (*(code *)PTR_aes_ecb_encrypt_00433248)(param_1 + 0xf4,param_1 + 0x104,0x10,param_1);
    iVar7 = 0xf;
    iVar5 = param_1;
    do {
      iVar7 = iVar7 + -1;
      cVar9 = *(char *)(iVar5 + 0x103) + '\x01';
      *(char *)(iVar5 + 0x103) = cVar9;
      if (cVar9 != '\0') break;
      iVar5 = iVar5 + -1;
    } while (iVar7 != -1);
    iVar5 = 0;
    do {
      iVar8 = param_1 + iVar5;
      iVar2 = iVar5 - iVar4;
      iVar7 = iVar5 - iVar4;
      iVar5 = iVar5 + 1;
      param_4[iVar7] = *(byte *)(iVar8 + 0x104) ^ param_2[iVar2];
    } while (iVar5 != 0x10);
    uVar3 = uVar3 - 0x10;
    iVar4 = iVar4 + -0x10;
  }
  param_4 = param_4 + (param_3 & 0xfffffff0);
  param_2 = param_2 + (param_3 & 0xfffffff0);
  if ((param_3 & 0xf) != 0) {
    (*(code *)PTR_aes_ecb_encrypt_00433248)(param_1 + 0xf4,param_1 + 0x104,0x10,param_1);
    iVar5 = 0xf;
    iVar4 = param_1;
    do {
      iVar5 = iVar5 + -1;
      cVar9 = *(char *)(iVar4 + 0x103) + '\x01';
      *(char *)(iVar4 + 0x103) = cVar9;
      if (cVar9 != '\0') break;
      iVar4 = iVar4 + -1;
    } while (iVar5 != -1);
    pbVar6 = (byte *)(param_1 + uVar10 + 0x104);
    uVar3 = 0;
    do {
      bVar1 = *param_2;
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
      *param_4 = *pbVar6 ^ bVar1;
      pbVar6 = pbVar6 + 1;
      param_4 = param_4 + 1;
    } while (uVar3 != (param_3 & 0xf));
    if (*(char *)(param_1 + 0x118) == '\0') {
      *(uint *)(param_1 + 0x114) = uVar3 + uVar10;
    }
  }
  return 0;
}


/* FUN_0040c7b4 @ 0040c7b4 */

undefined4 FUN_0040c7b4(int param_1,int param_2,uint param_3,int param_4)

{
  code *pcVar1;
  
  for (param_3 = param_3 >> 4; param_3 != 0; param_3 = param_3 - 1) {
    pcVar1 = (code *)PTR_aes_ecb_decrypt_004330f0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar1 = (code *)PTR_aes_ecb_encrypt_00433248;
    }
    (*pcVar1)(param_2,param_4,0x10,param_1);
    param_4 = param_4 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 0;
}


/* AES_CTR_Init @ 0040c864 */

undefined4 AES_CTR_Init(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_aes_init_00433090)();
  (*(code *)PTR_aes_encrypt_key128_00433258)(param_2,param_1);
  (*(code *)PTR_memcpy_004332a8)(param_1 + 0xf4,param_3,0x10);
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return 0;
}


/* FUN_0040c8e0 @ 0040c8e0 */

undefined4 FUN_0040c8e0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  (*(code *)PTR_aes_init_00433090)();
  pcVar1 = (code *)PTR_aes_decrypt_key128_00433104;
  if (param_2 == 1) {
    pcVar1 = (code *)PTR_aes_encrypt_key128_00433258;
  }
  (*pcVar1)(param_3,param_1);
  *(int *)(param_1 + 0xf4) = param_2;
  return 0;
}


/* FUN_0040c95c @ 0040c95c */

undefined4 FUN_0040c95c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  code *pcVar1;
  
  (*(code *)PTR_aes_init_00433090)();
  pcVar1 = (code *)PTR_aes_decrypt_key128_00433104;
  if ((param_4 & 0xff) != 0) {
    pcVar1 = (code *)PTR_aes_encrypt_key128_00433258;
  }
  (*pcVar1)(param_2,param_1);
  *(uint *)(param_1 + 0xf4) = param_4 & 0xff;
  (*(code *)PTR_memcpy_004332a8)(param_1 + 0xf8,param_3,0x10);
  return 0;
}


/* FUN_0040c9f8 @ 0040c9f8 */

undefined4
FUN_0040c9f8(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4,int param_5,
            undefined1 *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  undefined1 *local_30;
  
  local_30 = auStack_50;
  uVar4 = param_3 & 0xfffffff0;
  puVar6 = param_4 + param_5;
  puVar7 = param_2 + param_3;
  (*(code *)PTR_memcpy_004332a8)(local_30,param_1 + 0xf8,0x10);
  if (uVar4 != 0) {
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar8)(param_2,param_6,uVar4,local_30,param_1);
    param_6 = param_6 + uVar4;
    param_2 = param_2 + uVar4;
  }
  if ((param_2 != puVar7) && (0xf < (int)(puVar7 + (int)(puVar6 + (-(int)param_2 - (int)param_4)))))
  {
    puVar2 = local_40;
    puVar5 = param_2;
    do {
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
    } while (puVar5 != puVar7);
    uVar4 = (int)puVar5 - (int)param_2;
    puVar2 = local_40 + uVar4;
    for (; (uVar4 < 0x10 && (param_4 != puVar6)); param_4 = param_4 + 1) {
      uVar4 = uVar4 + 1;
      *puVar2 = *param_4;
      puVar2 = puVar2 + 1;
    }
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar8)(local_40,param_6,uVar4,auStack_50,param_1);
    param_6 = param_6 + uVar4;
    param_2 = puVar5;
  }
  uVar4 = (int)puVar6 - (int)param_4 & 0xfffffff0;
  puVar5 = param_2;
  puVar2 = param_6;
  puVar3 = param_4;
  if (uVar4 != 0) {
    pcVar8 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar8 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    puVar2 = param_6 + uVar4;
    puVar3 = param_4 + uVar4;
    (*pcVar8)(param_4,param_6,uVar4,auStack_50,param_1);
    param_6 = puVar2;
  }
  for (; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    *puVar2 = *puVar5;
    puVar2 = puVar2 + 1;
  }
  param_6 = param_6 + ((int)puVar5 - (int)param_2);
  for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
    *param_6 = *puVar3;
    param_6 = param_6 + 1;
  }
  return 0;
}


/* FUN_0040cc44 @ 0040cc44 */

undefined4 FUN_0040cc44(int param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_30 [16];
  undefined1 *local_20;
  
  uVar1 = param_3 & 0xfffffff0;
  puVar2 = param_2 + param_3;
  if (uVar1 != 0) {
    local_20 = auStack_30;
    (*(code *)PTR_memcpy_004332a8)(local_20,param_1 + 0xf8,0x10);
    pcVar3 = (code *)PTR_aes_cbc_decrypt_00433154;
    if (*(int *)(param_1 + 0xf4) != 0) {
      pcVar3 = (code *)PTR_aes_cbc_encrypt_0043311c;
    }
    (*pcVar3)(param_2,param_4,uVar1,local_20,param_1);
    param_4 = param_4 + uVar1;
    param_2 = param_2 + uVar1;
  }
  for (; param_2 != puVar2; param_2 = param_2 + 1) {
    *param_4 = *param_2;
    param_4 = param_4 + 1;
  }
  return 0;
}


/* memcmp_constant_time @ 0040cd30 */

byte memcmp_constant_time(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  bVar1 = 0;
  while( true ) {
    pbVar4 = (byte *)(param_2 + uVar2);
    pbVar3 = (byte *)(param_1 + uVar2);
    if (param_3 <= uVar2) break;
    uVar2 = uVar2 + 1;
    bVar1 = bVar1 | *pbVar4 ^ *pbVar3;
  }
  return bVar1;
}


/* FUN_0040cd70 @ 0040cd70 */

void FUN_0040cd70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar2 = *(int *)(param_1 + 0x108);
    if (iVar2 == 0) {
      uVar1 = 0xffffe5a7;
    }
    else {
      *(char *)(param_1 + iVar2) = ((char)*(undefined4 *)(param_1 + 0x100) + -1) - (char)iVar2;
      *(undefined4 *)(param_1 + 0x108) = 0;
      uVar1 = 0;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = uVar1;
    }
  }
  return;
}


/* FUN_0040cdcc @ 0040cdcc */

void FUN_0040cdcc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    iVar2 = *(int *)(param_1 + 0x100);
    if (iVar2 + 6U < 0x100) {
      puVar3 = (undefined1 *)(param_1 + iVar2);
      *puVar3 = 0xdd;
      *(int *)(param_1 + 0x108) = iVar2 + 1;
      *(undefined1 *)(param_1 + iVar2 + 1) = 0;
      puVar3[2] = (char)((uint)param_2 >> 0x18);
      puVar3[3] = (char)((uint)param_2 >> 0x10);
      puVar3[4] = (char)((uint)param_2 >> 8);
      puVar3[5] = (char)param_2;
      *(uint *)(param_1 + 0x100) = iVar2 + 6U;
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffe5a9;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(undefined4 *)(param_1 + 0x104) = uVar1;
    }
  }
  return;
}


/* FUN_0040ce50 @ 0040ce50 */

int FUN_0040ce50(int param_1,undefined1 param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x104);
  if (iVar3 == 0) {
    if (param_4 == -1) {
      param_4 = (*(code *)PTR_strlen_004330cc)(param_3);
    }
    iVar1 = *(int *)(param_1 + 0x100) + 2;
    puVar2 = (undefined1 *)(param_1 + *(int *)(param_1 + 0x100));
    if ((uint)(iVar1 + param_4) < 0x100) {
      puVar2[1] = (char)param_4;
      *puVar2 = param_2;
      puVar2 = param_3 + param_4;
      *(int *)(param_1 + 0x100) = iVar1;
      for (; param_3 < puVar2; param_3 = param_3 + 1) {
        iVar1 = *(int *)(param_1 + 0x100);
        *(undefined1 *)(param_1 + iVar1) = *param_3;
        *(int *)(param_1 + 0x100) = iVar1 + 1;
      }
    }
    else {
      iVar3 = -0x1a57;
    }
    if (*(int *)(param_1 + 0x104) == 0) {
      *(int *)(param_1 + 0x104) = iVar3;
    }
  }
  return iVar3;
}


/* FUN_0040cf34 @ 0040cf34 */

undefined4 FUN_0040cf34(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  iVar1 = (*(code *)PTR_socket_00433268)(2,1,0);
  if (iVar1 == -1) {
    return 0;
  }
  (*(code *)PTR_strcpy_004332fc)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_004332f4)(iVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_0040d08c;
  }
  if (param_2 == 3) {
    iVar2 = (*(code *)PTR_ioctl_004332f4)(iVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_004332a8)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_0040d08c;
    }
  }
  else if (param_2 == 0) {
    iVar2 = (*(code *)PTR_ioctl_004332f4)(iVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_0040d070:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_0040d08c;
    }
  }
  else if ((param_2 == 1) &&
          (iVar2 = (*(code *)PTR_ioctl_004332f4)(iVar1,0x891b,auStack_38), -1 < iVar2))
  goto LAB_0040d070;
  uVar3 = 0;
LAB_0040d08c:
  (*(code *)PTR_close_00433098)(iVar1);
  return uVar3;
}


/* CreateAppleDeviceIE @ 0040d0b8 */

undefined4
CreateAppleDeviceIE(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                   byte param_5,byte param_6,byte param_7,byte param_8,char param_9,byte param_10,
                   char param_11,char param_12,undefined4 *param_13,undefined4 *param_14)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte local_168;
  byte bStack_167;
  undefined1 local_166;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 auStack_160 [2];
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 auStack_150 [256];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  byte *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  local_40 = (byte *)(uint)param_5;
  local_3c = (uint)param_6;
  local_38 = (uint)param_7;
  local_34 = (uint)param_8;
  local_30 = (uint)param_10;
  if (((param_13 == (undefined4 *)0x0) || (param_14 == (undefined4 *)0x0)) || (param_4 == 0)) {
    uVar3 = 0xffffe5cf;
  }
  else {
    local_163 = 0xe0;
    local_162 = 0x4c;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_164 = 0;
    FUN_0040cdcc(auStack_150,0xa04000);
    iVar2 = FUN_0040cf34(&DAT_0041d7f0,3,auStack_160);
    if (iVar2 != 0) {
      local_162 = local_15c;
      local_163 = local_15d;
      local_164 = local_15e;
    }
    local_168 = 0;
    local_166 = 0;
    if (local_40 != (byte *)0x0) {
      local_168 = 0x40;
    }
    bStack_167 = 0;
    if (local_3c != 0) {
      local_168 = local_168 | 0x80;
    }
    if (local_38 != 0) {
      bStack_167 = 0x80;
    }
    if (local_34 != 0) {
      local_168 = local_168 | 0x20;
    }
    if (local_30 != 0) {
      bStack_167 = bStack_167 | 2;
    }
    if (param_11 != '\0') {
      bStack_167 = bStack_167 | 1;
    }
    if (param_12 != '\0') {
      local_166 = 0x40;
    }
    if (param_9 != '\0') {
      local_168 = local_168 | 0x10;
    }
    local_40 = &local_168;
    uVar3 = (*(code *)PTR_memrlen_00433254)(local_40,3);
    FUN_0040ce50(auStack_150,0,local_40,uVar3);
    FUN_0040ce50(auStack_150,1,param_1,0xffffffff);
    FUN_0040ce50(auStack_150,2,param_3,0xffffffff);
    FUN_0040ce50(auStack_150,3,param_2,0xffffffff);
    FUN_0040ce50(auStack_150,4,&local_164,3);
    FUN_0040ce50(auStack_150,7,param_4,6);
    uVar3 = FUN_0040cd70(auStack_150);
    uVar4 = (*(code *)PTR_malloc_00433280)(local_50);
    puVar1 = PTR_memcpy_004332a8;
    *param_13 = uVar4;
    (*(code *)puVar1)(uVar4,auStack_150,local_50);
    *param_14 = local_50;
  }
  return uVar3;
}


/* FUN_0040d3a0 @ 0040d3a0 */

undefined4
FUN_0040d3a0(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  undefined1 auStack_138 [64];
  undefined1 auStack_f8 [208];
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*param_1 == '\x04') || (uVar1 = 0xffffe5cb, *param_1 == '\x06')) {
    if (param_6 != 0) {
      local_28 = param_2;
      local_24 = param_3;
      (*(code *)PTR_SHA512_Init_compat_004330ac)(auStack_f8);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,local_28,local_24);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_1 + 2,0x20);
      (*(code *)PTR_SHA512_Final_compat_00433298)(auStack_138,auStack_f8);
      (*(code *)PTR_memcpy_004332a8)(param_6,auStack_138,0x10);
    }
    uVar1 = 0;
    if (param_7 != 0) {
      (*(code *)PTR_SHA512_Init_compat_004330ac)(auStack_f8);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_4,param_5);
      (*(code *)PTR_SHA512_Update_compat_004330a8)(auStack_f8,param_1 + 2,0x20);
      (*(code *)PTR_SHA512_Final_compat_00433298)(auStack_138,auStack_f8);
      (*(code *)PTR_memcpy_004332a8)(param_7,auStack_138,0x10);
      uVar1 = 0;
    }
  }
  return uVar1;
}


/* MFiSAP_Decrypt @ 0040d52c */

undefined4 MFiSAP_Decrypt(char *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\x04') && (*param_1 != '\x06')) {
    return 0xffffe5cb;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_AES_CTR_Update_004332f0)(param_1 + 0x24);
  return uVar1;
}


/* MFiSAP_Encrypt @ 0040d564 */

undefined4 MFiSAP_Encrypt(char *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 != '\x04') && (*param_1 != '\x06')) {
    return 0xffffe5cb;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_AES_CTR_Update_004332f0)(param_1 + 0x24);
  return uVar1;
}


/* MFiSAP_Exchange @ 0040d59c */

/* WARNING: Removing unreachable block (ram,0x0040d668) */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int MFiSAP_Exchange(char *param_1,char *param_2,int param_3,int *param_4,undefined4 *param_5,
                   undefined1 *param_6)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar5;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [20];
  undefined1 auStack_d4 [32];
  undefined1 auStack_b4 [36];
  undefined1 auStack_90 [96];
  undefined1 *local_30;
  
  *param_6 = 0;
  if (*param_1 == '\x01') {
    cVar5 = '\x05';
    if (param_2 == (char *)0x0) {
      cVar5 = '\x02';
    }
    *param_1 = cVar5;
  }
  uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  iVar8 = -0x1a35;
  if (*param_1 != '\x05') goto LAB_0040daf4;
  local_118 = 0;
  local_110 = 0;
  uVar10 = (*(code *)PTR_UpTicks_004330a0)();
  uVar7 = (uint)uVar10 - DAT_00433604;
  iVar8 = (int)((ulonglong)uVar10 >> 0x20) - DAT_00433600;
  uVar11 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
  if (CONCAT44(iVar8 - (uint)((uint)uVar10 < uVar7),uVar7) < uVar11) {
    if (DAT_00433608 < 4) {
      DAT_00433608 = DAT_00433608 + 1;
    }
    uVar7 = DAT_00433608;
    uVar11 = (*(code *)PTR_UpTicksPerSecond_004330b4)();
    lVar1 = (uVar11 & 0xffffffff) * (ulonglong)uVar7;
    (*(code *)PTR_SleepForUpTicks_00433260)
              ((int)(uVar11 >> 0x20) * uVar7 + (int)((ulonglong)lVar1 >> 0x20),(int)lVar1);
  }
  else {
    DAT_00433608 = 0;
  }
  pcVar6 = param_2 + param_3;
  uVar10 = (*(code *)PTR_UpTicks_004330a0)();
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if ((param_2 < pcVar6) && (0 < (int)pcVar6 - (int)param_2)) {
    cVar5 = *param_2;
    iVar8 = -0x1a3b;
    param_1[1] = cVar5;
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
    if (cVar5 == '\x01') {
      pcVar9 = param_2 + 1;
      uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
      if (((int)pcVar6 - (int)pcVar9 < 0x20) ||
         (uVar10 = CONCAT44(DAT_00433600,DAT_00433604), pcVar6 != param_2 + 0x21))
      goto LAB_0040da8c;
      iVar8 = (*(code *)PTR_PlatformRandomBytes_0043329c)(auStack_d4,0x20);
      uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
      if (iVar8 == 0) {
        local_30 = auStack_b4;
        (*(code *)PTR_curve25519_donna_004330fc)(local_30,auStack_d4,0);
        pcVar6 = param_1 + 2;
        (*(code *)PTR_curve25519_donna_004330fc)(pcVar6,auStack_d4,pcVar9);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,"AES-KEY",7);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar6,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        (*(code *)PTR_memcpy_004332a8)(auStack_108,auStack_e8,0x10);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,"AES-IV",6);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar6,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        (*(code *)PTR_memcpy_004332a8)(auStack_f8,auStack_e8,0x10);
        (*(code *)PTR_SHA1_Init_compat_0043308c)(auStack_90);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,local_30,0x20);
        (*(code *)PTR_SHA1_Update_compat_0043319c)(auStack_90,pcVar9,0x20);
        (*(code *)PTR_SHA1_Final_compat_00433134)(auStack_e8,auStack_90);
        iVar8 = (*(code *)PTR_PlatformMFiAuthCreateSignature_00433120)
                          (auStack_e8,0x14,&local_118,&local_114);
        uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
        if (iVar8 == 0) {
          iVar8 = (*(code *)PTR_PlatformMFiAuthCopyCertificate_004332d0)(&local_110,&local_10c);
          uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
          if (iVar8 == 0) {
            pcVar6 = param_1 + 0x24;
            iVar8 = (*(code *)PTR_AES_CTR_Init_00433164)(pcVar6,auStack_108,auStack_f8);
            uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
            if (iVar8 == 0) {
              iVar8 = (*(code *)PTR_AES_CTR_Update_004332f0)(pcVar6,local_118,local_114,local_118);
              puVar2 = PTR_malloc_00433280;
              if (iVar8 == 0) {
                param_1[0x140] = '\x01';
                iVar3 = (*(code *)puVar2)(local_10c + local_114 + 0x28);
                uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
                if (iVar3 == 0) {
                  iVar8 = -0x1a48;
                }
                else {
                  (*(code *)PTR_memcpy_004332a8)(iVar3,auStack_b4,0x20);
                  puVar2 = PTR_memcpy_004332a8;
                  *(char *)(iVar3 + 0x20) = (char)((uint)local_10c >> 0x18);
                  *(char *)(iVar3 + 0x21) = (char)((uint)local_10c >> 0x10);
                  *(char *)(iVar3 + 0x22) = (char)((uint)local_10c >> 8);
                  *(char *)(iVar3 + 0x23) = (char)local_10c;
                  (*(code *)puVar2)(iVar3 + 0x24,local_110,local_10c);
                  puVar2 = PTR_memcpy_004332a8;
                  puVar4 = (undefined1 *)(iVar3 + 0x24 + local_10c);
                  puVar4[1] = (char)((uint)local_114 >> 0x10);
                  *puVar4 = (char)((uint)local_114 >> 0x18);
                  puVar4[2] = (char)((uint)local_114 >> 8);
                  puVar4[3] = (char)local_114;
                  (*(code *)puVar2)(puVar4 + 4,local_118);
                  *param_4 = iVar3;
                  *param_5 = puVar4 + 4 + (local_114 - iVar3);
                  uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
                }
              }
              else {
                (*(code *)PTR_AES_CTR_Final_004330bc)(pcVar6);
                uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
              }
            }
          }
        }
      }
    }
  }
  else {
LAB_0040da8c:
    iVar8 = -0x1a57;
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (local_110 != 0) {
    (*(code *)PTR_free_00433088)();
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (local_118 != 0) {
    (*(code *)PTR_free_00433088)();
    uVar10 = CONCAT44(DAT_00433600,DAT_00433604);
  }
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  if (iVar8 == 0) {
    *param_6 = 1;
    *param_1 = *param_1 + '\x01';
    return 0;
  }
LAB_0040daf4:
  DAT_00433600 = (int)((ulonglong)uVar10 >> 0x20);
  DAT_00433604 = (int)uVar10;
  *param_1 = '\0';
  return iVar8;
}


/* FUN_0040db2c @ 0040db2c */

void FUN_0040db2c(int param_1)

{
  if (*(char *)(param_1 + 0x140) != '\0') {
    (*(code *)PTR_AES_CTR_Final_004330bc)(param_1 + 0x24);
  }
  (*(code *)PTR_memset_00433190)(param_1,0,0x144);
                    /* WARNING: Could not recover jumptable at 0x0040db94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_free_00433088)(param_1);
  return;
}


/* MFiSAP_Create @ 0040db9c */

undefined4 MFiSAP_Create(undefined4 *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffe5c5;
  if (param_2 == '\x01') {
    puVar1 = (undefined1 *)(*(code *)PTR_calloc_00433224)(1,0x144);
    uVar2 = 0xffffe5b8;
    if (puVar1 != (undefined1 *)0x0) {
      *param_1 = puVar1;
      uVar2 = 0;
      puVar1[1] = 1;
      *puVar1 = 1;
    }
  }
  return uVar2;
}


/* FUN_0040dc10 @ 0040dc10 */

void FUN_0040dc10(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = param_1[1] + param_2[1];
    *param_1 = (uint)(uVar2 < (uint)param_1[1]) + *param_1 + *param_2;
    param_1[1] = uVar2;
    uVar2 = param_1[3] + param_2[3];
    iVar1 = iVar1 + 2;
    param_1[2] = (uint)(uVar2 < (uint)param_1[3]) + param_1[2] + param_2[2];
    param_1[3] = uVar2;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  } while (iVar1 != 10);
  return;
}


/* FUN_0040dc80 @ 0040dc80 */

void FUN_0040dc80(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar5;
  int iVar6;
  longlong lVar3;
  longlong lVar4;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  
  *param_1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 4);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 4);
  local_4c = (uint)lVar1;
  local_50 = (int)((ulonglong)lVar1 >> 0x20);
  local_58 = (int)((ulonglong)((longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0xc))
                  >> 0x20);
  *(uint *)((int)param_1 + 0xc) = local_4c + local_54;
  *(uint *)(param_1 + 1) = (uint)(local_4c + local_54 < local_4c) + local_50 + local_58;
  uVar11 = *(uint *)(param_3 + 0xc);
  uVar2 = (longlong)*(int *)(param_2 + 0xc) * 2;
  iVar5 = ((int)uVar11 >> 0x1f) * local_44;
  local_48 = (int)(uVar2 >> 0x20);
  iVar6 = local_48 * uVar11;
  lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
  local_48 = (int)((ulonglong)lVar1 >> 0x20);
  local_44 = (int)lVar1;
  param_1[2] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 4) +
               CONCAT44(iVar6 + iVar5 + local_48,local_44);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x14);
  local_4c = (uint)lVar1;
  param_1[3] = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x1c) +
               lVar1 + (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0xc);
  lVar1 = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x14);
  local_4c = local_3c + local_4c;
  local_50 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 4))
                  >> 0x20);
  local_40 = (int)((ulonglong)lVar1 >> 0x20);
  local_3c = (uint)lVar1;
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x1c) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar1;
  param_1[4] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44((uint)(local_4c < local_3c) + local_40 + local_50,local_4c) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  lVar1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x2c);
  local_44 = (int)lVar1;
  param_1[5] = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x1c) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x14) + lVar1 +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0xc);
  local_48 = (int)((ulonglong)((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 4))
                  >> 0x20);
  lVar1 = (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0xc) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x1c);
  uVar11 = (uint)lVar1;
  param_1[6] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x14) +
               CONCAT44(local_48,local_44) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  lVar1 = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x3c);
  local_44 = (int)lVar1;
  param_1[7] = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 4) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x1c) + lVar1 +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x2c) +
               (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0xc);
  local_48 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x34)) >> 0x20
                  );
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x1c) +
          (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x3c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar1;
  param_1[8] = (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x44) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x24) +
               CONCAT44(local_48,local_44) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 4) +
               CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[9] = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x24) +
               (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x2c) +
               (longlong)*(int *)(param_3 + 4) * (longlong)*(int *)(param_2 + 0x4c) +
               (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x34) +
               (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x1c) +
               (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x3c) +
               (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x14) +
               (longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x44) +
               (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0xc) +
               (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 4);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x2c);
  local_54 = (int)lVar1;
  lVar3 = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x3c);
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x24)) >> 0x20
                  );
  local_4c = (uint)lVar3;
  lVar3 = lVar3 + (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x1c) + lVar1 +
                  (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0xc);
  uVar11 = (uint)lVar3;
  local_4c = uVar11 + local_4c;
  lVar1 = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x44);
  local_50 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0xc) * (longlong)*(int *)(param_2 + 0x4c)) >> 0x20)
  ;
  param_1[10] = (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x34) +
                (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x14) +
                CONCAT44(local_58,local_54) + lVar1 +
                CONCAT44(local_4c >> 0x1f |
                         ((uint)(local_4c < uVar11) + (int)((ulonglong)lVar3 >> 0x20) + local_50) *
                         2,local_4c * 2);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x2c)) >> 0x20
                  );
  lVar7 = CONCAT44(local_58,local_54);
  lVar1 = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x24);
  lVar3 = (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x1c);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)lVar3 >> 0x20);
  lVar8 = CONCAT44(local_58,local_54);
  lVar4 = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x14);
  local_54 = (int)lVar3;
  local_58 = (int)((ulonglong)lVar4 >> 0x20);
  param_1[0xb] = (longlong)*(int *)(param_3 + 0x14) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x3c) +
                 (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x34) + lVar7 +
                 lVar1 + lVar8 + CONCAT44(local_58,local_54);
  lVar1 = (longlong)*(int *)(param_3 + 0x1c) * (longlong)*(int *)(param_2 + 0x4c);
  local_54 = (int)lVar4;
  local_58 = (int)((ulonglong)lVar1 >> 0x20);
  lVar4 = CONCAT44(local_58,local_54);
  lVar3 = (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x24);
  local_54 = (int)lVar1;
  local_58 = (int)((ulonglong)lVar3 >> 0x20);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x3c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x2c) + lVar4 +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x1c);
  uVar10 = (uint)lVar1;
  lVar4 = (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x44) +
          (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x34) +
          CONCAT44(local_58,local_54);
  uVar9 = (uint)lVar4;
  uVar11 = uVar9 + uVar10 * 2;
  *(uint *)(param_1 + 0xc) =
       (uint)(uVar11 < uVar9) +
       (int)((ulonglong)lVar4 >> 0x20) + (uVar10 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2);
  *(uint *)((int)param_1 + 100) = uVar11;
  local_54 = (int)lVar3;
  local_58 = (int)((ulonglong)
                   ((longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x34)) >> 0x20
                  );
  param_1[0xd] = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x24) +
                 (longlong)*(int *)(param_3 + 0x24) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x3c) +
                 CONCAT44(local_58,local_54) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x2c);
  lVar1 = (longlong)*(int *)(param_3 + 0x2c) * (longlong)*(int *)(param_2 + 0x4c) +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x2c) +
          (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x3c);
  uVar11 = (uint)lVar1;
  param_1[0xe] = (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x34) +
                 CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[0xf] = (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x34) +
                 (longlong)*(int *)(param_3 + 0x34) * (longlong)*(int *)(param_2 + 0x4c) +
                 (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x44) +
                 (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x3c);
  lVar1 = (longlong)*(int *)(param_3 + 0x3c) * (longlong)*(int *)(param_2 + 0x4c) +
          (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x3c);
  uVar11 = (uint)lVar1;
  param_1[0x10] =
       (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x44) +
       CONCAT44(uVar11 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar11 * 2);
  param_1[0x11] =
       (longlong)*(int *)(param_3 + 0x44) * (longlong)*(int *)(param_2 + 0x4c) +
       (longlong)*(int *)(param_3 + 0x4c) * (longlong)*(int *)(param_2 + 0x44);
  param_1[0x12] = (longlong)*(int *)(param_2 + 0x4c) * 2 * (longlong)*(int *)(param_3 + 0x4c);
  return;
}


/* FUN_0040f314 @ 0040f314 */

void FUN_0040f314(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1[0x25];
  uVar2 = uVar4 * 0x10 + param_1[0x11];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0x10] =
       (uint)(uVar1 + uVar4 < uVar1) +
       (uint)(uVar1 < uVar2) +
       (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x24] << 4) + param_1[0x10] +
       (uVar4 >> 0x1f | param_1[0x24] << 1) + param_1[0x24];
  param_1[0x11] = uVar1 + uVar4;
  uVar4 = param_1[0x23];
  uVar2 = uVar4 * 0x10 + param_1[0xf];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0xe] = (uint)(uVar1 + uVar4 < uVar1) +
                 (uint)(uVar1 < uVar2) +
                 (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x22] << 4) + param_1[0xe]
                 + (uVar4 >> 0x1f | param_1[0x22] << 1) + param_1[0x22];
  param_1[0xf] = uVar1 + uVar4;
  uVar4 = param_1[0x21];
  uVar2 = uVar4 * 0x10 + param_1[0xd];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[0xc] = (uint)(uVar1 + uVar4 < uVar1) +
                 (uint)(uVar1 < uVar2) +
                 (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x20] << 4) + param_1[0xc]
                 + (uVar4 >> 0x1f | param_1[0x20] << 1) + param_1[0x20];
  param_1[0xd] = uVar1 + uVar4;
  uVar4 = param_1[0x1f];
  uVar2 = uVar4 * 0x10 + param_1[0xb];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[10] = (uint)(uVar1 + uVar4 < uVar1) +
                (uint)(uVar1 < uVar2) +
                (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1e] << 4) + param_1[10] +
                (uVar4 >> 0x1f | param_1[0x1e] << 1) + param_1[0x1e];
  param_1[0xb] = uVar1 + uVar4;
  uVar4 = param_1[0x1d];
  uVar2 = uVar4 * 0x10 + param_1[9];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[8] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1c] << 4) + param_1[8] +
               (uVar4 >> 0x1f | param_1[0x1c] << 1) + param_1[0x1c];
  param_1[9] = uVar1 + uVar4;
  uVar4 = param_1[0x1b];
  uVar2 = uVar4 * 0x10 + param_1[7];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[6] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x1a] << 4) + param_1[6] +
               (uVar4 >> 0x1f | param_1[0x1a] << 1) + param_1[0x1a];
  param_1[7] = uVar1 + uVar4;
  uVar4 = param_1[0x19];
  uVar2 = uVar4 * 0x10 + param_1[5];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[4] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x18] << 4) + param_1[4] +
               (uVar4 >> 0x1f | param_1[0x18] << 1) + param_1[0x18];
  param_1[5] = uVar1 + uVar4;
  uVar4 = param_1[0x17];
  uVar2 = uVar4 * 0x10 + param_1[3];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[2] = (uint)(uVar1 + uVar4 < uVar1) +
               (uint)(uVar1 < uVar2) +
               (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | param_1[0x16] << 4) + param_1[2] +
               (uVar4 >> 0x1f | param_1[0x16] << 1) + param_1[0x16];
  param_1[3] = uVar1 + uVar4;
  uVar4 = param_1[0x15];
  iVar3 = param_1[0x14];
  uVar2 = uVar4 * 0x10 + param_1[1];
  uVar1 = uVar2 + uVar4 * 2;
  param_1[1] = uVar1 + uVar4;
  *param_1 = (uint)(uVar1 + uVar4 < uVar1) +
             (uint)(uVar1 < uVar2) +
             (uint)(uVar2 < uVar4 * 0x10) + (uVar4 >> 0x1c | iVar3 << 4) + *param_1 +
             (uVar4 >> 0x1f | iVar3 << 1) + iVar3;
  return;
}


/* FUN_0040f78c @ 0040f78c */

void FUN_0040f78c(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  iVar4 = 0;
  piVar1 = param_1;
  do {
    iVar9 = *piVar1;
    uVar5 = piVar1[1];
    uVar7 = (uint)(iVar9 >> 0x1f) >> 6;
    uVar2 = uVar7 + uVar5;
    uVar8 = (uint)(uVar2 < uVar7) + iVar9;
    uVar2 = uVar2 >> 0x1a;
    uVar7 = uVar8 * 0x40 | uVar2;
    uVar3 = uVar7 + piVar1[3];
    iVar6 = (uint)(uVar3 < uVar7) + ((int)uVar8 >> 0x1a) + piVar1[2];
    uVar10 = (uint)(iVar6 >> 0x1f) >> 7;
    uVar7 = uVar10 + uVar3;
    uVar11 = (uint)(uVar7 < uVar10) + iVar6;
    uVar7 = uVar7 >> 0x19;
    uVar2 = uVar5 + uVar2 * -0x4000000;
    uVar10 = uVar3 + uVar7 * -0x2000000;
    uVar7 = piVar1[5] + (uVar11 * 0x80 | uVar7);
    iVar4 = iVar4 + 2;
    *piVar1 = (iVar9 - (uVar8 & 0x3ffffff | ((int)uVar8 >> 0x1a) << 0x1a)) - (uint)(uVar5 < uVar2);
    piVar1[1] = uVar2;
    piVar1[2] = (iVar6 - (uVar11 & 0x1ffffff | ((int)uVar11 >> 0x19) << 0x19)) -
                (uint)(uVar3 < uVar10);
    piVar1[3] = uVar10;
    piVar1[4] = (uint)(uVar7 < (uint)piVar1[5]) + piVar1[4] + ((int)uVar11 >> 0x19);
    piVar1[5] = uVar7;
    piVar1 = piVar1 + 4;
  } while (iVar4 != 10);
  iVar6 = param_1[0x14];
  uVar2 = param_1[0x15] * 0x10;
  uVar7 = uVar2 + param_1[1];
  iVar4 = (uint)(uVar7 < uVar2) + ((uint)param_1[0x15] >> 0x1c | iVar6 << 4) + *param_1;
  *param_1 = iVar4;
  param_1[1] = uVar7;
  uVar2 = uVar7 + param_1[0x15] * 2;
  iVar4 = (uint)(uVar2 < uVar7) + iVar4 + ((uint)param_1[0x15] >> 0x1f | iVar6 << 1);
  *param_1 = iVar4;
  param_1[1] = uVar2;
  uVar3 = uVar2 + param_1[0x15];
  param_1[0x14] = 0;
  iVar4 = (uint)(uVar3 < uVar2) + iVar4 + iVar6;
  uVar7 = (uint)(iVar4 >> 0x1f) >> 6;
  uVar2 = uVar7 + uVar3;
  uVar5 = (uint)(uVar2 < uVar7) + iVar4;
  uVar2 = uVar2 >> 0x1a;
  uVar7 = uVar5 * 0x40 | uVar2;
  param_1[0x15] = 0;
  uVar2 = uVar3 + uVar2 * -0x4000000;
  *param_1 = (iVar4 - (uVar5 & 0x3ffffff | ((int)uVar5 >> 0x1a) << 0x1a)) - (uint)(uVar3 < uVar2);
  param_1[1] = uVar2;
  uVar2 = uVar7 + param_1[3];
  iVar6 = ((uint)((int)uVar2 >> 0x1f) >> 7) + uVar2;
  iVar4 = iVar6 >> 0x19;
  uVar3 = uVar2 + iVar4 * -0x2000000;
  param_1[2] = (((uint)(uVar2 < uVar7) + ((int)uVar5 >> 0x1a) + param_1[2]) -
               (iVar4 * 0x2000000 >> 0x1f)) - (uint)(uVar2 < uVar3);
  param_1[3] = uVar3;
  uVar2 = param_1[5] + iVar4;
  param_1[4] = (uint)(uVar2 < (uint)param_1[5]) + param_1[4] + (iVar6 >> 0x1f);
  param_1[5] = uVar2;
  return;
}


/* FUN_0040f9fc @ 0040f9fc */

void FUN_0040f9fc(undefined4 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int local_148;
  undefined4 local_144;
  longlong local_140;
  uint local_138;
  int local_134;
  uint local_130;
  int local_12c;
  longlong local_128;
  uint local_120;
  int local_11c;
  uint local_118;
  int local_114;
  uint local_110;
  int local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  uint local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  longlong local_c0;
  uint local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  uint local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int *local_74;
  int local_70;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  uint local_2c;
  
  uVar17 = *(uint *)(param_2 + 4);
  uVar13 = *(uint *)(param_2 + 0x1c);
  local_90 = (longlong)(int)uVar17 * 2;
  uVar11 = *(uint *)(param_2 + 0x4c);
  uVar9 = *(uint *)(param_2 + 0x24);
  uVar16 = *(uint *)(param_2 + 0x14);
  uVar8 = *(uint *)(param_2 + 0xc);
  local_5c = (int)uVar9 >> 0x1f;
  uVar15 = *(uint *)(param_2 + 0x2c);
  uVar12 = *(uint *)(param_2 + 0x34);
  uVar14 = *(uint *)(param_2 + 0x3c);
  uVar10 = *(uint *)(param_2 + 0x44);
  local_3c = (int)uVar11 >> 0x1f;
  local_40 = (int)uVar10 >> 0x1f;
  local_60 = (int)uVar8 >> 0x1f;
  local_44 = (int)uVar12 >> 0x1f;
  local_54 = (int)uVar17 >> 0x1f;
  local_74 = &local_148;
  uVar20 = (uint)((longlong)(int)uVar15 * (longlong)(int)uVar13);
  uVar18 = uVar20 + local_b0._4_4_;
  local_b0._0_4_ = (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uVar8) >> 0x20);
  iVar19 = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uVar13) >> 0x20) +
           local_b0._0_4_;
  lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar13 +
          (longlong)(int)uVar14 * (longlong)(int)uVar15;
  uVar22 = (uint)lVar1;
  local_b0._4_4_ = (uint)((longlong)(int)uVar14 * (longlong)(int)uVar15);
  uVar21 = local_b0._4_4_;
  local_b0._0_4_ = (int)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar16) >> 0x20);
  local_b0._4_4_ = (uint)((longlong)(int)uVar9 * (longlong)(int)uVar16);
  local_2c = local_b0._4_4_ + (int)((ulonglong)uVar13 * (ulonglong)uVar13);
  local_94 = (undefined4)((longlong)(int)uVar14 * (longlong)(int)uVar9);
  lVar3 = (longlong)(int)uVar9 * (longlong)(int)uVar13 +
          (longlong)(int)uVar15 * (longlong)(int)uVar16;
  lVar2 = (longlong)(int)uVar12 * (longlong)(int)uVar16 +
          (longlong)(int)uVar10 * (longlong)(int)uVar17 +
          CONCAT44(uVar18 >> 0x1f | ((uint)(uVar18 < uVar20) + iVar19) * 2,uVar18 * 2);
  uVar20 = (uint)lVar2;
  local_58 = uVar20 * 2;
  local_88 = uVar20 >> 0x1f | (int)((ulonglong)lVar2 >> 0x20) * 2;
  lVar2 = (longlong)(int)uVar12 * (longlong)(int)uVar13 +
          (longlong)(int)uVar15 * (longlong)(int)uVar9 +
          (longlong)(int)uVar10 * (longlong)(int)uVar8;
  lVar4 = (longlong)(int)uVar14 * (longlong)(int)uVar13 +
          (longlong)(int)uVar11 * (longlong)(int)uVar8;
  uVar18 = (uint)lVar4;
  local_38 = uVar18 * 2;
  lVar6 = (longlong)(int)uVar14 * (longlong)(int)uVar9 +
          (longlong)(int)uVar12 * (longlong)(int)uVar15 +
          (longlong)(int)uVar11 * (longlong)(int)uVar16;
  local_98 = (undefined4)lVar6;
  local_48 = (undefined4)((ulonglong)lVar6 >> 0x20);
  local_30 = ((int)uVar16 >> 0x1f) * uVar16 * 2;
  lVar5 = (longlong)(int)uVar10 * (longlong)(int)uVar12 +
          CONCAT44(((int)uVar14 >> 0x1f) * uVar14 * 2 +
                   (int)((ulonglong)uVar14 * (ulonglong)uVar14 >> 0x20),
                   (int)((ulonglong)uVar14 * (ulonglong)uVar14));
  uVar20 = (uint)lVar5;
  local_64 = (int)((ulonglong)lVar5 >> 0x20);
  local_80 = (uint)((ulonglong)((longlong)(int)uVar13 * (longlong)(int)uVar16) >> 0x20);
  lVar5 = CONCAT44(local_80,local_7c);
  local_50 = (undefined4)((ulonglong)((longlong)(int)uVar9 * (longlong)(int)uVar8 + lVar5) >> 0x20);
  lVar7 = (longlong)(int)uVar12 * (longlong)(int)uVar17 +
          CONCAT44((uint)(local_2c < uVar21) +
                   local_b0._0_4_ +
                   ((int)uVar13 >> 0x1f) * uVar13 * 2 +
                   (int)((ulonglong)uVar13 * (ulonglong)uVar13 >> 0x20),local_2c);
  uVar21 = (uint)lVar7;
  local_70 = (int)((ulonglong)lVar7 >> 0x20);
  local_6c = (undefined4)
             ((ulonglong)(lVar3 + (longlong)(int)uVar14 * (longlong)(int)uVar17) >> 0x20);
  local_4c = (undefined4)
             ((ulonglong)(lVar2 + (longlong)(int)uVar14 * (longlong)(int)uVar16) >> 0x20);
  local_7c = (undefined4)((longlong)(int)uVar10 * (longlong)(int)uVar16);
  lVar4 = (longlong)(int)uVar12 * (longlong)(int)uVar9 +
          CONCAT44(((int)uVar15 >> 0x1f) * uVar15 * 2 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar15 >> 0x20),
                   (int)((ulonglong)uVar15 * (ulonglong)uVar15)) +
          (longlong)(int)uVar10 * (longlong)(int)uVar16 +
          CONCAT44(uVar18 >> 0x1f | (int)((ulonglong)lVar4 >> 0x20) * 2,local_38);
  uVar18 = (uint)lVar4;
  local_b0._4_4_ = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar9);
  local_f8 = (int)((ulonglong)lVar4 >> 0x20) * 2 | uVar18 >> 0x1f;
  lVar1 = (longlong)(int)uVar10 * (longlong)(int)uVar9 +
          CONCAT44(uVar22 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2,uVar22 * 2);
  uVar22 = (uint)lVar1;
  uVar23 = uVar22 * 2;
  local_68 = uVar22 >> 0x1f | (int)((ulonglong)lVar1 >> 0x20) * 2;
  local_f4 = uVar18 * 2;
  _local_80 = CONCAT44(uVar23,local_7c);
  local_a8._4_4_ = (uint)((longlong)(int)uVar10 * (longlong)(int)uVar15);
  local_b0._0_4_ = (int)((ulonglong)((longlong)(int)uVar15 * (longlong)(int)uVar11) >> 0x20);
  uVar18 = uVar20 + local_b0._4_4_ * 2;
  local_d8 = ((uint)(uVar18 < uVar20) + local_64 + (local_b0._4_4_ >> 0x1f | local_b0._0_4_ << 1)) *
             2 | uVar18 >> 0x1f;
  local_d4 = uVar18 * 2;
  uVar20 = (uint)((longlong)(int)uVar8 * (longlong)(int)uVar15);
  uVar18 = uVar21 + uVar20 * 2;
  local_118 = ((uint)(uVar18 < uVar21) +
              local_70 +
              (uVar20 >> 0x1f |
              (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)uVar15) >> 0x20) << 1)) * 2 |
              uVar18 >> 0x1f;
  local_114 = uVar18 * 2;
  local_b0._0_4_ = (int)((ulonglong)uVar8 * (ulonglong)uVar8 >> 0x20);
  local_b0._4_4_ = (uint)((ulonglong)uVar8 * (ulonglong)uVar8);
  local_a0 = (longlong)(int)uVar11 * (longlong)(int)uVar12;
  local_128 = local_90 * (int)uVar9 +
              CONCAT44(local_30 + (int)((ulonglong)uVar16 * (ulonglong)uVar16 >> 0x20),
                       (int)((ulonglong)uVar16 * (ulonglong)uVar16));
  local_78 = (undefined4)((ulonglong)local_128 >> 0x20);
  lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar17 +
          lVar2 + (longlong)(int)uVar14 * (longlong)(int)uVar16;
  uVar20 = (uint)lVar1;
  local_fc = uVar20 * 2;
  local_100 = (int)((ulonglong)lVar1 >> 0x20) * 2 | uVar20 >> 0x1f;
  lVar1 = (longlong)(int)uVar11 * (longlong)(int)uVar9 +
          (longlong)(int)uVar14 * (longlong)(int)uVar12 +
          (longlong)(int)uVar10 * (longlong)(int)uVar15;
  uVar20 = (uint)lVar1;
  local_e0 = (int)((ulonglong)lVar1 >> 0x20) * 2 | uVar20 >> 0x1f;
  local_dc = uVar20 * 2;
  lVar1 = (longlong)(int)uVar16 * (longlong)(int)uVar17;
  uVar20 = local_a8._4_4_ + local_b0._4_4_;
  local_a8._0_4_ = (int)((ulonglong)lVar1 >> 0x20);
  local_a8._4_4_ = (uint)lVar1;
  local_134 = uVar20 * 2;
  local_138 = ((uint)(uVar20 < local_a8._4_4_) +
              local_a8._0_4_ + local_60 * uVar8 * 2 + local_b0._0_4_) * 2 | uVar20 >> 0x1f;
  local_b0._0_4_ = (int)((ulonglong)((longlong)(int)uVar16 * (longlong)(int)uVar8) >> 0x20);
  lVar2 = (longlong)(int)uVar13 * (longlong)(int)uVar17 + CONCAT44(local_b0._0_4_,local_b0._4_4_);
  uVar20 = (uint)lVar2;
  local_130 = (int)((ulonglong)lVar2 >> 0x20) * 2 | uVar20 >> 0x1f;
  local_12c = uVar20 * 2;
  lVar2 = (longlong)(int)uVar15 * (longlong)(int)uVar17 +
          (longlong)(int)uVar9 * (longlong)(int)uVar8 + lVar5;
  uVar20 = (uint)lVar2;
  local_11c = uVar20 * 2;
  local_120 = (int)((ulonglong)lVar2 >> 0x20) * 2 | uVar20 >> 0x1f;
  lVar2 = (longlong)(int)uVar12 * (longlong)(int)uVar8 +
          lVar3 + (longlong)(int)uVar14 * (longlong)(int)uVar17;
  uVar20 = (uint)lVar2;
  local_110 = (int)((ulonglong)lVar2 >> 0x20) * 2 | uVar20 >> 0x1f;
  local_10c = uVar20 * 2;
  lVar6 = (longlong)(int)uVar10 * (longlong)(int)uVar13 + lVar6;
  uVar20 = (uint)lVar6;
  local_f0 = (int)((ulonglong)lVar6 >> 0x20) * 2 | uVar20 >> 0x1f;
  local_ec = uVar20 * 2;
  uVar20 = (uint)((longlong)(int)uVar14 * (longlong)(int)uVar11);
  lVar2 = (longlong)(int)uVar10 * (longlong)(int)uVar14 + local_a0;
  uVar21 = (uint)lVar2;
  local_d0 = (int)((ulonglong)lVar2 >> 0x20) * 2 | uVar21 >> 0x1f;
  local_cc = uVar21 * 2;
  uVar15 = uVar20 * 4;
  uVar21 = (uint)((longlong)(int)uVar8 * (longlong)(int)uVar13);
  local_128 = local_128 +
              CONCAT44(uVar21 >> 0x1e |
                       (int)((ulonglong)((longlong)(int)uVar8 * (longlong)(int)uVar13) >> 0x20) << 2
                       ,uVar21 * 4);
  local_104 = local_58 + (int)((ulonglong)uVar9 * (ulonglong)uVar9);
  local_108 = (uint)(local_104 < local_58) +
              local_88 + local_5c * uVar9 * 2 + (int)((ulonglong)uVar9 * (ulonglong)uVar9 >> 0x20);
  local_e4 = uVar23 + (int)((ulonglong)uVar12 * (ulonglong)uVar12);
  local_e8 = (uint)(local_e4 < uVar23) +
             local_68 + local_44 * uVar12 * 2 + (int)((ulonglong)uVar12 * (ulonglong)uVar12 >> 0x20)
  ;
  local_c4 = uVar15 + (int)((ulonglong)uVar10 * (ulonglong)uVar10);
  uVar21 = (uint)((ulonglong)uVar11 * (ulonglong)uVar11);
  local_c8 = (uint)(local_c4 < uVar15) +
             (uVar20 >> 0x1e |
             (int)((ulonglong)((longlong)(int)uVar14 * (longlong)(int)uVar11) >> 0x20) << 2) +
             local_40 * uVar10 * 2 + (int)((ulonglong)uVar10 * (ulonglong)uVar10 >> 0x20);
  local_b8 = (local_3c * uVar11 * 2 + (int)((ulonglong)uVar11 * (ulonglong)uVar11 >> 0x20)) * 2 |
             uVar21 >> 0x1f;
  local_b4 = uVar21 << 1;
  local_c0 = (longlong)(int)uVar10 * (longlong)(int)uVar11 * 2;
  local_144 = (undefined4)((ulonglong)uVar17 * (ulonglong)uVar17);
  local_148 = local_54 * uVar17 * 2 + (int)((ulonglong)uVar17 * (ulonglong)uVar17 >> 0x20);
  local_140 = local_90 * (int)uVar8;
  local_b0 = (longlong)(int)uVar16 * (longlong)(int)uVar8;
  local_a8 = lVar1;
  FUN_0040f314(local_74);
  FUN_0040f78c(local_74);
  (*(code *)PTR_memcpy_004332a8)(param_1,local_74,0x50);
  return;
}


/* FUN_00410548 @ 00410548 */

void FUN_00410548(undefined4 param_1)

{
  undefined1 auStack_a8 [156];
  
  FUN_0040dc80(auStack_a8);
  FUN_0040f314(auStack_a8);
  FUN_0040f78c(auStack_a8);
  (*(code *)PTR_memcpy_004332a8)(param_1,auStack_a8,0x50);
  return;
}


/* curve25519_donna @ 004105b4 */

void curve25519_donna(undefined1 *param_1,int param_2,byte *param_3)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  int *piVar24;
  int *piVar25;
  int *piVar26;
  int *piVar27;
  int *piVar28;
  byte abStack_b90 [24];
  byte local_b70 [32];
  undefined4 local_b50;
  uint local_b4c;
  undefined4 local_b48;
  uint local_b44;
  undefined4 local_b40;
  uint local_b3c;
  undefined4 local_b38;
  uint local_b34;
  undefined4 local_b30;
  uint local_b2c;
  undefined4 local_b28;
  uint local_b24;
  undefined4 local_b20;
  uint local_b1c;
  undefined4 local_b18;
  uint local_b14;
  undefined4 local_b10;
  uint local_b0c;
  undefined4 local_b08;
  uint local_b04;
  undefined1 auStack_b00 [80];
  undefined1 auStack_ab0 [80];
  uint local_a60 [20];
  uint local_a10 [20];
  uint local_9c0;
  uint local_9bc;
  undefined1 uStack_9b9;
  uint local_9b8;
  int local_9b4;
  byte bStack_9b1;
  undefined4 local_9ac;
  undefined4 local_9a4;
  undefined4 local_99c;
  undefined4 local_994;
  undefined1 uStack_991;
  undefined4 local_98c;
  undefined4 local_984;
  uint local_97c;
  int local_978;
  uint local_974;
  int local_968 [38];
  int local_8d0 [38];
  int local_838 [38];
  int local_7a0 [38];
  int local_708 [38];
  int local_670 [38];
  int local_5d8 [38];
  int local_540 [38];
  undefined1 local_4a8 [80];
  undefined1 auStack_458 [72];
  int local_410 [20];
  int aiStack_3c0 [18];
  int local_378 [38];
  undefined1 auStack_2e0 [152];
  int local_248 [38];
  undefined1 auStack_1b0 [152];
  undefined1 auStack_118 [152];
  int *local_80;
  int *local_7c;
  int *local_78;
  byte *local_74;
  uint local_70;
  int *local_6c;
  uint *local_68;
  uint *local_64;
  undefined1 *local_60;
  int local_5c;
  uint local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  byte *local_4c;
  undefined4 *local_48;
  int *local_44;
  undefined1 *local_40;
  uint *local_3c;
  undefined1 *local_38;
  int *local_34;
  byte *local_30;
  uint *local_2c;
  
  if (param_3 == (byte *)0x0) {
    param_3 = &DAT_0041d810;
  }
  iVar12 = 0;
  local_30 = local_b70;
  do {
    pbVar17 = (byte *)(param_2 + iVar12);
    pbVar18 = local_30 + iVar12;
    iVar12 = iVar12 + 1;
    *pbVar18 = *pbVar17;
  } while (iVar12 != 0x20);
  local_b70[0] = local_b70[0] & 0xf8;
  local_b70[0x1f] = local_b70[0x1f] & 0x7f | 0x40;
  local_b4c = (uint)param_3[1] << 8 | (uint)param_3[2] << 0x10 | (uint)*param_3 |
              (param_3[3] & 3) << 0x18;
  local_b50 = 0;
  local_b44 = ((uint)param_3[4] << 8 | (uint)param_3[5] << 0x10 | (uint)param_3[3] |
              (uint)param_3[6] << 0x18) >> 2 & 0x1ffffff;
  local_b48 = 0;
  local_b3c = ((uint)param_3[7] << 8 | (uint)param_3[8] << 0x10 | (uint)param_3[6] |
              (uint)param_3[9] << 0x18) >> 3 & 0x3ffffff;
  local_b40 = 0;
  local_b34 = ((uint)param_3[10] << 8 | (uint)param_3[0xb] << 0x10 | (uint)param_3[9] |
              (uint)param_3[0xc] << 0x18) >> 5 & 0x1ffffff;
  local_b38 = 0;
  local_b2c = ((uint)param_3[0xd] << 8 | (uint)param_3[0xe] << 0x10 | (uint)param_3[0xc] |
              (uint)param_3[0xf] << 0x18) >> 6;
  local_b30 = 0;
  local_b24 = (uint)param_3[0x11] << 8 | (uint)param_3[0x12] << 0x10 | (uint)param_3[0x10] |
              (param_3[0x13] & 1) << 0x18;
  local_b28 = 0;
  local_b1c = ((uint)param_3[0x14] << 8 | (uint)param_3[0x15] << 0x10 | (uint)param_3[0x13] |
              (uint)param_3[0x16] << 0x18) >> 1 & 0x3ffffff;
  local_b20 = 0;
  local_b14 = ((uint)param_3[0x17] << 8 | (uint)param_3[0x18] << 0x10 | (uint)param_3[0x16] |
              (uint)param_3[0x19] << 0x18) >> 3 & 0x1ffffff;
  local_b18 = 0;
  local_b0c = ((uint)param_3[0x1a] << 8 | (uint)param_3[0x1b] << 0x10 | (uint)param_3[0x19] |
              (uint)param_3[0x1c] << 0x18) >> 4 & 0x3ffffff;
  local_b10 = 0;
  local_b04 = ((uint)param_3[0x1d] << 8 | (uint)param_3[0x1e] << 0x10 | (uint)param_3[0x1c] |
              (uint)param_3[0x1f] << 0x18) >> 6 & 0x1ffffff;
  local_b08 = 0;
  (*(code *)PTR_memset_00433190)(local_968,0,0x98);
  local_34 = local_8d0;
  (*(code *)PTR_memset_00433190)(local_34,0,0x98);
  piVar24 = local_838;
  local_8d0[1] = 1;
  local_8d0[0] = 0;
  (*(code *)PTR_memset_00433190)(piVar24,0,0x98);
  local_2c = (uint *)local_7a0;
  local_838[1] = 1;
  local_838[0] = 0;
  (*(code *)PTR_memset_00433190)(local_2c,0,0x98);
  piVar27 = local_708;
  (*(code *)PTR_memset_00433190)(piVar27,0,0x98);
  piVar28 = local_670;
  (*(code *)PTR_memset_00433190)(piVar28,0,0x98);
  piVar25 = local_5d8;
  local_670[1] = 1;
  local_670[0] = 0;
  (*(code *)PTR_memset_00433190)(piVar25,0,0x98);
  piVar26 = local_540;
  (*(code *)PTR_memset_00433190)(piVar26,0,0x98);
  local_540[1] = 1;
  local_540[0] = 0;
  (*(code *)PTR_memcpy_004332a8)(local_968,&local_b50,0x50);
  local_80 = local_34;
  local_74 = local_30;
  local_4c = abStack_b90;
  local_68 = local_a10;
  local_3c = &local_9c0;
  local_64 = local_a60;
  local_50 = auStack_118;
  local_60 = local_4a8;
  local_38 = param_1;
  puVar14 = local_2c;
  local_7c = local_968;
  do {
    piVar16 = local_7c;
    piVar21 = local_80;
    local_80 = piVar28;
    local_7c = piVar27;
    local_58 = (uint)local_74[0x1f];
    local_5c = 0;
    local_54 = auStack_1b0;
    local_48 = &local_b50;
    local_6c = local_410;
    local_78 = local_378;
    local_44 = aiStack_3c0;
    local_40 = auStack_458;
    piVar10 = piVar26;
    piVar11 = piVar25;
    piVar25 = piVar24;
    piVar26 = (int *)puVar14;
    piVar27 = piVar16;
    piVar28 = piVar21;
    while( true ) {
      piVar24 = piVar11;
      puVar14 = (uint *)piVar10;
      iVar12 = 0;
      local_70 = -(local_58 >> 7);
      piVar21 = piVar27;
      piVar16 = piVar25;
      do {
        iVar12 = iVar12 + 1;
        uVar19 = local_70 & (piVar16[1] ^ piVar21[1]);
        uVar20 = uVar19 ^ piVar16[1];
        *piVar16 = (int)uVar20 >> 0x1f;
        piVar16[1] = uVar20;
        piVar16 = piVar16 + 2;
        uVar19 = uVar19 ^ piVar21[1];
        *piVar21 = (int)uVar19 >> 0x1f;
        piVar21[1] = uVar19;
        piVar21 = piVar21 + 2;
      } while (iVar12 != 10);
      iVar12 = 0;
      piVar21 = piVar28;
      piVar16 = piVar26;
      do {
        iVar12 = iVar12 + 1;
        uVar19 = local_70 & (piVar16[1] ^ piVar21[1]);
        uVar20 = uVar19 ^ piVar16[1];
        *piVar16 = (int)uVar20 >> 0x1f;
        piVar16[1] = uVar20;
        piVar16 = piVar16 + 2;
        uVar19 = uVar19 ^ piVar21[1];
        *piVar21 = (int)uVar19 >> 0x1f;
        piVar21[1] = uVar19;
        piVar21 = piVar21 + 2;
      } while (iVar12 != 10);
      local_2c = (uint *)piVar26;
      (*(code *)PTR_memcpy_004332a8)(local_68,piVar25,0x50);
      FUN_0040dc10(piVar25,piVar26);
      puVar13 = local_68;
      puVar15 = local_2c;
      do {
        uVar19 = puVar13[1] - puVar15[1];
        *puVar15 = (*puVar13 - *puVar15) - (uint)(puVar13[1] < uVar19);
        puVar15[1] = uVar19;
        puVar13 = puVar13 + 2;
        puVar15 = puVar15 + 2;
      } while (puVar13 != local_3c);
      (*(code *)PTR_memcpy_004332a8)(local_64,piVar27,0x50);
      FUN_0040dc10(piVar27,piVar28);
      puVar13 = local_64;
      piVar21 = piVar28;
      do {
        uVar19 = puVar13[1] - piVar21[1];
        *piVar21 = (*puVar13 - *piVar21) - (uint)(puVar13[1] < uVar19);
        piVar21[1] = uVar19;
        puVar13 = puVar13 + 2;
        piVar21 = piVar21 + 2;
      } while (puVar13 != local_68);
      local_2c = local_64;
      FUN_0040dc80(auStack_2e0,piVar27,piVar26);
      FUN_0040dc80(local_248,piVar25,piVar28);
      FUN_0040f314(auStack_2e0);
      FUN_0040f78c(auStack_2e0);
      FUN_0040f314(local_248);
      FUN_0040f78c(local_248);
      (*(code *)PTR_memcpy_004332a8)(local_64,auStack_2e0,0x50);
      FUN_0040dc10(auStack_2e0,local_248);
      piVar21 = local_248;
      puVar13 = local_2c;
      do {
        uVar19 = puVar13[1] - piVar21[1];
        *piVar21 = (*puVar13 - *piVar21) - (uint)(puVar13[1] < uVar19);
        piVar21[1] = uVar19;
        puVar13 = puVar13 + 2;
        piVar21 = piVar21 + 2;
      } while (puVar13 != local_68);
      FUN_0040f9fc(local_50,auStack_2e0);
      FUN_0040f9fc(local_54,local_248);
      FUN_0040dc80(local_248,local_54,local_48);
      FUN_0040f314(local_248);
      FUN_0040f78c(local_248);
      (*(code *)PTR_memcpy_004332a8)(local_7c,local_50,0x50);
      (*(code *)PTR_memcpy_004332a8)(local_80,local_248,0x50);
      FUN_0040f9fc(local_6c,piVar25);
      FUN_0040f9fc(local_78,piVar26);
      FUN_0040dc80(piVar24,local_6c,local_78);
      FUN_0040f314(piVar24);
      FUN_0040f78c(piVar24);
      piVar21 = local_78;
      piVar16 = local_6c;
      do {
        uVar19 = piVar16[1] - piVar21[1];
        *piVar21 = (*piVar16 - *piVar21) - (uint)((uint)piVar16[1] < uVar19);
        piVar21[1] = uVar19;
        piVar16 = piVar16 + 2;
        piVar21 = piVar21 + 2;
      } while (piVar16 != local_44);
      (*(code *)PTR_memset_00433190)(local_40,0,0x48);
      iVar12 = 0;
      do {
        lVar1 = (ulonglong)(uint)((int *)((int)local_78 + iVar12))[1] * 0x1db41;
        iVar22 = *(int *)((int)local_78 + iVar12);
        piVar21 = (int *)(local_60 + iVar12);
        iVar12 = iVar12 + 8;
        piVar21[1] = (int)lVar1;
        *piVar21 = iVar22 * 0x1db41 + (int)((ulonglong)lVar1 >> 0x20);
      } while (iVar12 != 0x50);
      FUN_0040f78c(local_60);
      FUN_0040dc10(local_60,local_6c);
      FUN_0040dc80(puVar14,local_78,local_60);
      FUN_0040f314(puVar14);
      FUN_0040f78c(puVar14);
      iVar12 = 0;
      piVar21 = local_7c;
      piVar16 = piVar24;
      do {
        iVar12 = iVar12 + 1;
        uVar19 = local_70 & (piVar16[1] ^ piVar21[1]);
        uVar20 = uVar19 ^ piVar16[1];
        *piVar16 = (int)uVar20 >> 0x1f;
        piVar16[1] = uVar20;
        piVar16 = piVar16 + 2;
        uVar19 = uVar19 ^ piVar21[1];
        *piVar21 = (int)uVar19 >> 0x1f;
        piVar21[1] = uVar19;
        piVar21 = piVar21 + 2;
      } while (iVar12 != 10);
      iVar12 = 0;
      piVar21 = local_80;
      piVar16 = (int *)puVar14;
      do {
        iVar12 = iVar12 + 1;
        uVar19 = local_70 & (piVar16[1] ^ piVar21[1]);
        uVar20 = uVar19 ^ piVar16[1];
        *piVar16 = (int)uVar20 >> 0x1f;
        piVar16[1] = uVar20;
        puVar9 = local_38;
        piVar8 = local_7c;
        piVar7 = local_80;
        piVar16 = piVar16 + 2;
        uVar19 = uVar19 ^ piVar21[1];
        piVar21[1] = uVar19;
        *piVar21 = (int)uVar19 >> 0x1f;
        piVar21 = piVar21 + 2;
      } while (iVar12 != 10);
      local_5c = local_5c + 1;
      if (local_5c == 8) break;
      local_58 = (local_58 & 0x7f) << 1;
      local_80 = piVar28;
      local_7c = piVar27;
      piVar10 = piVar26;
      piVar11 = piVar25;
      piVar25 = piVar24;
      piVar26 = (int *)puVar14;
      piVar27 = piVar8;
      piVar28 = piVar7;
    }
    local_74 = local_74 + -1;
  } while (local_74 != local_4c);
  (*(code *)PTR_memcpy_004332a8)(auStack_b00,piVar24,0x50);
  (*(code *)PTR_memcpy_004332a8)(&local_9c0,puVar14,0x50);
  FUN_0040f9fc(local_a60,&local_9c0);
  FUN_0040f9fc(local_968,local_a60);
  FUN_0040f9fc(local_8d0,local_968);
  FUN_00410548(local_a10,local_8d0,&local_9c0);
  FUN_00410548(local_540,local_a10,local_a60);
  FUN_0040f9fc(local_8d0,local_540);
  FUN_00410548(local_5d8,local_8d0,local_a10);
  FUN_0040f9fc(local_8d0,local_5d8);
  FUN_0040f9fc(local_968,local_8d0);
  FUN_0040f9fc(local_8d0,local_968);
  FUN_0040f9fc(local_968,local_8d0);
  FUN_0040f9fc(local_8d0,local_968);
  FUN_00410548(local_670,local_8d0,local_5d8);
  FUN_0040f9fc(local_8d0,local_670);
  iVar12 = 2;
  FUN_0040f9fc(local_968,local_8d0);
  do {
    FUN_0040f9fc(local_8d0,local_968);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_968,local_8d0);
  } while (iVar12 != 10);
  FUN_00410548(local_708,local_968,local_670);
  FUN_0040f9fc(local_8d0,local_708);
  iVar12 = 2;
  FUN_0040f9fc(local_968,local_8d0);
  do {
    FUN_0040f9fc(local_8d0,local_968);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_968,local_8d0);
  } while (iVar12 != 0x14);
  FUN_00410548(local_8d0,local_968,local_708);
  FUN_0040f9fc(local_968,local_8d0);
  iVar12 = 2;
  FUN_0040f9fc(local_8d0,local_968);
  do {
    FUN_0040f9fc(local_968,local_8d0);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_8d0,local_968);
  } while (iVar12 != 10);
  FUN_00410548(local_7a0,local_8d0,local_670);
  FUN_0040f9fc(local_8d0,local_7a0);
  iVar12 = 2;
  FUN_0040f9fc(local_968,local_8d0);
  do {
    FUN_0040f9fc(local_8d0,local_968);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_968,local_8d0);
  } while (iVar12 != 0x32);
  FUN_00410548(local_838,local_968,local_7a0);
  FUN_0040f9fc(local_968,local_838);
  iVar12 = 2;
  FUN_0040f9fc(local_8d0,local_968);
  do {
    FUN_0040f9fc(local_968,local_8d0);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_8d0,local_968);
  } while (iVar12 != 100);
  FUN_00410548(local_968,local_8d0,local_838);
  FUN_0040f9fc(local_8d0,local_968);
  iVar12 = 2;
  FUN_0040f9fc(local_968,local_8d0);
  do {
    FUN_0040f9fc(local_8d0,local_968);
    iVar12 = iVar12 + 2;
    FUN_0040f9fc(local_968,local_8d0);
  } while (iVar12 != 0x32);
  FUN_00410548(local_8d0,local_968,local_7a0);
  FUN_0040f9fc(local_968,local_8d0);
  FUN_0040f9fc(local_8d0,local_968);
  FUN_0040f9fc(local_968,local_8d0);
  FUN_0040f9fc(local_8d0,local_968);
  FUN_0040f9fc(local_968,local_8d0);
  FUN_00410548(auStack_ab0,local_968,local_540);
  FUN_00410548(&local_9c0,auStack_b00,auStack_ab0);
  FUN_0040f78c(&local_9c0);
  iVar12 = 0;
  do {
    uVar19 = 0;
    puVar14 = &local_9c0;
    do {
      uVar20 = puVar14[1];
      if ((uVar19 & 1) == 0) {
        iVar22 = (int)((int)uVar20 >> 0x1f & uVar20) >> 0x1a;
        uVar20 = iVar22 * -0x4000000 + uVar20;
        uVar23 = puVar14[3] + iVar22;
        *puVar14 = (int)uVar20 >> 0x1f;
        puVar14[2] = (int)uVar23 >> 0x1f;
        puVar14[1] = uVar20;
        puVar14[3] = uVar23;
      }
      else {
        iVar22 = (int)((int)uVar20 >> 0x1f & uVar20) >> 0x19;
        uVar20 = iVar22 * -0x2000000 + uVar20;
        uVar23 = puVar14[3] + iVar22;
        *puVar14 = (int)uVar20 >> 0x1f;
        puVar14[2] = (int)uVar23 >> 0x1f;
        puVar14[1] = uVar20;
        puVar14[3] = uVar23;
      }
      uVar6 = local_984;
      uVar5 = local_98c;
      uVar4 = local_99c;
      uVar23 = local_9a4;
      uVar20 = local_9ac;
      uVar19 = uVar19 + 1;
      puVar14 = puVar14 + 2;
    } while (uVar19 != 9);
    iVar12 = iVar12 + 1;
    iVar22 = (int)((int)local_974 >> 0x1f & local_974) >> 0x19;
    local_974 = iVar22 * -0x2000000 + local_974;
    local_978 = (int)local_974 >> 0x1f;
    local_9bc = iVar22 * 0x13 + local_9bc;
    local_9c0 = (int)local_9bc >> 0x1f;
  } while (iVar12 != 2);
  iVar12 = (int)((int)local_9bc >> 0x1f & local_9bc) >> 0x1a;
  uVar19 = local_9b4 + iVar12;
  bStack_9b1 = (char)uVar19 * '\x04';
  iVar12 = iVar12 * -0x4000000 + local_9bc;
  local_9ac._3_1_ = (byte)(local_9ac << 3);
  local_9a4._3_1_ = (byte)(local_9a4 << 5);
  uStack_9b9 = (undefined1)iVar12;
  *puVar9 = uStack_9b9;
  puVar9[1] = (char)((uint)iVar12 >> 8);
  puVar9[2] = (char)((uint)iVar12 >> 0x10);
  puVar9[4] = (char)((uVar19 & 0x3fffffff) >> 6);
  puVar9[5] = (char)((uVar19 & 0x3fffffff) >> 0xe);
  puVar9[7] = (char)((uVar20 & 0x1fffffff) >> 5);
  puVar9[8] = (char)((uVar20 & 0x1fffffff) >> 0xd);
  puVar9[3] = (byte)((uint)iVar12 >> 0x18) | bStack_9b1;
  puVar9[6] = (byte)((uVar19 & 0x3fffffff) >> 0x16) | (byte)local_9ac;
  puVar9[0x10] = 0;
  puVar9[9] = (byte)((uVar20 & 0x1fffffff) >> 0x15) | (byte)local_9a4;
  bVar2 = (byte)((local_984 & 0x1fffffff) >> 0x15);
  local_99c._3_1_ = (byte)(local_99c << 6);
  local_98c._3_1_ = (byte)(local_98c << 1);
  local_984._3_1_ = (byte)(local_984 << 3);
  bVar3 = (byte)((local_97c & 0xfffffff) >> 0x14);
  puVar9[0x19] = bVar2;
  puVar9[10] = (char)((uVar23 & 0x7ffffff) >> 3);
  puVar9[0xb] = (char)((uVar23 & 0x7ffffff) >> 0xb);
  puVar9[0xd] = (char)((uVar4 & 0x3ffffff) >> 2);
  puVar9[0xe] = (char)((uVar4 & 0x3ffffff) >> 10);
  puVar9[0xf] = (char)((uVar4 & 0x3ffffff) >> 0x12);
  puVar9[0x10] = uStack_991;
  puVar9[0x11] = (char)((uint)local_994 >> 8);
  puVar9[0x12] = (char)((uint)local_994 >> 0x10);
  puVar9[0x14] = (char)((uVar5 & 0x7fffffff) >> 7);
  puVar9[0x15] = (char)((uVar5 & 0x7fffffff) >> 0xf);
  puVar9[0x17] = (char)((uVar6 & 0x1fffffff) >> 5);
  puVar9[0x18] = (char)((uVar6 & 0x1fffffff) >> 0xd);
  puVar9[0x1a] = (char)((local_97c & 0xfffffff) >> 4);
  puVar9[0x1b] = (char)((local_97c & 0xfffffff) >> 0xc);
  puVar9[0x1d] = (char)((local_974 & 0x3ffffff) >> 2);
  puVar9[0x1e] = (char)((local_974 & 0x3ffffff) >> 10);
  puVar9[0xc] = (byte)((uVar23 & 0x7ffffff) >> 0x13) | (byte)local_99c;
  puVar9[0x13] = (byte)((uint)local_994 >> 0x18) | (byte)local_98c;
  puVar9[0x16] = (byte)((uVar5 & 0x7fffffff) >> 0x17) | (byte)local_984;
  puVar9[0x1c] = bVar3;
  puVar9[0x19] = bVar2 | (byte)(local_97c << 4);
  puVar9[0x1c] = bVar3 | (char)local_974 * '@';
  puVar9[0x1f] = (char)((local_974 & 0x3ffffff) >> 0x12);
  return;
}


/* FUN_0041168c @ 0041168c */

undefined4 FUN_0041168c(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar4 == 0) {
    iVar8 = 0;
    iVar7 = 0;
  }
  else {
    pbVar5 = (byte *)((int)param_4 + uVar4);
    iVar7 = 0;
    while( true ) {
      iVar8 = iVar7 + uVar4;
      if (0xf < iVar8) break;
      if (param_3 <= iVar7) goto LAB_00411744;
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      iVar7 = iVar7 + 1;
      *(byte *)param_2 = bVar2 ^ *pbVar5;
      pbVar5 = pbVar5 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (iVar8 == 0x10) {
      iVar8 = 0;
    }
  }
LAB_00411744:
  bVar3 = iVar7 < param_3;
  if (param_3 - iVar7 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar3 = iVar7 < param_3;
        if (param_3 < iVar7 + 0x10) break;
        if (iVar8 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x31c,"aes_ofb_crypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        *param_2 = *param_4 ^ *param_1;
        param_2[1] = param_4[1] ^ param_1[1];
        param_2[2] = param_4[2] ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_2[3] = param_4[3] ^ *puVar1;
        param_2 = param_2 + 4;
        iVar7 = iVar7 + 0x10;
      }
    }
    else {
      while( true ) {
        bVar3 = iVar7 < param_3;
        if (param_3 < iVar7 + 0x10) break;
        if (iVar8 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x32b,"aes_ofb_crypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        *(byte *)param_2 = *(byte *)param_4 ^ *(byte *)param_1;
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_2 + 3) = (byte)*param_4 ^ (byte)*param_1;
        *(byte *)(param_2 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)((int)param_2 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_2 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)(param_2 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)((int)param_2 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        pbVar5 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = *(byte *)((int)param_4 + 0xf) ^ *pbVar5;
        param_2 = param_2 + 4;
        iVar7 = iVar7 + 0x10;
      }
    }
  }
  do {
    if (!bVar3) {
      *(char *)(param_5 + 0xf2) = (char)iVar8;
      return 0;
    }
    if ((iVar8 == 0) &&
       (iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar6 != 0)) {
      return 1;
    }
    pbVar5 = (byte *)((int)param_4 + iVar8);
    do {
      if (0xf < iVar8) break;
      iVar7 = iVar7 + 1;
      *(byte *)param_2 = *(byte *)param_1 ^ *pbVar5;
      iVar8 = iVar8 + 1;
      param_2 = (uint *)((int)param_2 + 1);
      param_1 = (uint *)((int)param_1 + 1);
      pbVar5 = pbVar5 + 1;
    } while (iVar7 < param_3);
    if (iVar8 == 0x10) {
      iVar8 = 0;
    }
    bVar3 = iVar7 < param_3;
  } while( true );
}


/* FUN_00411ab0 @ 00411ab0 */

undefined4 FUN_00411ab0(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar3 == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    pbVar4 = (byte *)((int)param_4 + uVar3);
    iVar6 = 0;
    while( true ) {
      iVar7 = iVar6 + uVar3;
      if (0xf < iVar7) break;
      if (param_3 <= iVar6) goto LAB_00411b6c;
      bVar1 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      iVar6 = iVar6 + 1;
      *(byte *)param_2 = bVar1 ^ *pbVar4;
      *pbVar4 = bVar1;
      param_2 = (uint *)((int)param_2 + 1);
      pbVar4 = pbVar4 + 1;
    }
    if (iVar7 == 0x10) {
      iVar7 = 0;
    }
  }
LAB_00411b6c:
  bVar2 = iVar6 < param_3;
  if (param_3 - iVar6 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar2 = iVar6 < param_3;
        if (param_3 < iVar6 + 0x10) break;
        if (iVar7 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x293,"aes_cfb_decrypt");
        }
        iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar5 != 0) {
          return 1;
        }
        uVar3 = *param_1;
        *param_2 = *param_4 ^ uVar3;
        *param_4 = uVar3;
        uVar3 = param_1[1];
        param_2[1] = param_4[1] ^ uVar3;
        param_4[1] = uVar3;
        uVar3 = param_1[2];
        param_2[2] = param_4[2] ^ uVar3;
        param_4[2] = uVar3;
        uVar3 = param_1[3];
        param_1 = param_1 + 4;
        param_2[3] = param_4[3] ^ uVar3;
        param_4[3] = uVar3;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 0x10;
      }
    }
    else {
      while (iVar6 + 0x10 <= param_3) {
        if (iVar7 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x2a3,"aes_cfb_decrypt");
        }
        iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar5 != 0) {
          return 1;
        }
        bVar1 = *(byte *)param_1;
        *(byte *)param_2 = bVar1 ^ *(byte *)param_4;
        *(byte *)param_4 = bVar1;
        bVar1 = *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_2 + 1) = bVar1 ^ *(byte *)((int)param_4 + 1);
        *(byte *)((int)param_4 + 1) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_2 + 2) = bVar1 ^ *(byte *)((int)param_4 + 2);
        *(byte *)((int)param_4 + 2) = bVar1;
        uVar3 = *param_1;
        *(byte *)((int)param_2 + 3) = (byte)uVar3 ^ *(byte *)((int)param_4 + 3);
        *(byte *)((int)param_4 + 3) = (byte)uVar3;
        bVar1 = *(byte *)(param_1 + 1);
        *(byte *)(param_2 + 1) = bVar1 ^ *(byte *)(param_4 + 1);
        *(byte *)(param_4 + 1) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 5) = bVar1 ^ *(byte *)((int)param_4 + 5);
        *(byte *)((int)param_4 + 5) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 6) = bVar1 ^ *(byte *)((int)param_4 + 6);
        *(byte *)((int)param_4 + 6) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 7);
        *(byte *)((int)param_2 + 7) = bVar1 ^ *(byte *)((int)param_4 + 7);
        *(byte *)((int)param_4 + 7) = bVar1;
        bVar1 = *(byte *)(param_1 + 2);
        *(byte *)(param_2 + 2) = bVar1 ^ *(byte *)(param_4 + 2);
        *(byte *)(param_4 + 2) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 9) = bVar1 ^ *(byte *)((int)param_4 + 9);
        *(byte *)((int)param_4 + 9) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 10) = bVar1 ^ *(byte *)((int)param_4 + 10);
        *(byte *)((int)param_4 + 10) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xb);
        *(byte *)((int)param_2 + 0xb) = bVar1 ^ *(byte *)((int)param_4 + 0xb);
        *(byte *)((int)param_4 + 0xb) = bVar1;
        bVar1 = *(byte *)(param_1 + 3);
        *(byte *)(param_2 + 3) = bVar1 ^ *(byte *)(param_4 + 3);
        *(byte *)(param_4 + 3) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xd) = bVar1 ^ *(byte *)((int)param_4 + 0xd);
        *(byte *)((int)param_4 + 0xd) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xe);
        *(byte *)((int)param_2 + 0xe) = bVar1 ^ *(byte *)((int)param_4 + 0xe);
        *(byte *)((int)param_4 + 0xe) = bVar1;
        bVar1 = *(byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = bVar1 ^ *(byte *)((int)param_4 + 0xf);
        *(byte *)((int)param_4 + 0xf) = bVar1;
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 0x10;
      }
      bVar2 = iVar6 < param_3;
    }
  }
  do {
    if (!bVar2) {
      *(char *)(param_5 + 0xf2) = (char)iVar7;
      return 0;
    }
    if ((iVar7 == 0) &&
       (iVar5 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar5 != 0)) {
      return 1;
    }
    pbVar4 = (byte *)((int)param_4 + iVar7);
    do {
      if (0xf < iVar7) break;
      bVar1 = *(byte *)param_1;
      iVar6 = iVar6 + 1;
      *(byte *)param_2 = bVar1 ^ *pbVar4;
      param_1 = (uint *)((int)param_1 + 1);
      *pbVar4 = bVar1;
      param_2 = (uint *)((int)param_2 + 1);
      iVar7 = iVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (iVar6 < param_3);
    if (iVar7 == 0x10) {
      iVar7 = 0;
    }
    bVar2 = iVar6 < param_3;
  } while( true );
}


/* FUN_00412018 @ 00412018 */

undefined4 FUN_00412018(uint *param_1,uint *param_2,int param_3,uint *param_4,int param_5)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar7;
  byte *pbVar5;
  int iVar6;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = (uint)*(byte *)(param_5 + 0xf2);
  if (uVar4 == 0) {
    iVar10 = 0;
    iVar9 = 0;
  }
  else {
    pbVar5 = (byte *)((int)param_4 + uVar4);
    iVar9 = 0;
    while( true ) {
      iVar10 = iVar9 + uVar4;
      if (0xf < iVar10) break;
      if (param_3 <= iVar9) goto LAB_004120d8;
      bVar7 = *(byte *)param_1;
      bVar2 = *pbVar5;
      param_1 = (uint *)((int)param_1 + 1);
      iVar9 = iVar9 + 1;
      *pbVar5 = bVar7 ^ bVar2;
      *(byte *)param_2 = bVar7 ^ bVar2;
      pbVar5 = pbVar5 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (iVar10 == 0x10) {
      iVar10 = 0;
    }
  }
LAB_004120d8:
  bVar3 = iVar9 < param_3;
  if (param_3 - iVar9 >> 4 != 0) {
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (((uint)param_4 & 3) == 0)) {
      while( true ) {
        bVar3 = iVar9 < param_3;
        if (param_3 < iVar9 + 0x10) break;
        if (iVar10 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x212,"aes_cfb_encrypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        uVar4 = *param_1;
        uVar8 = *param_4;
        *param_4 = uVar8 ^ uVar4;
        *param_2 = uVar8 ^ uVar4;
        uVar4 = param_4[1] ^ param_1[1];
        param_4[1] = uVar4;
        param_2[1] = uVar4;
        uVar4 = param_4[2] ^ param_1[2];
        param_4[2] = uVar4;
        param_2[2] = uVar4;
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        uVar4 = param_4[3] ^ *puVar1;
        param_4[3] = uVar4;
        param_2[3] = uVar4;
        param_2 = param_2 + 4;
        iVar9 = iVar9 + 0x10;
      }
    }
    else {
      while (iVar9 + 0x10 <= param_3) {
        if (iVar10 != 0) {
          (*(code *)PTR___assert_004330c0)
                    ("b_pos == 0",
                     "/home/vendor/rtl819x_v3464_homekit/users/mfi_wac/WACServer-1.14/External/GladmanAES/aes_modes.c"
                     ,0x221,"aes_cfb_encrypt");
        }
        iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5);
        if (iVar6 != 0) {
          return 1;
        }
        bVar7 = *(byte *)param_1;
        bVar2 = *(byte *)param_4;
        *(byte *)param_4 = bVar2 ^ bVar7;
        *(byte *)param_2 = bVar2 ^ bVar7;
        bVar7 = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_4 + 1) = bVar7;
        *(byte *)((int)param_2 + 1) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_4 + 2) = bVar7;
        *(byte *)((int)param_2 + 2) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 3) ^ (byte)*param_1;
        *(byte *)((int)param_4 + 3) = bVar7;
        *(byte *)((int)param_2 + 3) = bVar7;
        bVar7 = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)(param_4 + 1) = bVar7;
        *(byte *)(param_2 + 1) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_4 + 5) = bVar7;
        *(byte *)((int)param_2 + 5) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_4 + 6) = bVar7;
        *(byte *)((int)param_2 + 6) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)((int)param_4 + 7) = bVar7;
        *(byte *)((int)param_2 + 7) = bVar7;
        bVar7 = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)(param_4 + 2) = bVar7;
        *(byte *)(param_2 + 2) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_4 + 9) = bVar7;
        *(byte *)((int)param_2 + 9) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_4 + 10) = bVar7;
        *(byte *)((int)param_2 + 10) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)((int)param_4 + 0xb) = bVar7;
        *(byte *)((int)param_2 + 0xb) = bVar7;
        bVar7 = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)(param_4 + 3) = bVar7;
        *(byte *)(param_2 + 3) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_4 + 0xd) = bVar7;
        *(byte *)((int)param_2 + 0xd) = bVar7;
        bVar7 = *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        *(byte *)((int)param_4 + 0xe) = bVar7;
        *(byte *)((int)param_2 + 0xe) = bVar7;
        pbVar5 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        bVar7 = *(byte *)((int)param_4 + 0xf) ^ *pbVar5;
        *(byte *)((int)param_4 + 0xf) = bVar7;
        *(byte *)((int)param_2 + 0xf) = bVar7;
        param_2 = param_2 + 4;
        iVar9 = iVar9 + 0x10;
      }
      bVar3 = iVar9 < param_3;
    }
  }
  do {
    if (!bVar3) {
      *(char *)(param_5 + 0xf2) = (char)iVar10;
      return 0;
    }
    if ((iVar10 == 0) &&
       (iVar6 = (*(code *)PTR_aes_encrypt_00433084)(param_4,param_4,param_5), iVar6 != 0)) {
      return 1;
    }
    pbVar5 = (byte *)((int)param_4 + iVar10);
    do {
      if (0xf < iVar10) break;
      bVar7 = *(byte *)param_1;
      bVar2 = *pbVar5;
      iVar9 = iVar9 + 1;
      *pbVar5 = bVar7 ^ bVar2;
      iVar10 = iVar10 + 1;
      *(byte *)param_2 = bVar7 ^ bVar2;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = (uint *)((int)param_2 + 1);
      pbVar5 = pbVar5 + 1;
    } while (iVar9 < param_3);
    if (iVar10 == 0x10) {
      iVar10 = 0;
    }
    bVar3 = iVar9 < param_3;
  } while( true );
}


/* aes_cbc_encrypt @ 004125c8 */

undefined4 aes_cbc_encrypt(uint *param_1,int param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  uint *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((param_3 & 0xf) == 0) {
    iVar6 = (int)param_3 >> 4;
    if ((((uint)param_1 & 3) == 0) && (((uint)param_4 & 3) == 0)) {
      while (puVar3 = PTR_aes_encrypt_00433084, iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *param_4 = *param_4 ^ *param_1;
        param_4[1] = param_4[1] ^ param_1[1];
        param_4[2] = param_4[2] ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_4[3] = param_4[3] ^ *puVar1;
        iVar4 = (*(code *)puVar3)(param_4,param_4,param_5);
        if (iVar4 != 0) goto LAB_004128ec;
        (*(code *)PTR_memcpy_004332a8)(param_2,param_4,0x10);
        param_2 = param_2 + 0x10;
      }
      uVar5 = 0;
    }
    else {
      while (puVar3 = PTR_aes_encrypt_00433084, iVar6 != 0) {
        iVar6 = iVar6 + -1;
        *(byte *)param_4 = *(byte *)param_4 ^ *(byte *)param_1;
        *(byte *)((int)param_4 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_1 + 1);
        *(byte *)((int)param_4 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_1 + 2);
        *(byte *)((int)param_4 + 3) = *(byte *)((int)param_4 + 3) ^ (byte)*param_1;
        *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_1 + 1);
        *(byte *)((int)param_4 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_4 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_4 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_4 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_4 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_4 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_4 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_1 + 0xb);
        *(byte *)(param_4 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_1 + 3);
        *(byte *)((int)param_4 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_4 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_1 + 0xe);
        pbVar2 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_4 + 0xf) = *(byte *)((int)param_4 + 0xf) ^ *pbVar2;
        iVar4 = (*(code *)puVar3)(param_4,param_4,param_5);
        if (iVar4 != 0) goto LAB_004128ec;
        (*(code *)PTR_memcpy_004332a8)(param_2,param_4,0x10);
        param_2 = param_2 + 0x10;
      }
      uVar5 = 0;
    }
  }
  else {
LAB_004128ec:
    uVar5 = 1;
  }
  return uVar5;
}


/* aes_ecb_encrypt @ 00412920 */

undefined4 aes_ecb_encrypt(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 & 0xf) == 0) {
    iVar3 = (int)param_3 >> 4;
    iVar2 = 0;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = (*(code *)PTR_aes_encrypt_00433084)(param_1 + iVar2,param_2 + iVar2,param_4);
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar1 == 0);
  }
  return 1;
}


/* FUN_004129b8 @ 004129b8 */

undefined4
FUN_004129b8(uint *param_1,uint *param_2,uint param_3,undefined4 param_4,code *param_5,int param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  
  uVar17 = (uint)*(byte *)(param_6 + 0xf2);
  uVar16 = uVar17;
  if (uVar17 != 0) {
    (*(code *)PTR_memcpy_004332a8)(&local_b8,param_4,0x10);
    iVar9 = aes_ecb_encrypt(&local_b8,&local_b8,0x10,param_6);
    pbVar12 = (byte *)((int)&local_b8 + uVar17);
    iVar10 = 0;
    if (iVar9 != 0) {
      return 1;
    }
    while (uVar16 = iVar10 + uVar17, (int)uVar16 < 0x10) {
      iVar10 = iVar10 + 1;
      if (param_3 == 0) {
        *(char *)(param_6 + 0xf2) = (char)uVar16;
        return 0;
      }
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
      *(byte *)param_2 = *pbVar12 ^ bVar2;
      pbVar12 = pbVar12 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    if (param_3 != 0) {
      (*param_5)(param_4);
      uVar16 = 0;
    }
  }
  local_38 = 0;
  while( true ) {
    if (param_3 == 0) {
      *(char *)(param_6 + 0xf2) = (char)uVar16;
      return 0;
    }
    uVar17 = 0x80;
    if ((int)param_3 < 0x81) {
      uVar17 = param_3;
    }
    iVar10 = 0;
    puVar11 = &local_b8;
    iVar9 = (int)uVar17 >> 4;
    while (iVar10 < iVar9) {
      local_34 = puVar11;
      local_30 = iVar9;
      local_2c = iVar10;
      (*(code *)PTR_memcpy_004332a8)(puVar11,param_4,0x10);
      local_34 = local_34 + 4;
      local_2c = local_2c + 1;
      (*param_5)(param_4);
      iVar10 = local_2c;
      puVar11 = local_34;
      iVar9 = local_30;
    }
    if ((uVar17 & 0xf) != 0) {
      local_2c = iVar10 + 1;
      (*(code *)PTR_memcpy_004332a8)();
      iVar10 = local_2c;
    }
    iVar10 = aes_ecb_encrypt(&local_b8,&local_b8,iVar10 << 4,param_6);
    if (iVar10 != 0) break;
    iVar10 = 0;
    puVar11 = &local_b8;
    if (((((uint)param_1 & 3) == 0) && (((uint)param_2 & 3) == 0)) && (local_38 == 0)) {
      for (iVar9 = 0x10; iVar9 <= (int)uVar17; iVar9 = iVar9 + 0x10) {
        uVar15 = puVar11[1];
        uVar14 = puVar11[2];
        *param_2 = *puVar11 ^ *param_1;
        uVar13 = puVar11[3];
        param_2[1] = uVar15 ^ param_1[1];
        puVar11 = puVar11 + 4;
        param_2[2] = uVar14 ^ param_1[2];
        puVar1 = param_1 + 3;
        param_1 = param_1 + 4;
        param_2[3] = uVar13 ^ *puVar1;
        param_2 = param_2 + 4;
        iVar10 = iVar9;
      }
      pbVar12 = (byte *)((int)puVar11 + uVar16);
    }
    else {
      while (iVar10 + 0x10 <= (int)uVar17) {
        bVar2 = *(byte *)((int)puVar11 + 1);
        bVar3 = *(byte *)((int)puVar11 + 2);
        *(byte *)param_2 = *(byte *)puVar11 ^ *(byte *)param_1;
        uVar13 = *puVar11;
        bVar4 = *(byte *)(puVar11 + 1);
        *(byte *)((int)param_2 + 1) = bVar2 ^ *(byte *)((int)param_1 + 1);
        bVar2 = *(byte *)((int)puVar11 + 5);
        bVar5 = *(byte *)((int)puVar11 + 6);
        *(byte *)((int)param_2 + 2) = bVar3 ^ *(byte *)((int)param_1 + 2);
        bVar3 = *(byte *)((int)puVar11 + 7);
        bVar6 = *(byte *)(puVar11 + 2);
        *(byte *)((int)param_2 + 3) = (byte)uVar13 ^ (byte)*param_1;
        bVar7 = *(byte *)((int)puVar11 + 9);
        bVar8 = *(byte *)((int)puVar11 + 10);
        *(byte *)(param_2 + 1) = bVar4 ^ *(byte *)(param_1 + 1);
        bVar4 = *(byte *)((int)puVar11 + 0xb);
        *(byte *)((int)param_2 + 5) = bVar2 ^ *(byte *)((int)param_1 + 5);
        *(byte *)((int)param_2 + 6) = bVar5 ^ *(byte *)((int)param_1 + 6);
        *(byte *)((int)param_2 + 7) = bVar3 ^ *(byte *)((int)param_1 + 7);
        *(byte *)(param_2 + 2) = bVar6 ^ *(byte *)(param_1 + 2);
        *(byte *)((int)param_2 + 9) = bVar7 ^ *(byte *)((int)param_1 + 9);
        *(byte *)((int)param_2 + 10) = bVar8 ^ *(byte *)((int)param_1 + 10);
        *(byte *)((int)param_2 + 0xb) = bVar4 ^ *(byte *)((int)param_1 + 0xb);
        bVar2 = *(byte *)((int)puVar11 + 0xd);
        bVar3 = *(byte *)((int)puVar11 + 0xe);
        *(byte *)(param_2 + 3) = *(byte *)(puVar11 + 3) ^ *(byte *)(param_1 + 3);
        bVar4 = *(byte *)((int)puVar11 + 0xf);
        *(byte *)((int)param_2 + 0xd) = bVar2 ^ *(byte *)((int)param_1 + 0xd);
        *(byte *)((int)param_2 + 0xe) = bVar3 ^ *(byte *)((int)param_1 + 0xe);
        pbVar12 = (byte *)((int)param_1 + 0xf);
        param_1 = param_1 + 4;
        *(byte *)((int)param_2 + 0xf) = bVar4 ^ *pbVar12;
        param_2 = param_2 + 4;
        puVar11 = puVar11 + 4;
        iVar10 = iVar10 + 0x10;
      }
      pbVar12 = (byte *)((int)puVar11 + uVar16);
    }
    for (; iVar10 < (int)uVar17; iVar10 = iVar10 + 1) {
      bVar2 = *(byte *)param_1;
      param_1 = (uint *)((int)param_1 + 1);
      uVar16 = uVar16 + 1;
      *(byte *)param_2 = *pbVar12 ^ bVar2;
      param_2 = (uint *)((int)param_2 + 1);
      pbVar12 = pbVar12 + 1;
    }
    param_3 = param_3 - uVar17;
  }
  return 1;
}


/* aes_cbc_decrypt @ 00412dd8 */

undefined4 aes_cbc_decrypt(int param_1,uint *param_2,uint param_3,uint *param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_30 [20];
  
  if ((param_3 & 0xf) == 0) {
    iVar4 = (int)param_3 >> 4;
    if ((((uint)param_2 & 3) == 0) && (((uint)param_4 & 3) == 0)) {
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        (*(code *)PTR_memcpy_004332a8)(auStack_30,param_1,0x10);
        iVar2 = (*(code *)PTR_aes_decrypt_0043326c)(param_1,param_2,param_5);
        puVar1 = PTR_memcpy_004332a8;
        if (iVar2 != 0) goto LAB_00413070;
        *param_2 = *param_2 ^ *param_4;
        param_2[1] = param_2[1] ^ param_4[1];
        param_1 = param_1 + 0x10;
        param_2[2] = param_2[2] ^ param_4[2];
        param_2[3] = param_2[3] ^ param_4[3];
        (*(code *)puVar1)(param_4,auStack_30,0x10);
        param_2 = param_2 + 4;
      }
      uVar3 = 0;
    }
    else {
      while (iVar4 != 0) {
        iVar4 = iVar4 + -1;
        (*(code *)PTR_memcpy_004332a8)(auStack_30,param_1,0x10);
        iVar2 = (*(code *)PTR_aes_decrypt_0043326c)(param_1,param_2,param_5);
        puVar1 = PTR_memcpy_004332a8;
        param_1 = param_1 + 0x10;
        if (iVar2 != 0) goto LAB_00413070;
        *(byte *)param_2 = *(byte *)param_4 ^ *(byte *)param_2;
        *(byte *)((int)param_2 + 1) = *(byte *)((int)param_4 + 1) ^ *(byte *)((int)param_2 + 1);
        *(byte *)((int)param_2 + 2) = *(byte *)((int)param_4 + 2) ^ *(byte *)((int)param_2 + 2);
        *(byte *)((int)param_2 + 3) = (byte)*param_4 ^ (byte)*param_2;
        *(byte *)(param_2 + 1) = *(byte *)(param_4 + 1) ^ *(byte *)(param_2 + 1);
        *(byte *)((int)param_2 + 5) = *(byte *)((int)param_4 + 5) ^ *(byte *)((int)param_2 + 5);
        *(byte *)((int)param_2 + 6) = *(byte *)((int)param_4 + 6) ^ *(byte *)((int)param_2 + 6);
        *(byte *)((int)param_2 + 7) = *(byte *)((int)param_4 + 7) ^ *(byte *)((int)param_2 + 7);
        *(byte *)(param_2 + 2) = *(byte *)(param_4 + 2) ^ *(byte *)(param_2 + 2);
        *(byte *)((int)param_2 + 9) = *(byte *)((int)param_4 + 9) ^ *(byte *)((int)param_2 + 9);
        *(byte *)((int)param_2 + 10) = *(byte *)((int)param_4 + 10) ^ *(byte *)((int)param_2 + 10);
        *(byte *)((int)param_2 + 0xb) =
             *(byte *)((int)param_4 + 0xb) ^ *(byte *)((int)param_2 + 0xb);
        *(byte *)(param_2 + 3) = *(byte *)(param_4 + 3) ^ *(byte *)(param_2 + 3);
        *(byte *)((int)param_2 + 0xd) =
             *(byte *)((int)param_4 + 0xd) ^ *(byte *)((int)param_2 + 0xd);
        *(byte *)((int)param_2 + 0xe) =
             *(byte *)((int)param_4 + 0xe) ^ *(byte *)((int)param_2 + 0xe);
        *(byte *)((int)param_2 + 0xf) =
             *(byte *)((int)param_4 + 0xf) ^ *(byte *)((int)param_2 + 0xf);
        (*(code *)puVar1)(param_4,auStack_30,0x10);
        param_2 = param_2 + 4;
      }
      uVar3 = 0;
    }
  }
  else {
LAB_00413070:
    uVar3 = 1;
  }
  return uVar3;
}


/* aes_ecb_decrypt @ 00413098 */

undefined4 aes_ecb_decrypt(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_3 & 0xf) == 0) {
    iVar3 = (int)param_3 >> 4;
    iVar2 = 0;
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar1 = (*(code *)PTR_aes_decrypt_0043326c)(param_1 + iVar2,param_2 + iVar2,param_4);
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar1 == 0);
  }
  return 1;
}


/* aes_encrypt @ 00413130 */

undefined4 aes_encrypt(byte *param_1,undefined1 *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  cVar1 = *(char *)(param_3 + 0x3c);
  if (((cVar1 != -0x60) && (cVar1 != -0x40)) && (cVar1 != -0x20)) {
    return 1;
  }
  uVar10 = ((uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8) ^ param_3[3];
  uVar9 = ((uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8) ^ *param_3;
  uVar5 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8) ^ param_3[1];
  uVar3 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8) ^ param_3[2];
  if (cVar1 == -0x40) {
LAB_004135ac:
    uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^ param_3[5] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
    uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^ param_3[6] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
    uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
    uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^ param_3[7] ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
    uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[8] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
    uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
    uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    param_3 = param_3 + 8;
  }
  else {
    if (cVar1 == -0x20) {
      uVar6 = *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[5] ^
              *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
      uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4) ^ param_3[6] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4);
      uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
      uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^ param_3[7] ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[8] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
      uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
      uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
               *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
      param_3 = param_3 + 8;
      goto LAB_004135ac;
    }
    if (cVar1 != -0x60) goto LAB_00414940;
  }
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^ param_3[4] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^ param_3[5] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^ param_3[6] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^ param_3[7] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[8] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[9] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[10] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0xc] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0xd] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0xe] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0xf] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x10] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x11] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x12] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x13] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x14] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x15] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x16] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x17] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x18] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x19] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x1a] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x1b] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x1c] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x1d] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x1e] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x1f] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(PTR_t_fn_004331a4 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x21] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0x20] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_fn_004331a4 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0x22] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fn_004331a4 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x23] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_fn_004331a4 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[0x25] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_fn_004331a4 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar8 & 0xff) + 0x300) * 4) ^ param_3[0x26] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fn_004331a4 + (uVar3 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[0x24] ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fn_004331a4 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_fn_004331a4 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[0x27] ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fn_004331a4 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_fl_00433100 + (uVar10 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[0x28] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_fl_00433100 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar10 & 0xff) + 0x300) * 4) ^ param_3[0x29] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_fl_00433100 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[0x2a] ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_fl_00433100 + (uVar2 >> 0x18) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[0x2b] ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
LAB_00414940:
  param_2[0xe] = (char)(uVar10 >> 8);
  param_2[0xf] = (char)uVar10;
  *param_2 = (char)(uVar9 >> 0x18);
  param_2[1] = (char)(uVar9 >> 0x10);
  param_2[2] = (char)(uVar9 >> 8);
  param_2[3] = (char)uVar9;
  param_2[4] = (char)(uVar5 >> 0x18);
  param_2[5] = (char)(uVar5 >> 0x10);
  param_2[6] = (char)(uVar5 >> 8);
  param_2[7] = (char)uVar5;
  param_2[8] = (char)(uVar3 >> 0x18);
  param_2[9] = (char)(uVar3 >> 0x10);
  param_2[10] = (char)(uVar3 >> 8);
  param_2[0xb] = (char)uVar3;
  param_2[0xc] = (char)(uVar10 >> 0x18);
  param_2[0xd] = (char)(uVar10 >> 0x10);
  return 0;
}


/* aes_decrypt @ 004149d4 */

undefined4 aes_decrypt(byte *param_1,undefined1 *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = *(byte *)(param_3 + 0x3c);
  if (((bVar1 != 0xa0) && (bVar1 != 0xc0)) && (bVar1 != 0xe0)) {
    return 1;
  }
  uVar10 = (uint)(bVar1 >> 2);
  uVar9 = ((uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8) ^ param_3[3];
  uVar6 = ((uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8) ^ *param_3;
  uVar4 = ((uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8) ^ param_3[1];
  uVar3 = ((uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8) ^ param_3[2];
  if (bVar1 == 0xc0) {
LAB_00414e58:
    uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x2b] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
    uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x2a] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x29] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
    uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x2c] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
    uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x28] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x27] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
    uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x26] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
    uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x25] ^
            *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  }
  else {
    if (bVar1 == 0xe0) {
      uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^ param_3[5] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
      uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4) ^ param_3[6] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4);
      uVar2 = *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[7] ^
              *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
      uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^ param_3[4] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
      uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[8] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
      uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[9] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
      uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[10] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
      uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[0xb] ^
              *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
              *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
      goto LAB_00414e58;
    }
    if (bVar1 != 0xa0) goto LAB_004161f0;
  }
  uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x24] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x23] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x22] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x21] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x20] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1f] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1e] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1d] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar8 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1c] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar8 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1b] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x1a] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x19] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x18] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x17] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x16] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x15] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x14] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x13] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x12] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x11] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0x10] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0xf] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0xe] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0xd] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0xc] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 0xb] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 10] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 9] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 8] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar7 = *(uint *)(PTR_t_in_00433204 + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 7] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar6 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 6] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_in_00433204 + (uVar6 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 5] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar2 = *(uint *)(PTR_t_in_00433204 + (uVar4 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 1] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(PTR_t_in_00433204 + (uVar7 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 3] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(PTR_t_in_00433204 + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 2] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar3 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_in_00433204 + (uVar3 >> 0x18) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar7 & 0xff) + 0x300) * 4) ^ param_3[uVar10 - 4] ^
          *(uint *)(PTR_t_in_00433204 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_in_00433204 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(PTR_t_il_004330ec + (uVar9 >> 0x18) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar8 & 0xff) + 0x300) * 4) ^ param_3[uVar10] ^
          *(uint *)(PTR_t_il_004330ec + ((uVar2 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(PTR_t_il_004330ec + (uVar8 >> 0x18) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar5 & 0xff) + 0x300) * 4) ^ param_3[uVar10 + 1] ^
          *(uint *)(PTR_t_il_004330ec + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar2 >> 8 & 0xff) + 0x200) * 4);
  uVar3 = *(uint *)(PTR_t_il_004330ec + (uVar5 >> 0x18) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar2 & 0xff) + 0x300) * 4) ^ param_3[uVar10 + 2] ^
          *(uint *)(PTR_t_il_004330ec + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = *(uint *)(PTR_t_il_004330ec + (uVar2 >> 0x18) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar9 & 0xff) + 0x300) * 4) ^ param_3[uVar10 + 3] ^
          *(uint *)(PTR_t_il_004330ec + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(PTR_t_il_004330ec + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
LAB_004161f0:
  param_2[0xe] = (char)(uVar9 >> 8);
  param_2[0xf] = (char)uVar9;
  *param_2 = (char)(uVar6 >> 0x18);
  param_2[1] = (char)(uVar6 >> 0x10);
  param_2[2] = (char)(uVar6 >> 8);
  param_2[3] = (char)uVar6;
  param_2[4] = (char)(uVar4 >> 0x18);
  param_2[5] = (char)(uVar4 >> 0x10);
  param_2[6] = (char)(uVar4 >> 8);
  param_2[7] = (char)uVar4;
  param_2[8] = (char)(uVar3 >> 0x18);
  param_2[9] = (char)(uVar3 >> 0x10);
  param_2[10] = (char)(uVar3 >> 8);
  param_2[0xb] = (char)uVar3;
  param_2[0xc] = (char)(uVar9 >> 0x18);
  param_2[0xd] = (char)(uVar9 >> 0x10);
  return 0;
}


/* aes_encrypt_key128 @ 00416290 */

undefined4 aes_encrypt_key128(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  
  uVar3 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  *param_2 = uVar3;
  uVar9 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8;
  param_2[1] = uVar9;
  uVar8 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8;
  param_2[2] = uVar8;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar5 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8;
  uVar3 = uVar3 ^ *(uint *)PTR_t_rc_004330e4 ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xf] + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xc] + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0xd] * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0xe] + 0x100) * 4);
  uVar9 = uVar3 ^ uVar9;
  uVar8 = uVar9 ^ uVar8;
  uVar4 = uVar8 ^ uVar5;
  uVar6 = uVar3 ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 >> 0x18) + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(PTR_t_fl_00433100 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar6 ^ uVar9;
  uVar18 = uVar19 ^ uVar8;
  uVar7 = uVar18 ^ uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  param_2[5] = uVar9;
  param_2[6] = uVar8;
  param_2[7] = uVar4;
  uVar17 = uVar6 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar16 = uVar17 ^ uVar19;
  uVar21 = uVar16 ^ uVar18;
  uVar5 = uVar21 ^ uVar7;
  param_2[8] = uVar6;
  uVar20 = uVar17 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar20 ^ uVar16;
  uVar12 = uVar13 ^ uVar21;
  uVar4 = uVar12 ^ uVar5;
  uVar11 = uVar20 ^ *(uint *)(puVar1 + 0x10) ^ *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar10 = uVar11 ^ uVar13;
  uVar9 = uVar10 ^ uVar12;
  uVar3 = uVar9 ^ uVar4;
  uVar6 = uVar11 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar3 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar3 >> 0x18) + 0x300) * 4) ^
          *(uint *)(puVar2 + (uVar3 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar15 = uVar6 ^ uVar10;
  uVar14 = uVar15 ^ uVar9;
  uVar8 = uVar14 ^ uVar3;
  param_2[9] = uVar19;
  param_2[10] = uVar18;
  param_2[0xb] = uVar7;
  param_2[0xc] = uVar17;
  param_2[0xd] = uVar16;
  param_2[0xe] = uVar21;
  param_2[0xf] = uVar5;
  param_2[0x10] = uVar20;
  param_2[0x11] = uVar13;
  param_2[0x12] = uVar12;
  param_2[0x13] = uVar4;
  param_2[0x14] = uVar11;
  param_2[0x15] = uVar10;
  param_2[0x17] = uVar3;
  uVar20 = uVar6 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar20 ^ uVar15;
  uVar17 = uVar19 ^ uVar14;
  uVar7 = uVar17 ^ uVar8;
  param_2[0x18] = uVar6;
  uVar16 = uVar20 ^ *(uint *)(puVar1 + 0x1c) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar16 ^ uVar19;
  uVar12 = uVar13 ^ uVar17;
  uVar6 = uVar12 ^ uVar7;
  param_2[0x16] = uVar9;
  uVar11 = uVar16 ^ *(uint *)(puVar1 + 0x20) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar10 = uVar11 ^ uVar13;
  uVar9 = uVar10 ^ uVar12;
  uVar3 = uVar9 ^ uVar6;
  uVar18 = uVar11 ^ *(uint *)(puVar1 + 0x24) ^ *(uint *)(puVar2 + ((uVar3 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar3 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar3 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar3 >> 8 & 0xff) + 0x100) * 4);
  uVar5 = uVar18 ^ uVar10;
  uVar4 = uVar5 ^ uVar9;
  param_2[0x19] = uVar15;
  param_2[0x1a] = uVar14;
  param_2[0x1b] = uVar8;
  param_2[0x1c] = uVar20;
  param_2[0x1d] = uVar19;
  param_2[0x1e] = uVar17;
  param_2[0x1f] = uVar7;
  param_2[0x20] = uVar16;
  param_2[0x21] = uVar13;
  param_2[0x22] = uVar12;
  param_2[0x23] = uVar6;
  param_2[0x28] = uVar18;
  param_2[0x2b] = uVar4 ^ uVar3;
  param_2[0x27] = uVar3;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  param_2[0x24] = uVar11;
  param_2[0x25] = uVar10;
  param_2[0x26] = uVar9;
  param_2[0x29] = uVar5;
  param_2[0x2a] = uVar4;
  return 0;
}


/* aes_encrypt_key @ 004177a4 */

undefined4 aes_encrypt_key(byte *param_1,int param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (param_2 == 0x20) {
LAB_00416f34:
    uVar4 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
            (uint)param_1[2] << 8;
    *param_3 = uVar4;
    uVar15 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
             (uint)param_1[6] << 8;
    param_3[1] = uVar15;
    uVar17 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
             (uint)param_1[10] << 8;
    param_3[2] = uVar17;
    uVar7 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
            (uint)param_1[0xe] << 8;
    param_3[3] = uVar7;
    uVar5 = (uint)param_1[0x10] << 0x18 | (uint)param_1[0x11] << 0x10 | (uint)param_1[0x13] |
            (uint)param_1[0x12] << 8;
    param_3[4] = uVar5;
    uVar13 = (uint)param_1[0x14] << 0x18 | (uint)param_1[0x15] << 0x10 | (uint)param_1[0x17] |
             (uint)param_1[0x16] << 8;
    param_3[5] = uVar13;
    uVar12 = (uint)param_1[0x18] << 0x18 | (uint)param_1[0x19] << 0x10 | (uint)param_1[0x1b] |
             (uint)param_1[0x1a] << 8;
    param_3[6] = uVar12;
    puVar2 = PTR_t_fl_00433100;
    puVar1 = PTR_t_rc_004330e4;
    uVar9 = (uint)param_1[0x1c] << 0x18 | (uint)param_1[0x1d] << 0x10 | (uint)param_1[0x1f] |
            (uint)param_1[0x1e] << 8;
    uVar4 = uVar4 ^ *(uint *)PTR_t_rc_004330e4 ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1f] + 0x200) * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1c] + 0x300) * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0x1d] * 4) ^
            *(uint *)(PTR_t_fl_00433100 + (param_1[0x1e] + 0x100) * 4);
    uVar15 = uVar4 ^ uVar15;
    uVar17 = uVar15 ^ uVar17;
    uVar7 = uVar17 ^ uVar7;
    uVar16 = *(uint *)(PTR_t_fl_00433100 + (uVar7 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 & 0xff) + 0x300) * 4) ^ uVar5 ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar7 >> 8 & 0xff) + 0x200) * 4);
    uVar13 = uVar16 ^ uVar13;
    uVar12 = uVar13 ^ uVar12;
    uVar6 = uVar12 ^ uVar9;
    uVar11 = uVar4 ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 & 0xff) + 0x200) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 0x18) + 0x300) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + (uVar6 >> 0xe & 0x3fc)) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
    uVar18 = uVar11 ^ uVar15;
    uVar14 = uVar18 ^ uVar17;
    uVar5 = uVar14 ^ uVar7;
    uVar10 = *(uint *)(PTR_t_fl_00433100 + (uVar5 >> 0x18) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 & 0xff) + 0x300) * 4) ^ uVar16 ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(PTR_t_fl_00433100 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar20 = uVar10 ^ uVar13;
    uVar19 = uVar20 ^ uVar12;
    uVar8 = uVar19 ^ uVar6;
    param_3[7] = uVar9;
    param_3[8] = uVar4;
    param_3[9] = uVar15;
    param_3[10] = uVar17;
    param_3[0xb] = uVar7;
    param_3[0xc] = uVar16;
    param_3[0xd] = uVar13;
    param_3[0xe] = uVar12;
    param_3[0xf] = uVar6;
    param_3[0x10] = uVar11;
    param_3[0x11] = uVar18;
    param_3[0x12] = uVar14;
    uVar15 = uVar11 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
    uVar18 = uVar15 ^ uVar18;
    uVar14 = uVar18 ^ uVar14;
    param_3[0x13] = uVar5;
    uVar5 = uVar14 ^ uVar5;
    uVar13 = *(uint *)(puVar2 + (uVar5 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x300) * 4) ^ uVar10 ^
             *(uint *)(puVar2 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
    uVar12 = uVar13 ^ uVar20;
    uVar11 = uVar12 ^ uVar19;
    uVar4 = uVar11 ^ uVar8;
    param_3[0x14] = uVar10;
    uVar10 = uVar15 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
    uVar22 = uVar10 ^ uVar18;
    uVar21 = uVar22 ^ uVar14;
    uVar6 = uVar21 ^ uVar5;
    uVar9 = *(uint *)(puVar2 + (uVar6 >> 0x18) * 4) ^
            *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x300) * 4) ^ uVar13 ^
            *(uint *)(puVar2 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
            *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    uVar17 = uVar9 ^ uVar12;
    uVar16 = uVar17 ^ uVar11;
    uVar7 = uVar16 ^ uVar4;
    param_3[0x15] = uVar20;
    param_3[0x16] = uVar19;
    param_3[0x17] = uVar8;
    param_3[0x18] = uVar15;
    param_3[0x19] = uVar18;
    param_3[0x1a] = uVar14;
    param_3[0x1b] = uVar5;
    param_3[0x1c] = uVar13;
    param_3[0x1d] = uVar12;
    param_3[0x1e] = uVar11;
    param_3[0x1f] = uVar4;
    param_3[0x20] = uVar10;
    param_3[0x21] = uVar22;
    param_3[0x22] = uVar21;
    uVar15 = uVar10 ^ *(uint *)(puVar1 + 0x10) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
    uVar22 = uVar15 ^ uVar22;
    uVar21 = uVar22 ^ uVar21;
    param_3[0x23] = uVar6;
    uVar6 = uVar21 ^ uVar6;
    uVar14 = *(uint *)(puVar2 + (uVar6 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x300) * 4) ^ uVar9 ^
             *(uint *)(puVar2 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
    uVar13 = uVar14 ^ uVar17;
    uVar12 = uVar13 ^ uVar16;
    uVar5 = uVar12 ^ uVar7;
    param_3[0x24] = uVar9;
    uVar11 = uVar15 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4) ^
             *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4) ^
             *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
             *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
    uVar10 = uVar11 ^ uVar22;
    uVar9 = uVar10 ^ uVar21;
    uVar4 = uVar9 ^ uVar6;
    uVar20 = *(uint *)(puVar2 + (uVar4 >> 0x18) * 4) ^
             *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x300) * 4) ^ uVar14 ^
             *(uint *)(puVar2 + ((uVar4 >> 0x10 & 0xff) + 0x100) * 4) ^
             *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x200) * 4);
    uVar19 = uVar20 ^ uVar13;
    uVar18 = uVar19 ^ uVar12;
    uVar8 = uVar18 ^ uVar5;
    param_3[0x25] = uVar17;
    param_3[0x26] = uVar16;
    param_3[0x27] = uVar7;
    param_3[0x28] = uVar15;
    param_3[0x2b] = uVar6;
    param_3[0x2e] = uVar12;
    param_3[0x2f] = uVar5;
    param_3[0x30] = uVar11;
    param_3[0x31] = uVar10;
    param_3[0x29] = uVar22;
    param_3[0x2a] = uVar21;
    param_3[0x2c] = uVar14;
    param_3[0x2d] = uVar13;
    param_3[0x32] = uVar9;
    uVar5 = uVar11 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
            *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
            *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
            *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
    uVar10 = uVar5 ^ uVar10;
    uVar9 = uVar10 ^ uVar9;
    param_3[0x33] = uVar4;
    param_3[0x34] = uVar20;
    param_3[0x35] = uVar19;
    param_3[0x36] = uVar18;
    param_3[0x3b] = uVar9 ^ uVar4;
    param_3[0x3c] = 0;
    *(undefined1 *)(param_3 + 0x3c) = 0xe0;
    param_3[0x37] = uVar8;
    param_3[0x38] = uVar5;
    param_3[0x39] = uVar10;
    param_3[0x3a] = uVar9;
    return 0;
  }
  if (param_2 < 0x21) {
    if (param_2 == 0x10) {
LAB_004177fc:
      uVar3 = aes_encrypt_key128();
      return uVar3;
    }
    if (param_2 != 0x18) {
      return 1;
    }
  }
  else if (param_2 != 0xc0) {
    if (param_2 == 0x100) goto LAB_00416f34;
    if (param_2 != 0x80) {
      return 1;
    }
    goto LAB_004177fc;
  }
  uVar5 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  *param_3 = uVar5;
  uVar26 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_3[1] = uVar26;
  uVar23 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_3[2] = uVar23;
  uVar22 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_3[3] = uVar22;
  uVar21 = (uint)param_1[0x10] << 0x18 | (uint)param_1[0x11] << 0x10 | (uint)param_1[0x13] |
           (uint)param_1[0x12] << 8;
  param_3[4] = uVar21;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar4 = (uint)param_1[0x14] << 0x18 | (uint)param_1[0x15] << 0x10 | (uint)param_1[0x17] |
          (uint)param_1[0x16] << 8;
  uVar5 = uVar5 ^ *(uint *)PTR_t_rc_004330e4 ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x17] + 0x200) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x14] + 0x300) * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0x15] * 4) ^
          *(uint *)(PTR_t_fl_00433100 + (param_1[0x16] + 0x100) * 4);
  uVar26 = uVar5 ^ uVar26;
  uVar23 = uVar26 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar21 = uVar22 ^ uVar21;
  uVar8 = uVar21 ^ uVar4;
  param_3[5] = uVar4;
  uVar20 = uVar5 ^ *(uint *)(puVar1 + 4) ^ *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar20 ^ uVar26;
  uVar18 = uVar19 ^ uVar23;
  uVar17 = uVar18 ^ uVar22;
  uVar16 = uVar17 ^ uVar21;
  uVar7 = uVar16 ^ uVar8;
  param_3[6] = uVar5;
  uVar25 = uVar20 ^ *(uint *)(puVar1 + 8) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar25 ^ uVar19;
  uVar15 = uVar24 ^ uVar18;
  uVar14 = uVar15 ^ uVar17;
  uVar13 = uVar14 ^ uVar16;
  uVar6 = uVar13 ^ uVar7;
  uVar12 = uVar25 ^ *(uint *)(puVar1 + 0xc) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar11 = uVar12 ^ uVar24;
  uVar10 = uVar11 ^ uVar15;
  uVar4 = uVar10 ^ uVar14;
  uVar9 = uVar4 ^ uVar13;
  uVar5 = uVar9 ^ uVar6;
  param_3[7] = uVar26;
  param_3[8] = uVar23;
  param_3[9] = uVar22;
  param_3[10] = uVar21;
  param_3[0xb] = uVar8;
  param_3[0xc] = uVar20;
  param_3[0xd] = uVar19;
  param_3[0xe] = uVar18;
  param_3[0xf] = uVar17;
  param_3[0x10] = uVar16;
  param_3[0x11] = uVar7;
  param_3[0x17] = uVar6;
  param_3[0x15] = uVar14;
  param_3[0x16] = uVar13;
  uVar8 = *(uint *)(puVar1 + 0x10);
  uVar7 = *(uint *)(puVar2 + ((uVar5 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(puVar2 + ((uVar5 >> 0x18) + 0x300) * 4);
  param_3[0x18] = uVar12;
  uVar12 = uVar12 ^ uVar8 ^ uVar7 ^ uVar6 ^ *(uint *)(puVar2 + (uVar5 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar5 >> 8 & 0xff) + 0x100) * 4);
  param_3[0x19] = uVar11;
  uVar11 = uVar12 ^ uVar11;
  uVar22 = uVar11 ^ uVar10;
  uVar21 = uVar22 ^ uVar4;
  uVar20 = uVar21 ^ uVar9;
  uVar7 = uVar20 ^ uVar5;
  uVar19 = uVar12 ^ *(uint *)(puVar1 + 0x14) ^ *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar18 = uVar19 ^ uVar11;
  uVar17 = uVar18 ^ uVar22;
  uVar16 = uVar17 ^ uVar21;
  param_3[0x12] = uVar25;
  uVar25 = uVar16 ^ uVar20;
  uVar6 = uVar25 ^ uVar7;
  param_3[0x14] = uVar15;
  param_3[0x13] = uVar24;
  uVar23 = uVar19 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + ((uVar6 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar2 + ((uVar6 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar2 + (uVar6 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar6 >> 8 & 0xff) + 0x100) * 4);
  uVar15 = uVar23 ^ uVar18;
  uVar14 = uVar15 ^ uVar17;
  uVar13 = uVar14 ^ uVar16;
  uVar8 = uVar13 ^ uVar25 ^ uVar6;
  param_3[0x1a] = uVar10;
  param_3[0x1b] = uVar4;
  param_3[0x1c] = uVar9;
  uVar9 = *(uint *)(puVar1 + 0x1c);
  param_3[0x29] = uVar6;
  param_3[0x1d] = uVar5;
  param_3[0x23] = uVar7;
  uVar5 = *(uint *)(puVar2 + ((uVar8 & 0xff) + 0x200) * 4);
  uVar4 = *(uint *)(puVar2 + ((uVar8 >> 0x18) + 0x300) * 4);
  param_3[0x2a] = uVar23;
  uVar4 = uVar23 ^ uVar9 ^ uVar5 ^ uVar4 ^ *(uint *)(puVar2 + (uVar8 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  param_3[0x2b] = uVar15;
  uVar15 = uVar4 ^ uVar15;
  param_3[0x2c] = uVar14;
  uVar14 = uVar15 ^ uVar14;
  param_3[0x20] = uVar22;
  param_3[0x21] = uVar21;
  param_3[0x22] = uVar20;
  param_3[0x24] = uVar19;
  param_3[0x25] = uVar18;
  param_3[0x26] = uVar17;
  param_3[0x27] = uVar16;
  param_3[0x2e] = uVar13 ^ uVar25;
  param_3[0x33] = uVar14 ^ uVar13;
  param_3[0x3c] = 0;
  *(undefined1 *)(param_3 + 0x3c) = 0xc0;
  param_3[0x1e] = uVar12;
  param_3[0x1f] = uVar11;
  param_3[0x28] = uVar25;
  param_3[0x2d] = uVar13;
  param_3[0x2f] = uVar8;
  param_3[0x30] = uVar4;
  param_3[0x31] = uVar15;
  param_3[0x32] = uVar14;
  return 0;
}


/* aes_decrypt_key128 @ 00417814 */

undefined4 aes_decrypt_key128(byte *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar9 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
          (uint)param_1[2] << 8;
  param_2[0x28] = uVar9;
  uVar5 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8;
  param_2[0x29] = uVar5;
  uVar8 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8;
  param_2[0x2a] = uVar8;
  puVar3 = PTR_t_im_00433138;
  puVar2 = PTR_t_fl_00433100;
  puVar1 = PTR_t_rc_004330e4;
  uVar4 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8;
  uVar13 = *(uint *)(PTR_t_fl_00433100 + (param_1[0xf] + 0x200) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (param_1[0xc] + 0x300) * 4) ^ *(uint *)PTR_t_rc_004330e4 ^
           *(uint *)(PTR_t_fl_00433100 + (uint)param_1[0xd] * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (param_1[0xe] + 0x100) * 4);
  uVar6 = uVar13 ^ uVar9;
  uVar20 = uVar6 ^ uVar5;
  uVar13 = uVar5 ^ uVar8 ^ uVar9 ^ uVar4 ^ uVar13;
  uVar11 = *(uint *)(PTR_t_im_00433138 + ((uVar6 & 0xff) + 0x300) * 4) ^
           *(uint *)(PTR_t_im_00433138 + (uVar6 >> 0x18) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar10 = *(uint *)(PTR_t_im_00433138 + ((uVar20 & 0xff) + 0x300) * 4) ^
           *(uint *)(PTR_t_im_00433138 + (uVar20 >> 0x18) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(PTR_t_im_00433138 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  puVar15 = (uint *)(PTR_t_fl_00433100 + ((uVar13 & 0xff) + 0x200) * 4);
  puVar14 = (uint *)(PTR_t_fl_00433100 + ((uVar13 >> 0x18) + 0x300) * 4);
  param_2[0x2b] = uVar4;
  param_2[0x24] = uVar11;
  uVar17 = *puVar15 ^ *puVar14 ^ *(uint *)(puVar1 + 4) ^ *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc))
           ^ *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  uVar9 = uVar4 ^ uVar5 ^ uVar17;
  uVar20 = uVar20 ^ uVar8;
  uVar5 = *(uint *)(puVar2 + ((uVar9 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar9 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 8) ^
          *(uint *)(puVar2 + (uVar9 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar9 >> 8 & 0xff) + 0x100) * 4);
  uVar6 = uVar20 ^ uVar4;
  uVar16 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar22 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar12 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar7 = uVar4 ^ uVar8 ^ uVar5;
  uVar18 = *(uint *)(puVar3 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar3 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar11 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = *(uint *)(puVar3 + ((uVar20 & 0xff) + 0x300) * 4) ^
          *(uint *)(puVar3 + (uVar20 >> 0x18) * 4) ^
          *(uint *)(puVar3 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(puVar3 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  uVar5 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4) ^ *(uint *)(puVar3 + (uVar6 >> 0x18) * 4)
          ^ *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4) ^
          *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x25] = uVar10;
  uVar10 = uVar18 ^ uVar10;
  uVar17 = uVar10 ^ uVar8;
  uVar11 = uVar16 ^ uVar22 ^ uVar18 ^ uVar12 ^ uVar11;
  param_2[0x26] = uVar8;
  uVar16 = uVar11 ^ uVar10;
  uVar19 = uVar17 ^ uVar5;
  param_2[0x27] = uVar5;
  param_2[0x21] = uVar10;
  uVar8 = *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0xc) ^
          *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar4 = uVar8 ^ uVar4;
  uVar6 = *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x10) ^
          *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar13 = uVar6 ^ uVar13;
  param_2[0x20] = uVar18;
  uVar5 = *(uint *)(puVar2 + ((uVar13 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar13 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x14) ^
          *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  uVar22 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4);
  uVar18 = *(uint *)(puVar3 + (uVar6 >> 0x18) * 4);
  uVar10 = *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4);
  uVar12 = *(uint *)(puVar3 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar8 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar3 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar9 = uVar5 ^ uVar9;
  param_2[0x1c] = uVar11;
  uVar21 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar8 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar20 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar6 = uVar18 ^ uVar22 ^ uVar12 ^ uVar10 ^ *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x22] = uVar17;
  uVar17 = uVar16 ^ uVar17;
  uVar10 = uVar12 ^ uVar16;
  uVar11 = uVar6 ^ uVar10;
  uVar23 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x23] = uVar19;
  uVar5 = uVar10 ^ uVar17;
  uVar19 = uVar17 ^ uVar19;
  param_2[0x1d] = uVar16;
  param_2[0x1e] = uVar17;
  uVar18 = uVar11 ^ uVar5;
  uVar22 = uVar5 ^ uVar19;
  uVar16 = *(uint *)(puVar2 + ((uVar9 & 0xff) + 0x200) * 4);
  param_2[0x19] = uVar10;
  param_2[0x1a] = uVar5;
  param_2[0x14] = uVar6;
  uVar5 = *(uint *)(puVar2 + ((uVar9 >> 0x18) + 0x300) * 4);
  param_2[0x18] = uVar12;
  uVar10 = uVar16 ^ uVar5 ^ *(uint *)(puVar1 + 0x18) ^ *(uint *)(puVar2 + (uVar9 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar2 + ((uVar9 >> 8 & 0xff) + 0x100) * 4);
  uVar7 = uVar10 ^ uVar7;
  uVar23 = uVar21 ^ uVar8 ^ uVar6 ^ uVar20 ^ uVar23;
  param_2[0x1b] = uVar22;
  uVar22 = uVar18 ^ uVar22;
  uVar6 = *(uint *)(puVar2 + ((uVar7 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar7 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x1c) ^
          *(uint *)(puVar2 + (uVar7 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar7 >> 8 & 0xff) + 0x100) * 4);
  uVar4 = uVar6 ^ uVar4;
  param_2[0x1f] = uVar19;
  uVar5 = *(uint *)(puVar2 + ((uVar4 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar2 + ((uVar4 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar1 + 0x20) ^
          *(uint *)(puVar2 + (uVar4 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar2 + ((uVar4 >> 8 & 0xff) + 0x100) * 4);
  uVar8 = *(uint *)(puVar3 + (uVar6 >> 0x18) * 4);
  uVar20 = *(uint *)(puVar3 + ((uVar6 & 0xff) + 0x300) * 4);
  uVar17 = *(uint *)(puVar3 + ((uVar6 >> 0x10 & 0xff) + 0x100) * 4);
  uVar16 = *(uint *)(puVar3 + (uVar10 >> 0x18) * 4) ^
           *(uint *)(puVar3 + ((uVar10 & 0xff) + 0x300) * 4) ^ uVar23 ^
           *(uint *)(puVar3 + ((uVar10 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar3 + ((uVar10 >> 8 & 0xff) + 0x200) * 4);
  uVar6 = *(uint *)(puVar3 + ((uVar6 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar3 + ((uVar5 & 0xff) + 0x300) * 4);
  uVar19 = *(uint *)(puVar3 + (uVar5 >> 0x18) * 4);
  uVar13 = uVar5 ^ uVar13;
  param_2[0x10] = uVar23;
  uVar21 = *(uint *)(puVar3 + ((uVar5 >> 0x10 & 0xff) + 0x100) * 4);
  uVar23 = uVar23 ^ uVar11;
  uVar6 = uVar8 ^ uVar20 ^ uVar16 ^ uVar17 ^ uVar6;
  param_2[0x15] = uVar11;
  param_2[0x16] = uVar18;
  uVar11 = uVar16 ^ uVar23;
  uVar18 = uVar23 ^ uVar18;
  uVar8 = uVar11 ^ uVar18;
  uVar10 = uVar6 ^ uVar11;
  param_2[0x17] = uVar22;
  uVar22 = uVar18 ^ uVar22;
  uVar20 = *(uint *)(puVar3 + ((uVar5 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x11] = uVar23;
  uVar5 = uVar10 ^ uVar8;
  uVar23 = uVar8 ^ uVar22;
  param_2[0xc] = uVar16;
  param_2[0xd] = uVar11;
  uVar17 = *(uint *)(puVar1 + 0x24);
  param_2[0xe] = uVar8;
  param_2[8] = uVar6;
  uVar16 = *(uint *)(puVar2 + ((uVar13 & 0xff) + 0x200) * 4);
  uVar11 = *(uint *)(puVar2 + ((uVar13 >> 0x18) + 0x300) * 4);
  uVar20 = uVar19 ^ uVar12 ^ uVar6 ^ uVar21 ^ uVar20;
  uVar8 = *(uint *)(puVar2 + (uVar13 >> 0xe & 0x3fc));
  uVar6 = *(uint *)(puVar2 + ((uVar13 >> 8 & 0xff) + 0x100) * 4);
  param_2[9] = uVar10;
  uVar10 = uVar20 ^ uVar10;
  uVar12 = uVar5 ^ uVar23;
  param_2[10] = uVar5;
  uVar5 = uVar10 ^ uVar5;
  param_2[0xb] = uVar12;
  uVar6 = uVar9 ^ uVar17 ^ uVar16 ^ uVar11 ^ uVar8 ^ uVar6;
  param_2[0xf] = uVar23;
  param_2[4] = uVar20;
  param_2[7] = uVar5 ^ uVar12;
  param_2[6] = uVar5;
  param_2[0x3c] = 0;
  param_2[0x12] = uVar18;
  param_2[0x13] = uVar22;
  *param_2 = uVar4 ^ uVar7 ^ uVar6 ^ uVar13;
  param_2[1] = uVar6 ^ uVar4;
  param_2[2] = uVar6 ^ uVar13;
  param_2[3] = uVar6;
  *(undefined1 *)(param_2 + 0x3c) = 0xa0;
  param_2[5] = uVar10;
  return 0;
}


/* FUN_00418350 @ 00418350 */

undefined4 FUN_00418350(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  
  uVar11 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
           (uint)param_1[2] << 8;
  param_2[0x30] = uVar11;
  uVar23 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_2[0x31] = uVar23;
  uVar22 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_2[0x32] = uVar22;
  uVar20 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_2[0x33] = uVar20;
  puVar7 = PTR_t_im_00433138;
  bVar1 = param_1[0x10];
  bVar2 = param_1[0x11];
  bVar3 = param_1[0x13];
  bVar4 = param_1[0x12];
  param_2[0x2c] =
       *(uint *)(PTR_t_im_00433138 + (bVar3 + 0x300) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (uint)bVar1 * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar2 + 0x100) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar4 + 0x200) * 4);
  puVar6 = PTR_t_fl_00433100;
  puVar5 = PTR_t_rc_004330e4;
  uVar12 = (uint)param_1[0x14];
  uVar10 = (uint)param_1[0x15];
  uVar8 = (uint)param_1[0x16];
  uVar9 = (uint)param_1[0x17];
  param_2[0x2d] =
       *(uint *)(puVar7 + (uVar9 + 0x300) * 4) ^ *(uint *)(puVar7 + uVar12 * 4) ^
       *(uint *)(puVar7 + (uVar10 + 0x100) * 4) ^ *(uint *)(puVar7 + (uVar8 + 0x200) * 4);
  uVar11 = uVar11 ^ *(uint *)puVar5 ^ *(uint *)(puVar6 + (uVar9 + 0x200) * 4) ^
           *(uint *)(puVar6 + (uVar12 + 0x300) * 4) ^ *(uint *)(puVar6 + uVar10 * 4) ^
           *(uint *)(puVar6 + (uVar8 + 0x100) * 4);
  uVar23 = uVar11 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 | (uint)bVar4 << 8);
  uVar10 = uVar21 ^ (uVar12 << 0x18 | uVar10 << 0x10 | uVar9 | uVar8 << 8);
  uVar8 = uVar10 >> 8 & 0xff;
  uVar9 = uVar10 >> 0x10 & 0xff;
  uVar13 = *(uint *)(puVar7 + ((uVar20 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar20 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar20 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar20 >> 8 & 0xff) + 0x200) * 4);
  uVar25 = *(uint *)(puVar7 + ((uVar11 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar11 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar11 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar11 >> 8 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar7 + ((uVar10 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar10 >> 0x18) * 4) ^ *(uint *)(puVar7 + (uVar9 + 0x100) * 4) ^
           *(uint *)(puVar7 + (uVar8 + 0x200) * 4);
  uVar15 = *(uint *)(puVar7 + ((uVar23 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar23 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar23 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar23 >> 8 & 0xff) + 0x200) * 4);
  uVar14 = *(uint *)(puVar7 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar7 + ((uVar21 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar7 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x2e] = uVar25;
  param_2[0x2f] = uVar15;
  param_2[0x28] = uVar14;
  param_2[0x29] = uVar13;
  param_2[0x2a] = uVar12;
  param_2[0x2b] = uVar16;
  uVar28 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 4) ^
           *(uint *)(puVar6 + uVar9 * 4) ^ *(uint *)(puVar6 + (uVar8 + 0x100) * 4);
  uVar23 = uVar28 ^ uVar11 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar9 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 8) ^
          *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar9 ^ uVar28 ^ uVar11;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar8 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0xc) ^
          *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar8 ^ uVar24;
  uVar25 = *(uint *)(puVar7 + (uVar28 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar28 & 0xff) + 0x300) * 4) ^ uVar25 ^
           *(uint *)(puVar7 + ((uVar28 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar28 >> 8 & 0xff) + 0x200) * 4);
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  uVar11 = *(uint *)(puVar7 + (uVar9 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar9 & 0xff) + 0x300) * 4) ^ uVar25 ^
           *(uint *)(puVar7 + ((uVar9 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar9 >> 8 & 0xff) + 0x200) * 4);
  uVar15 = uVar25 ^ uVar15;
  uVar9 = uVar11 ^ uVar15;
  uVar14 = uVar15 ^ uVar14;
  uVar13 = uVar14 ^ uVar13;
  uVar18 = uVar9 ^ uVar14;
  uVar12 = uVar13 ^ uVar12;
  uVar17 = uVar18 ^ uVar13;
  uVar27 = uVar17 ^ uVar12;
  uVar16 = uVar12 ^ uVar16;
  uVar19 = *(uint *)(puVar7 + (uVar8 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar8 & 0xff) + 0x300) * 4) ^ uVar11 ^
           *(uint *)(puVar7 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  uVar28 = uVar27 ^ uVar16;
  param_2[0x26] = uVar14;
  param_2[0x22] = uVar11;
  param_2[0x27] = uVar13;
  param_2[0x20] = uVar12;
  param_2[0x1f] = uVar28;
  uVar12 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0x10) ^
           *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar12 ^ uVar24;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar21 = uVar20 ^ uVar21;
  uVar10 = uVar21 ^ uVar10;
  param_2[0x25] = uVar15;
  param_2[0x24] = uVar25;
  uVar8 = *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4);
  uVar15 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4);
  uVar13 = *(uint *)(puVar5 + 0x14);
  uVar14 = *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc));
  uVar11 = *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  param_2[0x21] = uVar16;
  uVar11 = uVar15 ^ uVar8 ^ uVar13 ^ uVar14 ^ uVar11;
  uVar24 = uVar11 ^ uVar24;
  uVar14 = *(uint *)(puVar7 + ((uVar11 & 0xff) + 0x300) * 4);
  uVar23 = uVar24 ^ uVar23;
  uVar15 = *(uint *)(puVar7 + (uVar11 >> 0x18) * 4);
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar13 = *(uint *)(puVar7 + ((uVar11 >> 0x10 & 0xff) + 0x100) * 4);
  uVar26 = *(uint *)(puVar7 + (uVar12 >> 0x18) * 4) ^
           *(uint *)(puVar7 + ((uVar12 & 0xff) + 0x300) * 4) ^ uVar19 ^
           *(uint *)(puVar7 + ((uVar12 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar7 + ((uVar12 >> 8 & 0xff) + 0x200) * 4);
  uVar12 = *(uint *)(puVar7 + ((uVar11 >> 8 & 0xff) + 0x200) * 4);
  uVar8 = uVar20 ^ uVar21 ^ uVar10;
  param_2[0x23] = uVar9;
  param_2[0x18] = uVar19;
  uVar19 = uVar19 ^ uVar9;
  uVar12 = uVar15 ^ uVar14 ^ uVar26 ^ uVar13 ^ uVar12;
  param_2[0x1c] = uVar18;
  param_2[0x1d] = uVar17;
  uVar18 = uVar19 ^ uVar18;
  param_2[0x1e] = uVar27;
  uVar17 = uVar18 ^ uVar17;
  uVar27 = uVar17 ^ uVar27;
  uVar11 = uVar26 ^ uVar19;
  uVar28 = uVar27 ^ uVar28;
  uVar16 = uVar11 ^ uVar18;
  uVar25 = uVar16 ^ uVar17;
  uVar9 = uVar25 ^ uVar27;
  uVar21 = uVar9 ^ uVar28;
  uVar15 = uVar12 ^ uVar11;
  param_2[0x14] = uVar27;
  param_2[0x15] = uVar28;
  param_2[0x16] = uVar26;
  param_2[0x17] = uVar11;
  uVar14 = uVar15 ^ uVar16;
  uVar13 = uVar14 ^ uVar25;
  uVar11 = uVar13 ^ uVar9;
  param_2[0x10] = uVar16;
  param_2[0x11] = uVar25;
  param_2[0x12] = uVar9;
  param_2[0x13] = uVar21;
  uVar8 = *(uint *)(puVar6 + ((uVar8 & 0xff) + 0x200) * 4) ^
          *(uint *)(puVar6 + ((uVar8 >> 0x18) + 0x300) * 4) ^ *(uint *)(puVar5 + 0x18) ^
          *(uint *)(puVar6 + (uVar8 >> 0xe & 0x3fc)) ^
          *(uint *)(puVar6 + ((uVar8 >> 8 & 0xff) + 0x100) * 4);
  uVar24 = uVar8 ^ uVar24;
  param_2[0x1b] = uVar17;
  uVar23 = uVar24 ^ uVar23;
  uVar22 = uVar23 ^ uVar22;
  uVar20 = uVar22 ^ uVar20;
  uVar10 = uVar10 ^ uVar20;
  param_2[0x1a] = uVar18;
  uVar27 = *(uint *)(puVar7 + (uVar8 >> 0x18) * 4);
  uVar28 = *(uint *)(puVar7 + ((uVar8 & 0xff) + 0x300) * 4);
  uVar26 = *(uint *)(puVar5 + 0x1c);
  uVar18 = *(uint *)(puVar7 + ((uVar8 >> 0x10 & 0xff) + 0x100) * 4);
  uVar17 = *(uint *)(puVar6 + ((uVar10 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar6 + ((uVar10 >> 0x18) + 0x300) * 4);
  uVar25 = *(uint *)(puVar7 + ((uVar8 >> 8 & 0xff) + 0x200) * 4);
  param_2[0xc] = uVar12;
  uVar9 = *(uint *)(puVar6 + (uVar10 >> 0xe & 0x3fc));
  uVar8 = *(uint *)(puVar6 + ((uVar10 >> 8 & 0xff) + 0x100) * 4);
  uVar25 = uVar27 ^ uVar28 ^ uVar12 ^ uVar18 ^ uVar25;
  param_2[0xd] = uVar15;
  uVar15 = uVar25 ^ uVar15;
  uVar8 = uVar24 ^ uVar26 ^ uVar17 ^ uVar16 ^ uVar9 ^ uVar8;
  param_2[0xe] = uVar14;
  uVar14 = uVar15 ^ uVar14;
  uVar23 = uVar8 ^ uVar23;
  param_2[0xf] = uVar13;
  uVar13 = uVar14 ^ uVar13;
  uVar9 = uVar13 ^ uVar11;
  uVar22 = uVar23 ^ uVar22;
  param_2[8] = uVar11;
  uVar11 = uVar11 ^ uVar21;
  param_2[0x19] = uVar19;
  param_2[7] = uVar9 ^ uVar11;
  param_2[3] = uVar22 ^ uVar20;
  param_2[1] = uVar23;
  param_2[2] = uVar22;
  *param_2 = uVar8;
  param_2[0x3c] = 0;
  param_2[9] = uVar11;
  *(undefined1 *)(param_2 + 0x3c) = 0xc0;
  param_2[10] = uVar25;
  param_2[0xb] = uVar15;
  param_2[4] = uVar14;
  param_2[5] = uVar13;
  param_2[6] = uVar9;
  return 0;
}


/* FUN_0041914c @ 0041914c */

undefined4 FUN_0041914c(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  uVar40 = (uint)param_1[3] | (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 |
           (uint)param_1[2] << 8;
  param_2[0x38] = uVar40;
  uVar28 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
           (uint)param_1[6] << 8;
  param_2[0x39] = uVar28;
  uVar25 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
           (uint)param_1[10] << 8;
  param_2[0x3a] = uVar25;
  uVar22 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
           (uint)param_1[0xe] << 8;
  param_2[0x3b] = uVar22;
  puVar15 = PTR_t_im_00433138;
  bVar1 = param_1[0x10];
  bVar2 = param_1[0x11];
  bVar3 = param_1[0x13];
  bVar4 = param_1[0x12];
  param_2[0x34] =
       *(uint *)(PTR_t_im_00433138 + (bVar3 + 0x300) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (uint)bVar1 * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar2 + 0x100) * 4) ^
       *(uint *)(PTR_t_im_00433138 + (bVar4 + 0x200) * 4);
  bVar5 = param_1[0x14];
  bVar6 = param_1[0x15];
  bVar7 = param_1[0x17];
  bVar8 = param_1[0x16];
  param_2[0x35] =
       *(uint *)(puVar15 + (bVar7 + 0x300) * 4) ^ *(uint *)(puVar15 + (uint)bVar5 * 4) ^
       *(uint *)(puVar15 + (bVar6 + 0x100) * 4) ^ *(uint *)(puVar15 + (bVar8 + 0x200) * 4);
  bVar9 = param_1[0x18];
  bVar10 = param_1[0x19];
  bVar11 = param_1[0x1b];
  bVar12 = param_1[0x1a];
  param_2[0x36] =
       *(uint *)(puVar15 + (bVar11 + 0x300) * 4) ^ *(uint *)(puVar15 + (uint)bVar9 * 4) ^
       *(uint *)(puVar15 + (bVar10 + 0x100) * 4) ^ *(uint *)(puVar15 + (bVar12 + 0x200) * 4);
  puVar14 = PTR_t_fl_00433100;
  uVar23 = (uint)param_1[0x1c];
  uVar19 = (uint)param_1[0x1d];
  uVar16 = (uint)param_1[0x1e];
  uVar17 = (uint)param_1[0x1f];
  uVar29 = uVar40 ^ *(uint *)PTR_t_rc_004330e4 ^ *(uint *)(PTR_t_fl_00433100 + (uVar17 + 0x200) * 4)
           ^ *(uint *)(PTR_t_fl_00433100 + (uVar23 + 0x300) * 4) ^
           *(uint *)(PTR_t_fl_00433100 + uVar19 * 4) ^
           *(uint *)(PTR_t_fl_00433100 + (uVar16 + 0x100) * 4);
  uVar28 = uVar29 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar35 = *(uint *)(puVar15 + (uVar29 >> 0x18) * 4);
  uVar38 = *(uint *)(puVar15 + ((uVar29 & 0xff) + 0x300) * 4);
  uVar22 = uVar25 ^ uVar22;
  uVar33 = *(uint *)(puVar15 + ((uVar29 >> 0x10 & 0xff) + 0x100) * 4);
  uVar32 = *(uint *)(puVar15 + ((uVar29 >> 8 & 0xff) + 0x200) * 4);
  iVar26 = (uVar22 >> 0x18) * 4;
  uVar42 = *(uint *)(puVar15 + ((uVar28 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar28 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar28 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar28 >> 8 & 0xff) + 0x200) * 4);
  iVar27 = ((uVar22 >> 8 & 0xff) + 0x200) * 4;
  iVar30 = ((uVar22 & 0xff) + 0x300) * 4;
  uVar20 = *(uint *)(puVar15 + ((uVar25 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar25 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar25 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar25 >> 8 & 0xff) + 0x200) * 4);
  iVar31 = ((uVar22 >> 0x10 & 0xff) + 0x100) * 4;
  uVar21 = *(uint *)(PTR_t_fl_00433100 + iVar26) ^ *(uint *)(PTR_t_fl_00433100 + iVar30) ^
           ((uint)bVar1 << 0x18 | (uint)bVar2 << 0x10 | (uint)bVar3 | (uint)bVar4 << 8) ^
           *(uint *)(PTR_t_fl_00433100 + iVar31) ^ *(uint *)(PTR_t_fl_00433100 + iVar27);
  uVar18 = uVar21 ^ ((uint)bVar5 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar7 | (uint)bVar8 << 8);
  uVar40 = uVar18 ^ ((uint)bVar9 << 0x18 | (uint)bVar10 << 0x10 | (uint)bVar11 | (uint)bVar12 << 8);
  uVar24 = uVar40 ^ (uVar23 << 0x18 | uVar19 << 0x10 | uVar17 | uVar16 << 8);
  param_2[0x37] =
       *(uint *)(puVar15 + (uVar17 + 0x300) * 4) ^ *(uint *)(puVar15 + uVar23 * 4) ^
       *(uint *)(puVar15 + (uVar19 + 0x100) * 4) ^ *(uint *)(puVar15 + (uVar16 + 0x200) * 4);
  uVar19 = uVar24 >> 8 & 0xff;
  uVar17 = uVar24 >> 0x10 & 0xff;
  uVar16 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 4) ^
           *(uint *)(puVar14 + uVar17 * 4) ^ *(uint *)(puVar14 + (uVar19 + 0x100) * 4);
  uVar32 = uVar38 ^ uVar35 ^ uVar33 ^ uVar32;
  param_2[0x30] = uVar32;
  param_2[0x31] = uVar42;
  param_2[0x32] = uVar20;
  uVar28 = uVar16 ^ uVar29 ^ uVar28;
  uVar23 = *(uint *)(puVar15 + (uVar40 >> 0x18) * 4);
  uVar35 = *(uint *)(puVar15 + ((uVar40 & 0xff) + 0x300) * 4);
  uVar25 = uVar28 ^ uVar25;
  uVar38 = *(uint *)(puVar15 + ((uVar40 >> 0x10 & 0xff) + 0x100) * 4);
  uVar33 = *(uint *)(puVar15 + ((uVar40 >> 8 & 0xff) + 0x200) * 4);
  uVar22 = uVar25 ^ uVar22;
  uVar43 = *(uint *)(puVar15 + iVar30) ^ *(uint *)(puVar15 + iVar26) ^ *(uint *)(puVar15 + iVar31) ^
           *(uint *)(puVar15 + iVar27);
  uVar41 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar32 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar32 = *(uint *)(puVar15 + ((uVar24 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar24 >> 0x18) * 4) ^ *(uint *)(puVar15 + (uVar17 + 0x100) * 4) ^
           *(uint *)(puVar15 + (uVar19 + 0x200) * 4);
  uVar39 = *(uint *)(puVar15 + ((uVar21 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = *(uint *)(puVar15 + ((uVar18 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar15 + (uVar18 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar18 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar18 >> 8 & 0xff) + 0x200) * 4);
  param_2[0x33] = uVar43;
  param_2[0x2c] = uVar39;
  param_2[0x2d] = uVar34;
  uVar36 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar18 = uVar36 ^ uVar21 ^ uVar18;
  uVar40 = uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  param_2[0x2f] = uVar32;
  uVar17 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 8) ^
           *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar17 ^ uVar16 ^ uVar29;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar33 = uVar35 ^ uVar23 ^ uVar38 ^ uVar33;
  uVar16 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar21 = uVar16 ^ uVar36 ^ uVar21;
  uVar29 = *(uint *)(puVar15 + (uVar36 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar36 & 0xff) + 0x300) * 4) ^ uVar39 ^
           *(uint *)(puVar15 + ((uVar36 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar36 >> 8 & 0xff) + 0x200) * 4);
  uVar37 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar29 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar18 = uVar21 ^ uVar18;
  uVar36 = *(uint *)(puVar15 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar41 ^
           *(uint *)(puVar15 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = uVar29 ^ uVar34;
  param_2[0x28] = uVar41;
  uVar40 = uVar18 ^ uVar40;
  uVar41 = uVar41 ^ uVar42;
  uVar24 = uVar40 ^ uVar24;
  uVar20 = uVar41 ^ uVar20;
  uVar38 = uVar36 ^ uVar41;
  param_2[0x2e] = uVar33;
  uVar33 = uVar34 ^ uVar33;
  uVar35 = uVar38 ^ uVar20;
  uVar43 = uVar20 ^ uVar43;
  uVar32 = uVar33 ^ uVar32;
  uVar23 = uVar35 ^ uVar43;
  param_2[0x2a] = uVar20;
  param_2[0x2b] = uVar43;
  puVar13 = PTR_t_rc_004330e4;
  param_2[0x29] = uVar41;
  param_2[0x27] = uVar32;
  uVar16 = *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4);
  uVar17 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4);
  param_2[0x24] = uVar29;
  uVar20 = *(uint *)(puVar13 + 0xc);
  param_2[0x23] = uVar23;
  uVar41 = uVar17 ^ uVar16 ^ uVar20 ^ *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar41 ^ uVar19;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar29 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar21 = uVar29 ^ uVar21;
  uVar18 = uVar21 ^ uVar18;
  uVar40 = uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  uVar39 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4);
  uVar16 = *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4);
  uVar42 = *(uint *)(puVar13 + 0x10);
  uVar20 = *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc));
  uVar17 = *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar43 = *(uint *)(puVar15 + (uVar29 >> 0x18) * 4);
  param_2[0x25] = uVar34;
  param_2[0x26] = uVar33;
  param_2[0x20] = uVar36;
  param_2[0x21] = uVar38;
  param_2[0x22] = uVar35;
  param_2[0x1c] = uVar37;
  uVar17 = uVar39 ^ uVar16 ^ uVar42 ^ uVar20 ^ uVar17;
  uVar19 = uVar17 ^ uVar19;
  uVar16 = *(uint *)(puVar15 + (uVar41 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar41 & 0xff) + 0x300) * 4) ^ uVar36 ^
           *(uint *)(puVar15 + ((uVar41 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar41 >> 8 & 0xff) + 0x200) * 4);
  uVar34 = uVar37 ^ uVar34;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar20 = *(uint *)(puVar15 + (uVar17 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar17 & 0xff) + 0x300) * 4) ^ uVar16 ^
           *(uint *)(puVar15 + ((uVar17 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar17 >> 8 & 0xff) + 0x200) * 4);
  uVar17 = uVar43 ^ *(uint *)(puVar15 + ((uVar29 & 0xff) + 0x300) * 4) ^ uVar37 ^
           *(uint *)(puVar15 + ((uVar29 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar29 >> 8 & 0xff) + 0x200) * 4);
  uVar33 = uVar34 ^ uVar33;
  uVar36 = uVar17 ^ uVar34;
  uVar38 = uVar16 ^ uVar38;
  uVar39 = uVar36 ^ uVar33;
  uVar35 = uVar38 ^ uVar35;
  uVar32 = uVar33 ^ uVar32;
  uVar29 = uVar39 ^ uVar32;
  uVar23 = uVar35 ^ uVar23;
  param_2[0x1d] = uVar34;
  param_2[0x1e] = uVar33;
  param_2[0x1f] = uVar32;
  param_2[0x18] = uVar16;
  param_2[0x19] = uVar38;
  param_2[0x1a] = uVar35;
  param_2[0x1b] = uVar23;
  param_2[0x14] = uVar17;
  param_2[0x15] = uVar36;
  param_2[0x16] = uVar39;
  param_2[0x17] = uVar29;
  param_2[0x10] = uVar20;
  uVar33 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar40 = uVar33 ^ uVar21 ^ uVar18 ^ uVar40;
  uVar24 = uVar40 ^ uVar24;
  uVar16 = *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^ *(uint *)(PTR_t_rc_004330e4 + 0x14)
           ^ *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  uVar19 = uVar16 ^ uVar19;
  uVar28 = uVar19 ^ uVar28;
  uVar25 = uVar28 ^ uVar25;
  uVar22 = uVar25 ^ uVar22;
  uVar21 = *(uint *)(puVar14 + ((uVar22 & 0xff) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar22 >> 0x18) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar14 + ((uVar22 >> 8 & 0xff) + 0x200) * 4);
  uVar24 = uVar18 ^ uVar40 ^ uVar24 ^ uVar21;
  uVar18 = *(uint *)(puVar15 + (uVar33 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar33 & 0xff) + 0x300) * 4) ^ uVar17 ^
           *(uint *)(puVar15 + ((uVar33 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar33 >> 8 & 0xff) + 0x200) * 4);
  uVar40 = *(uint *)(puVar15 + (uVar16 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar16 & 0xff) + 0x300) * 4) ^ uVar20 ^
           *(uint *)(puVar15 + ((uVar16 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar16 >> 8 & 0xff) + 0x200) * 4);
  uVar20 = uVar20 ^ uVar38;
  uVar17 = uVar40 ^ uVar20;
  uVar35 = uVar20 ^ uVar35;
  uVar16 = uVar17 ^ uVar35;
  uVar23 = uVar35 ^ uVar23;
  uVar21 = *(uint *)(puVar15 + (uVar21 >> 0x18) * 4) ^
           *(uint *)(puVar15 + ((uVar21 & 0xff) + 0x300) * 4) ^ uVar18 ^
           *(uint *)(puVar15 + ((uVar21 >> 0x10 & 0xff) + 0x100) * 4) ^
           *(uint *)(puVar15 + ((uVar21 >> 8 & 0xff) + 0x200) * 4);
  uVar36 = uVar18 ^ uVar36;
  param_2[10] = uVar16;
  puVar13 = PTR_t_rc_004330e4;
  uVar39 = uVar36 ^ uVar39;
  uVar29 = uVar39 ^ uVar29;
  param_2[8] = uVar40;
  param_2[9] = uVar17;
  uVar17 = uVar19 ^ *(uint *)(puVar13 + 0x18) ^ *(uint *)(puVar14 + ((uVar24 & 0xff) + 0x200) * 4) ^
           *(uint *)(puVar14 + ((uVar24 >> 0x18) + 0x300) * 4) ^
           *(uint *)(puVar14 + (uVar24 >> 0xe & 0x3fc)) ^
           *(uint *)(puVar14 + ((uVar24 >> 8 & 0xff) + 0x100) * 4);
  param_2[0xd] = uVar36;
  uVar28 = uVar17 ^ uVar28;
  uVar36 = uVar21 ^ uVar36;
  param_2[0xe] = uVar39;
  uVar25 = uVar28 ^ uVar25;
  uVar39 = uVar36 ^ uVar39;
  param_2[0xf] = uVar29;
  param_2[0xb] = uVar16 ^ uVar23;
  param_2[7] = uVar39 ^ uVar29;
  param_2[0x11] = uVar20;
  param_2[0x12] = uVar35;
  param_2[0x13] = uVar23;
  param_2[0xc] = uVar18;
  param_2[4] = uVar21;
  param_2[3] = uVar25 ^ uVar22;
  param_2[0x3c] = 0;
  *(undefined1 *)(param_2 + 0x3c) = 0xe0;
  param_2[5] = uVar36;
  param_2[6] = uVar39;
  *param_2 = uVar17;
  param_2[1] = uVar28;
  param_2[2] = uVar25;
  return 0;
}


/* aes_init @ 0041a5e0 */

undefined4 aes_init(void)

{
  return 0;
}


/* FUN_0041a5f0 @ 0041a5f0 */

void FUN_0041a5f0(byte *param_1,byte *param_2,byte *param_3)

{
  *param_1 = *param_3 ^ *param_2;
  param_1[1] = param_3[1] ^ param_2[1];
  param_1[2] = param_3[2] ^ param_2[2];
  param_1[3] = param_3[3] ^ param_2[3];
  param_1[4] = param_3[4] ^ param_2[4];
  param_1[5] = param_3[5] ^ param_2[5];
  param_1[6] = param_3[6] ^ param_2[6];
  param_1[7] = param_3[7] ^ param_2[7];
  param_1[8] = param_3[8] ^ param_2[8];
  param_1[9] = param_3[9] ^ param_2[9];
  param_1[10] = param_3[10] ^ param_2[10];
  param_1[0xb] = param_3[0xb] ^ param_2[0xb];
  param_1[0xc] = param_3[0xc] ^ param_2[0xc];
  param_1[0xd] = param_3[0xd] ^ param_2[0xd];
  param_1[0xe] = param_3[0xe] ^ param_2[0xe];
  param_1[0xf] = param_3[0xf] ^ param_2[0xf];
  return;
}


/* gcm_end @ 0041a734 */

undefined4 gcm_end(undefined4 param_1)

{
  (*(code *)PTR_memset_00433190)(param_1,0,0x1158);
  return 0;
}


/* FUN_0041a768 @ 0041a768 */

undefined4 FUN_0041a768(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  char cVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  
  if (param_3 != 0) {
    uVar13 = *(uint *)(param_4 + 0x114c) & 0xf;
    puVar15 = (uint *)(param_4 + 0x1010);
    pbVar4 = (byte *)((int)puVar15 + uVar13);
    uVar12 = 0;
    if ((param_2 - (int)pbVar4 & 7U) == 0) {
      uVar14 = uVar13;
      if (uVar13 != 0) {
        while( true ) {
          pbVar11 = (byte *)(param_2 + uVar12);
          pbVar10 = (byte *)(param_1 + uVar12);
          if ((param_3 <= uVar12) || ((uVar14 & 7) == 0)) break;
          bVar3 = *pbVar4;
          uVar12 = uVar12 + 1;
          pbVar4 = pbVar4 + 1;
          *pbVar10 = bVar3 ^ *pbVar11;
          uVar14 = uVar12 + uVar13;
        }
        puVar8 = (uint *)(param_4 + 0x1010 + uVar14);
        puVar5 = (uint *)(param_1 + uVar12);
        puVar7 = (uint *)(param_2 + uVar12);
        while( true ) {
          if ((param_3 < uVar12 + 8) || (8 < uVar14)) break;
          uVar14 = uVar14 + 8;
          *puVar5 = *puVar8 ^ *puVar7;
          puVar1 = puVar8 + 1;
          puVar2 = puVar7 + 1;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 2;
          puVar5[1] = *puVar1 ^ *puVar2;
          puVar5 = puVar5 + 2;
          uVar12 = uVar12 + 8;
        }
      }
      puVar7 = (uint *)(param_2 + uVar12);
      puVar5 = (uint *)(param_1 + uVar12);
      while (iVar16 = param_4 + 0x1000, uVar13 = uVar14, uVar12 + 0x10 <= param_3) {
        do {
          if (iVar16 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar16 + 0xf) + '\x01';
          *(char *)(iVar16 + 0xf) = cVar9;
          iVar16 = iVar16 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(param_4 + 0x1000,puVar15,param_4 + 0x1050);
        *puVar5 = *puVar15 ^ *puVar7;
        puVar5[1] = *(uint *)(param_4 + 0x1014) ^ puVar7[1];
        puVar5[2] = *(uint *)(param_4 + 0x1018) ^ puVar7[2];
        puVar8 = puVar7 + 3;
        puVar7 = puVar7 + 4;
        puVar5[3] = *(uint *)(param_4 + 0x101c) ^ *puVar8;
        puVar5 = puVar5 + 4;
        uVar12 = uVar12 + 0x10;
      }
    }
    else {
      if (uVar13 != 0) {
        while( true ) {
          pbVar11 = (byte *)(param_2 + uVar12);
          pbVar10 = (byte *)(param_1 + uVar12);
          if ((param_3 <= uVar12) || (uVar13 == 0x10)) break;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + 1;
          *pbVar10 = *pbVar4 ^ *pbVar11;
          pbVar4 = pbVar4 + 1;
        }
      }
      iVar17 = param_1 + uVar12;
      iVar16 = param_2 + uVar12;
      while (iVar6 = param_4 + 0x1000, uVar12 + 0x10 <= param_3) {
        do {
          if (iVar6 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar6 + 0xf) + '\x01';
          *(char *)(iVar6 + 0xf) = cVar9;
          iVar6 = iVar6 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(param_4 + 0x1000,puVar15,param_4 + 0x1050);
        FUN_0041a5f0(iVar17,iVar16,puVar15);
        iVar17 = iVar17 + 0x10;
        iVar16 = iVar16 + 0x10;
        uVar12 = uVar12 + 0x10;
      }
    }
    pbVar4 = (byte *)(param_2 + uVar12);
    pbVar10 = (byte *)(param_1 + uVar12);
    iVar16 = param_4 + 0x1000;
    for (; uVar12 < param_3; uVar12 = uVar12 + 1) {
      iVar17 = iVar16;
      if ((uVar13 == 0x10) || (uVar13 == 0)) {
        do {
          if (iVar17 == param_4 + 0xffc) break;
          cVar9 = *(char *)(iVar17 + 0xf) + '\x01';
          *(char *)(iVar17 + 0xf) = cVar9;
          iVar17 = iVar17 + -1;
        } while (cVar9 == '\0');
        (*(code *)PTR_aes_encrypt_00433084)(iVar16,puVar15,param_4 + 0x1050);
        uVar13 = 0;
        puVar5 = puVar15;
      }
      else {
        puVar5 = (uint *)((int)puVar15 + uVar13);
      }
      uVar13 = uVar13 + 1;
      *pbVar10 = *(byte *)puVar5 ^ *pbVar4;
      pbVar4 = pbVar4 + 1;
      pbVar10 = pbVar10 + 1;
    }
    *(uint *)(param_4 + 0x114c) = *(int *)(param_4 + 0x114c) + uVar12;
  }
  return 0;
}


/* gcm_compute_tag @ 0041ab58 */

uint gcm_compute_tag(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  if ((*(int *)(param_3 + 0x1150) == *(int *)(param_3 + 0x114c)) ||
     (uVar3 = 0xffffffff, *(int *)(param_3 + 0x114c) == 0)) {
    iVar10 = param_3 + 0x1020;
    (*(code *)PTR_gf_mul_4k_0043321c)(iVar10,param_3,auStack_30);
    (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1030,param_3,auStack_30);
    if (*(int *)(param_3 + 0x1148) != 0) {
      uVar3 = *(int *)(param_3 + 0x1150) + 0xfU >> 4;
      if (uVar3 != 0) {
        (*(code *)PTR_memcpy_004332a8)(auStack_40,param_3 + 0x1040,0x10);
        while( true ) {
          uVar4 = uVar3 & 1;
          uVar3 = uVar3 >> 1;
          if (uVar4 != 0) {
            (*(code *)PTR_gf_mul_004332b8)(iVar10,auStack_40);
          }
          if (uVar3 == 0) break;
          (*(code *)PTR_gf_mul_004332b8)(auStack_40,auStack_40);
        }
      }
    }
    uVar4 = *(uint *)(param_3 + 0x1150) << 3;
    uVar3 = *(uint *)(param_3 + 0x1150) >> 0x1d;
    iVar9 = 0xf;
    do {
      pbVar5 = (byte *)(param_3 + 0x1020 + iVar9);
      uVar8 = uVar3 << 0x18;
      *pbVar5 = *pbVar5 ^ *(byte *)(param_3 + 0x1030 + iVar9) ^ (byte)uVar4;
      uVar3 = 0;
      uVar4 = uVar8 | uVar4 >> 8;
      if (iVar9 == 8) {
        uVar4 = *(uint *)(param_3 + 0x1148) << 3;
        uVar3 = *(uint *)(param_3 + 0x1148) >> 0x1d;
      }
      bVar1 = iVar9 != 0;
      iVar9 = iVar9 + -1;
    } while (bVar1);
    (*(code *)PTR_gf_mul_4k_0043321c)(iVar10,param_3,auStack_30);
    iVar10 = param_3 + 0x1010;
    (*(code *)PTR_memcpy_004332a8)(iVar10,param_3 + 0x1000,0x10);
    puVar2 = PTR_aes_encrypt_00433084;
    *(undefined4 *)(param_3 + 0x101c) = *(undefined4 *)(param_3 + 0x1144);
    (*(code *)puVar2)(iVar10,iVar10,param_3 + 0x1050);
    uVar3 = 0;
    while( true ) {
      pbVar7 = (byte *)(iVar10 + uVar3);
      pbVar6 = (byte *)(param_3 + 0x1020 + uVar3);
      pbVar5 = (byte *)(param_1 + uVar3);
      if (param_2 <= uVar3) break;
      uVar3 = uVar3 + 1;
      *pbVar5 = *pbVar7 ^ *pbVar6;
    }
    uVar3 = (uint)(*(int *)(param_3 + 0x114c) != *(int *)(param_3 + 0x1150));
  }
  return uVar3;
}


/* FUN_0041ad84 @ 0041ad84 */

undefined4 FUN_0041ad84(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_40 [16];
  undefined1 *local_30;
  uint local_2c;
  
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_3 + 0x1150) & 0xf;
    if ((*(uint *)(param_3 + 0x1150) != 0) && (uVar8 == 0)) {
      (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1030,param_3,auStack_40);
    }
    puVar9 = (uint *)(param_3 + 0x1030);
    pbVar2 = (byte *)((int)puVar9 + uVar8);
    uVar7 = 0;
    if ((param_1 - (int)pbVar2 & 7U) == 0) {
      while( true ) {
        uVar4 = uVar7 + uVar8;
        pbVar6 = (byte *)(param_1 + uVar7);
        if ((param_2 <= uVar7) || ((uVar4 & 7) == 0)) break;
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      puVar3 = (uint *)(param_3 + 0x1030 + uVar4);
      puVar5 = (uint *)(param_1 + uVar7);
      while( true ) {
        if ((param_2 < uVar7 + 8) || (8 < uVar4)) break;
        *puVar3 = *puVar3 ^ *puVar5;
        puVar1 = puVar5 + 1;
        uVar4 = uVar4 + 8;
        puVar5 = puVar5 + 2;
        puVar3[1] = puVar3[1] ^ *puVar1;
        puVar3 = puVar3 + 2;
        uVar7 = uVar7 + 8;
      }
      local_30 = auStack_40;
      puVar3 = (uint *)(param_1 + uVar7);
      while (uVar8 = uVar4, uVar7 + 0x10 <= param_2) {
        local_2c = uVar7 + 0x10;
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1030,param_3,local_30);
        *puVar9 = *puVar9 ^ *puVar3;
        *(uint *)(param_3 + 0x1034) = *(uint *)(param_3 + 0x1034) ^ puVar3[1];
        *(uint *)(param_3 + 0x1038) = *(uint *)(param_3 + 0x1038) ^ puVar3[2];
        puVar5 = puVar3 + 3;
        puVar3 = puVar3 + 4;
        *(uint *)(param_3 + 0x103c) = *(uint *)(param_3 + 0x103c) ^ *puVar5;
        uVar7 = local_2c;
      }
    }
    else {
      uVar7 = 0;
      for (; (pbVar6 = (byte *)(param_1 + uVar7), uVar7 < param_2 && (uVar8 != 0x10));
          uVar8 = uVar8 + 1) {
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      iVar10 = param_1 + uVar7;
      uVar4 = param_3 + 0x1030;
      while (uVar7 + 0x10 <= param_2) {
        local_2c = uVar4;
        (*(code *)PTR_gf_mul_4k_0043321c)(uVar4,param_3,auStack_40);
        FUN_0041a5f0(puVar9,puVar9,iVar10);
        iVar10 = iVar10 + 0x10;
        uVar4 = local_2c;
        uVar7 = uVar7 + 0x10;
      }
    }
    pbVar2 = (byte *)(param_1 + uVar7);
    for (; uVar7 < param_2; uVar7 = uVar7 + 1) {
      puVar3 = (uint *)((int)puVar9 + uVar8);
      if (uVar8 == 0x10) {
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1030,param_3,auStack_40);
        uVar8 = 0;
        puVar3 = puVar9;
      }
      uVar8 = uVar8 + 1;
      *(byte *)puVar3 = *(byte *)puVar3 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    *(uint *)(param_3 + 0x1150) = *(int *)(param_3 + 0x1150) + uVar7;
  }
  return 0;
}


/* gcm_decrypt @ 0041b084 */

undefined4 gcm_decrypt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041ad84(param_2,param_3,param_4);
  FUN_0041a768(param_1,param_2,param_3,param_4);
  return 0;
}


/* gcm_encrypt @ 0041b0e8 */

undefined4 gcm_encrypt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0041a768();
  FUN_0041ad84(param_1,param_3,param_4);
  return 0;
}


/* gcm_auth_header @ 0041b138 */

undefined4 gcm_auth_header(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 auStack_40 [16];
  undefined1 *local_30;
  uint local_2c;
  
  if (param_2 != 0) {
    uVar8 = *(uint *)(param_3 + 0x1148) & 0xf;
    if ((*(uint *)(param_3 + 0x1148) != 0) && (uVar8 == 0)) {
      (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,auStack_40);
    }
    puVar9 = (uint *)(param_3 + 0x1020);
    pbVar2 = (byte *)((int)puVar9 + uVar8);
    uVar7 = 0;
    if ((param_1 - (int)pbVar2 & 7U) == 0) {
      while( true ) {
        uVar4 = uVar7 + uVar8;
        pbVar6 = (byte *)(param_1 + uVar7);
        if ((param_2 <= uVar7) || ((uVar4 & 7) == 0)) break;
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      puVar3 = (uint *)(param_3 + 0x1020 + uVar4);
      puVar5 = (uint *)(param_1 + uVar7);
      while( true ) {
        if ((param_2 < uVar7 + 8) || (8 < uVar4)) break;
        *puVar3 = *puVar3 ^ *puVar5;
        puVar1 = puVar5 + 1;
        uVar4 = uVar4 + 8;
        puVar5 = puVar5 + 2;
        puVar3[1] = puVar3[1] ^ *puVar1;
        puVar3 = puVar3 + 2;
        uVar7 = uVar7 + 8;
      }
      local_30 = auStack_40;
      puVar3 = (uint *)(param_1 + uVar7);
      while (uVar8 = uVar4, uVar7 + 0x10 <= param_2) {
        local_2c = uVar7 + 0x10;
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,local_30);
        *puVar9 = *puVar9 ^ *puVar3;
        *(uint *)(param_3 + 0x1024) = *(uint *)(param_3 + 0x1024) ^ puVar3[1];
        *(uint *)(param_3 + 0x1028) = *(uint *)(param_3 + 0x1028) ^ puVar3[2];
        puVar5 = puVar3 + 3;
        puVar3 = puVar3 + 4;
        *(uint *)(param_3 + 0x102c) = *(uint *)(param_3 + 0x102c) ^ *puVar5;
        uVar7 = local_2c;
      }
    }
    else {
      uVar7 = 0;
      for (; (pbVar6 = (byte *)(param_1 + uVar7), uVar7 < param_2 && (uVar8 != 0x10));
          uVar8 = uVar8 + 1) {
        uVar7 = uVar7 + 1;
        *pbVar2 = *pbVar6 ^ *pbVar2;
        pbVar2 = pbVar2 + 1;
      }
      iVar10 = param_1 + uVar7;
      uVar4 = param_3 + 0x1020;
      while (uVar7 + 0x10 <= param_2) {
        local_2c = uVar4;
        (*(code *)PTR_gf_mul_4k_0043321c)(uVar4,param_3,auStack_40);
        FUN_0041a5f0(puVar9,puVar9,iVar10);
        iVar10 = iVar10 + 0x10;
        uVar4 = local_2c;
        uVar7 = uVar7 + 0x10;
      }
    }
    pbVar2 = (byte *)(param_1 + uVar7);
    for (; uVar7 < param_2; uVar7 = uVar7 + 1) {
      puVar3 = (uint *)((int)puVar9 + uVar8);
      if (uVar8 == 0x10) {
        (*(code *)PTR_gf_mul_4k_0043321c)(param_3 + 0x1020,param_3,auStack_40);
        uVar8 = 0;
        puVar3 = puVar9;
      }
      uVar8 = uVar8 + 1;
      *(byte *)puVar3 = *(byte *)puVar3 ^ *pbVar2;
      pbVar2 = pbVar2 + 1;
    }
    *(uint *)(param_3 + 0x1148) = *(int *)(param_3 + 0x1148) + uVar7;
  }
  return 0;
}


/* gcm_init_message @ 0041b438 */

undefined4 gcm_init_message(uint *param_1,uint param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined1 auStack_38 [20];
  
  puVar6 = (uint *)(param_3 + 0x1000);
  *(undefined4 *)(param_3 + 0x1000) = 0;
  *(undefined4 *)(param_3 + 0x1004) = 0;
  *(undefined4 *)(param_3 + 0x1008) = 0;
  *(undefined4 *)(param_3 + 0x100c) = 0;
  if (param_2 == 0xc) {
    (*(code *)PTR_memcpy_004332a8)(puVar6,param_1,0xc);
    *(undefined1 *)(param_3 + 0x100f) = 1;
  }
  else {
    puVar4 = param_1;
    for (uVar5 = param_2; puVar3 = PTR_gf_mul_4k_0043321c, 0xf < uVar5; uVar5 = uVar5 - 0x10) {
      *puVar6 = *puVar6 ^ *puVar4;
      *(uint *)(param_3 + 0x1004) = *(uint *)(param_3 + 0x1004) ^ puVar4[1];
      *(uint *)(param_3 + 0x1008) = *(uint *)(param_3 + 0x1008) ^ puVar4[2];
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 4;
      *(uint *)(param_3 + 0x100c) = *(uint *)(param_3 + 0x100c) ^ *puVar1;
      (*(code *)puVar3)(puVar6,param_3,auStack_38);
    }
    uVar5 = param_2 & 0xf;
    pbVar7 = (byte *)((int)param_1 + (param_2 & 0xfffffff0));
    puVar4 = puVar6;
    if (uVar5 != 0) {
      do {
        bVar2 = *pbVar7;
        uVar5 = uVar5 - 1;
        pbVar7 = pbVar7 + 1;
        *(byte *)puVar4 = bVar2 ^ *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + 1);
      } while (uVar5 != 0);
      (*(code *)PTR_gf_mul_4k_0043321c)(puVar6,param_3,auStack_38);
    }
    puVar4 = puVar6;
    for (param_2 = param_2 << 3; param_2 != 0; param_2 = param_2 >> 8) {
      *(byte *)((int)puVar4 + 0xf) = (byte)param_2 ^ *(byte *)((int)puVar4 + 0xf);
      puVar4 = (uint *)((int)puVar4 + -1);
    }
    (*(code *)PTR_gf_mul_4k_0043321c)(puVar6,param_3,auStack_38);
  }
  *(undefined4 *)(param_3 + 0x1144) = *(undefined4 *)(param_3 + 0x100c);
  *(undefined4 *)(param_3 + 0x1020) = 0;
  *(undefined4 *)(param_3 + 0x102c) = 0;
  *(undefined4 *)(param_3 + 0x1024) = 0;
  *(undefined4 *)(param_3 + 0x1028) = 0;
  *(undefined4 *)(param_3 + 0x1030) = 0;
  *(undefined4 *)(param_3 + 0x103c) = 0;
  *(undefined4 *)(param_3 + 0x1034) = 0;
  *(undefined4 *)(param_3 + 0x1038) = 0;
  *(undefined4 *)(param_3 + 0x114c) = 0;
  *(undefined4 *)(param_3 + 0x1148) = 0;
  *(undefined4 *)(param_3 + 0x1150) = 0;
  return 0;
}


/* FUN_0041b628 @ 0041b628 */

undefined4
FUN_0041b628(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  local_18 = param_4;
  gcm_init_message(param_1,param_2,param_9);
  gcm_auth_header(param_3,local_18,param_9);
  gcm_decrypt(param_5,param_5,param_6,param_9);
  iVar1 = gcm_compute_tag(auStack_28,param_8,param_9);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_memcmp_004331b0)(param_7,auStack_28,param_8);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}


/* FUN_0041b6e4 @ 0041b6e4 */

undefined4
FUN_0041b6e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  
  gcm_init_message(param_1,param_2,param_9);
  gcm_auth_header(param_3,param_4,param_9);
  gcm_encrypt(param_5,param_5,param_6,param_9);
  iVar1 = gcm_compute_tag(param_7,param_8,param_9);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  return uVar2;
}


/* gcm_init_and_key @ 0041b760 */

undefined4 gcm_init_and_key(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_aes_encrypt_key_004330e8;
  iVar2 = param_3 + 0x1040;
  *(undefined4 *)(param_3 + 0x1040) = 0;
  *(undefined4 *)(param_3 + 0x1044) = 0;
  *(undefined4 *)(param_3 + 0x1048) = 0;
  *(undefined4 *)(param_3 + 0x104c) = 0;
  (*(code *)puVar1)(param_1,param_2,param_3 + 0x1050);
  (*(code *)PTR_aes_encrypt_00433084)(iVar2,iVar2,param_3 + 0x1050);
  (*(code *)PTR_init_4k_table_00433184)(iVar2,param_3);
  return 0;
}


/* FUN_0041b800 @ 0041b800 */

void FUN_0041b800(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_1[2] = uVar2 >> 8 | param_1[1] << 0x18;
  param_1[3] = uVar2 << 0x18 | uVar3 >> 8;
  uVar1 = *(ushort *)(&DAT_00422900 + (uVar3 & 0xff) * 2);
  param_1[1] = *param_1 << 0x18 | param_1[1] >> 8;
  *param_1 = (uint)uVar1 << 0x10 ^ *param_1 >> 8;
  return;
}


/* gf_mul_4k @ 0041b874 */

void gf_mul_4k(uint *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 0xf) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 0xe) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 0xd) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)(param_1 + 3) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 0xb) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 10) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 9) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)(param_1 + 2) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 7) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 6) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 5) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)(param_1 + 1) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)(byte)*param_1 * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 2) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)((int)param_1 + 1) * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  FUN_0041b800(param_3);
  puVar1 = (uint *)(param_2 + (uint)*(byte *)param_1 * 0x10);
  *param_3 = *param_3 ^ *puVar1;
  param_3[1] = param_3[1] ^ puVar1[1];
  param_3[2] = param_3[2] ^ puVar1[2];
  param_3[3] = param_3[3] ^ puVar1[3];
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  uVar2 = param_3[2];
  param_1[3] = param_3[3];
  param_1[2] = uVar2;
  return;
}


/* gf_mul @ 0041bee4 */

void gf_mul(uint *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint local_b8 [32];
  uint *local_38;
  int local_34;
  uint *local_30;
  uint *local_2c;
  
  puVar3 = local_b8;
  local_b8[1] = param_1[1];
  local_b8[2] = param_1[2];
  local_b8[0] = *param_1;
  local_b8[3] = param_1[3];
  puVar6 = param_1 + 2;
  do {
    uVar2 = *(ushort *)(&DAT_00422900 + (puVar3[3] & 1) * 0x100);
    puVar3[6] = puVar3[1] << 0x1f | puVar3[2] >> 1;
    puVar3[7] = puVar3[2] << 0x1f | puVar3[3] >> 1;
    puVar3[4] = (uint)uVar2 << 0x10 ^ *puVar3 >> 1;
    puVar3[5] = *puVar3 << 0x1f | puVar3[1] >> 1;
    puVar3 = puVar3 + 4;
    local_30 = local_b8;
  } while (puVar3 != local_b8 + 0x1c);
  if (param_1 != param_2) {
    local_30 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_34 = 0xf;
  local_2c = local_b8 + 4;
  local_38 = local_b8 + 2;
  while( true ) {
    bVar1 = *(byte *)((int)local_30 + local_34);
    if ((char)bVar1 < '\0') {
      uVar5 = *local_38;
      *param_1 = *param_1 ^ local_b8[0];
      param_1[1] = param_1[1] ^ local_b8[1];
      uVar4 = local_38[1];
      *puVar6 = *puVar6 ^ uVar5;
      param_1[3] = param_1[3] ^ uVar4;
    }
    if ((bVar1 & 0x40) != 0) {
      uVar4 = local_2c[1];
      uVar5 = local_2c[2];
      *param_1 = *param_1 ^ *local_2c;
      param_1[1] = param_1[1] ^ uVar4;
      uVar4 = local_2c[3];
      *puVar6 = *puVar6 ^ uVar5;
      param_1[3] = param_1[3] ^ uVar4;
    }
    if ((bVar1 & 0x20) != 0) {
      *param_1 = *param_1 ^ local_b8[8];
      param_1[1] = param_1[1] ^ local_b8[9];
      *puVar6 = *puVar6 ^ local_b8[10];
      param_1[3] = param_1[3] ^ local_b8[0xb];
    }
    if ((bVar1 & 0x10) != 0) {
      *param_1 = *param_1 ^ local_b8[0xc];
      param_1[1] = param_1[1] ^ local_b8[0xd];
      *puVar6 = *puVar6 ^ local_b8[0xe];
      param_1[3] = param_1[3] ^ local_b8[0xf];
    }
    if ((bVar1 & 8) != 0) {
      *param_1 = *param_1 ^ local_b8[0x10];
      param_1[1] = param_1[1] ^ local_b8[0x11];
      *puVar6 = *puVar6 ^ local_b8[0x12];
      param_1[3] = param_1[3] ^ local_b8[0x13];
    }
    if ((bVar1 & 4) != 0) {
      *param_1 = *param_1 ^ local_b8[0x14];
      param_1[1] = param_1[1] ^ local_b8[0x15];
      *puVar6 = *puVar6 ^ local_b8[0x16];
      param_1[3] = param_1[3] ^ local_b8[0x17];
    }
    if ((bVar1 & 2) != 0) {
      *param_1 = *param_1 ^ local_b8[0x18];
      param_1[1] = param_1[1] ^ local_b8[0x19];
      *puVar6 = *puVar6 ^ local_b8[0x1a];
      param_1[3] = param_1[3] ^ local_b8[0x1b];
    }
    if ((bVar1 & 1) != 0) {
      *param_1 = *param_1 ^ local_b8[0x1c];
      param_1[1] = param_1[1] ^ local_b8[0x1d];
      *puVar6 = *puVar6 ^ local_b8[0x1e];
      param_1[3] = param_1[3] ^ local_b8[0x1f];
    }
    if (local_34 == 0) break;
    FUN_0041b800(param_1);
    local_34 = local_34 + -1;
  }
  return;
}


/* init_4k_table @ 0041c2c8 */

void init_4k_table(undefined4 param_1,uint *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  
  puVar2 = PTR_memcpy_004332a8;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  (*(code *)puVar2)(param_2 + 0x200,param_1,0x10);
  iVar6 = 0;
  iVar3 = 0x40;
  do {
    puVar4 = param_2 + iVar3 * 8;
    uVar8 = puVar4[2];
    uVar10 = puVar4[3];
    puVar5 = param_2 + iVar3 * 4;
    puVar5[2] = uVar8 >> 1 | puVar4[1] << 0x1f;
    puVar5[3] = uVar8 << 0x1f | uVar10 >> 1;
    uVar8 = *puVar4;
    uVar1 = *(ushort *)(&DAT_00422900 + (uVar10 & 1) * 0x100);
    iVar6 = iVar6 + 1;
    puVar5[1] = uVar8 << 0x1f | puVar4[1] >> 1;
    *puVar5 = (uint)uVar1 << 0x10 ^ uVar8 >> 1;
    iVar3 = iVar3 >> 1;
  } while (iVar6 != 7);
  iVar3 = 2;
  do {
    puVar9 = param_2 + iVar3 * 4;
    puVar7 = param_2 + (iVar3 + 1) * 4;
    puVar5 = param_2 + (iVar3 + 1) * 4 + 2;
    puVar4 = param_2;
    for (iVar6 = 1; iVar6 < iVar3; iVar6 = iVar6 + 1) {
      *puVar7 = *puVar9 ^ puVar4[4];
      puVar7[1] = puVar9[1] ^ puVar4[5];
      puVar7 = puVar7 + 4;
      *puVar5 = puVar9[2] ^ puVar4[6];
      puVar5[1] = puVar9[3] ^ puVar4[7];
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
    }
    iVar3 = iVar3 << 1;
  } while (iVar3 < 0x100);
  return;
}


/* FUN_0041c460 @ 0041c460 */

void FUN_0041c460(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_00433058 + 0x3000);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 0041c930 */

void _fini(void)

{
  FUN_00401db0();
  return;
}


