/* FUN_00410bc0 @ 00410bc0 */

void FUN_00410bc0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_0057d158[-0x1540] == '\0') {
    if (PTR___cxa_finalize_0057e500 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0057e500)(*(undefined4 *)PTR_LOOP_0057d15c);
    }
    puVar1 = PTR_DAT_0057d158;
    puVar4 = PTR_DAT_0057d164 + -0x6704;
    iVar5 = (int)PTR___DTOR_END___0057d160 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x153c);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x153c) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0057ea00 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0057ea00)(PTR_DAT_0057d168 + -0x6710);
    }
    PTR_DAT_0057d158[-0x1540] = 1;
  }
  return;
}

