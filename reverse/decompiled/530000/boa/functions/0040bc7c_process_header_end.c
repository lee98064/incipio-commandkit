/* process_header_end @ 0040bc7c */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 process_header_end(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined1 auStack_70 [32];
  char local_50 [32];
  char local_30 [36];
  
  if (param_1[0xf] == 0) {
    uVar5 = *(undefined4 *)PTR_stderr_0046a7f0;
    pcVar4 = "No logline in process_header_end\n";
LAB_0040bda0:
    (*(code *)PTR_fputs_0046a6e4)(pcVar4,uVar5);
    pcVar7 = (code *)PTR_send_r_error_0046a718;
  }
  else {
    puVar6 = param_1 + 0x235;
    iVar2 = (*(code *)PTR_unescape_uri_0046a920)(puVar6,param_1 + 0x23);
    if (iVar2 == 0) {
      pcVar7 = (code *)PTR_send_r_bad_request_0046a968;
      if ((*(uint *)PTR_debug_level_0046abf4 & 1) == 0) goto LAB_0040bfb0;
      uVar5 = *(undefined4 *)PTR_stderr_0046a7f0;
      pcVar4 = "URI contains bogus characters\n";
LAB_0040be18:
      (*(code *)PTR_fputs_0046a6e4)(pcVar4,uVar5);
      pcVar7 = (code *)PTR_send_r_bad_request_0046a968;
      goto LAB_0040bfb0;
    }
    (*(code *)PTR_clean_pathname_0046aa84)(puVar6);
    pcVar7 = (code *)PTR_send_r_bad_request_0046a968;
    if (*(char *)(param_1 + 0x235) != '/') goto LAB_0040bfb0;
    if (*(int *)PTR_vhost_root_0046ab98 != 0) {
      iVar2 = param_1[0x18];
      if (iVar2 == 0) {
        iVar2 = *(int *)PTR_default_vhost_0046a990;
      }
      uVar5 = (*(code *)PTR_strdup_0046a8a4)(iVar2);
      param_1[0x1c] = uVar5;
      if (param_1[0x1c] == 0) {
        uVar5 = *(undefined4 *)PTR_stderr_0046a7f0;
        pcVar4 = "unable to strdup default_vhost/req->header_host\n";
        goto LAB_0040bda0;
      }
      (*(code *)PTR_strlower_0046abd0)();
      puVar3 = (undefined1 *)(*(code *)PTR_strchr_0046a6e8)(param_1[0x1c],0x3a);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0;
      }
      iVar2 = (*(code *)PTR_check_host_0046a68c)(param_1[0x1c]);
      if (iVar2 < 1) {
        uVar5 = *(undefined4 *)PTR_stderr_0046a7f0;
        pcVar4 = "host invalid!\n";
        goto LAB_0040be18;
      }
    }
    (*(code *)PTR_apmib_get_0046aadc)(0xb6,local_50);
    (*(code *)PTR_apmib_get_0046aadc)(0xb7,local_30);
    if ((local_50[0] != '\0') || (local_30[0] != '\0')) {
      iVar2 = param_1[0x2c];
      if ((iVar2 == 0) && (param_1[0x2a] != 0)) {
        iVar2 = (*(code *)PTR_strcmp_0046a824)(param_1[0x2a],local_50);
        if (iVar2 == 0) {
          pcVar4 = (char *)param_1[0x2b];
          if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
            iVar2 = (int)local_30[0];
          }
          else {
            iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar4,local_30);
          }
          if (iVar2 == 0) {
            param_1[0x2c] = 1;
          }
          DAT_0046dfd8 = 1;
        }
        iVar2 = param_1[0x2c];
      }
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_0046aadc)(0xc5,auStack_70);
        (*(code *)PTR_send_r_unauthorized_0046a8dc)(param_1,auStack_70);
        return 0;
      }
    }
    iVar2 = (*(code *)PTR_translate_uri_0046a9dc)(param_1);
    if (iVar2 == 0) {
      param_1[1] = 2;
      return 0;
    }
    if (param_1[3] != 4) {
      iVar2 = (*(code *)PTR_strstr_0046a940)(puVar6,".htm");
      if ((iVar2 != 0) || (iVar2 = (*(code *)PTR_strstr_0046a940)(puVar6,&DAT_0044a1d4), iVar2 != 0)
         ) {
        param_1[5] = 3;
      }
      pcVar7 = (code *)PTR_init_get_0046a7f8;
      if (param_1[5] == 0) {
        *param_1 = 6;
      }
      else {
        pcVar7 = (code *)PTR_init_cgi_0046a930;
        if (param_1[5] == 3) {
          pcVar7 = (code *)PTR_init_get2_0046a944;
        }
      }
      uVar5 = (*pcVar7)(param_1);
      return uVar5;
    }
    iVar2 = (*(code *)PTR_calloc_0046aa14)(1,0x2000);
    param_1[0x1d] = iVar2;
    puVar1 = PTR_strstr_0046a940;
    pcVar7 = (code *)PTR_send_r_error_0046a718;
    if (iVar2 != 0) {
      uVar5 = param_1[0xf];
      param_1[0x1f] = 0;
      param_1[0x1e] = 0;
      iVar2 = (*(code *)puVar1)(uVar5,"formUpload");
      if ((iVar2 == 0) &&
         (iVar2 = (*(code *)PTR_strstr_0046a940)(uVar5,"formUploadConfig"), iVar2 == 0)) {
        return 1;
      }
      iVar2 = (*(code *)PTR_get_shm_id_0046a7d4)();
      if (iVar2 != 0) {
        (*(code *)PTR_clear_fwupload_shm_0046a8b8)(iVar2);
      }
      iVar2 = (*(code *)PTR_malloc_0046ab14)(200000);
      param_1[0x26] = iVar2;
      if (iVar2 != 0) {
        param_1[0x27] = 0;
        return 1;
      }
      return 0;
    }
  }
LAB_0040bfb0:
  (*pcVar7)(param_1);
  return 0;
}

