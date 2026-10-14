/* FUN_00400720 @ 00400720 */

void FUN_00400720(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00410ee8[0xf50] == '\0') {
    if (PTR___cxa_finalize_00410f30 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00410f30)(*(undefined4 *)PTR_LOOP_00410eec);
    }
    puVar1 = PTR_DAT_00410ee8;
    puVar4 = PTR_DAT_00410ee8 + 0xeac;
    iVar5 = (int)PTR___DTOR_END___00410ef0 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0xf54);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0xf54) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00410f28 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00410f28)(PTR___DT_MIPS_BASE_ADDRESS_00410ef4 + 0xea0);
    }
    PTR_DAT_00410ee8[0xf50] = 1;
  }
  return;
}

