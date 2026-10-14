/* FUN_00401220 @ 00401220 */

void FUN_00401220(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00423438[0x35e0] == '\0') {
    if (PTR___cxa_finalize_00423590 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00423590)(*(undefined4 *)PTR_LOOP_0042343c);
    }
    puVar1 = PTR_DAT_00423438;
    puVar4 = PTR_DAT_00423438 + 0x33bc;
    iVar5 = (int)PTR___DTOR_END___00423440 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x35e4);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x35e4) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0042353c != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0042353c)(PTR_LAB_00423444 + 0x33b0);
    }
    PTR_DAT_00423438[0x35e0] = 1;
  }
  return;
}

