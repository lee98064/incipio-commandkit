/* FUN_004457b8 @ 004457b8 */

void FUN_004457b8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_200;
  undefined4 local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  int local_1e8;
  uint local_1e4;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 auStack_1c8 [20];
  uint local_1b4 [11];
  uint local_188 [11];
  undefined1 auStack_15c [100];
  uint local_f8 [50];
  uint local_30;
  
  local_1fc = 0xffffffff;
  local_200 = 0;
  local_1d4 = 0;
  local_1d0 = 0;
  local_1cc = 0;
  local_1dc = 0;
  (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_f8);
  local_1f8 = local_f8[0];
  (*(code *)PTR_apmib_get_0046aadc)(0xab,local_f8);
  local_1f0 = local_f8[0];
  iVar5 = FUN_004422d8(param_1,auStack_15c);
  if ((-1 < iVar5) && (iVar5 = FUN_00441ffc(param_1,auStack_15c,1), -1 < iVar5)) {
    iVar5 = (*(code *)PTR_tcpipLanHandler_0046aaec)(param_1,auStack_15c);
    if (iVar5 < 0) {
      pcVar7 = "submit-url-lan";
    }
    else {
      iVar5 = (*(code *)PTR_tcpipWanHandler_0046abc8)(param_1,auStack_15c,&local_200);
      puVar4 = PTR_wlan_idx_0046a93c;
      puVar2 = PTR_wlan_num_0046a8f0;
      if (iVar5 < 0) {
        pcVar7 = "submit-url-wan";
      }
      else {
        iVar5 = 0;
        while( true ) {
          puVar3 = PTR_WLAN_IF_0046a890;
          puVar1 = PTR_sprintf_0046a808;
          if (*(int *)puVar2 <= iVar5) {
            FUN_00444434();
            (*(code *)PTR_apmib_get_0046aadc)(0xaa,local_f8);
            local_1f4 = local_f8[0];
            (*(code *)PTR_apmib_get_0046aadc)(0xab,local_f8);
            local_1ec = local_f8[0];
            if ((local_1f0 & local_1f8) != (local_f8[0] & local_1f4)) {
              (*(code *)PTR_apmib_get_0046aadc)(0x125,&local_1e8);
              puVar2 = PTR_pMib_0046ac00;
              iVar5 = 1;
              while (iVar5 <= local_1e8) {
                (*(code *)PTR_memset_0046a87c)(local_188,0,0x2a);
                local_1b4[0] = CONCAT13((char)iVar5,local_1b4[0]._1_3_);
                iVar5 = iVar5 + 1;
                (*(code *)PTR_apmib_get_0046aadc)(0x8126,local_1b4);
                (*(code *)PTR_memcpy_0046ab5c)(local_188,local_1b4,0x2a);
                if (((local_1b4[0] ^ local_1f4) & local_1ec) != 0) {
                  local_188[0] = ~local_1ec & local_1b4[0] | local_1ec & local_1f4;
                  local_1d8 = 0;
                  local_30 = local_188[0];
                  (*(code *)PTR_mib_search_by_id_0046a964)
                            (PTR_mib_root_table_0046ac1c,0x8126,&local_1d4,&local_1dc,&local_1d8);
                  (*(code *)PTR_update_tblentry_0046aa78)
                            (*(undefined4 *)puVar2,local_1d8,local_1e8,local_1dc,local_1b4,local_188
                            );
                }
              }
              (*(code *)PTR_apmib_get_0046aadc)(0xae,local_f8);
              local_1e4 = local_f8[0];
              (*(code *)PTR_apmib_get_0046aadc)(0xaf,local_f8);
              local_1e0 = local_f8[0];
              if (((local_1f4 ^ local_1e4) & local_1ec) != 0) {
                local_1e4 = ~local_1ec & local_1e4 | local_1ec & local_1f4;
                (*(code *)PTR_apmib_set_0046aa28)(0xae,&local_1e4);
              }
              if (((local_1f4 ^ local_1e0) & local_1ec) != 0) {
                local_1e0 = ~local_1ec & local_1e0 | local_1ec & local_1f4;
                (*(code *)PTR_apmib_set_0046aa28)(0xaf,&local_1e0);
              }
              FUN_00444434();
            }
            puVar2 = PTR_run_init_script_0046a844;
            *(undefined4 *)PTR_run_init_script_flag_0046a7e0 = 1;
            (*(code *)puVar2)(&DAT_0044d9f4);
            (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"next_url",&DAT_0044b32c);
            (*(code *)PTR_strcpy_0046ac60)(PTR_lastUrl_0046ac3c,"/wizard.htm");
            (*(code *)PTR_strcpy_0046ac60)
                      (PTR_okMsg_0046ab58,"<h4>Change setting successfully!<BR>");
            puVar2 = PTR_send_redirect_perm_0046ac78;
            *(undefined4 *)PTR_countDownTime_0046a6fc = 0x14;
            (*(code *)puVar2)(param_1,"/countDownPage.htm");
            return;
          }
          *(int *)puVar4 = iVar5;
          (*(code *)puVar1)(puVar3,"wlan%d",iVar5);
          iVar6 = (*(code *)PTR_wlanHandler_0046a8ac)(param_1,auStack_15c,&local_1fc,iVar5);
          if (iVar6 < 0) break;
          (*(code *)PTR_sprintf_0046a808)(auStack_1c8,"method%d",iVar5);
          pcVar7 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_1c8,&DAT_0044b32c);
          if ((*pcVar7 == '1') &&
             (iVar6 = (*(code *)PTR_wepHandler_0046a878)(param_1,auStack_15c,iVar5), iVar6 < 0)) {
            pcVar7 = "submit-url-wlan2";
            goto LAB_004459e0;
          }
          iVar6 = (*(code *)PTR_wpaHandler_0046a8e8)(param_1,auStack_15c,iVar5);
          if (iVar6 < 0) {
            pcVar7 = "submit-url-wlan2";
            goto LAB_004459e0;
          }
          (*(code *)PTR_addWlProfileHandler_0046aabc)(param_1,auStack_15c,iVar5);
          iVar5 = iVar5 + 1;
        }
        pcVar7 = "submit-url-wlan1";
      }
    }
LAB_004459e0:
    (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,pcVar7,&DAT_0044b32c);
  }
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,"<html><body><blockquote><h4>%s</h4>\n",auStack_15c);
  (*(code *)PTR_req_format_write_0046a95c)
            (param_1,
             "<form><input type=button value=\"  OK  \" OnClick=window.location.replace(\"%s\")></form></blockquote></body></html>"
             ,"/wizard.htm");
  return;
}

