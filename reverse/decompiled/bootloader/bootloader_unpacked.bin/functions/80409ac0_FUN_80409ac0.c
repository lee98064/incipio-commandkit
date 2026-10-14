/* FUN_80409ac0 @ 80409ac0 */

undefined4 FUN_80409ac0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20 [2];
  
  if (param_1 < 1) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar1 = 1;
  }
  else {
    uVar2 = FUN_80406c50(*param_2,0,10);
    iVar3 = 0;
    do {
      FUN_80402d78(iVar3,uVar2,local_20);
      uVar1 = FUN_804077a4(s_PhyID_0x_02x_Reg__02d_Data__0x_0_8040e084,iVar3,uVar2,local_20[0]);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
  }
  return uVar1;
}

