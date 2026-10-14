/* check_image_header @ 804084bc */

uint check_image_header(undefined *header,undefined *scratch,uint bank_offset)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = bank_offset + 0x5010000;
  DAT_8040ee6c = uVar5;
  FUN_804077a4(s__s_return_addr__x_bank_offset__x_8040dc6c,s_check_image_header_8040a7b0,uVar5,
               bank_offset);
  uVar2 = validate_kernel_image(uVar5,header);
  if (uVar2 == 0) {
    DAT_8040ee6c = bank_offset + 0x5020000;
    uVar2 = validate_kernel_image(DAT_8040ee6c,header);
    if (uVar2 == 0) {
      DAT_8040ee6c = bank_offset + 0x5030000;
      uVar3 = validate_kernel_image(DAT_8040ee6c,header);
      uVar2 = uVar3;
      if (uVar3 == 0) {
        iVar4 = 0x10000;
        do {
          uVar2 = uVar3;
          DAT_8040ee6c = uVar5;
          if (((iVar4 != 0x10000) && (iVar4 != 0x20000)) && (iVar4 != 0x30000)) {
            uVar2 = validate_kernel_image(uVar5,header);
          }
          uVar5 = uVar5 + 0x1000;
        } while ((iVar4 != 0x50000) && (iVar4 = iVar4 + 0x1000, uVar2 == 0));
      }
    }
  }
  if (uVar2 == 2) {
    uVar5 = bank_offset + 0x50e0000;
    uVar2 = validate_rootfs(uVar5);
    if ((uVar2 == 0) && (uVar2 = validate_rootfs(bank_offset + 0x50f0000), uVar2 == 0)) {
      uVar3 = validate_rootfs(bank_offset + 0x5130000);
      iVar4 = 0xe0000;
      uVar2 = uVar3;
      while (uVar2 == 0) {
        uVar2 = uVar3;
        if (((iVar4 != 0xe0000) && (iVar4 != 0xf0000)) && (iVar4 != 0x130000)) {
          uVar2 = validate_rootfs(uVar5);
        }
        bVar1 = iVar4 == 0x170000;
        iVar4 = iVar4 + 0x10000;
        if (bVar1) {
          return uVar2;
        }
        uVar5 = uVar5 + 0x10000;
      }
    }
  }
  return uVar2;
}

