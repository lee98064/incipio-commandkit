/* FUN_00434cb8 @ 00434cb8 */

void FUN_00434cb8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint *puVar5;
  int local_res0 [4];
  int local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  undefined1 auStack_190 [4];
  uint local_18c;
  uint local_188;
  int local_184;
  uint auStack_180 [25];
  undefined1 auStack_11c [260];
  
  local_res0[0] = param_1;
  (*(code *)PTR_memset_0046a87c)(auStack_11c,0,0x100);
  if (DAT_0046f374 == 1) {
    (*(code *)PTR_apmib_get_0046aadc)(1,auStack_180);
    (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_18c);
    iVar2 = (*(code *)PTR_strcmp_0046a824)(auStack_180,&DAT_0046f390);
    if ((iVar2 == 0) && (local_18c == DAT_0046f378)) {
      return;
    }
    uVar3 = 0x116;
    puVar5 = auStack_180;
  }
  else {
    if (DAT_0046f374 != 4) {
      (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_19c);
      uVar1 = local_19c;
      if (local_19c == 0) {
        local_198 = 1;
        local_194 = 1;
      }
      else if (local_19c == 1) {
        (*(code *)PTR_apmib_get_0046aadc)(0x14,&local_184);
        if ((local_184 == 0) || (local_184 == 2)) {
          local_194 = 1;
        }
        else {
          local_194 = 4;
        }
        local_198 = 2;
      }
      else if (local_19c == 2) {
        local_194 = local_19c;
        (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_19c);
        if (local_19c == 1) {
          local_198 = 4;
        }
        else if (local_19c == 2) {
          local_198 = 8;
        }
        else {
LAB_00434f2c:
          local_198 = 0xc;
        }
      }
      else if (local_19c == 4) {
        local_194 = 0x20;
        (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_19c);
        if (local_19c == 1) {
          local_198 = uVar1;
        }
        else {
          local_198 = 8;
          if (local_19c != 2) goto LAB_00434f2c;
        }
      }
      else {
        local_194 = 0x22;
        local_198 = 0xc;
        (*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_19c);
        (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_18c);
        if ((local_18c & 2) == 0) {
          if ((local_19c & 2) == 0) {
            local_198 = 4;
          }
          else {
            local_198 = 8;
          }
        }
        if ((local_19c == 2) && (local_18c == 2)) {
          local_198 = 8;
          (*(code *)PTR_printf_0046ac28)("%s %d\n","update_wps_configured",0x235f);
        }
      }
      (*(code *)PTR_apmib_set_0046aa28)(0x112,&local_194);
      (*(code *)PTR_apmib_set_0046aa28)(0x113,&local_198);
      (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_19c);
      if (((local_19c == 2) || (local_19c == 4)) || (local_19c == 6)) {
        (*(code *)PTR_apmib_get_0046aadc)(0x1c,&local_188);
        if ((local_188 & 2) != 0) {
          (*(code *)PTR_apmib_get_0046aadc)(0x1e,auStack_11c);
          (*(code *)PTR_apmib_set_0046aa28)(0x115,auStack_11c);
        }
      }
      if (local_res0[0] != 0) {
        local_res0[0] = 0;
        (*(code *)PTR_apmib_set_0046aa28)(0x119,local_res0);
      }
      if (DAT_0046f374 == 2) {
        (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_194);
        if ((DAT_0046f37c != local_194) ||
           ((*(code *)PTR_apmib_get_0046aadc)(3,&local_198), DAT_0046f384 != local_198))
        goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(0xd,&local_18c);
        if (DAT_0046f3b4 != local_18c) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(4,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3b8,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(5,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3bd,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(6,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3c2,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(7,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3c7,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(8,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3cc,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(9,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3d9,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(10,auStack_11c);
        iVar2 = (*(code *)PTR_strcmp_0046a824)(&DAT_0046f3e6,auStack_11c);
        if (iVar2 != 0) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(0xb,auStack_11c);
        puVar4 = &DAT_0046f3f3;
      }
      else {
        if (DAT_0046f374 != 3) {
          return;
        }
        (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_194);
        if ((DAT_0046f37c != local_194) ||
           ((*(code *)PTR_apmib_get_0046aadc)(0x1d,&local_19c), DAT_0046f388 != local_19c))
        goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(0x26,&local_198);
        if (DAT_0046f38c != local_198) goto LAB_00435394;
        (*(code *)PTR_apmib_get_0046aadc)(0x1e,auStack_11c);
        puVar4 = &DAT_0046f400;
      }
      iVar2 = (*(code *)PTR_strcmp_0046a824)(puVar4,auStack_11c);
      if (iVar2 == 0) {
        return;
      }
      goto LAB_00435394;
    }
    (*(code *)PTR_apmib_get_0046aadc)(0x14,&local_184);
    (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_19c);
    if (local_19c != 1) {
      return;
    }
    if (local_184 == DAT_0046f380) {
      return;
    }
    if ((local_184 == 0) || (local_184 == 2)) {
      if (DAT_0046f380 != 1) {
        return;
      }
      local_194 = 1;
    }
    else {
      if ((DAT_0046f380 != 0) && (DAT_0046f380 != 2)) {
        return;
      }
      local_194 = 4;
    }
    uVar3 = 0x112;
    puVar5 = &local_194;
  }
  (*(code *)PTR_apmib_set_0046aa28)(uVar3,puVar5);
LAB_00435394:
  local_res0[0] = 0;
  (*(code *)PTR_apmib_set_0046aa28)(0x119,local_res0);
  (*(code *)PTR_apmib_get_0046aadc)(0x10e,auStack_190);
  (*(code *)PTR_apmib_get_0046aadc)(0x110,&local_1a0);
  if (local_1a0 == 0) {
    local_1a0 = 1;
    (*(code *)PTR_apmib_set_0046aa28)(0x110,&local_1a0);
  }
  return;
}

