/* bt_clientUpdate @ 00422298 */

void bt_clientUpdate(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_298 [128];
  undefined1 auStack_218 [512];
  undefined4 local_18;
  
  local_18 = param_1;
  uVar1 = FUN_00421134();
  (*(code *)PTR_sprintf_0046a808)(auStack_298,"CLIENTUPDATE /%d",local_18);
  uVar2 = (*(code *)PTR_strlen_0046a714)(auStack_298);
  (*(code *)PTR_write_0046a9fc)(uVar1,auStack_298,uVar2);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  do {
    iVar3 = FUN_004218dc(uVar1,auStack_218,0x200);
  } while (0 < iVar3);
  (*(code *)PTR_close_0046a694)(uVar1);
  return;
}

