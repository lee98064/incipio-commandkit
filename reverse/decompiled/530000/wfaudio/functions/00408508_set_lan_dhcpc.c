/* set_lan_dhcpc @ 00408508 */

void set_lan_dhcpc(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8 [8];
  undefined1 auStack_288 [32];
  undefined1 auStack_268 [32];
  undefined1 auStack_248 [32];
  undefined1 auStack_228 [100];
  undefined1 auStack_1c4 [100];
  undefined1 auStack_160 [100];
  undefined1 auStack_fc [204];
  undefined4 *local_30;
  
  (*(code *)PTR_memset_00423490)(auStack_2c8,0,0x1f);
  (*(code *)PTR_system_00423558)("killall -9 udhcpc 2> /dev/null");
  (*(code *)PTR_system_00423558)("rm -f /etc/udhcpc/udhcpc-br0.pid 2> /dev/null");
  FUN_00407938("/usr/share/udhcpc/br0.bound");
  (*(code *)PTR_sprintf_0042344c)(auStack_228,"/usr/share/udhcpc/%s.sh",param_1);
  (*(code *)PTR_sprintf_0042344c)(auStack_1c4,"/usr/share/udhcpc/%s.deconfig",param_1);
  (*(code *)PTR_sprintf_0042344c)(auStack_160,"/etc/udhcpc/udhcpc-%s.pid",param_1);
  local_30 = local_2a8;
  (*(code *)PTR_apmib_get_0042354c)(0xaa,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_288,uVar1);
  (*(code *)PTR_apmib_get_0042354c)(0xab,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_268,uVar1);
  (*(code *)PTR_apmib_get_0042354c)(0xac,local_30);
  uVar1 = (*(code *)PTR_inet_ntoa_00423478)(local_2a8[0]);
  (*(code *)PTR_strcpy_004235e0)(auStack_248,uVar1);
  (*(code *)PTR_sprintf_0042344c)(auStack_fc,"ifconfig %s 0.0.0.0",param_1);
  (*(code *)PTR_system_00423558)(auStack_fc);
  FUN_0040820c(auStack_1c4,param_1,0,auStack_288,auStack_268,auStack_248);
  (*(code *)PTR_apmib_get_0042354c)(0x2b1,auStack_2c8);
  (*(code *)PTR_sprintf_0042344c)
            (auStack_fc,"udhcpc -i %s -p %s -s %s -h  \'%s\' &",param_1,auStack_160,auStack_228,
             auStack_2c8);
  (*(code *)PTR_system_00423558)(auStack_fc);
  return;
}

