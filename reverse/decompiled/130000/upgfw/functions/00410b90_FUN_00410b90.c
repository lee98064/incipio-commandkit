/* FUN_00410b90 @ 00410b90 */

void FUN_00410b90(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_0057d028[-0x1670] == '\0') {
    if (PTR___cxa_finalize_0057e3cc != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0057e3cc)(*(undefined4 *)PTR_LOOP_0057d02c);
    }
    puVar1 = PTR_DAT_0057d028;
    puVar4 = PTR_PTR_0057d034 + -0x6834;
    iVar5 = (int)PTR___DTOR_END___0057d030 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x166c);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x166c) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0057e8cc != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0057e8cc)(PTR_DAT_0057d038 + -0x6840);
    }
    PTR_DAT_0057d028[-0x1670] = 1;
  }
  return;
}

