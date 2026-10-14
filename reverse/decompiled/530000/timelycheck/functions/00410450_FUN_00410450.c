/* FUN_00410450 @ 00410450 */

void FUN_00410450(undefined4 param_1,undefined4 param_2)

{
  int local_28 [3];
  
  local_28[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x11b,local_28);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417998,"igmpproxy","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417a78,&DAT_00417be0,"");
  if (local_28[0] == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"igmpproxy",param_1,param_2,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              ("/proc/sys/net/ipv4/igmp_max_memberships",&DAT_00417a78,&DAT_00418fe4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417a78,&DAT_00418fe8,"");
  }
  return;
}

