/* FUN_80409ff8 @ 80409ff8 */

void FUN_80409ff8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406604(uVar2);
  FUN_80406a30(uVar3,0xff,uVar2);
  FUN_804077a4(s_Write_0x_x_Bytes_to_SPI_flash__d_8040e128,uVar2,1,iVar1,iVar1 + -0x43000000);
  FUN_804077a4(s__Y_es___N_o_>_8040e160);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    FUN_80404be8();
    FUN_80404b40(0,iVar1,uVar3,uVar2);
  }
  FUN_804066ec(uVar3);
  return;
}

