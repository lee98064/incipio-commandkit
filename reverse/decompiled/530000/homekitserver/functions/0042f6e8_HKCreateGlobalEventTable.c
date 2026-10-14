/* HKCreateGlobalEventTable @ 0042f6e8 */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 HKCreateGlobalEventTable(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_6c;
  char local_62;
  undefined4 local_30;
  undefined4 local_2c;
  
  DAT_006156fc = &DAT_006156fc;
  DAT_00615700 = &DAT_006156fc;
  piVar3 = (int *)(PTR_hapObjects_006149e4 + 4);
  iVar2 = 0;
  uVar6 = 0;
  do {
    if (*piVar3 == 0) {
      return uVar6;
    }
    iVar5 = 0;
    puVar4 = PTR_hapObjects_006149e4 + (iVar2 * 0xb5 + 1) * 8 + 4;
    do {
      (*(code *)PTR_memcpy_00614674)(auStack_78,puVar4,0x48);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x48;
      if (local_62 != '\0') {
        local_30 = local_6c;
        local_2c = local_74;
        puVar1 = (undefined4 *)(*(code *)PTR_calloc_006148c0)(0x14,1);
        if (puVar1 == (undefined4 *)0x0) {
          uVar6 = 0xffffe5b8;
          break;
        }
        puVar1[2] = local_30;
        *puVar1 = local_2c;
        puVar1[1] = 0;
        DAT_006156fc[1] = puVar1 + 3;
        puVar1[3] = DAT_006156fc;
        puVar1[4] = &DAT_006156fc;
        DAT_006156fc = puVar1 + 3;
      }
    } while (iVar5 != 0x14);
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x16a;
    if (iVar2 == 10) {
      return uVar6;
    }
  } while( true );
}

