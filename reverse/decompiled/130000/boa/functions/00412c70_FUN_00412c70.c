/* FUN_00412c70 @ 00412c70 */

int FUN_00412c70(undefined1 *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  
  iVar1 = (*(code *)PTR_strlen_0046a714)(param_4);
  iVar2 = FUN_00412b9c(param_2,param_3);
  if (-1 < iVar2) {
    iVar3 = (*(code *)PTR_strlen_0046a714)(PTR_str_boundry_0046ab20);
    iVar2 = FUN_00411cf8(param_2,param_3);
    if (iVar2 == 0) {
      pcVar6 = "can\'t find the first boundry";
LAB_00412d7c:
      (*(code *)PTR_puts_0046ab3c)(pcVar6);
    }
    else {
      iVar7 = (param_2 + param_3) - iVar2;
      while (0 < iVar7) {
        if (iVar7 < iVar3 + 2) {
          (*(code *)PTR_puts_0046ab3c)("the query_string_len is less than boundry_len");
          break;
        }
        iVar4 = FUN_00411cf8(iVar2,iVar7);
        if (iVar4 == 0) {
          pcVar6 = "can\'t find the next boundry";
          goto LAB_00412d7c;
        }
        iVar5 = thunk_FUN_00411c70(iVar2,param_4,iVar4 - iVar2);
        if (iVar5 != 0) {
          pcVar6 = (char *)(iVar5 + iVar1 + 1);
          do {
            while (((pcVar8 = pcVar6, *pcVar8 != '\r' || (pcVar8[1] != '\n')) || (pcVar8[2] != '\r')
                   )) {
              pcVar6 = pcVar8 + 1;
            }
            pcVar6 = pcVar8 + 1;
          } while (pcVar8[3] != '\n');
          iVar1 = 0;
          while( true ) {
            pcVar6 = param_1 + iVar1;
            if (((iVar4 - iVar3) - (int)pcVar8) + -8 <= iVar1) break;
            iVar2 = iVar1 + 4;
            iVar1 = iVar1 + 1;
            *pcVar6 = pcVar8[iVar2];
          }
          *pcVar6 = '\0';
          return iVar1;
        }
        iVar7 = iVar7 - (iVar4 - iVar2);
        iVar2 = iVar4;
      }
      if (param_5 != 0) {
        *param_1 = 0;
      }
    }
  }
  return -1;
}

