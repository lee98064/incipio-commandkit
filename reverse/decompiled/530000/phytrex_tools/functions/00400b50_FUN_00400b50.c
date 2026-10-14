/* FUN_00400b50 @ 00400b50 */

void FUN_00400b50(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00416268[0x6340] == '\0') {
    if (PTR___cxa_finalize_004162fc != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_004162fc)(*(undefined4 *)PTR_LOOP_0041626c);
    }
    puVar1 = PTR_DAT_00416268;
    puVar4 = PTR_DAT_00416268 + 0x61dc;
    iVar5 = (int)PTR___DTOR_END___00416270 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x6344);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x6344) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_004162e0 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_004162e0)(PTR___DT_MIPS_BASE_ADDRESS_00416274 + 0x61d0);
    }
    PTR_DAT_00416268[0x6340] = 1;
  }
  return;
}

