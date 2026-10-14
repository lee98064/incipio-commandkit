/* bt_getTorrents @ 004220cc */

int bt_getTorrents(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_218 [512];
  
  uVar1 = FUN_00421134();
  (*(code *)PTR_write_0046a9fc)(uVar1,"GETTORRENTS",0xb);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  iVar3 = 0;
  do {
    iVar2 = FUN_004218dc(uVar1,auStack_218,0x200);
    if (iVar2 < 1) break;
    iVar3 = iVar3 + 1;
    FUN_004211fc(auStack_218,param_1);
    param_1 = param_1 + 0x20;
  } while (iVar3 < param_2);
  (*(code *)PTR_close_0046a694)(uVar1);
  return iVar3;
}

