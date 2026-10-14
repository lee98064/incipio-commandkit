/* FUN_0040441c @ 0040441c */

undefined4 FUN_0040441c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_28 [2];
  
  local_28[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x28f,local_28);
  iVar1 = (*(code *)PTR_atoi_0042b0c4)(&DAT_0042a0b4);
  uVar3 = 0xffffffff;
  if (local_28[0] != iVar1) {
    piVar4 = &DAT_0042a954;
    (*(code *)PTR_puts_0042b1b8)("MIB Version update");
    iVar1 = 0;
    while( true ) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x41;
      if (iVar2 == 0) break;
      iVar2 = iVar1 * 0x104;
      iVar1 = iVar1 + 1;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"flash",&DAT_00417d6c,s_MFI_WAC_DEVICE_NAME_0042a958 + iVar2,
                 s_USER_DEF_WACNAME_0042a9d8 + iVar2,"");
    }
    piVar4 = &DAT_0042a030;
    iVar1 = 0;
    while( true ) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x41;
      if (iVar2 == 0) break;
      iVar2 = iVar1 * 0x104;
      iVar1 = iVar1 + 1;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"flash",&DAT_00417d6c,s_MIB_VER_0042a034 + iVar2,&DAT_0042a0b4 + iVar2,"");
    }
    uVar3 = 0;
  }
  return uVar3;
}

