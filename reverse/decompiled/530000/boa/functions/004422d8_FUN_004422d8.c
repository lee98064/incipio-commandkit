/* FUN_004422d8 @ 004422d8 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004422d8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_40;
  int local_3c [10];
  
  pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"opMode",&DAT_0044b32c);
  if ((*pcVar2 == 0) ||
     (local_40 = *pcVar2 + -0x30, iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xc0,&local_40),
     iVar3 != 0)) {
    if (local_40 != 2) {
      local_3c[2] = 0;
      (*(code *)PTR_apmib_set_0046aa28)(0xfa,local_3c + 2);
      (*(code *)PTR_apmib_set_0046aa28)(0xfc,local_3c + 2);
      return 0;
    }
    pcVar2 = (char *)(*(code *)PTR_req_get_cstream_var_0046a674)(param_1,"wispWanId",&DAT_0044b32c);
    if (*pcVar2 == 0) {
      local_3c[1] = 1;
      local_3c[3] = 0;
      local_3c[4] = 0;
      local_3c[5] = 0;
      local_3c[6] = 0;
      local_3c[7] = 0;
      local_3c[0] = 0;
      (*(code *)PTR_apmib_save_wlanIdx_0046a8ec)();
      piVar5 = local_3c + 1;
      piVar1 = local_3c + 3;
      (*(code *)PTR_apmib_set_0046aa28)(0xfa,piVar5);
      (*(code *)PTR_sprintf_0046a808)(piVar1,"wlan%d",local_3c[0]);
      (*(code *)PTR_SetWlan_idx_0046ab70)(piVar1);
      local_3c[2] = 0;
      (*(code *)PTR_apmib_set_0046aa28)(0x3b,local_3c + 2);
      (*(code *)PTR_sprintf_0046a808)(piVar1,"wlan%d-vxd",local_3c[0]);
      (*(code *)PTR_SetWlan_idx_0046ab70)(piVar1);
      local_3c[2] = 1;
      (*(code *)PTR_apmib_set_0046aa28)(0x3b,local_3c + 2);
      local_3c[1] = 0;
    }
    else {
      local_3c[0] = *pcVar2 + -0x30;
      iVar3 = (*(code *)PTR_apmib_set_0046aa28)(0xc1,local_3c);
      if (iVar3 == 0) {
        pcVar2 = "Set WISP WAN Id error!";
        goto LAB_004423c8;
      }
      local_3c[2] = 1;
      (*(code *)PTR_apmib_save_wlanIdx_0046a8ec)();
      piVar5 = local_3c + 2;
      if (local_3c[0] == 0) {
        (*(code *)PTR_apmib_set_0046aa28)(0xfa,piVar5);
        uVar4 = 0xfc;
      }
      else {
        (*(code *)PTR_apmib_set_0046aa28)(0xfc,piVar5);
        uVar4 = 0xfa;
      }
      local_3c[2] = 0;
      piVar1 = local_3c + 3;
      (*(code *)PTR_apmib_set_0046aa28)(uVar4,piVar5);
      (*(code *)PTR_sprintf_0046a808)(piVar1,"wlan%d",local_3c[0]);
      (*(code *)PTR_SetWlan_idx_0046ab70)(piVar1);
      local_3c[1] = 0;
      (*(code *)PTR_apmib_set_0046aa28)(0x3b,local_3c + 1);
      (*(code *)PTR_sprintf_0046a808)(piVar1,"wlan%d-vxd",local_3c[0]);
      (*(code *)PTR_SetWlan_idx_0046ab70)(piVar1);
      local_3c[1] = 1;
      (*(code *)PTR_apmib_set_0046aa28)(0x3b,local_3c + 1);
      local_3c[2] = 0;
      piVar5 = local_3c + 2;
    }
    (*(code *)PTR_apmib_set_0046aa28)(0x16,piVar5);
    (*(code *)PTR_apmib_recov_wlanIdx_0046aa00)();
    uVar4 = 0;
  }
  else {
    pcVar2 = "Set Opmode error!";
LAB_004423c8:
    (*(code *)PTR_strcpy_0046ac60)(param_2,pcVar2);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

