/* FUN_00406d44 @ 00406d44 */

void FUN_00406d44(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_2a0 [8];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [100];
  undefined1 auStack_1bc [100];
  undefined1 auStack_158 [100];
  undefined1 auStack_f4 [204];
  
  (*(code *)PTR_sprintf_0042b0e8)(auStack_220,"/usr/share/udhcpc/%s.sh",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_1bc,"/usr/share/udhcpc/%s.deconfig",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_158,"/etc/udhcpc/udhcpc-%s.pid",param_1);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_2a0);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_2a0[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_280,uVar1);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_2a0);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_2a0[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_260,uVar1);
  (*(code *)PTR_apmib_get_0042b1a0)(0xac,local_2a0);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_2a0[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_240,uVar1);
  (*(code *)PTR_Create_script_0042b168)(auStack_1bc,param_1,0,auStack_280,auStack_260,auStack_240);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_f4,"udhcpc -i %s -p %s -s %s &",param_1,auStack_158,auStack_220);
  (*(code *)PTR_system_0042b1ac)(auStack_f4);
  return;
}

