/* FUN_00403d3c @ 00403d3c */

undefined4 FUN_00403d3c(int param_1,int *param_2,int *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_138 [256];
  uint local_38;
  int local_34;
  int local_30;
  char *local_2c;
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 == 0) {
    local_30 = 0;
    uVar7 = 0xffffe5cf;
  }
  else {
    local_38 = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      local_38 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x1c),0xff);
      local_38 = local_38 & 0xff;
      *param_3 = local_38 + 2;
    }
    uVar15 = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar15 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x24),0xff);
      uVar15 = uVar15 & 0xff;
      *param_3 = *param_3 + 2 + uVar15;
    }
    uVar14 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      uVar14 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x20),0xff);
      uVar14 = uVar14 & 0xff;
      *param_3 = *param_3 + 2 + uVar14;
    }
    uVar10 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar10 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x10),0xff);
      uVar10 = uVar10 & 0xff;
      *param_3 = *param_3 + 2 + uVar10;
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar9 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x14),0xff);
      uVar9 = uVar9 & 0xff;
      *param_3 = *param_3 + 2 + uVar9;
    }
    uVar12 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar12 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x18),0xff);
      uVar12 = uVar12 & 0xff;
      *param_3 = *param_3 + 2 + uVar12;
    }
    uVar8 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar8 = (*(code *)PTR_strnlen_00433234)(*(int *)(param_1 + 0x30),0xff);
      uVar8 = uVar8 & 0xff;
      *param_3 = *param_3 + 2 + uVar8;
    }
    uVar6 = 0;
    local_34 = (*(code *)PTR_calloc_00433224)(*(undefined1 *)(param_1 + 0x2c),4);
    local_30 = local_34;
    if (local_34 == 0) {
      uVar7 = 0xffffe5b8;
    }
    else {
      for (; uVar6 < *(byte *)(param_1 + 0x2c); uVar6 = uVar6 + 1 & 0xff) {
        local_2c = (char *)(uVar6 * 4);
        iVar13 = (*(code *)PTR_strnlen_00433234)
                           (*(undefined4 *)((char *)(uVar6 * 4) + *(int *)(param_1 + 0x28)),0xff);
        iVar4 = *param_3;
        *(int *)(local_2c + local_34) = iVar13;
        *param_3 = iVar4 + 2 + iVar13;
      }
      puVar2 = (undefined1 *)(*(code *)PTR_calloc_00433224)(*param_3,1);
      *param_2 = (int)puVar2;
      if (puVar2 == (undefined1 *)0x0) {
        uVar7 = 0xffffe5b8;
      }
      else {
        if (local_38 != 0) {
          *puVar2 = 8;
          puVar2[1] = (char)local_38;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + local_38;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x1c),local_38);
        }
        if (uVar15 != 0) {
          *puVar2 = 5;
          puVar2[1] = (char)uVar15;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + uVar15;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x24),uVar15);
        }
        if (uVar14 != 0) {
          *puVar2 = 7;
          puVar2[1] = (char)uVar14;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + uVar14;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x20),uVar14);
        }
        if (uVar12 != 0) {
          *puVar2 = 10;
          puVar2[1] = (char)uVar12;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + uVar12;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x18),uVar12);
        }
        if (uVar10 != 0) {
          *puVar2 = 2;
          puVar2[1] = (char)uVar10;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + uVar10;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x10),uVar10);
        }
        if (uVar9 != 0) {
          *puVar2 = 3;
          puVar2[1] = (char)uVar9;
          puVar5 = puVar2 + 2;
          puVar2 = puVar5 + uVar9;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x14),uVar9);
        }
        uVar15 = 0;
        pcVar3 = "echo %s >> /var/eaProtocols";
        while( true ) {
          iVar13 = uVar15 * 4;
          piVar11 = (int *)(local_34 + iVar13);
          puVar5 = puVar2 + 2;
          if (*(byte *)(param_1 + 0x2c) <= uVar15) break;
          uVar15 = uVar15 + 1 & 0xff;
          local_2c = pcVar3;
          (*(code *)PTR_sprintf_00433144)
                    (auStack_138,pcVar3,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar13));
          (*(code *)PTR_system_00433284)(auStack_138);
          *puVar2 = 6;
          puVar1 = PTR_memcpy_004332a8;
          puVar2[1] = (char)*piVar11;
          (*(code *)puVar1)(puVar5,*(undefined4 *)(*(int *)(param_1 + 0x28) + iVar13),*piVar11);
          puVar2 = puVar5 + *piVar11;
          pcVar3 = local_2c;
        }
        if (uVar8 != 0) {
          (*(code *)PTR_sprintf_00433144)
                    (auStack_138,"echo %s >> /var/eaBundleID",*(undefined4 *)(param_1 + 0x30));
          (*(code *)PTR_system_00433284)(auStack_138);
          *puVar2 = 1;
          puVar2[1] = (char)uVar8;
          (*(code *)PTR_memcpy_004332a8)(puVar5,*(undefined4 *)(param_1 + 0x30),uVar8);
          puVar2 = puVar5 + uVar8;
        }
        uVar7 = 0;
        if (*param_2 == (int)puVar2 - *param_3) goto LAB_00404244;
        uVar7 = 0xffffe5a9;
      }
    }
  }
  if (*param_2 != 0) {
    (*(code *)PTR_free_00433088)();
  }
  if (local_30 == 0) {
    return uVar7;
  }
LAB_00404244:
  (*(code *)PTR_free_00433088)(local_30);
  return uVar7;
}

