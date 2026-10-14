/* FUN_0042d034 @ 0042d034 */

undefined4 FUN_0042d034(undefined1 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(param_2 + 9);
  *param_2 = (ulonglong)uVar2 * 8 + *param_2;
  *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0x80;
  *(uint *)(param_2 + 9) = uVar2 + 1;
  if (0x70 < uVar2 + 1) {
    while( true ) {
      uVar2 = *(uint *)(param_2 + 9);
      if (0x7f < uVar2) break;
      *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
      *(uint *)(param_2 + 9) = uVar2 + 1;
    }
    FUN_00429abc(param_2,(int)param_2 + 0x4c);
    *(undefined4 *)(param_2 + 9) = 0;
  }
  while( true ) {
    uVar2 = *(uint *)(param_2 + 9);
    if (0x77 < uVar2) break;
    *(undefined1 *)((int)param_2 + uVar2 + 0x4c) = 0;
    *(uint *)(param_2 + 9) = uVar2 + 1;
  }
  uVar5 = *(undefined4 *)param_2;
  uVar3 = (undefined4)*param_2;
  *(char *)((int)param_2 + 199) = (char)uVar5;
  *(char *)((int)param_2 + 0xca) = (char)((uint)uVar3 >> 8);
  *(char *)((int)param_2 + 0xcb) = (char)uVar3;
  *(char *)((int)param_2 + 0xc4) = (char)((uint)uVar5 >> 0x18);
  *(char *)((int)param_2 + 0xc5) = (char)((uint)uVar5 >> 0x10);
  *(char *)((int)param_2 + 0xc6) = (char)((uint)uVar5 >> 8);
  *(char *)(param_2 + 0x19) = (char)((uint)uVar3 >> 0x18);
  *(char *)((int)param_2 + 0xc9) = (char)((uint)uVar3 >> 0x10);
  FUN_00429abc(param_2,(int)param_2 + 0x4c);
  iVar6 = 0;
  plVar4 = param_2;
  do {
    iVar6 = iVar6 + 1;
    *param_1 = *(undefined1 *)(plVar4 + 1);
    param_1[1] = (char)*(undefined2 *)(plVar4 + 1);
    param_1[2] = (char)((uint)*(undefined4 *)(plVar4 + 1) >> 8);
    param_1[3] = (char)*(undefined4 *)(plVar4 + 1);
    param_1[4] = *(undefined1 *)((int)plVar4 + 0xc);
    param_1[5] = (char)*(undefined2 *)((int)plVar4 + 0xc);
    param_1[6] = (char)((uint)*(undefined4 *)((int)plVar4 + 0xc) >> 8);
    puVar1 = (undefined4 *)((int)plVar4 + 0xc);
    plVar4 = plVar4 + 1;
    param_1[7] = (char)*puVar1;
    param_1 = param_1 + 8;
  } while (iVar6 != 8);
  (*(code *)PTR_memset_0061223c)(param_2,0,0xd0);
  return 0;
}

