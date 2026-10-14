/* FUN_0041aeb0 @ 0041aeb0 */

void FUN_0041aeb0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00611498[0x3cc0] == '\0') {
    if (PTR___cxa_finalize_00613384 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00613384)(*(undefined4 *)PTR_LOOP_0061149c);
    }
    puVar1 = PTR_DAT_00611498;
    puVar4 = PTR_DAT_006114a4 + -0x2844;
    iVar5 = (int)PTR___DTOR_END___006114a0 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3cc4);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3cc4) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00613b60 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00613b60)(PTR_DAT_006114a8 + -0x2850);
    }
    PTR_DAT_00611498[0x3cc0] = 1;
  }
  return;
}

