/* FUN_80409bac @ 80409bac */

uint FUN_80409bac(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 < 3) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar2 = 1;
  }
  else {
    iVar3 = FUN_80406c50(*param_2,0,0x10);
    iVar4 = FUN_80406c50(param_2[1],0,0x10);
    uVar2 = FUN_80406c50(param_2[2],0,0x10);
    if (uVar2 != 0) {
      bVar1 = false;
      uVar5 = 0;
      do {
        if (*(int *)(uVar5 + iVar3) != *(int *)(uVar5 + iVar4)) {
          FUN_804077a4(s__dth_data__x__x__error_8040e0c8,uVar5);
          bVar1 = true;
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < uVar2);
      if (bVar1) {
        return uVar5;
      }
    }
    uVar2 = FUN_804077a4(s_No_error_found_8040e0e0);
  }
  return uVar2;
}

