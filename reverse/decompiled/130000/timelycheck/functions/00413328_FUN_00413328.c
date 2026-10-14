/* FUN_00413328 @ 00413328 */

void FUN_00413328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined1 auStack_2c [20];
  
  local_30 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x9e,&local_30);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_2c,&DAT_00417aa4,local_30);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,&DAT_0041810c,auStack_2c,"");
  FUN_00410904(param_2);
  FUN_00410a74(1,param_1,param_4,param_3);
  return;
}

