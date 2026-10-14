/* FUN_00404288 @ 00404288 */

undefined4 FUN_00404288(int param_1)

{
  undefined4 uVar1;
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  int local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  int local_38;
  
  local_48 = param_1 + 8;
  local_38 = param_1 + 0x34;
  local_40 = local_50;
  local_44 = local_60;
  if (*(char *)(param_1 + 0x40) != '\0') {
    (*(code *)PTR_RemoveWACBonjourService_0043328c)(param_1);
    (*(code *)PTR_PlatformStopmDNSResponder_004331f8)();
    (*(code *)PTR_HTTPServerStop_004331d8)(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 4) != 0) {
      (*(code *)PTR_free_00433088)();
    }
    (*(code *)PTR_PlatformMFiAuthFinalize_00433238)();
    if (*(char *)(param_1 + 0x20) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(param_1 + 0x24);
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      (*(code *)PTR_sem_destroy_00433288)(param_1 + 8);
    }
    if (*(code **)(param_1 + 0x44) != (code *)0x0) {
      (**(code **)(param_1 + 0x44))(param_1,5);
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00404310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)switchD_00404310::switchdataD_0041d500)();
  return uVar1;
}

