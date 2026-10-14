/* FUN_00410798 @ 00410798 */

void FUN_00410798(void)

{
  undefined4 uVar1;
  int local_230;
  int local_22c;
  undefined1 auStack_228 [40];
  undefined4 local_200 [126];
  
  local_230 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x97,&local_230);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,"/tmp/ntp_tmp","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ntp_inet","2>/dev/null","");
  if (local_230 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417b58,"Start NTP daemon","");
    (*(code *)PTR_apmib_get_0042b1a0)(0x98,&local_22c);
    uVar1 = 0x9a;
    if (local_22c != 0) {
      uVar1 = 0x9b;
    }
    (*(code *)PTR_apmib_get_0042b1a0)(uVar1,local_200);
    uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_200[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_228,uVar1);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ntp_inet",&DAT_004190e8,auStack_228,"");
  }
  return;
}

