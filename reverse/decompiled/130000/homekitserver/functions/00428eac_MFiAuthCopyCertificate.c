/* MFiAuthCopyCertificate @ 00428eac */

int MFiAuthCopyCertificate(int *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort local_28 [6];
  
  if (DAT_006147c4 == 0) {
    iVar1 = (*(code *)PTR_open_006138f8)("/dev/mfi_cp",2);
    if (iVar1 < 0) {
      piVar2 = (int *)(*(code *)PTR___errno_location_0061397c)();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        iVar5 = -0x1a2c;
      }
    }
    else {
      iVar5 = FUN_00428c44(iVar1,0x30,0,0,local_28,2);
      if (iVar5 == 0) {
        uVar4 = (uint)local_28[0];
        iVar5 = -0x1a57;
        if (uVar4 != 0) {
          iVar5 = -0x1a48;
          iVar3 = (*(code *)PTR_malloc_006132d8)(uVar4);
          if (iVar3 != 0) {
            iVar5 = FUN_00428c44(iVar1,0x31,0,0,iVar3,uVar4);
            if (iVar5 == 0) {
              (*(code *)PTR_printf_0061185c)("MFi auth copy certificate done: %d bytes\n",uVar4);
              *param_1 = iVar3;
              *param_2 = uVar4;
            }
            else {
              (*(code *)PTR_free_006119dc)(iVar3);
            }
          }
        }
      }
      (*(code *)PTR_close_0061276c)(iVar1);
      if (iVar5 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar1 = (*(code *)PTR_malloc_006132d8)(DAT_006147c4);
    if (iVar1 != 0) {
      (*(code *)PTR_memcpy_006137d0)(iVar1,DAT_006147c0,DAT_006147c4);
      *param_1 = iVar1;
      *param_2 = DAT_006147c4;
      return 0;
    }
    iVar5 = -0x1a48;
  }
  (*(code *)PTR_printf_0061185c)("### MFi auth copy certificate failed: %d\n",iVar5);
  return iVar5;
}

