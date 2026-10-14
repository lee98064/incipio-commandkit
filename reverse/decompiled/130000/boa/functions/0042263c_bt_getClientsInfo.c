/* bt_getClientsInfo @ 0042263c */

int bt_getClientsInfo(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_618 [512];
  undefined1 auStack_418 [1024];
  
  (*(code *)PTR_memset_0046a87c)(auStack_618,0,0x200);
  uVar1 = (*(code *)PTR_strlen_0046a714)(auStack_618);
  uVar1 = FUN_00421134(0,auStack_618,uVar1);
  (*(code *)PTR_write_0046a9fc)(uVar1,"GETCLIENTSINFO",0xe);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  iVar3 = 0;
  do {
    iVar2 = FUN_004218dc(uVar1,auStack_418,0x400);
    if (iVar2 < 1) break;
    iVar3 = iVar3 + 1;
    FUN_004213c0(auStack_418,iVar2,param_1);
    param_1 = param_1 + 0xe0;
  } while (iVar3 < param_2);
  (*(code *)PTR_close_0046a694)(uVar1);
  return iVar3;
}

