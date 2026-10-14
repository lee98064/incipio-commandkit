/* FUN_00409b7c @ 00409b7c */

void FUN_00409b7c(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined1 local_ec [20];
  uint local_d8;
  uint local_d4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [104];
  
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  (*(code *)PTR_memset_00423490)(auStack_d0,0,0x40);
  puVar2 = PTR_apmib_get_0042354c;
  puVar1 = PTR_vwlan_idx_00423500;
  *(int *)PTR_wlan_idx_004234ec = param_1;
  uVar6 = *(undefined4 *)puVar1;
  *(undefined4 *)puVar1 = 0;
  (*(code *)puVar2)(0x16,&local_f8);
  (*(code *)PTR_sprintf_0042344c)(auStack_d0,"/var/wlsch.conf%d",param_1);
  (*(code *)PTR_unlink_004234d8)(auStack_d0);
  if (local_f8 == 0) {
    (*(code *)PTR_apmib_get_0042354c)(0x1f7,&local_f4);
    (*(code *)PTR_apmib_get_0042354c)(0x1f8,&local_f0);
    if (local_f4 == 1) {
      iVar5 = 1;
      if (0 < local_f0) {
        for (iVar4 = 1; iVar4 <= local_f0; iVar4 = iVar4 + 1) {
          local_ec[0] = (undefined1)iVar4;
          (*(code *)PTR_apmib_get_0042354c)(0x81f9,local_ec);
          (*(code *)PTR_memset_00423490)(auStack_90,0,100);
          if (local_d8 >> 0x10 == 1) {
            if (((local_d8 & 0xffff) != 0) || (local_d4._0_2_ != 0)) {
              (*(code *)PTR_sprintf_0042344c)
                        (auStack_90,"%d,%d,%d,%d\n",iVar4,local_d4 & 0xffff,local_d8 & 0xffff,
                         local_d4 >> 0x10);
              (*(code *)PTR_sprintf_0042344c)(auStack_d0,"/var/wlsch.conf%d",param_1);
              uVar3 = 2;
              if (iVar5 == 1) {
                uVar3 = 1;
              }
              (*(code *)PTR_write_line_to_file_00423554)(auStack_d0,uVar3,auStack_90);
              iVar5 = 2;
            }
          }
        }
      }
    }
    if (param_1 != 0) goto LAB_00409e00;
    (*(code *)PTR_sprintf_0042344c)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  else {
    if (param_1 != 0) goto LAB_00409e00;
    (*(code *)PTR_sprintf_0042344c)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  (*(code *)PTR_system_00423558)(auStack_d0);
LAB_00409e00:
  *(undefined4 *)PTR_vwlan_idx_00423500 = 0;
  *(undefined4 *)PTR_wlan_idx_004234ec = uVar6;
  return;
}

