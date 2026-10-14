/* FUN_004109d4 @ 004109d4 */

/* WARNING: Type propagation algorithm not settling */

void FUN_004109d4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int local_58 [10];
  int *local_30;
  
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x8e,local_58);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a9c,"miniigd","");
  if (local_58[0] == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00417f5c,&DAT_00417f64,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00417f60,&DAT_00417f64,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    local_30 = local_58 + 1;
    (*(code *)PTR_sprintf_0042b0e8)(local_30,&DAT_004179c4,param_1);
    piVar1 = local_58 + 5;
    (*(code *)PTR_sprintf_0042b0e8)(piVar1,&DAT_004179c0,param_3);
    if (param_2 == 2) {
      (*(code *)PTR_getWispRptIfaceName_0042b1e8)(piVar1,param_3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419084,local_30,&DAT_00419088,param_4,&DAT_00418a58,piVar1,"");
    }
    else {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419084,local_30,&DAT_00419088,param_4,"");
    }
  }
  return;
}

