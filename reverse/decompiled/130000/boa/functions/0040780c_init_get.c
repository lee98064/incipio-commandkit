/* init_get @ 0040780c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

uint init_get(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  code *pcVar14;
  uint local_3180;
  undefined4 local_317c;
  undefined4 local_3178;
  undefined4 local_3174;
  undefined4 local_3170;
  int local_316c [7];
  undefined1 auStack_3150 [20];
  uint local_313c;
  undefined4 local_311c;
  undefined4 local_310c;
  char acStack_30b8 [12416];
  int *local_38;
  uint local_34;
  undefined1 *local_30;
  
  (*(code *)PTR_memcpy_0046ab5c)(local_316c,&DAT_0044a230,0x18);
  puVar3 = param_1 + 0x235;
  iVar1 = (*(code *)PTR_strstr_0046a940)(puVar3,"formWlanRedirect");
  iVar10 = (int)local_316c + (-0x1c - (local_316c[1] + 0xeU & 0xfffffff8));
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_strstr_0046a940)((int)param_1 + 0x10d5,"redirect-url=");
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_0046a940)(iVar1 + 0xd,"&wlan_id=");
      puVar9 = PTR_strstr_0046a940;
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 0;
        local_30 = puVar2 + 9;
        puVar2 = (undefined1 *)(*(code *)puVar9)(puVar2 + 9," HTTP");
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
          (*(code *)PTR_formWlanRedirect2_0046a6ac)(param_1,iVar1 + 0xd,local_30);
          return 0;
        }
      }
    }
  }
  iVar1 = (*(code *)PTR_strstr_0046a940)(puVar3,".mtddump");
  if (iVar1 == 0) {
    pcVar8 = (char *)param_1[7];
  }
  else {
    (*(code *)PTR_system_0046ab18)("rm /var/mtdfw.fw");
    iVar1 = (*(code *)PTR_open_0046a710)("/var/mtdfw.fw",0x501,0x1a4);
    piVar13 = local_316c;
    if (iVar1 == -1) {
      uVar11 = *(undefined4 *)PTR_stderr_0046a7f0;
      puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
      uVar4 = (*(code *)PTR_strerror_0046ac04)(*puVar3);
      puVar9 = &DAT_0044a0e8;
LAB_00407ba0:
      (*(code *)PTR_fprintf_0046a9ec)(uVar11,puVar9,uVar4);
      return 0;
    }
    puVar12 = (undefined4 *)0x0;
    do {
      local_317c = 0;
      local_3178 = 0;
      local_3174 = 0;
      local_3170 = 0;
      (*(code *)PTR_memset_0046a87c)(iVar10,0,local_316c[1]);
      (*(code *)PTR_sprintf_0046a808)(&local_317c,"/dev/mtdblock%d",puVar12);
      iVar5 = (*(code *)PTR_open_0046a710)(&local_317c,0x80);
      if (iVar5 == -1) {
        uVar11 = *(undefined4 *)PTR_stderr_0046a7f0;
        puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
        uVar4 = (*(code *)PTR_strerror_0046ac04)(*puVar3);
        puVar9 = &DAT_0044a10c;
        puVar12 = &local_317c;
LAB_00407b30:
        (*(code *)PTR_fprintf_0046a9ec)(uVar11,puVar9,puVar12,uVar4);
        return 0;
      }
      (*(code *)PTR_lseek_0046aa9c)(iVar5,0,0);
      local_30 = (undefined1 *)*piVar13;
      iVar6 = (*(code *)PTR_read_0046a934)(iVar5,iVar10,local_30);
      if (iVar6 < 0) {
        uVar11 = *(undefined4 *)PTR_stderr_0046a7f0;
        puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
        uVar4 = (*(code *)PTR_strerror_0046ac04)(*puVar3);
        puVar9 = &DAT_0044a120;
        goto LAB_00407b30;
      }
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      iVar6 = (*(code *)PTR_write_0046a9fc)(iVar1,iVar10,local_30);
      if (iVar6 < 0) {
        uVar11 = *(undefined4 *)PTR_stderr_0046a7f0;
        puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
        uVar4 = (*(code *)PTR_strerror_0046ac04)(*puVar3);
        puVar9 = &DAT_0044a134;
        goto LAB_00407ba0;
      }
      piVar13 = piVar13 + 1;
      (*(code *)PTR_close_0046a694)(iVar5);
    } while (puVar12 != (undefined4 *)0x6);
    (*(code *)PTR_close_0046a694)(iVar1);
    pcVar8 = "/var/mtdfw.fw";
  }
  uVar7 = (*(code *)PTR_open_0046a710)(pcVar8,0);
  puVar12 = (undefined4 *)(*(code *)PTR___errno_location_0046a764)();
  if (uVar7 == 0xffffffff) {
    if ((*(uint *)PTR_debug_level_0046abf4 & 1) != 0) {
      (*(code *)PTR_perror_0046ab44)("document open");
      pcVar8 = (char *)param_1[7];
      if (pcVar8 == (char *)0x0) {
        pcVar8 = "null";
      }
      (*(code *)PTR_fprintf_0046a9ec)
                (*(undefined4 *)PTR_stderr_0046a7f0,"req->pathname=%s\n",pcVar8);
    }
    pcVar8 = "home.htm";
    pcVar14 = (code *)PTR_send_redirect_perm_0046ac78;
LAB_00407f88:
    (*pcVar14)(param_1,pcVar8);
    return 0;
  }
  (*(code *)PTR_fstat_0046a9f0)(uVar7,auStack_3150);
  if ((local_313c & 0xf000) == 0x4000) {
    (*(code *)PTR_close_0046a694)(uVar7);
    iVar10 = param_1[7];
    iVar1 = (*(code *)PTR_strlen_0046a714)(iVar10);
    if (*(char *)(iVar10 + iVar1 + -1) != '/') {
      iVar1 = *(int *)PTR_server_name_0046ab24;
      if (DAT_0046c5f4 == 0) {
        DAT_0046c5f4 = 7;
      }
      iVar5 = 0;
      iVar10 = (*(code *)PTR_strlen_0046a714)(puVar3);
      if (*(int *)PTR_server_port_0046a7c0 != 0x50) {
        uVar4 = (*(code *)PTR_simple_itoa_0046a9cc)();
        iVar5 = (*(code *)PTR_strdup_0046a8a4)(uVar4);
        if (iVar5 == 0) goto LAB_00407efc;
        DAT_0046c5f8 = (*(code *)PTR_strlen_0046a714)(iVar5);
      }
      iVar6 = param_1[0x1c];
      if (param_1[0x1c] == 0) {
        iVar6 = iVar1;
      }
      iVar1 = (*(code *)PTR_strlen_0046a714)(iVar6);
      if (*(int *)PTR_server_port_0046a7c0 == 0x50) {
        if (0x3080 < (uint)(DAT_0046c5f4 + 1 + iVar10 + iVar1)) goto LAB_00407efc;
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8,&DAT_0044a17c);
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8 + DAT_0046c5f4,iVar6,iVar1);
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8 + iVar1 + DAT_0046c5f4,param_1 + 0x235,iVar10);
        iVar1 = DAT_0046c5f4 + iVar10 + iVar1 + -0x3180;
        acStack_30b8[iVar1 + 0x3180] = '/';
        acStack_30b8[iVar1 + 0x3181] = '\0';
      }
      else {
        if (0x3080 < (uint)(DAT_0046c5f4 + DAT_0046c5f8 + 2 + iVar10 + iVar1)) {
LAB_00407efc:
          *puVar12 = 0xc;
          return 0;
        }
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8,&DAT_0044a17c);
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8 + DAT_0046c5f4,iVar6,iVar1);
        acStack_30b8[DAT_0046c5f4 + iVar1 + -0x3180 + 0x3180] = ':';
        (*(code *)PTR_memcpy_0046ab5c)(acStack_30b8 + DAT_0046c5f4 + 1 + iVar1,iVar5,DAT_0046c5f8);
        (*(code *)PTR_memcpy_0046ab5c)
                  (acStack_30b8 + DAT_0046c5f4 + DAT_0046c5f8 + 1 + iVar1,param_1 + 0x235,iVar10);
        iVar1 = DAT_0046c5f8 + DAT_0046c5f4 + iVar10 + iVar1 + -0x3180;
        acStack_30b8[iVar1 + 0x3181] = '/';
        acStack_30b8[iVar1 + 0x3182] = '\0';
      }
      pcVar8 = acStack_30b8;
      pcVar14 = (code *)PTR_send_r_moved_perm_0046a8d4;
      goto LAB_00407f88;
    }
    uVar7 = FUN_00406f70(param_1,auStack_3150);
    if ((int)uVar7 < 0) {
      return 0;
    }
    if (uVar7 < 2) {
      return uVar7;
    }
  }
  if ((local_313c & 0xf000) == 0x8000) {
    param_1[0x16] = local_310c;
    param_1[0xb] = local_311c;
    if ((param_1[0x1b] != 0) && (param_1[8] == 0)) {
      param_1[0x1b] = 0;
    }
    param_1[0x1b] = 0;
    if (param_1[0xb] != 0) {
      if ((param_1[8] == 0) || (iVar1 = (*(code *)PTR_ranges_fixup_0046a9a8)(param_1), iVar1 != 0))
      {
        if ((uint)param_1[0xb] < 0x19001) {
          iVar1 = (*(code *)PTR_find_mmap_0046abb0)(uVar7,auStack_3150);
          param_1[0x29] = iVar1;
          puVar9 = PTR_close_0046a694;
          if (iVar1 == 0) {
            param_1[10] = uVar7;
            *param_1 = 9;
          }
          else {
            param_1[0xe] = *(undefined4 *)(iVar1 + 0xc);
            (*(code *)puVar9)(uVar7);
          }
        }
        else {
          param_1[10] = uVar7;
          *param_1 = 9;
        }
        if (param_1[8] == 0) {
          puVar3 = (undefined4 *)(*(code *)PTR_range_pool_pop_0046a950)();
          param_1[8] = puVar3;
          *puVar3 = 0;
          iVar1 = param_1[8];
        }
        else {
          pcVar14 = (code *)PTR_send_r_partial_content_0046a7fc;
          if (param_1[0x1b] == 0) goto LAB_0040821c;
          (*(code *)PTR_ranges_reset_0046a998)(param_1);
          puVar3 = (undefined4 *)(*(code *)PTR_range_pool_pop_0046a950)();
          param_1[8] = puVar3;
          *puVar3 = 0;
          iVar1 = param_1[8];
        }
        *(undefined4 *)(iVar1 + 4) = 0xffffffff;
        iVar1 = (*(code *)PTR_ranges_fixup_0046a9a8)(param_1);
        pcVar14 = (code *)PTR_send_r_request_ok_0046aaac;
        if (iVar1 == 0) {
          return 0;
        }
LAB_0040821c:
        (*pcVar14)(param_1);
        if (param_1[3] != 2) {
          if (param_1[0xe] == 0) {
            return 1;
          }
          local_3180 = 0x2000 - param_1[0x14];
          if (local_3180 < 0x101) {
            return 1;
          }
          local_38 = (int *)param_1[8];
          local_34 = (local_38[1] + 1) - *local_38;
          if (local_34 < local_3180) {
            local_3180 = local_34;
          }
          iVar1 = (*(code *)PTR__setjmp_0046a734)(PTR_env_0046a7d8);
          puVar9 = PTR_handle_sigbus_0046a9b8;
          if (iVar1 != 0) {
            (*(code *)PTR_reset_output_buffer_0046ab1c)(param_1);
            (*(code *)PTR_send_r_error_0046a718)(param_1);
            return 0;
          }
          *(undefined4 *)PTR_handle_sigbus_0046a9b8 = 1;
          (*(code *)PTR_memcpy_0046ab5c)
                    (param_1[0x234] + param_1[0x14],param_1[0xe] + *local_38,local_3180);
          *(undefined4 *)puVar9 = 0;
          param_1[0x14] = param_1[0x14] + local_3180;
          param_1[0xd] = param_1[0xd] + local_3180;
          *local_38 = *local_38 + local_3180;
          if (local_3180 != local_34) {
            return 1;
          }
        }
        uVar7 = (*(code *)PTR_complete_response_0046a864)(param_1);
        return uVar7;
      }
      goto LAB_004080b4;
    }
    pcVar14 = (code *)PTR_send_r_no_content_0046a980;
    if ((uint)param_1[2] < 3) {
      pcVar14 = (code *)PTR_send_r_request_ok_0046aaac;
    }
  }
  else {
    (*(code *)PTR_fputs_0046a6e4)
              ("Resulting file is not a regular file.\n",*(undefined4 *)PTR_stderr_0046a7f0);
    pcVar14 = (code *)PTR_send_r_bad_request_0046a968;
  }
  (*pcVar14)(param_1);
LAB_004080b4:
  (*(code *)PTR_close_0046a694)(uVar7);
  return 0;
}

