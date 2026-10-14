/* HKCreatePrivateEventTable @ 0042ee1c */

undefined4 HKCreatePrivateEventTable(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_80 [4];
  undefined4 local_7c;
  undefined4 local_74;
  char local_6a;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  puVar6 = PTR_hapObjects_00613b3c;
  iVar5 = param_1 + 0x14;
  local_38 = auStack_80;
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x18) = iVar5;
  piVar4 = (int *)(puVar6 + 4);
  iVar3 = 0;
  uVar8 = 0;
  do {
    if (*piVar4 == 0) {
      return uVar8;
    }
    iVar7 = 0;
    puVar6 = PTR_hapObjects_00613b3c + (iVar3 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_006137d0)(local_38,puVar6,0x48);
      iVar7 = iVar7 + 1;
      puVar6 = puVar6 + 0x48;
      if (local_6a != '\0') {
        local_34 = local_74;
        local_30 = local_7c;
        puVar1 = (undefined1 *)(*(code *)PTR_calloc_00613a18)(0x1c,1);
        if (puVar1 == (undefined1 *)0x0) {
          uVar8 = 0xffffe5b8;
          break;
        }
        iVar2 = *(int *)(param_1 + 0x14);
        *(undefined4 *)(puVar1 + 4) = local_30;
        *(undefined4 *)(puVar1 + 0xc) = local_34;
        *(undefined4 *)(puVar1 + 8) = 0;
        *puVar1 = 0;
        puVar1[0x10] = 0;
        *(undefined1 **)(iVar2 + 4) = puVar1 + 0x14;
        *(int *)(puVar1 + 0x14) = iVar2;
        *(int *)(puVar1 + 0x18) = iVar5;
        *(undefined1 **)(param_1 + 0x14) = puVar1 + 0x14;
      }
    } while (iVar7 != 0x14);
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0x16a;
    if (iVar3 == 10) {
      return uVar8;
    }
  } while( true );
}

