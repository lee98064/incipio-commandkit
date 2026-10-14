/* FUN_00401a30 @ 00401a30 */

void FUN_00401a30(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_00423388[0x3600] == '\0') {
    if (PTR___cxa_finalize_00423560 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_00423560)(*(undefined4 *)PTR_LOOP_0042338c);
    }
    puVar1 = PTR_DAT_00423388;
    puVar4 = PTR_DAT_00423388 + 0x24ec;
    iVar5 = (int)PTR___DTOR_END___00423390 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + 0x3604);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + 0x3604) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_00423518 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_00423518)
                (PTR_s_nal_SIGTERM____0040ffd4_0x2c_00423394 + 0x24e0);
    }
    PTR_DAT_00423388[0x3600] = 1;
  }
  return;
}

