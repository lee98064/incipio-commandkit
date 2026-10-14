/* FUN_00401db0 @ 00401db0 */

void FUN_00401db0(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00433058[0x3320] == '\0') {
    if (PTR___cxa_finalize_00433290 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00433290)(*(undefined4 *)PTR_LOOP_0043305c);
    }
    puVar1 = PTR_DAT_00433058;
    puVar4 = PTR_DAT_00433058 + 0x3008;
    iVar5 = (int)PTR___DTOR_END___00433060 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3324);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3324) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00433220 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00433220)(PTR_t_in_1208__00433064 + 0x2d50);
    }
    PTR_DAT_00433058[0x3320] = 1;
  }
  return;
}

