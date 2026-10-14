/* FUN_00423078 @ 00423078 */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00423078(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 local_18;
  int local_14 [3];
  
  local_18 = 0;
  local_14[0] = 0;
  local_14[1] = 0;
  (*(code *)PTR_apmib_get_0046aadc)(0x3b,&local_18);
  (*(code *)PTR_apmib_get_0046aadc)(0xad,local_14);
  (*(code *)PTR_apmib_get_0046aadc)(0xc0,local_14 + 1);
  if (local_14[0] == 0) {
    pcVar2 = 
    "<option selected value=\"0\">Disabled</option><option value=\"1\">Client</option><option value=\"2\">Server</option>"
    ;
  }
  else if (local_14[0] == 1) {
    pcVar2 = 
    "<option  value=\"0\">Disabled</option><option selected value=\"1\">Client</option><option value=\"2\">Server</option>"
    ;
  }
  else {
    if (local_14[0] != 2) {
      return 0;
    }
    pcVar2 = 
    "<option  value=\"0\">Disabled</option><option  value=\"1\">Client</option><option selected value=\"2\">Server</option>"
    ;
  }
  uVar1 = (*(code *)PTR_req_format_write_0046a95c)(param_1,pcVar2);
  return uVar1;
}

