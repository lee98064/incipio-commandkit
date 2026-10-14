/* SHA1_Final_compat @ 0040bcdc */

undefined4 SHA1_Final_compat(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_2[7];
  uVar6 = param_2[1];
  uVar5 = uVar6 + iVar2 * 8;
  param_2[1] = uVar5;
  *param_2 = (uint)(uVar5 < uVar6) + *param_2;
  *(undefined1 *)((int)param_2 + iVar2 + 0x20) = 0x80;
  param_2[7] = iVar2 + 1U;
  if (0x38 < iVar2 + 1U) {
    while( true ) {
      uVar5 = param_2[7];
      if (0x3f < uVar5) break;
      *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
      param_2[7] = uVar5 + 1;
    }
    FUN_00407f34(param_2,param_2 + 8);
    param_2[7] = 0;
  }
  while( true ) {
    uVar5 = param_2[7];
    if (0x37 < uVar5) break;
    *(undefined1 *)((int)param_2 + uVar5 + 0x20) = 0;
    param_2[7] = uVar5 + 1;
  }
  iVar4 = *param_2;
  iVar2 = param_2[1];
  *(char *)((int)param_2 + 0x5b) = (char)iVar4;
  *(char *)((int)param_2 + 0x5e) = (char)((uint)iVar2 >> 8);
  *(char *)((int)param_2 + 0x5f) = (char)iVar2;
  *(char *)(param_2 + 0x16) = (char)((uint)iVar4 >> 0x18);
  *(char *)((int)param_2 + 0x59) = (char)((uint)iVar4 >> 0x10);
  *(char *)((int)param_2 + 0x5a) = (char)((uint)iVar4 >> 8);
  *(char *)(param_2 + 0x17) = (char)((uint)iVar2 >> 0x18);
  *(char *)((int)param_2 + 0x5d) = (char)((uint)iVar2 >> 0x10);
  FUN_00407f34(param_2,param_2 + 8);
  iVar2 = 0;
  piVar3 = param_2;
  do {
    iVar2 = iVar2 + 1;
    *param_1 = *(undefined1 *)(piVar3 + 2);
    param_1[1] = (char)*(undefined2 *)(piVar3 + 2);
    param_1[2] = (char)((uint)piVar3[2] >> 8);
    piVar1 = piVar3 + 2;
    piVar3 = piVar3 + 1;
    param_1[3] = (char)*piVar1;
    param_1 = param_1 + 4;
  } while (iVar2 != 5);
  (*(code *)PTR_memset_00433190)(param_2,0,0x60);
  return 0;
}

