/* PlatformMFiAuthCreateSignature @ 00403858 */

int PlatformMFiAuthCreateSignature(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  undefined1 auStack_3e [34];
  
  iVar1 = (*(code *)PTR_open_004330c8)("/dev/mfi_cp",2);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_004330f8)();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -0x1a2c;
    }
    goto LAB_00403a54;
  }
  if (param_2 == 0x14) {
    local_40 = 0x14;
    (*(code *)PTR_memcpy_004332a8)(auStack_3e,param_1,0x14);
    iVar5 = FUN_004033ac(iVar1,0x20,&local_40,0x16,0,0);
    if (iVar5 == 0) {
      local_40 = CONCAT11(1,(undefined1)local_40);
      iVar5 = FUN_004033ac(iVar1,0x10,&local_40,1,0,0);
      if ((((iVar5 == 0) && (iVar5 = FUN_004033ac(iVar1,0x10,0,0,&local_40,1), iVar5 == 0)) &&
          (iVar5 = -0x1a2c, -1 < (short)local_40)) &&
         (iVar5 = FUN_004033ac(iVar1,0x11,0,0,&local_40,2), iVar5 == 0)) {
        uVar4 = (uint)local_40;
        if (uVar4 == 0) goto LAB_00403a9c;
        iVar5 = -0x1a48;
        iVar3 = (*(code *)PTR_malloc_00433280)(uVar4);
        if (iVar3 != 0) {
          iVar5 = FUN_004033ac(iVar1,0x12,0,0,iVar3,uVar4);
          if (iVar5 == 0) {
            (*(code *)PTR_printf_004332e4)("MFi auth created signature:%p, len=%d\n",iVar3,uVar4);
            *param_3 = iVar3;
            *param_4 = uVar4;
          }
          else {
            (*(code *)PTR_free_00433088)(iVar3);
          }
        }
      }
    }
  }
  else {
LAB_00403a9c:
    iVar5 = -0x1a57;
  }
  (*(code *)PTR_close_00433098)(iVar1);
  if (iVar5 == 0) {
    return 0;
  }
LAB_00403a54:
  (*(code *)PTR_printf_004332e4)("### MFi auth create signature failed: %d\n",iVar5);
  return iVar5;
}

