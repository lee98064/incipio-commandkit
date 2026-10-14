/* getWlSiteSurveyResult @ 00420154 */

undefined4 getWlSiteSurveyResult(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [16];
  char *local_20;
  undefined2 local_1c;
  
  iVar1 = (*(code *)PTR_socket_0046aad4)(2,1,0);
  if (iVar1 != -1) {
    iVar2 = FUN_0041fba4(iVar1,param_1,0x8b01,auStack_30);
    if (-1 < iVar2) {
      if (*param_2 == '\0') {
        local_1c = 0x2b04;
      }
      else {
        local_1c = 1;
      }
      local_20 = param_2;
      iVar2 = FUN_0041fba4(iVar1,param_1,0x8b34,auStack_30);
      if (-1 < iVar2) {
        (*(code *)PTR_close_0046a694)(iVar1);
        return 0;
      }
    }
    (*(code *)PTR_close_0046a694)(iVar1);
  }
  return 0xffffffff;
}

