/* init_get2 @ 004083f8 */

bool init_get2(int param_1)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  char *pcVar14;
  code *pcVar15;
  undefined1 auStack_3148 [20];
  uint local_3134;
  undefined4 local_3114;
  undefined1 auStack_30b0 [12416];
  int local_30;
  
  puVar2 = PTR_complete_env_0046a94c;
  *(undefined4 *)(param_1 + 4) = 2;
  (*(code *)puVar2)();
  if (*(int *)PTR_isFWUPGRADE_0046ab90 == 2) {
    iVar4 = (*(code *)PTR_strstr_0046a940)(*(undefined4 *)(param_1 + 0x1c),"countDownPage.htm");
    puVar2 = PTR_system_0046ab18;
    if (iVar4 == 0) {
      if (*(int *)PTR_isCountDown_0046a9e8 == 1) {
        *(undefined4 *)PTR_isCountDown_0046a9e8 = 2;
        (*(code *)puVar2)("ifconfig br0 down");
        (*(code *)PTR_sleep_0046ab0c)(1);
      }
    }
    else {
      *(undefined4 *)PTR_isCountDown_0046a9e8 = 1;
    }
  }
  puVar2 = PTR_strstr_0046a940;
  middle_segment = 0;
  iVar11 = param_1 + 0x8d4;
  *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x5c) + 0xc36) * 4) = 0;
  iVar4 = (*(code *)puVar2)(iVar11,".htm");
  if ((iVar4 == 0) && (iVar4 = (*(code *)PTR_strstr_0046a940)(iVar11,&DAT_0044a1d4), iVar4 == 0)) {
    return true;
  }
  iVar4 = (*(code *)PTR_open_0046a710)(*(undefined4 *)(param_1 + 0x1c),0);
  if (iVar4 == -1) {
    piVar5 = (int *)(*(code *)PTR___errno_location_0046a764)();
    pcVar15 = (code *)PTR_send_r_not_found_0046aa1c;
    if ((*piVar5 != 2) && (pcVar15 = (code *)PTR_send_r_bad_request_0046a968, *piVar5 == 0xd)) {
      pcVar15 = (code *)PTR_send_r_forbidden_0046a838;
    }
    (*pcVar15)(param_1);
  }
  else {
    (*(code *)PTR_fstat_0046a9f0)(iVar4,auStack_3148);
    if ((local_3134 & 0xf000) == 0x4000) {
      (*(code *)PTR_close_0046a694)(iVar4);
      iVar10 = *(int *)(param_1 + 0x1c);
      iVar4 = (*(code *)PTR_strlen_0046a714)(iVar10);
      if (*(char *)(iVar10 + iVar4 + -1) != '/') {
        iVar4 = *(int *)(param_1 + 0x70);
        if (*(int *)PTR_server_port_0046a7c0 == 0x50) {
          if (iVar4 == 0) {
            iVar4 = *(int *)PTR_server_name_0046ab24;
          }
          (*(code *)PTR_sprintf_0046a808)(auStack_30b0,"http://%s%s/",iVar4,iVar11);
        }
        else {
          if (iVar4 == 0) {
            iVar4 = *(int *)PTR_server_name_0046ab24;
          }
          (*(code *)PTR_sprintf_0046a808)
                    (auStack_30b0,"http://%s:%d%s/",iVar4,*(int *)PTR_server_port_0046a7c0,iVar11);
        }
        (*(code *)PTR_send_redirect_perm_0046ac78)(param_1,auStack_30b0);
        return false;
      }
      iVar4 = FUN_00406f70(param_1,auStack_3148);
      if (iVar4 == -1) {
        return false;
      }
      if (iVar4 == 0) {
        return true;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = local_3114;
    if (*(int *)(param_1 + 0xc) != 2) {
      uVar6 = (*(code *)PTR_mmap_0046aa90)(0,local_3114,1,2,iVar4,0);
      puVar2 = PTR_close_0046a694;
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      (*(code *)puVar2)(iVar4);
      if (*(int *)(param_1 + 0x38) == -1) {
        return false;
      }
      (*(code *)PTR_send_r_request_ok_0046aaac)(param_1);
      iVar11 = 0;
      iVar4 = *(int *)(param_1 + 0x38);
      iVar10 = *(int *)(param_1 + 0x50);
      while ((iVar7 = (*(code *)PTR_strstr_0046a940)(iVar4,&DAT_0044a1fc), iVar7 != 0 &&
             (iVar8 = (*(code *)PTR_strstr_0046a940)(iVar7,&DAT_0044a200), iVar8 != 0))) {
        iVar12 = iVar7 - iVar4;
        do {
          if ((uint)(*(int *)(param_1 + 0x50) + 10 + iVar12) <= *(uint *)(param_1 + 0x8cc))
          goto LAB_00408828;
          iVar9 = (*(code *)PTR_allocNewBuffer_0046a740)(param_1);
        } while (iVar9 != -1);
        iVar12 = *(int *)(param_1 + 0x8cc) - *(int *)(param_1 + 0x50);
        (*(code *)PTR_puts_0046ab3c)("will break");
LAB_00408828:
        if (iVar12 < 0) {
          iVar11 = iVar11 + iVar12;
        }
        else {
          (*(code *)PTR_memcpy_0046ab5c)
                    (*(int *)(param_1 + 0x8d0) + *(int *)(param_1 + 0x50),
                     *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30),iVar12);
          puVar2 = PTR_handleScript_0046a770;
          iVar4 = iVar8 + 2;
          *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar12;
          *(int *)(param_1 + 0x30) = iVar4 + (*(int *)(param_1 + 0x30) - iVar7) + iVar12;
          (*(code *)puVar2)(param_1,iVar7,iVar8);
          iVar11 = iVar11 + iVar12;
        }
      }
      iVar4 = (*(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x2c)) - iVar4;
      do {
        if ((uint)(*(int *)(param_1 + 0x50) + 10 + iVar4) <= *(uint *)(param_1 + 0x8cc))
        goto LAB_004088f8;
        iVar7 = (*(code *)PTR_allocNewBuffer_0046a740)(param_1);
      } while (iVar7 != -1);
      iVar4 = *(int *)(param_1 + 0x8cc) - *(int *)(param_1 + 0x50);
LAB_004088f8:
      if (0 < iVar4) {
        (*(code *)PTR_memcpy_0046ab5c)
                  (*(int *)(param_1 + 0x8d0) + *(int *)(param_1 + 0x50),
                   *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x30),iVar4);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar4;
      }
      iVar11 = iVar11 + middle_segment;
      iVar7 = (*(code *)PTR_strstr_0046a940)(*(undefined4 *)(param_1 + 0x8d0),"Content-Length:");
      iVar8 = (*(code *)PTR_strstr_0046a940)(iVar7,"\r\n");
      iVar11 = iVar11 + iVar4;
      pcVar13 = (char *)(iVar7 + 0x10);
      uVar6 = (*(code *)PTR_simple_itoa_0046a9cc)(iVar11);
      iVar4 = (*(code *)PTR_strlen_0046a714)(uVar6);
      iVar7 = iVar8 - (int)pcVar13;
      if (iVar7 == iVar4) {
        local_30 = iVar7;
        uVar6 = (*(code *)PTR_simple_itoa_0046a9cc)(iVar11);
        (*(code *)PTR_memcpy_0046ab5c)(pcVar13,uVar6,local_30);
        piVar5 = (int *)PTR___ctype_b_0046abc0;
      }
      else {
        if (iVar7 < iVar4) {
          (*(code *)PTR_memmove_0046abf0)
                    (iVar8 + (iVar4 - iVar7),iVar8,
                     (*(int *)(param_1 + 0x8d0) + iVar10 + iVar11) - iVar8);
          uVar6 = (*(code *)PTR_simple_itoa_0046a9cc)(iVar11);
          (*(code *)PTR_memcpy_0046ab5c)(pcVar13,uVar6,iVar4);
          iVar4 = *(int *)(param_1 + 0x50) + (iVar4 - iVar7);
        }
        else {
          (*(code *)PTR_memmove_0046abf0)
                    (iVar8 - (iVar7 - iVar4),iVar8,
                     (*(int *)(param_1 + 0x8d0) + iVar10 + iVar11) - iVar8);
          uVar6 = (*(code *)PTR_simple_itoa_0046a9cc)(iVar11);
          (*(code *)PTR_memcpy_0046ab5c)(pcVar13,uVar6,iVar4);
          iVar4 = *(int *)(param_1 + 0x50) - (iVar7 - iVar4);
        }
        *(int *)(param_1 + 0x50) = iVar4;
        piVar5 = (int *)PTR___ctype_b_0046abc0;
      }
      do {
        iVar4 = (*(code *)PTR_strstr_0046a940)(pcVar13,"boafrm/");
        puVar2 = PTR_log_boaform_0046a9d8;
        pcVar13 = (char *)(iVar4 + 7);
        if (iVar4 == 0) {
          return *(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x2c);
        }
        pcVar3 = pcVar13;
        do {
          pcVar14 = pcVar3;
          cVar1 = *pcVar14;
          iVar4 = (int)cVar1;
          if ((iVar4 == 0) || ((*(ushort *)(*piVar5 + iVar4 * 2) & 0x20) != 0)) break;
          pcVar3 = pcVar14 + 1;
        } while (iVar4 != 0x22);
        *pcVar14 = '\0';
        (*(code *)puVar2)(pcVar13);
        *pcVar14 = cVar1;
      } while( true );
    }
    (*(code *)PTR_send_r_request_ok_0046aaac)(param_1);
    (*(code *)PTR_close_0046a694)(iVar4);
  }
  return false;
}

