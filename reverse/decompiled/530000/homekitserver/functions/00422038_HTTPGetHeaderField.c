/* HTTPGetHeaderField @ 00422038 */

undefined4
HTTPGetHeaderField(char *param_1,int param_2,int param_3,undefined4 *param_4,uint *param_5,
                  undefined4 *param_6,int *param_7,undefined4 *param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  
  if (param_2 == -1) {
    param_2 = (*(code *)PTR_strlen_00613f4c)();
  }
  pcVar10 = param_1 + param_2;
  uVar9 = 0;
  pcVar3 = param_1;
  if (param_3 != 0) {
    uVar9 = (*(code *)PTR_strlen_00613f4c)(param_3);
  }
  do {
    while( true ) {
      do {
        pcVar8 = pcVar3;
        pcVar7 = param_1;
        if (pcVar10 <= pcVar7) {
          return 0xffffe5b9;
        }
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (param_1 = pcVar7 + 1, pcVar3 = pcVar8, cVar1 != '\n'));
      param_1 = pcVar7 + 1;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) {
        param_1 = param_1 + (*param_1 == '\n');
      }
      pcVar6 = pcVar8;
      pcVar3 = param_1;
      if (param_3 != 0) break;
      while (pcVar4 = pcVar6, pcVar4 < pcVar7) {
        pcVar6 = pcVar4 + 1;
        if (*pcVar4 == ':') {
          uVar9 = (int)pcVar4 - (int)pcVar8;
          goto LAB_004221b0;
        }
      }
    }
  } while ((((uint)((int)pcVar7 - (int)pcVar8) <= uVar9) || (pcVar8[uVar9] != ':')) ||
          (iVar5 = (*(code *)PTR_strnicmp_00612b48)(pcVar8,param_3,uVar9), iVar5 != 0));
LAB_004221b0:
  pcVar3 = pcVar8 + uVar9 + 1;
  do {
    while( true ) {
      pcVar6 = pcVar3;
      if (pcVar7 <= pcVar6) goto LAB_0042224c;
      if (*pcVar6 != ' ') break;
      pcVar3 = pcVar6 + 1;
    }
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 == '\t');
LAB_0042224c:
  do {
    bVar2 = param_1 < pcVar10;
    while( true ) {
      if ((!bVar2) || ((*param_1 != ' ' && (*param_1 != '\t')))) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = pcVar8;
        }
        if (param_5 != (uint *)0x0) {
          *param_5 = uVar9;
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = pcVar6;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = (int)pcVar7 - (int)pcVar6;
        }
        if (param_8 == (undefined4 *)0x0) {
          return 0;
        }
        *param_8 = param_1;
        return 0;
      }
      do {
        pcVar3 = param_1;
        pcVar7 = pcVar3 + 1;
        param_1 = pcVar7;
        if (pcVar10 <= pcVar7) goto LAB_0042224c;
        cVar1 = *pcVar7;
      } while ((cVar1 != '\r') && (cVar1 != '\n'));
      param_1 = pcVar3 + 2;
      if (cVar1 != '\r') {
        param_1 = pcVar7;
      }
      if (param_1 < pcVar10) break;
      bVar2 = false;
    }
    param_1 = param_1 + (*param_1 == '\n');
  } while( true );
}

