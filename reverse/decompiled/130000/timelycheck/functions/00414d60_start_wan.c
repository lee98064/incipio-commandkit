/* start_wan @ 00414d60 */

undefined4
start_wan(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
         int param_6)

{
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 auStack_60 [60];
  
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  (*(code *)PTR_puts_0042b1b8)("Init WAN Interface...");
  if (param_1 == 0) {
    FUN_00413934(param_2,param_3,param_4,param_5,param_6);
    goto LAB_0041506c;
  }
  if (param_1 != 1) {
    if (param_1 == 3) {
      local_84 = 0;
      (*(code *)PTR_memset_0042b114)(&local_80,0,0x1e);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3ac,&local_84);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3ad,&local_80);
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_60,"flash clearppp %d %02x%02x%02x%02x%02x%02x",local_84,local_80,local_7f,
                 local_7e,local_7d,local_7c,local_7b);
      (*(code *)PTR_system_0042b1ac)(auStack_60);
      (*(code *)PTR_sleep_0042b1a4)(2);
      (*(code *)PTR_system_0042b1ac)("ifconfig eth5 up");
      FUN_00412c2c(param_2,param_3,param_4,param_5,param_6);
      goto LAB_0041506c;
    }
    if (param_1 == 4) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x155,&local_8c);
      if (local_8c == 1) {
        FUN_00413934(param_2,param_3,param_4,param_5,param_6);
        FUN_00414c28(4);
        FUN_00411d44(param_2,param_3,param_4,param_5,param_6);
        goto LAB_0041506c;
      }
    }
    else {
      if (param_1 != 6) goto LAB_0041506c;
      (*(code *)PTR_apmib_get_0042b1a0)(0x1f5,&local_88);
      if (local_88 == 1) {
        FUN_00413934(param_2,param_3,param_4,param_5,param_6);
        FUN_00414c28(6);
        FUN_00410cbc(param_2,param_3,param_4,param_5,param_6);
        goto LAB_0041506c;
      }
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/tmp_wan_check",&DAT_00417b58,"dhcpc","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"rm -rf","/var/ppp/manual_connect_now"," 2>/dev/null","")
    ;
    if (param_6 == 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/ppp/manual_connect_now",&DAT_00417b58,"1","");
    }
  }
  FUN_00413328(param_2,param_3,param_4,param_5,param_6);
LAB_0041506c:
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_90);
  if (local_90 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",param_3,"");
  }
  return 0;
}

