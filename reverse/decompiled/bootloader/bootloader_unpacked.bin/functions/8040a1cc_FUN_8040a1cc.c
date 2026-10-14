/* FUN_8040a1cc @ 8040a1cc */

void FUN_8040a1cc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_80406c50(*param_2,0,0x10);
  uVar2 = FUN_80406c50(param_2[1],0,0x10);
  uVar3 = FUN_80406c50(param_2[2],0,0x10);
  DAT_8040ee58 = uVar3;
  FUN_804077a4(s_Flash_read_from__X_to__X_with__X_8040e1c4,uVar2,uVar1,uVar3);
  FUN_804077a4(s__Y_es____N_o_____>_8040e1f0);
  iVar4 = FUN_80409fa4();
  if (iVar4 == 0) {
    FUN_804077a4(s_Abort__8040e170);
  }
  else {
    iVar4 = FUN_80404a94(uVar1,uVar2,uVar3);
    if (iVar4 == 0) {
      FUN_804077a4(s_Flash_Read_Failed__8040e21c);
    }
    else {
      FUN_804077a4(s_Flash_Read_Successed__8040e204);
    }
  }
  return;
}

