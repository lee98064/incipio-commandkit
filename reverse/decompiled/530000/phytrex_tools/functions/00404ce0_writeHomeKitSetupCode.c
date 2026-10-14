/* writeHomeKitSetupCode @ 00404ce0 */

undefined4 writeHomeKitSetupCode(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [17];
  undefined1 local_b;
  
  (*(code *)PTR_memcpy_00416304)(auStack_20,&DAT_00406140,5);
  uVar1 = (*(code *)PTR_strlen_00416290)(param_1);
  uVar1 = FUN_00404718(param_1,uVar1);
  (*(code *)PTR_strcpy_0041632c)(auStack_1c,uVar1);
  local_b = 0;
  iVar2 = (*(code *)PTR_open_0041628c)("/dev/mtdblock2",2);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_00416300)("open fail........");
  }
  else {
    iVar3 = (*(code *)PTR_lseek_004162ec)(iVar2,0x10000,0);
    if (iVar3 != -1) {
      iVar3 = (*(code *)PTR_write_004162dc)(iVar2,auStack_20,0x18);
      if (iVar3 != -1) {
        (*(code *)PTR_puts_00416300)("[HOMEKIT] Store setup code to flash success");
        if (iVar2 != 0) {
          (*(code *)PTR_close_00416284)(iVar2);
        }
        return 1;
      }
      (*(code *)PTR_puts_00416300)("write fail........");
    }
  }
  if (iVar2 != 0) {
    (*(code *)PTR_close_00416284)(iVar2);
  }
  return 0;
}

