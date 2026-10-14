/* probe_kernel_header @ 80407f78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint probe_kernel_header(uint flash_address,undefined *header)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = 0;
  do {
    *(undefined2 *)(header + iVar2) = *(undefined2 *)(&DAT_b8000000 + iVar2 + flash_address);
    iVar2 = iVar2 + 2;
  } while (iVar2 != 0x10);
  local_10 = DAT_8040d438;
  local_c = DAT_8040d440;
  iVar2 = FUN_80406a80(header,&local_10,4);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_80406a80(header,&local_c,4);
    uVar1 = 2;
    if (iVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

