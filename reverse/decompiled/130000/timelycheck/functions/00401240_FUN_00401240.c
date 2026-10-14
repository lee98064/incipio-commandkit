/* FUN_00401240 @ 00401240 */

void FUN_00401240(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_0042b078[-0x4de0] == '\0') {
    if (PTR___cxa_finalize_0042b1b4 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0042b1b4)(*(undefined4 *)PTR_LOOP_0042b07c);
    }
    puVar1 = PTR_DAT_0042b078;
    puVar4 = PTR_DAT_0042b078 + -0x5ff8;
    iVar5 = (int)PTR___DTOR_END___0042b080 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x4ddc);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x4ddc) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0042b180 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0042b180)(PTR_DAT_0042b084 + -0x63b0);
    }
    PTR_DAT_0042b078[-0x4de0] = 1;
  }
  return;
}

