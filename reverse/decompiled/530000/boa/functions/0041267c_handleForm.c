/* handleForm @ 0041267c */

void handleForm(int param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  int *piVar9;
  int *piVar10;
  code *pcVar11;
  undefined1 auStack_38 [8];
  int local_30;
  
  iVar2 = (*(code *)PTR_strstr_0046a940)(param_1 + 0x8d4,"/boafrm/");
  (*(code *)PTR_apmib_get_0046aadc)(0x68,&DAT_004685c0);
  pcVar11 = (code *)PTR_send_r_not_found_0046aa1c;
  if (iVar2 != 0) {
    ppuVar1 = &PTR_s_formWlanSetup_004686b8;
    do {
      while( true ) {
        ppuVar7 = ppuVar1;
        puVar8 = *ppuVar7;
        pcVar11 = (code *)PTR_send_r_not_found_0046aa1c;
        if (puVar8 == (undefined *)0x0) goto LAB_00412978;
        local_30 = (*(code *)PTR_strlen_0046a714)(iVar2 + 8);
        iVar3 = (*(code *)PTR_strlen_0046a714)(puVar8);
        if (local_30 == iVar3) break;
        ppuVar1 = ppuVar7 + 2;
      }
      iVar3 = (*(code *)PTR_memcmp_0046a8d0)(iVar2 + 8,puVar8);
      ppuVar1 = ppuVar7 + 2;
    } while (iVar3 != 0);
    if ((((DAT_0046f05c != 0) || (DAT_0046f0b4 != 0)) || (DAT_0046f10c != 0)) || (DAT_0046f164 != 0)
       ) {
      piVar9 = &DAT_0046f05c;
      iVar3 = 0;
      iVar2 = 0x58;
      piVar10 = piVar9;
      do {
        iVar4 = *piVar10;
        piVar10 = piVar10 + 0x16;
        if (iVar4 != 0) {
          iVar4 = iVar3 * iVar2;
          local_30 = iVar2;
          iVar5 = (*(code *)PTR_strcmp_0046a824)(puVar8,&DAT_0046f060 + iVar4);
          iVar2 = local_30;
          if (iVar5 == 0) {
            iVar2 = (*(code *)PTR_time_0046a84c)(auStack_38);
            if (iVar2 - *(int *)((int)&DAT_0046f0b0 + iVar4) < 0x12d) {
              puVar8 = *ppuVar7;
              iVar2 = (*(code *)PTR_strcmp_0046a824)(puVar8,"formSaveConfig");
              if (iVar2 == 0) goto LAB_00412920;
              iVar2 = 0;
              goto LAB_004128d8;
            }
            *(undefined4 *)((int)&DAT_0046f05c + iVar4) = 0;
            break;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 4);
    }
    iVar2 = (*(code *)PTR_strcmp_0046a824)(*ppuVar7,"formUpload");
    pcVar11 = (code *)PTR_send_r_forbidden_0046a838;
    if (iVar2 == 0) {
      uVar6 = (*(code *)PTR_get_shm_id_0046a7d4)();
      (*(code *)PTR_clear_fwupload_shm_0046a8b8)(uVar6);
      pcVar11 = (code *)PTR_send_r_forbidden_0046a838;
    }
  }
LAB_00412978:
  (*pcVar11)(param_1);
  return;
LAB_004128d8:
  do {
    iVar3 = *piVar9;
    piVar9 = piVar9 + 0x16;
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_strcmp_0046a824)(puVar8,&DAT_0046f060 + iVar2 * 0x58);
      if (iVar3 == 0) {
        (&DAT_0046f05c)[iVar2 * 0x16] = 0;
        break;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
LAB_00412920:
  (*(code *)PTR_send_r_request_ok2_0046a6bc)(param_1);
  (*(code *)ppuVar7[1])(param_1,0,0);
  FUN_004124c8(param_1);
  FUN_004122c0();
  return;
}

