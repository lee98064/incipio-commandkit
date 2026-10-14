/* FUN_00413004 @ 00413004 */

int FUN_00413004(undefined1 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char *pcVar9;
  
  iVar4 = (*(code *)PTR_strlen_0046a714)(param_2);
  pcVar9 = param_2 + iVar4;
  iVar4 = (*(code *)PTR_strlen_0046a714)(param_3);
  while ((*param_2 != '\0' && (param_2 <= pcVar9))) {
    iVar5 = (*(code *)PTR_strlen_0046a714)(param_2);
    if (iVar4 < iVar5) {
      iVar5 = (*(code *)PTR_strncmp_0046a918)(param_2,param_3,iVar4);
      puVar3 = PTR___ctype_b_0046abc0;
      puVar2 = PTR___ctype_toupper_0046aab0;
      if ((iVar5 == 0) && (param_2[iVar4] == '=')) {
        param_2 = param_2 + iVar4 + 1;
        iVar4 = 0;
        goto LAB_00413218;
      }
    }
    do {
      cVar8 = *param_2;
      param_2 = param_2 + 1;
      if (cVar8 == '\0') goto LAB_00413274;
    } while (cVar8 != '&');
  }
LAB_00413274:
  iVar4 = -1;
  if (param_4 == 0) {
    return -1;
  }
LAB_0041327c:
  *param_1 = 0;
  return iVar4;
LAB_00413218:
  cVar8 = *param_2;
  if ((cVar8 == '\0') || (cVar8 == '&')) goto LAB_00413230;
  if (cVar8 == '%') {
    uVar6 = (*(code *)PTR_strlen_0046a714)(param_2);
    if (2 < uVar6) {
      if ((*(ushort *)(*(int *)puVar3 + param_2[1] * 2) & 0x10) != 0) {
        if ((*(ushort *)(*(int *)puVar3 + param_2[2] * 2) & 0x10) != 0) {
          if (iVar4 < param_4) {
            sVar1 = *(short *)(*(int *)puVar2 + param_2[1] * 2);
            if (sVar1 < 0x41) {
              cVar8 = (char)(((int)sVar1 & 0xfU) << 4);
            }
            else {
              cVar8 = ((char)sVar1 + -0x37) * '\x10';
            }
            sVar1 = *(short *)(*(int *)puVar2 + param_2[2] * 2);
            cVar7 = (char)sVar1;
            if (sVar1 < 0x41) {
              cVar7 = cVar7 + -0x30;
            }
            else {
              cVar7 = cVar7 + -0x37;
            }
            param_1[iVar4] = cVar7 + cVar8;
            iVar4 = iVar4 + 1;
          }
          param_2 = param_2 + 3;
          goto LAB_00413218;
        }
      }
    }
LAB_00413204:
    if (iVar4 < param_4) {
      param_1[iVar4] = cVar8;
LAB_00413210:
      iVar4 = iVar4 + 1;
    }
  }
  else {
    if (cVar8 != '+') goto LAB_00413204;
    if (iVar4 < param_4) {
      param_1[iVar4] = 0x20;
      goto LAB_00413210;
    }
  }
  param_2 = param_2 + 1;
  goto LAB_00413218;
LAB_00413230:
  param_1 = param_1 + iVar4;
  if (param_4 <= iVar4) {
    return iVar4;
  }
  goto LAB_0041327c;
}

