/* FUN_00403c4c @ 00403c4c */

undefined4 FUN_00403c4c(int param_1)

{
  undefined4 uVar1;
  undefined1 local_88 [12];
  undefined1 local_7c [44];
  int local_50;
  int local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_3c;
  
  local_50 = param_1 + 0x24;
  local_48 = param_1 + 8;
  local_3c = param_1 + 0x34;
  local_40 = local_7c;
  local_44 = local_88;
  if (*(char *)(param_1 + 0x40) != '\0') {
    (*(code *)PTR_RemoveWACBonjourService_0043328c)(param_1);
    (*(code *)PTR_PlatformStopmDNSResponder_004331f8)();
    (*(code *)PTR_HTTPServerStop_004331d8)(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_free_00433088)();
    }
    (*(code *)PTR_PlatformMFiAuthFinalize_00433238)();
    if (*(char *)(param_1 + 0x20) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(local_50);
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(local_48);
    }
    if (*(code **)(param_1 + 0x44) != (code *)0x0) {
      (**(code **)(param_1 + 0x44))(param_1,5);
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00403cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)switchD_00403cd4::switchdataD_0041d2e0)();
  return uVar1;
}

