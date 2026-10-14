/* FUN_804098f8 @ 804098f8 */

void FUN_804098f8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_18 [2];
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406c50(param_2[2],0,0x10);
  FUN_80402a40(uVar1,uVar2,uVar3);
  FUN_80402d78(uVar1,uVar2,local_18);
  FUN_804079cc(s_PHYID_0x_x__regID_0x_x__Find_PHY_8040dfdc,uVar1,uVar2,local_18[0]);
  return;
}

