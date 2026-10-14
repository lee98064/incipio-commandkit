/* select_boot_bank @ 804086b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint select_boot_bank(int full_validation)

{
  uint uVar1;
  uint found;
  uint uVar2;
  uint bank_offset;
  uint bank_offset_00;
  undefined4 uVar3;
  uint uVar4;
  undefined auStack_50 [16];
  undefined auStack_40 [16];
  undefined auStack_30 [8];
  undefined auStack_28 [4];
  undefined auStack_24 [4];
  
  uVar1 = find_bank_header(auStack_50,0,auStack_28);
  found = find_bank_header(auStack_40,0x400000,auStack_24);
  uVar2 = normalize_bankmark(uVar1,auStack_50);
  DAT_8040fdb4 = normalize_bankmark(found,auStack_40);
  if (uVar2 < DAT_8040fdb4) {
    DAT_8040fdb0 = 2;
    bank_offset = 0x400000;
    uVar3 = 1;
    bank_offset_00 = 0;
    uVar4 = uVar2;
  }
  else {
    DAT_8040fdb0 = 1;
    bank_offset = 0;
    uVar3 = 2;
    bank_offset_00 = 0x400000;
    uVar4 = DAT_8040fdb4;
    DAT_8040fdb4 = uVar2;
  }
  FUN_804079cc(s_bootbank_is__d__bankmark__X_8040dc90,DAT_8040fdb0,DAT_8040fdb4);
  if (full_validation == 0) {
    if (uVar1 == 0) {
      uVar1 = (uint)(found != 0);
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = check_image_header(auStack_40,auStack_30,bank_offset);
    if ((uVar1 == 0) &&
       (uVar1 = check_image_header(auStack_40,auStack_30,bank_offset_00), uVar1 != 0)) {
      DAT_8040fdb0 = uVar3;
      DAT_8040fdb4 = uVar4;
    }
  }
  return uVar1;
}

