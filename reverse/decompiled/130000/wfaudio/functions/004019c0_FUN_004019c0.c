/* FUN_004019c0 @ 004019c0 */

void FUN_004019c0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_004230a8[0x3320] == '\0') {
    if (PTR___cxa_finalize_00423278 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00423278)(*(undefined4 *)PTR_LOOP_004230ac);
    }
    puVar1 = PTR_DAT_004230a8;
    puVar4 = PTR_DAT_004230a8 + 0x220c;
    iVar5 = (int)PTR___DTOR_END___004230b0 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3324);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3324) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00423230 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00423230)(PTR_s_s__0040ffd4_0x2c_004230b4 + 0x2200);
    }
    PTR_DAT_004230a8[0x3320] = 1;
  }
  return;
}

