/* SocketReadHTTPHeader @ 004064f0 */

int SocketReadHTTPHeader(undefined4 param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar5 = param_2 + *(int *)(param_2 + 0x800);
  pcVar7 = param_2;
  do {
    pcVar6 = *(char **)(param_2 + 0x808);
    if (pcVar6 == (char *)0x0) {
      while (pcVar6 = (char *)(*(code *)PTR_read_004331d4)
                                        (param_1,pcVar5,param_2 + (0x800 - (int)pcVar5)),
            (int)pcVar6 < 0) {
        piVar1 = (int *)(*(code *)PTR___errno_location_004330f8)();
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          iVar3 = -0x1a2c;
          goto LAB_004066f4;
        }
        if (iVar3 != 4) {
          if (pcVar6 != (char *)0x0) {
            return iVar3;
          }
          return -0x1a61;
        }
      }
      iVar3 = 0;
LAB_004066f4:
      if ((int)pcVar6 < 1) {
        if (pcVar6 != (char *)0x0) {
          return iVar3;
        }
        return -0x1a61;
      }
    }
    else {
      if (param_2 + (0x800 - (int)pcVar5) < pcVar6) {
        return -0x1a31;
      }
      (*(code *)PTR_memmove_004332d4)(pcVar5,*(undefined4 *)(param_2 + 0x804),pcVar6);
      param_2[0x808] = '\0';
      param_2[0x809] = '\0';
      param_2[0x80a] = '\0';
      param_2[0x80b] = '\0';
    }
    pcVar5 = pcVar5 + (int)pcVar6;
    *(char **)(param_2 + 0x800) = pcVar6 + *(int *)(param_2 + 0x800);
    if ((3 < (int)pcVar5 - (int)param_2) && (*param_2 == '$')) {
      pcVar7 = param_2 + 4;
LAB_004066a0:
      *(int *)(param_2 + 0x800) = (int)pcVar7 - (int)param_2;
      iVar3 = FUN_00406044(param_2);
      if (iVar3 == 0) {
        *(int *)(param_2 + 0x808) = (int)pcVar5 - (int)pcVar7;
        *(char **)(param_2 + 0x804) = pcVar7;
      }
      return iVar3;
    }
    uVar2 = (int)pcVar5 - (int)pcVar7;
    pcVar6 = pcVar7;
    for (; pcVar6 = pcVar6 + 1, pcVar7 < pcVar5; pcVar7 = pcVar7 + 1) {
      if (*pcVar7 == '\n') {
        if (uVar2 < 3) {
          if (uVar2 != 2) break;
LAB_00406688:
          cVar4 = *pcVar6;
        }
        else {
          cVar4 = *pcVar6;
          if (cVar4 == '\r') {
            if (pcVar7[2] != '\n') goto LAB_00406688;
            pcVar7 = pcVar7 + 3;
            goto LAB_004066a0;
          }
        }
        if (cVar4 == '\n') {
          pcVar7 = pcVar7 + 2;
          goto LAB_004066a0;
        }
      }
      uVar2 = uVar2 - 1;
    }
  } while( true );
}

