/* FUN_00415794 @ 00415794 */

int FUN_00415794(int *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  char *pcVar20;
  code *pcVar21;
  byte bVar22;
  code *pcVar23;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  char local_57;
  char local_56;
  byte *local_50;
  byte *local_4c;
  byte *local_48;
  byte *local_44;
  int local_40;
  uint local_3c;
  byte *local_38;
  int local_34;
  code *local_30;
  
  local_60 = (*(code *)PTR_time_0057de7c)(0);
  (*(code *)PTR_RAND_add_0057dd38)(&local_60,4,0,0);
  (*(code *)PTR_ERR_clear_error_0057e27c)();
  puVar4 = (undefined4 *)(*(code *)PTR___errno_location_0057e8d8)();
  *puVar4 = 0;
  pcVar21 = (code *)param_1[0x34];
  if (pcVar21 == (code *)0x0) {
    pcVar21 = *(code **)(param_1[0x39] + 0x9c);
  }
  param_1[7] = param_1[7] + 1;
  uVar5 = (*(code *)PTR_SSL_state_0057e4a4)(param_1);
  if (((uVar5 & 0x3000) == 0) ||
     (uVar5 = (*(code *)PTR_SSL_state_0057e4a4)(param_1), (uVar5 & 0x4000) != 0)) {
    (*(code *)PTR_SSL_clear_0057d9d4)(param_1);
  }
  do {
    iVar19 = param_1[0xd];
    if (iVar19 < 0x1212) {
      if (iVar19 < 0x1210) {
        if ((iVar19 != 0x1000) && (iVar19 != 0x1003)) goto LAB_0041688c;
        goto LAB_00415930;
      }
      param_1[0xc] = 0;
      bVar22 = (*(byte *)(param_1 + 0x40) ^ 1) & 1;
      if (bVar22 != 0) {
        uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d34c)(param_1);
        for (iVar17 = 0; iVar6 = (*(code *)PTR_sk_num_0057db30)(uVar7), iVar17 < iVar6;
            iVar17 = iVar17 + 1) {
          iVar6 = (*(code *)PTR_sk_value_0057e5d4)(uVar7,iVar17);
          if (*(int *)(iVar6 + 0x1c) == 1) goto LAB_00415abc;
        }
        bVar22 = 0;
      }
LAB_00415abc:
      uVar5 = param_1[0x40];
      if ((uVar5 & 0x4000000) == 0) {
        iVar6 = 0x301;
LAB_00415afc:
        if (param_1[0x48] != 0) {
          bVar22 = 0;
        }
        if (param_1[0x4a] != -1) {
          bVar22 = 0;
        }
      }
      else {
        if ((uVar5 & 0x2000000) == 0) {
          iVar6 = 0x300;
          goto LAB_00415afc;
        }
        iVar6 = 2;
        if ((uVar5 & 0x1000000) != 0) {
          iVar6 = 0;
          goto LAB_00415afc;
        }
      }
      pbVar18 = *(byte **)(param_1[0xf] + 4);
      if (param_1[0xd] == 0x1210) {
        local_50 = (byte *)param_1[0x16];
        uVar7 = (*(code *)PTR_time_0057de7c)(0);
        local_50[0xc0] = (byte)((uint)uVar7 >> 0x18);
        local_50[0xc1] = (byte)((uint)uVar7 >> 0x10);
        local_50[0xc2] = (byte)((uint)uVar7 >> 8);
        local_50[0xc3] = (byte)uVar7;
        iVar17 = (*(code *)PTR_RAND_pseudo_bytes_0057d8a8)(local_50 + 0xc4,0x1c);
        if (iVar17 < 1) {
LAB_0041691c:
          iVar17 = -1;
          goto LAB_00416920;
        }
        if (iVar6 == 0x301) {
          iVar17 = 1;
          bVar10 = 3;
        }
        else {
          iVar17 = 0;
          if (iVar6 == 0x300) {
            bVar10 = 3;
          }
          else {
            iVar17 = 2;
            bVar10 = 0;
            if (iVar6 != 2) {
              (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0xbf,"s23_clnt.c",0x154);
              iVar17 = -1;
              goto LAB_00416920;
            }
          }
        }
        param_1[0x44] = iVar6;
        local_50 = pbVar18;
        if (bVar22 == 0) {
          local_38 = pbVar18 + 9;
          local_3c = (uint)bVar10;
          *local_38 = bVar10;
          pbVar18[10] = (byte)iVar17;
          iVar8 = param_1[0x16];
          uVar16 = *(undefined4 *)(iVar8 + 0xc4);
          uVar15 = *(undefined4 *)(iVar8 + 200);
          uVar14 = *(undefined4 *)(iVar8 + 0xcc);
          uVar13 = *(undefined4 *)(iVar8 + 0xd0);
          uVar12 = *(undefined4 *)(iVar8 + 0xd4);
          uVar11 = *(undefined4 *)(iVar8 + 0xd8);
          uVar7 = *(undefined4 *)(iVar8 + 0xdc);
          *(undefined4 *)(pbVar18 + 0xb) = *(undefined4 *)(iVar8 + 0xc0);
          *(undefined4 *)(pbVar18 + 0xf) = uVar16;
          *(undefined4 *)(pbVar18 + 0x13) = uVar15;
          *(undefined4 *)(pbVar18 + 0x17) = uVar14;
          *(undefined4 *)(pbVar18 + 0x1b) = uVar13;
          *(undefined4 *)(pbVar18 + 0x1f) = uVar12;
          *(undefined4 *)(pbVar18 + 0x23) = uVar11;
          *(undefined4 *)(pbVar18 + 0x27) = uVar7;
          pbVar18[0x2b] = 0;
          local_40 = iVar17;
          uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d34c)(param_1);
          local_4c = local_50 + 0x2e;
          iVar17 = (*(code *)PTR_ssl_cipher_list_to_bytes_0057dd90)
                             (param_1,uVar7,local_4c,PTR_ssl3_put_cipher_by_char_0057dd6c);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0xb5,"s23_clnt.c",0x1b1);
            iVar17 = -1;
            goto LAB_00416920;
          }
          pbVar18[0x2c] = (byte)((uint)iVar17 >> 8);
          pbVar18[0x2d] = (byte)iVar17;
          local_48 = local_4c + iVar17;
          if (((param_1[0x40] & 0x20000U) == 0) && (*(int *)(param_1[0x39] + 0x98) != 0)) {
            pbVar9 = (byte *)(*(code *)PTR_sk_num_0057db30)();
            pbVar18 = local_48;
            *local_48 = (char)pbVar9 + 1;
            local_4c = local_48 + 1;
            local_44 = pbVar9;
            if (0 < (int)pbVar9) {
              iVar17 = 0;
              local_34 = iVar19;
              local_30 = pcVar21;
              do {
                puVar4 = (undefined4 *)
                         (*(code *)PTR_sk_value_0057e5d4)
                                   (*(undefined4 *)(param_1[0x39] + 0x98),iVar17);
                pbVar18[iVar17 + 1] = (byte)*puVar4;
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)pbVar9);
              local_4c = local_4c + (int)local_44;
              iVar19 = local_34;
              pcVar21 = local_30;
            }
          }
          else {
            *local_48 = 1;
            local_4c = local_48 + 1;
          }
          *local_4c = 0;
          iVar17 = (*(code *)PTR_ssl_prepare_clienthello_tlsext_0057e7c8)(param_1);
          if (iVar17 < 1) {
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0xe2,"s23_clnt.c",0x1cb);
            iVar17 = -1;
            goto LAB_00416920;
          }
          iVar17 = (*(code *)PTR_ssl_add_clienthello_tlsext_0057d3f0)
                             (param_1,local_4c + 1,local_50 + 0x4000);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0x44,"s23_clnt.c",0x1d3);
            iVar17 = -1;
            goto LAB_00416920;
          }
          iVar8 = iVar17 - (int)local_38;
          local_50[5] = 1;
          local_50[6] = (byte)((uint)iVar8 >> 0x10);
          local_50[7] = (byte)((uint)iVar8 >> 8);
          local_50[8] = (byte)iVar8;
          uVar5 = iVar8 + 4;
          if (0x4000 < uVar5) {
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0x44,"s23_clnt.c",0x1e2);
            iVar17 = -1;
            goto LAB_00416920;
          }
          *local_50 = 0x16;
          local_50[1] = (byte)local_3c;
          local_50[2] = (byte)local_40;
          local_50[3] = (byte)(uVar5 >> 8);
          local_50[4] = (byte)uVar5;
          param_1[0x11] = iVar17 - (int)local_50;
          param_1[0x12] = 0;
          (*(code *)PTR_ssl3_finish_mac_0057d914)
                    (param_1,local_50 + 5,(iVar17 - (int)local_50) + -5);
        }
        else {
          local_48 = pbVar18 + 2;
          local_44 = pbVar18 + 0xb;
          *local_48 = 1;
          pbVar18[3] = bVar10;
          local_4c = pbVar18 + 4;
          *local_4c = (byte)iVar17;
          uVar7 = (*(code *)PTR_SSL_get_ciphers_0057d34c)(param_1);
          iVar17 = (*(code *)PTR_ssl_cipher_list_to_bytes_0057dd90)(param_1,uVar7,local_44,0);
          if (iVar17 == 0) {
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x74,0xb5,"s23_clnt.c",0x16a);
            iVar17 = -1;
            goto LAB_00416920;
          }
          local_4c[1] = (byte)((uint)iVar17 >> 8);
          local_4c[2] = (byte)iVar17;
          local_4c[3] = 0;
          local_4c[4] = 0;
          pbVar18 = (byte *)0x20;
          if ((param_1[0x40] & 2U) != 0) {
            pbVar18 = (byte *)0x10;
          }
          local_4c[5] = 0;
          local_4c[6] = (byte)pbVar18;
          iVar8 = param_1[0x16];
          *(undefined4 *)(iVar8 + 0xc0) = 0;
          *(undefined4 *)(iVar8 + 0xc4) = 0;
          *(undefined4 *)(iVar8 + 200) = 0;
          *(undefined4 *)(iVar8 + 0xcc) = 0;
          *(undefined4 *)(iVar8 + 0xd0) = 0;
          *(undefined4 *)(iVar8 + 0xd4) = 0;
          *(undefined4 *)(iVar8 + 0xd8) = 0;
          *(undefined4 *)(iVar8 + 0xdc) = 0;
          local_40 = -(int)pbVar18 + 0x20;
          local_4c = pbVar18;
          iVar8 = (*(code *)PTR_RAND_pseudo_bytes_0057d8a8)
                            (param_1[0x16] + -(int)pbVar18 + 0xe0,pbVar18);
          if (iVar8 < 1) goto LAB_0041691c;
          pbVar18 = local_44 + iVar17;
          (*(code *)PTR_memcpy_0057e7cc)(pbVar18,param_1[0x16] + 0xc0 + local_40,local_4c);
          iVar17 = (int)(pbVar18 + (int)local_4c) - (int)local_48;
          *local_50 = (byte)((uint)iVar17 >> 8) | 0x80;
          local_50[1] = (byte)iVar17;
          param_1[0x11] = iVar17 + 2;
          param_1[0x12] = 0;
          (*(code *)PTR_ssl3_finish_mac_0057d914)(param_1,local_48);
        }
        param_1[0xd] = 0x1211;
        param_1[0x12] = 0;
      }
      iVar17 = (*(code *)PTR_ssl23_write_bytes_0057d484)(param_1);
      if ((1 < iVar17) && (pcVar23 = (code *)param_1[0x19], pcVar23 != (code *)0x0)) {
        if (bVar22 == 0) {
          (*pcVar23)(1,iVar6,0x16,*(int *)(param_1[0xf] + 4) + 5,iVar17 + -5,param_1,param_1[0x1a]);
        }
        else {
          (*pcVar23)(1,2,0,*(int *)(param_1[0xf] + 4) + 2,iVar17 + -2,param_1,param_1[0x1a]);
        }
      }
      if (iVar17 < 1) goto LAB_00416920;
      param_1[0xd] = 0x1220;
      param_1[0x11] = 0;
    }
    else {
      if (iVar19 != 0x4000) {
        if (iVar19 < 0x4001) {
          if (1 < iVar19 - 0x1220U) goto LAB_0041688c;
          iVar17 = (*(code *)PTR_ssl23_read_bytes_0057d1a4)(param_1,7);
          puVar3 = PTR_TLSv1_client_method_0057e8d0;
          puVar2 = PTR_SSLv3_client_method_0057e0fc;
          if (iVar17 == 7) {
            pcVar20 = (char *)param_1[0x13];
            local_5c = *(undefined4 *)pcVar20;
            local_58 = pcVar20[4];
            local_57 = pcVar20[5];
            local_56 = pcVar20[6];
            cVar1 = *pcVar20;
            if ((((cVar1 < '\0') && (pcVar20[2] == '\x04')) && (pcVar20[5] == '\0')) &&
               (pcVar20[6] == '\x02')) {
              if ((param_1[0x40] & 0x1000000U) != 0) {
                (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x77,0x102,"s23_clnt.c",0x228);
                iVar17 = -1;
                goto LAB_00416920;
              }
              if (param_1[0x15] == 0) {
                iVar19 = (*(code *)PTR_ssl2_new_0057dfbc)(param_1);
                iVar17 = -1;
                if (iVar19 == 0) goto LAB_00416920;
              }
              else {
                (*(code *)PTR_ssl2_clear_0057e734)(param_1);
              }
              iVar19 = 0x20;
              if ((param_1[0x40] & 2U) != 0) {
                iVar19 = 0x10;
              }
              *(int *)(param_1[0x15] + 100) = iVar19;
              (*(code *)PTR_memcpy_0057e7cc)(param_1[0x15] + 0x68,(param_1[0x16] - iVar19) + 0xe0);
              if (param_1[0x16] != 0) {
                (*(code *)PTR_ssl3_free_0057e1e8)(param_1);
              }
              iVar19 = (*(code *)PTR_BUF_MEM_grow_clean_0057da98)(param_1[0xf],0x3fff);
              if (iVar19 != 0) {
                param_1[0xd] = 0x1020;
                if (param_1[0x44] != 2) {
                  *(undefined4 *)(param_1[0x15] + 0xc) = 1;
                }
                param_1[0xe] = 0xf0;
                param_1[0x14] = 7;
                puVar4 = *(undefined4 **)(param_1[0x15] + 0x30);
                param_1[0x13] = (int)puVar4;
                *puVar4 = local_5c;
                *(char *)(puVar4 + 1) = local_58;
                *(char *)((int)puVar4 + 5) = local_57;
                *(char *)((int)puVar4 + 6) = local_56;
                *(undefined4 *)(param_1[0x15] + 0x28) = 7;
                *(undefined4 *)(param_1[0x15] + 0x2c) = 0;
                puVar2 = PTR_SSLv2_client_method_0057e45c;
                *(undefined4 *)(param_1[0x15] + 0xd4) = 1;
                iVar19 = (*(code *)puVar2)();
                param_1[2] = iVar19;
                param_1[8] = *(int *)(iVar19 + 0x14);
LAB_00416848:
                param_1[0x11] = 0;
                iVar19 = (*(code *)PTR_ssl_get_new_session_0057e3b4)(param_1,0);
                if (iVar19 != 0) {
                  iVar17 = (*(code *)PTR_SSL_connect_0057ea48)(param_1);
                  goto LAB_00416884;
                }
                goto LAB_0041691c;
              }
              (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x77,7,"s23_clnt.c",0x247);
              iVar17 = -1;
              goto LAB_00416920;
            }
            if ((pcVar20[1] == '\x03') && (bVar22 = pcVar20[2], bVar22 < 2)) {
              if (cVar1 == '\x16') {
                cVar1 = pcVar20[5];
              }
              else {
                if ((cVar1 != '\x15') || (pcVar20[3] != '\0')) goto LAB_0041681c;
                cVar1 = pcVar20[4];
              }
              if (cVar1 == '\x02') {
                if ((bVar22 == 0) && ((param_1[0x40] & 0x2000000U) == 0)) {
                  *param_1 = 0x300;
                  iVar19 = (*(code *)puVar2)();
                  param_1[2] = iVar19;
                }
                else {
                  if ((bVar22 != 1) || ((param_1[0x40] & 0x4000000U) != 0)) {
                    (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x77,0x102,"s23_clnt.c",0x273);
                    iVar17 = -1;
                    goto LAB_00416920;
                  }
                  *param_1 = 0x301;
                  iVar19 = (*(code *)puVar3)();
                  param_1[2] = iVar19;
                }
                if (0x301 < *param_1) {
                  (*(code *)PTR_OpenSSLDie_0057e328)
                            ("s23_clnt.c",0x278,"s->version <= TLS_MAX_VERSION");
                }
                if ((*pcVar20 != '\x15') || (cVar1 = pcVar20[5], cVar1 == '\x01')) {
                  iVar19 = (*(code *)PTR_ssl_init_wbio_buffer_0057da8c)(param_1,1);
                  if (iVar19 != 0) {
                    param_1[0xd] = 0x1120;
                    param_1[0xe] = 0xf0;
                    param_1[0x14] = 7;
                    if ((*(int *)(param_1[0x16] + 0xec) != 0) ||
                       (iVar19 = (*(code *)PTR_ssl3_setup_read_buffer_0057d290)(param_1),
                       iVar19 != 0)) {
                      puVar4 = *(undefined4 **)(param_1[0x16] + 0xec);
                      param_1[0x13] = (int)puVar4;
                      *puVar4 = local_5c;
                      *(char *)(puVar4 + 1) = local_58;
                      *(char *)((int)puVar4 + 5) = local_57;
                      *(char *)((int)puVar4 + 6) = local_56;
                      *(undefined4 *)(param_1[0x16] + 0xf8) = 7;
                      *(undefined4 *)(param_1[0x16] + 0xf4) = 0;
                      param_1[8] = *(int *)(param_1[2] + 0x14);
                      goto LAB_00416848;
                    }
                  }
                  goto LAB_0041691c;
                }
                pcVar23 = (code *)param_1[0x34];
                if ((pcVar23 != (code *)0x0) ||
                   (pcVar23 = *(code **)(param_1[0x39] + 0x9c), pcVar23 != (code *)0x0)) {
                  (*pcVar23)(param_1,0x4004,CONCAT11(cVar1,pcVar20[6]));
                }
                if ((code *)param_1[0x19] != (code *)0x0) {
                  (*(code *)param_1[0x19])(0,*param_1,0x15,pcVar20 + 5,2,param_1,param_1[0x1a]);
                }
                param_1[6] = 1;
                (*(code *)PTR_ERR_put_error_0057d28c)
                          (0x14,0x77,(byte)pcVar20[6] + 1000,"s23_clnt.c",0x290);
                iVar17 = -1;
                goto LAB_00416920;
              }
            }
LAB_0041681c:
            (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x77,0xfc,"s23_clnt.c",0x2a9);
            iVar17 = -1;
            goto LAB_00416920;
          }
LAB_00416884:
          if (-1 < iVar17) {
            pcVar21 = (code *)0x0;
          }
LAB_00416920:
          param_1[7] = param_1[7] + -1;
LAB_00416930:
          if (pcVar21 != (code *)0x0) {
            (*pcVar21)(param_1,0x1002,iVar17);
          }
          return iVar17;
        }
        if (iVar19 != 0x5000) {
LAB_0041688c:
          (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x75,0xff,"s23_clnt.c",0xe7);
          iVar17 = -1;
          goto LAB_00416920;
        }
      }
LAB_00415930:
      if (param_1[0x30] != 0) {
        (*(code *)PTR_ERR_put_error_0057d28c)(0x14,0x75,0xdd,"s23_clnt.c",0xae);
        iVar17 = -1;
        goto LAB_00416920;
      }
      param_1[9] = 0;
      if (pcVar21 != (code *)0x0) {
        (*pcVar21)(param_1,0x10,1);
      }
      param_1[1] = 0x1000;
      if (param_1[0xf] == 0) {
        iVar17 = (*(code *)PTR_BUF_MEM_new_0057e2f4)();
        if (iVar17 == 0) goto LAB_0041691c;
        iVar6 = (*(code *)PTR_BUF_MEM_grow_0057e0f4)(iVar17,0x4000);
        if (iVar6 == 0) {
          param_1[7] = param_1[7] + -1;
          (*(code *)PTR_BUF_MEM_free_0057d8a4)(iVar17);
          iVar17 = -1;
          goto LAB_00416930;
        }
        param_1[0xf] = iVar17;
      }
      iVar6 = (*(code *)PTR_ssl3_setup_buffers_0057db04)(param_1);
      iVar17 = -1;
      if (iVar6 == 0) goto LAB_00416920;
      (*(code *)PTR_ssl3_init_finished_mac_0057e36c)(param_1);
      param_1[0xd] = 0x1210;
      *(int *)(param_1[0x39] + 0x34) = *(int *)(param_1[0x39] + 0x34) + 1;
      param_1[0x11] = 0;
    }
    if (param_1[0x3a] != 0) {
      (*(code *)PTR_BIO_ctrl_0057e8cc)(param_1[4],0xb,0,0);
    }
    if ((pcVar21 != (code *)0x0) && (iVar17 = param_1[0xd], iVar17 != iVar19)) {
      param_1[0xd] = iVar19;
      (*pcVar21)(param_1,0x1001,1);
      param_1[0xd] = iVar17;
    }
  } while( true );
}

