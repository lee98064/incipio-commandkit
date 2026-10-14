/* find_bank_header @ 80408028 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint find_bank_header(undefined *header,uint bank_offset,undefined *where)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = bank_offset + 0x5010000;
  uVar2 = probe_kernel_header(uVar6,header);
  uVar5 = uVar6;
  if (uVar2 == 0) {
    uVar2 = probe_kernel_header(bank_offset + 0x5020000,header);
    uVar5 = bank_offset + 0x5020000;
    if (uVar2 == 0) {
      uVar3 = probe_kernel_header(bank_offset + 0x5030000,header);
      iVar4 = 0x10000;
      uVar5 = bank_offset + 0x5030000;
      uVar2 = uVar3;
      while (uVar2 == 0) {
        uVar2 = uVar3;
        if (((iVar4 != 0x10000) && (iVar4 != 0x20000)) && (iVar4 != 0x30000)) {
          uVar2 = probe_kernel_header(uVar6,header);
        }
        bVar1 = iVar4 == 0x50000;
        iVar4 = iVar4 + 0x1000;
        uVar5 = uVar6;
        if (bVar1) {
          if (uVar2 == 0) {
            return 0;
          }
          break;
        }
        uVar6 = uVar6 + 0x1000;
      }
    }
  }
  *(uint *)where = uVar5;
  return uVar2;
}

