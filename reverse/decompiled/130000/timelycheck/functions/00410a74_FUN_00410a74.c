/* FUN_00410a74 @ 00410a74 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00410a74(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

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
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"miniigd","");
  if (local_58[0] == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,&DAT_00418044,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    local_30 = local_58 + 1;
    (*(code *)PTR_sprintf_0042b0e8)(local_30,&DAT_00417aa4,param_1);
    piVar1 = local_58 + 5;
    (*(code *)PTR_sprintf_0042b0e8)(piVar1,&DAT_00417aa0,param_3);
    if (param_2 == 2) {
      (*(code *)PTR_getWispRptIfaceName_0042b1e8)(piVar1,param_3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419174,local_30,&DAT_00419178,param_4,&DAT_00418b48,piVar1,"");
    }
    else {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419174,local_30,&DAT_00419178,param_4,"");
    }
  }
  return;
}

