/* validate_rootfs @ 80408140 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint validate_rootfs(uint flash_address)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  short sVar5;
  undefined2 local_38 [4];
  int local_30;
  
  if (DAT_8040fdb8 == 1) {
    uVar3 = 0;
  }
  else {
    puVar1 = local_38;
    puVar4 = (undefined2 *)(&DAT_b8000000 + flash_address);
    do {
      *puVar1 = *puVar4;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    } while (puVar1 != (undefined2 *)&stack0xffffffd8);
    iVar2 = FUN_80406a80(local_38,&DAT_8040d36c,4);
    if ((iVar2 == 0) || (iVar2 = FUN_80406a80(local_38,&DAT_8040dc0c,4), iVar2 == 0)) {
      uVar3 = 0;
      if (local_30 != -0x282) {
        sVar5 = 0;
        do {
          DAT_8040fdbc = DAT_8040fdbc + 1;
          if (0x80000 < DAT_8040fdbc) {
            DAT_8040fdbc = 0;
            iVar2 = FUN_80407de0(0);
            if (iVar2 == 1) {
              return 0;
            }
          }
          sVar5 = sVar5 + *(short *)((int)(&DAT_b8000000 + flash_address) + uVar3);
          uVar3 = uVar3 + 2;
        } while (uVar3 < local_30 + 0x282U);
        if (sVar5 != 0) {
          FUN_804079cc(s_rootfs_checksum_error_at__X__8040dc30,flash_address + 0xfb000000);
          return 0;
        }
      }
      uVar3 = 1;
    }
    else {
      FUN_804079cc(s_no_rootfs_signature_at__X__8040dc14,flash_address + 0xfb000000);
      uVar3 = 0;
    }
  }
  return uVar3;
}

