/* addWlProfileHandler @ 0043a10c */

undefined4 addWlProfileHandler(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_5d8;
  int local_5d4;
  int local_5d0;
  undefined1 local_5cc [4];
  undefined4 local_5c8;
  undefined1 local_5c4 [4];
  undefined1 auStack_5c0 [20];
  undefined1 auStack_5ac [64];
  undefined1 auStack_56c [68];
  undefined1 auStack_528 [33];
  undefined1 local_507;
  undefined1 local_505;
  undefined1 auStack_504 [66];
  undefined1 auStack_4c2 [27];
  undefined1 auStack_4a7 [27];
  undefined1 auStack_48c [27];
  undefined1 auStack_471 [27];
  undefined1 local_456;
  undefined1 local_454 [1060];
  undefined1 *local_30;
  
  iVar2 = (*(code *)PTR_memcmp_0046a8d0)(param_2,"wps_client_profile",0x12);
  if (iVar2 != 0) {
    (*(code *)PTR_sprintf_0046a808)(auStack_5c0,"wizardAddProfile%d",param_3);
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_5c0,&DAT_0044b32c);
    if (*pcVar3 == '\0') {
      return 0;
    }
  }
  if (param_3 == 0) {
    uVar9 = 0x40839;
    uVar8 = 0x10837;
    uVar10 = 0x8836;
    uVar6 = 0x835;
  }
  else {
    uVar9 = 0x4084b;
    uVar8 = 0x10849;
    uVar10 = 0x8848;
    uVar6 = 0x847;
  }
  (*(code *)PTR_memset_0046a87c)(auStack_5ac,0,0x40);
  (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_5d4);
  if (local_5d4 + 1 < 6) {
    (*(code *)PTR_memset_0046a87c)(auStack_528,0,0xd4);
    local_505 = 8;
    (*(code *)PTR_apmib_get_0046aadc)(1,auStack_5ac);
    (*(code *)PTR_strcpy_0046ac60)(auStack_528,auStack_5ac);
    (*(code *)PTR_apmib_get_0046aadc)(0x19,&local_5d8);
    if (local_5d8 == 1) {
      (*(code *)PTR_apmib_get_0046aadc)(3,&local_5d0);
      local_30 = auStack_4c2;
      if (local_5d0 == 1) {
        local_507 = 1;
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(4,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(local_30,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(5,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(auStack_4a7,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(6,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(auStack_48c,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        uVar6 = 7;
      }
      else {
        local_507 = 2;
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(8,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(local_30,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(9,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(auStack_4a7,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        (*(code *)PTR_apmib_get_0046aadc)(10,auStack_56c);
        (*(code *)PTR_strcpy_0046ac60)(auStack_48c,auStack_56c);
        (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x1e);
        uVar6 = 0xb;
      }
      (*(code *)PTR_apmib_get_0046aadc)(uVar6,auStack_56c);
      (*(code *)PTR_strcpy_0046ac60)(auStack_471,auStack_56c);
      (*(code *)PTR_apmib_get_0046aadc)(0x14,local_5cc);
      (*(code *)PTR_apmib_get_0046aadc)(0xd,local_5c4);
      (*(code *)PTR_apmib_get_0046aadc)(0xc,&local_5c8);
      local_456 = (undefined1)local_5c8;
    }
    else if (local_5d8 < 2) {
      local_507 = 0;
    }
    else {
      (*(code *)PTR_memset_0046a87c)(auStack_56c,0,0x41);
      if (local_5d8 == 2) {
        local_507 = 3;
        uVar6 = 0x1d;
      }
      else {
        local_507 = 4;
        uVar6 = 0x26;
      }
      (*(code *)PTR_apmib_get_0046aadc)(uVar6,&local_5c8);
      local_505 = 2;
      if (local_5c8 != 1) {
        local_505 = 8;
      }
      (*(code *)PTR_apmib_get_0046aadc)(0x24,local_5c4);
      (*(code *)PTR_apmib_get_0046aadc)(0x1e,auStack_56c);
      (*(code *)PTR_strcpy_0046ac60)(auStack_504,auStack_56c);
    }
    puVar7 = local_454;
    iVar2 = 0;
    puVar5 = puVar7;
    while (bVar1 = iVar2 < local_5d4, iVar2 = iVar2 + 1, bVar1) {
      (*(code *)PTR_memset_0046a87c)(puVar5,0,0xd4);
      *puVar5 = (char)iVar2;
      (*(code *)PTR_apmib_get_0046aadc)(uVar10,puVar5);
      puVar5 = puVar5 + 0xd4;
    }
    (*(code *)PTR_apmib_set_0046aa28)(uVar9,auStack_528);
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(uVar8,auStack_528);
    if (iVar2 != 0) {
      for (iVar2 = 0; iVar2 < local_5d4; iVar2 = iVar2 + 1) {
        uVar6 = (*(code *)PTR_strlen_0046a714)(auStack_528);
        iVar4 = (*(code *)PTR_memcmp_0046a8d0)(local_454 + iVar2 * 0xd4,auStack_528,uVar6);
        if (iVar4 == 0) {
          (*(code *)PTR_puts_0046ab3c)("this profile is exist, replace it with new configuration");
        }
        else {
          (*(code *)PTR_apmib_set_0046aa28)(uVar8,puVar7);
        }
        puVar7 = puVar7 + 0xd4;
      }
      return 0;
    }
    pcVar3 = "Add table entry error!";
  }
  else {
    pcVar3 = "Cannot add new entry because table is full!";
  }
  (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar3);
  return 0xffffffff;
}

