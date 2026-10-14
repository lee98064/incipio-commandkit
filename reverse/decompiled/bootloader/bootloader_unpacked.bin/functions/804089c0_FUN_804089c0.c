/* FUN_804089c0 @ 804089c0 */

uint * FUN_804089c0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  if ((param_1 < 1) || (iVar1 = FUN_80406c50(*param_2,0,0x10), iVar1 == 0)) {
    uVar5 = 0xb9000000;
    uVar6 = 0xb8c00000;
    puVar3 = &DAT_b8b10000;
    puVar2 = (uint *)&DAT_b8b00000;
  }
  else {
    uVar5 = 0xba000000;
    if (iVar1 != 1) {
      return (uint *)0x0;
    }
    uVar6 = 0xb8e00000;
    puVar3 = (undefined1 *)0xb8b30000;
    puVar2 = (uint *)&DAT_b8b20000;
  }
  if (((*puVar2 & 0xffff) == 0x10ec) && (*puVar2 >> 0x10 == 0x8196)) {
    puVar2[1] = 0x100007;
    puVar2[0x1e] = puVar2[0x1e] & 0xffffff1f;
    *(undefined4 *)(puVar3 + 4) = 0x100007;
    *(uint *)(puVar3 + 0x10) = uVar6 & 0x1ffffffe | 1;
    *(uint *)(puVar3 + 0x18) = uVar5 & 0x1ffffffb | 4;
    puVar4 = (uint *)(puVar3 + 0x78);
    *puVar4 = *puVar4 & 0xffffff1f;
    *puVar4 = *puVar4 & 0xffff8fff | 0x1000;
    puVar2[7] = 0x20;
    puVar2[8] = 0x20;
    puVar2 = puVar2 + 9;
    *puVar2 = 0x20;
  }
  else {
    FUN_804077a4(s_VID__x__PID__x_8040dcb0);
    puVar2 = (uint *)FUN_804077a4(s_____Read_VID_PID_fail_____8040dcc4);
  }
  return puVar2;
}

