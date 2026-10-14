/* FUN_80409a10 @ 80409a10 */

undefined4 FUN_80409a10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 < 3) {
    FUN_804077a4(s_Parameters_not_enough__8040e044);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_80406c50(*param_2,0,0x10);
    uVar2 = FUN_80406c50(param_2[1],0,10);
    uVar3 = FUN_80406c50(param_2[2],0,0x10);
    FUN_804077a4(s_Write_PhyID_0x_x_Reg__02d_data_0_8040e05c,uVar1,uVar2,uVar3);
    uVar1 = FUN_80402a40(uVar1,uVar2,uVar3);
  }
  return uVar1;
}

