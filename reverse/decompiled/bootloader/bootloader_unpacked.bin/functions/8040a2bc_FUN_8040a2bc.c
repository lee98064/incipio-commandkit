/* FUN_8040a2bc @ 8040a2bc */

void FUN_8040a2bc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 1) {
    FUN_804077a4(s_Wrong_argument_number__8040e0f0);
  }
  else {
    uVar1 = FUN_80406c50(*param_2,0,0x10);
    if (param_2[1] == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = FUN_80406c50(param_2[1],0,10);
    }
    FUN_804077dc(uVar1,uVar2);
  }
  return;
}

