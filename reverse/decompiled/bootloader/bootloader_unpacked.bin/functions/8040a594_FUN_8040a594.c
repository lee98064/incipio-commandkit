/* FUN_8040a594 @ 8040a594 */

void FUN_8040a594(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined1 auStack_b8 [136];
  char *local_30;
  
  local_30 = s_Unknown_command___8040e2ac;
LAB_8040a5f0:
  do {
    do {
      FUN_804077a4(s_Flash_Write_Successed___s_8040d464 + 0x18,s_<RealTek>_8040d2c4);
      FUN_80406a30(auStack_b8,0,0x80);
      FUN_80406fd4(auStack_b8,0x80,1);
      FUN_804077a4(s_sleep_<4>_CPUSleep___Self_Refres_8040deb4 + 0x2c);
      iVar1 = FUN_80406e0c(auStack_b8);
      puVar2 = (undefined4 *)FUN_80406ef8(auStack_b8);
    } while (iVar1 < 1);
    FUN_80406dc0(*puVar2);
    iVar5 = 0;
    ppuVar7 = &PTR_DAT_8040ece0;
    do {
      iVar3 = FUN_80406978(*puVar2,*ppuVar7);
      iVar6 = iVar5 + 1;
      if (iVar3 == 0) {
        (*(code *)(&PTR_FUN_8040ece8)[iVar5 * 4])(iVar1 + -1,puVar2 + 1);
        puVar4 = (undefined1 *)*puVar2;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        if (iVar5 != 0x12) goto LAB_8040a5f0;
        break;
      }
      ppuVar7 = ppuVar7 + 4;
      iVar5 = iVar6;
    } while (iVar6 != 0x12);
    FUN_804077a4(local_30);
  } while( true );
}

