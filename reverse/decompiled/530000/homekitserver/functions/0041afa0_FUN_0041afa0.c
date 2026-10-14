/* FUN_0041afa0 @ 0041afa0 */

void FUN_0041afa0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00612328[0x4b60] == '\0') {
    if (PTR___cxa_finalize_00614228 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00614228)(*(undefined4 *)PTR_LOOP_0061232c);
    }
    puVar1 = PTR_DAT_00612328;
    puVar4 = PTR_DAT_00612334 + -0x19a4;
    iVar5 = (int)PTR___DTOR_END___00612330 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x4b64);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x4b64) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00614a08 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00614a08)(PTR_DAT_00612338 + -0x19b0);
    }
    PTR_DAT_00612328[0x4b60] = 1;
  }
  return;
}

