/* asp_init @ 004129b0 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void asp_init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [16];
  
  puVar3 = PTR_wlan_num_0046a8f0;
  puVar2 = PTR_sprintf_0046a808;
  puVar1 = PTR_root_temp_0046a758;
  *(undefined4 *)PTR_root_temp_0046a758 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)puVar3 = 0;
  (*(code *)puVar2)(auStack_1c,"wlan%d",0);
  iVar4 = (*(code *)PTR_getWlStaNum_0046abb4)(auStack_1c,auStack_20);
  if (-1 < iVar4) {
    *(int *)puVar3 = *(int *)puVar3 + 1;
  }
  if (*(int *)PTR_wlan_num_0046a8f0 == 0) {
    *(undefined4 *)PTR_wlan_num_0046a8f0 = 1;
  }
  puVar2 = PTR_root_temp_0046a758;
  puVar1 = PTR_apmib_init_0046a70c;
  vwlan_num = 5;
  *(undefined4 *)PTR_root_temp_0046a758 = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  iVar4 = (*(code *)puVar1)();
  if (iVar4 == 0) {
    (*(code *)PTR_printf_0046ac28)("Initialize AP MIB failed!%s:%d\n","asp_init",0x31a);
  }
  else {
    (*(code *)PTR_save_cs_to_file_0046a8f8)();
    (*(code *)PTR_apmib_get_0046aadc)(0x68,&DAT_004685c0);
    puVar2 = PTR_strcpy_0046ac60;
    puVar1 = PTR_WLAN_IF_0046a890;
    *(undefined **)PTR_WAN_IF_0046a74c = &DAT_0044bfdc;
    *(char **)PTR_BRIDGE_IF_0046abe0 = "br0";
    *(undefined **)PTR_ELAN_IF_0046a82c = &DAT_0044bfe4;
    *(undefined **)PTR_ELAN2_IF_0046a744 = &DAT_0044bfec;
    *(undefined **)PTR_ELAN3_IF_0046a83c = &DAT_0044bff4;
    *(undefined **)PTR_ELAN4_IF_0046a7dc = &DAT_0044bffc;
    *(undefined **)PTR_PPPOE_IF_0046a780 = &DAT_0044c004;
    (*(code *)puVar2)(puVar1,"wlan0");
    DAT_0046f050 = (*(code *)PTR_malloc_0046ab14)(0x1000);
    if (DAT_0046f050 == 0) {
      (*(code *)PTR_exit_0046a75c)(0);
      return;
    }
  }
  return;
}

