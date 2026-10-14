/* getStats @ 00420778 */

undefined4 getStats(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  char local_250 [40];
  char local_228 [512];
  
  iVar3 = (*(code *)PTR_fopen_0046a894)("/proc/net/dev","r");
  if (iVar3 == 0) {
    (*(code *)PTR_printf_0046ac28)("Warning: cannot open %s\n","/proc/net/dev");
  }
  else {
    (*(code *)PTR_fgets_0046ab78)(local_228,0x200,iVar3);
    iVar10 = 3;
    (*(code *)PTR_fgets_0046ab78)(local_228,0x200,iVar3);
    iVar4 = (*(code *)PTR_strstr_0046a940)(local_228,"compressed");
    if (iVar4 == 0) {
      iVar4 = (*(code *)PTR_strstr_0046a940)(local_228,"bytes");
      iVar10 = 1;
      if (iVar4 != 0) {
        iVar10 = 2;
      }
    }
    puVar2 = PTR___ctype_b_0046abc0;
    while (iVar4 = (*(code *)PTR_fgets_0046ab78)(local_228,0x200,iVar3), iVar4 != 0) {
      iVar4 = *(int *)puVar2;
      pcVar6 = local_228;
      do {
        pcVar11 = pcVar6;
        pcVar5 = local_250;
        pcVar6 = pcVar11 + 1;
      } while ((*(ushort *)(iVar4 + *pcVar11 * 2) & 0x20) != 0);
      while( true ) {
        iVar9 = (int)*pcVar11;
        pcVar6 = pcVar11 + 1;
        pcVar7 = pcVar5 + 1;
        if ((iVar9 == 0) || ((*(ushort *)(iVar4 + iVar9 * 2) & 0x20) != 0)) goto LAB_00420944;
        if (iVar9 == 0x3a) break;
        *pcVar5 = *pcVar11;
        pcVar5 = pcVar7;
        pcVar11 = pcVar6;
      }
      *pcVar5 = ':';
      while( true ) {
        cVar1 = *pcVar6;
        if ((*(ushort *)(iVar4 + cVar1 * 2) & 8) == 0) break;
        *pcVar7 = cVar1;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      uVar8 = (int)cVar1 ^ 0x3a;
      if (uVar8 != 0) {
        pcVar6 = pcVar11;
      }
      if (uVar8 != 0) {
        pcVar7 = pcVar5;
      }
      pcVar5 = pcVar7;
      pcVar11 = (char *)0x0;
      if (*pcVar6 != '\0') {
        pcVar11 = pcVar6 + 1;
LAB_00420944:
        *pcVar5 = '\0';
      }
      iVar4 = (*(code *)PTR_strcmp_0046a824)(param_1,local_250);
      if (iVar4 == 0) {
        if (iVar10 == 2) {
          (*(code *)PTR_sscanf_0046a8c4)
                    (pcVar11,"%Lu %Lu %lu %lu %lu %lu %Lu %Lu %lu %lu %lu %lu %lu",param_2 + 0x10,
                     param_2,param_2 + 0x20,param_2 + 0x28,param_2 + 100,param_2 + 0x60,
                     param_2 + 0x18,param_2 + 8,param_2 + 0x24,param_2 + 0x2c,param_2 + 0x74,
                     param_2 + 0x50,param_2 + 0x70);
          *(undefined4 *)(param_2 + 0x30) = 0;
        }
        else if (iVar10 == 3) {
          (*(code *)PTR_sscanf_0046a8c4)
                    (pcVar11,"%Lu %Lu %lu %lu %lu %lu %lu %lu %Lu %Lu %lu %lu %lu %lu %lu %lu",
                     param_2 + 0x10,param_2,param_2 + 0x20,param_2 + 0x28,param_2 + 100,
                     param_2 + 0x60,param_2 + 0x48,param_2 + 0x30,param_2 + 0x18,param_2 + 8,
                     param_2 + 0x24,param_2 + 0x2c,param_2 + 0x74,param_2 + 0x50,param_2 + 0x70,
                     param_2 + 0x4c);
        }
        else {
          (*(code *)PTR_sscanf_0046a8c4)
                    (pcVar11,"%Lu %lu %lu %lu %lu %Lu %lu %lu %lu %lu %lu",param_2,param_2 + 0x20,
                     param_2 + 0x28,param_2 + 100,param_2 + 0x60,param_2 + 8,param_2 + 0x24,
                     param_2 + 0x2c,param_2 + 0x74,param_2 + 0x50,param_2 + 0x70);
          *(undefined4 *)(param_2 + 0x30) = 0;
          *(undefined4 *)(param_2 + 0x14) = 0;
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)(param_2 + 0x1c) = 0;
          *(undefined4 *)(param_2 + 0x18) = 0;
        }
        (*(code *)PTR_fclose_0046a85c)(iVar3);
        return 0;
      }
    }
    (*(code *)PTR_fclose_0046a85c)(iVar3);
  }
  return 0xffffffff;
}

