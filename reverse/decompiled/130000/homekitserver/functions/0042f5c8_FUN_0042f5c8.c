/* FUN_0042f5c8 @ 0042f5c8 */

byte * FUN_0042f5c8(char *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  int local_28 [4];
  int local_18 [2];
  
  if (param_2 < 0) {
    param_2 = param_2 + 3;
  }
  uVar10 = param_2 >> 2;
  local_18[0] = uVar10 * 3 + 1;
  pbVar1 = (byte *)(*(code *)PTR_malloc_006132d8)(local_18[0]);
  (*(code *)PTR_memset_0061223c)(pbVar1,0,local_18[0]);
  uVar6 = 0;
  pbVar5 = pbVar1;
  do {
    piVar7 = local_28;
    pcVar8 = param_1;
    if (uVar10 <= uVar6) {
      return pbVar1;
    }
    do {
      pcVar9 = &DAT_005ffc10;
      iVar3 = 0;
      do {
        if (*pcVar9 == *pcVar8) goto LAB_0042f694;
        iVar2 = iVar3 + 1;
        pcVar9 = s_BCDEFGHIJKLMNOPQRSTUVWXYZabcdefg_005ffc11 + iVar3;
        iVar3 = iVar2;
      } while (iVar2 != 0x41);
      iVar3 = -1;
LAB_0042f694:
      *piVar7 = iVar3;
      piVar7 = piVar7 + 1;
      pcVar8 = pcVar8 + 1;
    } while (piVar7 != local_18);
    cVar4 = '\0';
    if (uVar6 == uVar10 - 1) {
      cVar4 = (local_28[0] == 0x40) + (local_28[1] == 0x40U) + (local_28[2] == 0x40U) +
              (local_28[3] == 0x40);
    }
    *pbVar5 = (byte)((int)(local_28[1] & 0x30U) >> 4) | (byte)(local_28[0] << 2);
    if (cVar4 == '\x02') {
      return pbVar1;
    }
    param_1 = param_1 + 4;
    pbVar5[1] = (byte)((int)(local_28[2] & 0x3cU) >> 2) | (byte)(local_28[1] << 4);
    if (cVar4 == '\x01') {
      return pbVar1;
    }
    uVar6 = uVar6 + 1;
    pbVar5[2] = (byte)local_28[3] & 0x3f | (byte)(local_28[2] << 6);
    pbVar5 = pbVar5 + 3;
  } while( true );
}

