/* FUN_8040a0e4 @ 8040a0e4 */

void FUN_8040a0e4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_80406c50(*param_2,0,0x10);
  iVar2 = FUN_80406c50(param_2[1],0,0x10);
  iVar3 = FUN_80406c50(param_2[2],0,0x10);
  FUN_804077a4(s_Write_0x_x_Bytes_to_SPI_flash__d_8040e178,iVar3,1,iVar1,iVar1 + -0x43000000,iVar2,
               iVar3 + iVar2);
  FUN_804077a4(s__Y_es___N_o_>_8040e160);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    FUN_80404be8();
    FUN_80404b40(0,iVar1,iVar2,iVar3);
  }
  return;
}

