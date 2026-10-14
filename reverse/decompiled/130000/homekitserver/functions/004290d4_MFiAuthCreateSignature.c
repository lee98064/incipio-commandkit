/* MFiAuthCreateSignature @ 004290d4 */

int MFiAuthCreateSignature(undefined4 param_1,int param_2,int *param_3,uint *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  undefined1 auStack_3e [34];
  
  iVar1 = (*(code *)PTR_open_006138f8)("/dev/mfi_cp",2);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      iVar5 = -0x1a2c;
    }
  }
  else {
    if (param_2 == 0x14) {
      local_40 = 0x14;
      (*(code *)PTR_memcpy_006137d0)(auStack_3e,param_1,0x14);
      iVar5 = FUN_00428c44(iVar1,0x20,&local_40,0x16,0,0);
      if (iVar5 == 0) {
        local_40 = CONCAT11(1,(undefined1)local_40);
        iVar5 = FUN_00428c44(iVar1,0x10,&local_40,1,0,0);
        if ((((iVar5 == 0) && (iVar5 = FUN_00428c44(iVar1,0x10,0,0,&local_40,1), iVar5 == 0)) &&
            (iVar5 = -0x1a2c, -1 < (short)local_40)) &&
           (iVar5 = FUN_00428c44(iVar1,0x11,0,0,&local_40,2), iVar5 == 0)) {
          uVar4 = (uint)local_40;
          iVar5 = -0x1a57;
          if (uVar4 != 0) {
            iVar5 = -0x1a48;
            iVar3 = (*(code *)PTR_malloc_006132d8)(uVar4);
            if (iVar3 != 0) {
              iVar5 = FUN_00428c44(iVar1,0x12,0,0,iVar3,uVar4);
              if (iVar5 == 0) {
                (*(code *)PTR_printf_0061185c)
                          ("MFi auth created signature:%p, len=%d\n",iVar3,uVar4);
                *param_3 = iVar3;
                *param_4 = uVar4;
              }
              else {
                (*(code *)PTR_free_006119dc)(iVar3);
              }
            }
          }
        }
      }
    }
    else {
      iVar5 = -0x1a57;
    }
    (*(code *)PTR_close_0061276c)(iVar1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  (*(code *)PTR_printf_0061185c)("### MFi auth create signature failed: %d\n",iVar5);
  return iVar5;
}

