/* bt_setfiles @ 00421aa0 */

void bt_setfiles(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_318 [256];
  undefined1 auStack_218 [512];
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  uVar1 = FUN_00421134();
  (*(code *)PTR_sprintf_0046a808)(auStack_318,"SETFILES /%d/%d",local_18,local_14);
  (*(code *)PTR_strcat_0046a9c8)(auStack_318,param_3);
  uVar2 = (*(code *)PTR_strlen_0046a714)(auStack_318);
  (*(code *)PTR_write_0046a9fc)(uVar1,auStack_318,uVar2);
  (*(code *)PTR_write_0046a9fc)(uVar1,&DAT_004498e4,2);
  do {
    iVar3 = FUN_004218dc(uVar1,auStack_218,0x200);
  } while (0 < iVar3);
  (*(code *)PTR_close_0046a694)(uVar1);
  return;
}

