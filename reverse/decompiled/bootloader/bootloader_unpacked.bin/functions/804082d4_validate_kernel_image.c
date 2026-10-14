/* validate_kernel_image @ 804082d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint validate_kernel_image(uint flash_address,undefined *header)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_8040fdb8 != 1) {
    iVar1 = 0;
    do {
      *(undefined2 *)(header + iVar1) = *(undefined2 *)(&DAT_b8000000 + iVar1 + flash_address);
      iVar1 = iVar1 + 2;
    } while (iVar1 != 0x10);
    local_30 = DAT_8040d438;
    local_2c = DAT_8040d440;
    iVar1 = FUN_80406a80(header,&local_30,4);
    uVar4 = 1;
    if (iVar1 != 0) {
      iVar1 = FUN_80406a80(header,&local_2c,4);
      if (iVar1 != 0) {
        FUN_804079cc(s_no_sys_signature_at__X__8040dc50,flash_address + 0xfb000000);
        return 0;
      }
      uVar4 = 2;
    }
    DAT_8040ee78 = *(int *)(header + 4);
    FUN_80404a94(DAT_8040ee78,flash_address + 0xfb000010,*(undefined4 *)(header + 0xc));
    uVar2 = 0;
    if (*(int *)(header + 0xc) == 0) {
      return uVar4;
    }
    sVar3 = 0;
    do {
      if (((uVar2 & 0xffff) == 0) && (DAT_8040fdbc = DAT_8040fdbc + 1, 0x80000 < DAT_8040fdbc)) {
        DAT_8040fdbc = 0;
        iVar1 = FUN_80407de0(0);
        if (iVar1 == 1) {
          return 0;
        }
      }
      sVar3 = sVar3 + *(short *)(DAT_8040ee78 + uVar2);
      uVar2 = uVar2 + 2;
    } while (uVar2 < *(uint *)(header + 0xc));
    if (sVar3 == 0) {
      return uVar4;
    }
  }
  return 0;
}

