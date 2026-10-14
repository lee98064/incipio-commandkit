/* FUN_00400b30 @ 00400b30 */

void FUN_00400b30(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00415e78[0x5f50] == '\0') {
    if (PTR___cxa_finalize_00415f0c != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00415f0c)(*(undefined4 *)PTR_LOOP_00415e7c);
    }
    puVar1 = PTR_DAT_00415e78;
    puVar4 = PTR_DAT_00415e78 + 0x5dec;
    iVar5 = (int)PTR___DTOR_END___00415e80 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x5f54);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x5f54) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00415ef0 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00415ef0)(PTR___DT_MIPS_BASE_ADDRESS_00415e84 + 0x5de0);
    }
    PTR_DAT_00415e78[0x5f50] = 1;
  }
  return;
}

