/* wepHandler @ 00435420 */

/* WARNING: Type propagation algorithm not settling */

undefined4 wepHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint local_70;
  int local_6c [3];
  undefined1 auStack_60 [20];
  undefined1 auStack_4c [36];
  char *local_28;
  
  local_6c[1] = 1;
  if (*(int *)PTR_vwlan_idx_0046a9b0 == 0) {
    (*(code *)PTR_memset_0046a87c)(&DAT_0046f374,0,0xd0);
    DAT_0046f374 = 2;
    (*(code *)PTR_apmib_get_0046aadc)(0x19,&DAT_0046f37c);
    (*(code *)PTR_apmib_get_0046aadc)(3,&DAT_0046f384);
    (*(code *)PTR_apmib_get_0046aadc)(0xd,&DAT_0046f3b4);
    (*(code *)PTR_apmib_get_0046aadc)(4,&DAT_0046f3b8);
    (*(code *)PTR_apmib_get_0046aadc)(5,&DAT_0046f3bd);
    (*(code *)PTR_apmib_get_0046aadc)(6,&DAT_0046f3c2);
    (*(code *)PTR_apmib_get_0046aadc)(7,&DAT_0046f3c7);
    (*(code *)PTR_apmib_get_0046aadc)(8,&DAT_0046f3cc);
    (*(code *)PTR_apmib_get_0046aadc)(9,&DAT_0046f3d9);
    (*(code *)PTR_apmib_get_0046aadc)(10,&DAT_0046f3e6);
    (*(code *)PTR_apmib_get_0046aadc)(0xb,&DAT_0046f3f3);
  }
  (*(code *)PTR_sprintf_0046a808)(auStack_60,"wepEnabled%d",param_3);
  uVar1 = (*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_60,&DAT_0044b32c);
  iVar2 = (*(code *)PTR_strcmp_0046a824)(uVar1,"ON");
  if (iVar2 == 0) {
    (*(code *)PTR_sprintf_0046a808)(auStack_60,"length%d",param_3);
    pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_60,&DAT_0044b32c);
    iVar2 = (int)*pcVar3;
    if (iVar2 == 0) {
      pcVar3 = "Key length must exist!";
      goto LAB_00435aa0;
    }
    if (1 < (iVar2 - 0x31U & 0xff)) {
      pcVar3 = "Invalid key length value!";
      goto LAB_00435aa0;
    }
    local_6c[0] = 1;
    if (iVar2 != 0x31) {
      local_6c[0] = 2;
    }
  }
  else {
    local_6c[0] = 0;
  }
  iVar2 = (*(code *)PTR_apmib_set_0046aa28)(3,local_6c);
  if (iVar2 == 0) {
    pcVar3 = "Set WEP MIB error!";
  }
  else {
    if (local_6c[0] == 0) {
      local_6c[1] = 0;
    }
    iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0x19,local_6c + 1);
    if (iVar2 == 0) {
      pcVar3 = "Set MIB_WLAN_ENCRYPT mib error!";
    }
    else {
      if (local_6c[0] == 0) {
        return 0;
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_60,"authType%d",param_3);
      pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_60,&DAT_0044b32c)
      ;
      if (*pcVar3 != '\0') {
        iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar3,&DAT_00453708);
        if (iVar2 == 0) {
          local_6c[2] = 0;
        }
        else {
          iVar2 = (*(code *)PTR_strcmp_0046a824)(pcVar3,"shared");
          local_6c[2] = 1;
          if (iVar2 != 0) {
            local_6c[2] = 2;
          }
        }
        (*(code *)PTR_apmib_set_0046aa28)(0x14,local_6c + 2);
      }
      (*(code *)PTR_sprintf_0046a808)(auStack_60,"format%d",param_3);
      pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_60,&DAT_0044b32c)
      ;
      uVar4 = (int)*pcVar3 - 0x31;
      if (*pcVar3 == 0) {
        pcVar3 = "Key type must exist!";
      }
      else if ((uVar4 & 0xff) < 2) {
        local_70 = uVar4;
        iVar2 = (*(code *)PTR_apmib_set_0046aa28)(0xc,&local_70);
        if (iVar2 != 0) {
          uVar4 = 5;
          if (local_6c[0] == 1) {
            uVar7 = 10;
          }
          else {
            uVar7 = 0x1a;
            uVar4 = 0xd;
          }
          if (*pcVar3 == '1') {
            uVar7 = uVar4;
          }
          (*(code *)PTR_sprintf_0046a808)(auStack_60,"key%d",param_3);
          pcVar5 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)
                                     (param_1,auStack_60,&DAT_0044b32c);
          if (*pcVar5 != '\0') {
            local_28 = pcVar5;
            uVar4 = (*(code *)PTR_strlen_0046a714)(pcVar5);
            uVar6 = 0;
            if (uVar4 != uVar7) {
              (*(code *)PTR_sprintf_0046a808)
                        (param_2,"Invalid key length! Expect length is %d",uVar7);
              return 0xffffffff;
            }
            do {
              pcVar5 = local_28 + uVar6;
              if (uVar4 <= uVar6) goto LAB_00435ab0;
              uVar6 = uVar6 + 1;
            } while (*pcVar5 == '*');
            if (*pcVar3 == '1') {
              (*(code *)PTR_strcpy_0046ac60)(auStack_4c);
            }
            else {
              iVar2 = FUN_00434520(local_28,auStack_4c,uVar7);
              if (iVar2 == 0) {
                pcVar3 = "Invalid wep-key value!";
                goto LAB_00435aa0;
              }
            }
            if (local_6c[0] == 1) {
              (*(code *)PTR_apmib_set_0046aa28)(4,auStack_4c);
              (*(code *)PTR_apmib_set_0046aa28)(5,auStack_4c);
              (*(code *)PTR_apmib_set_0046aa28)(6,auStack_4c);
              uVar1 = 7;
            }
            else {
              (*(code *)PTR_apmib_set_0046aa28)(8,auStack_4c);
              (*(code *)PTR_apmib_set_0046aa28)(9,auStack_4c);
              (*(code *)PTR_apmib_set_0046aa28)(10,auStack_4c);
              uVar1 = 0xb;
            }
            iVar2 = (*(code *)PTR_apmib_set_0046aa28)(uVar1,auStack_4c);
            if (iVar2 == 0) {
              pcVar3 = "Set wep-key error!";
              goto LAB_00435aa0;
            }
          }
LAB_00435ab0:
          if (*(int *)PTR_vwlan_idx_0046a9b0 == 0) {
            (*(code *)PTR_sprintf_0046a808)(auStack_60,"wps_clear_configure_by_reg%d",param_3);
            pcVar3 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,auStack_60,0);
            uVar1 = 0;
            if (*pcVar3 != '\0') {
              uVar1 = (*(code *)PTR_atoi_0046a73c)(pcVar3);
            }
            FUN_00434cb8(uVar1);
          }
          return 0;
        }
        pcVar3 = "Set WEP key type error!";
      }
      else {
        pcVar3 = "Invalid key type value!";
      }
    }
  }
LAB_00435aa0:
  (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar3);
  return 0xffffffff;
}

