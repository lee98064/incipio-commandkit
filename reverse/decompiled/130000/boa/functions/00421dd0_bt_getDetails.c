/* bt_getDetails @ 00421dd0 */

int bt_getDetails(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [512];
  undefined4 local_20;
  
  local_20 = param_1;
  uVar1 = FUN_00421134();
  (*(code *)PTR_sprintf_0046a808)(auStack_240,"GETDETAILS /%d",local_20);
  uVar2 = (*(code *)PTR_strlen_0046a714)(auStack_240);
  iVar4 = 0;
  (*(code *)PTR_write_0046a9fc)(uVar1,auStack_240,uVar2);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  do {
    iVar3 = FUN_004218dc(uVar1,auStack_220,0x1ff);
    if (iVar3 < 1) break;
    iVar4 = iVar4 + 1;
    FUN_00421744(auStack_220,iVar3,param_2);
    param_2 = param_2 + 0x30;
  } while (iVar4 < param_3);
  (*(code *)PTR_close_0046a694)(uVar1);
  return iVar4;
}

