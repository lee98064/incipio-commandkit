/* FUN_00407248 @ 00407248 */

undefined4 FUN_00407248(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int local_1e0;
  int local_1dc;
  undefined1 auStack_1d8 [8];
  int local_1d0;
  int local_1cc;
  undefined1 auStack_1c8 [20];
  undefined1 auStack_1b4 [20];
  undefined1 auStack_1a0 [20];
  undefined1 auStack_18c [20];
  undefined1 auStack_178 [20];
  undefined1 auStack_164 [32];
  undefined1 auStack_144 [4];
  undefined1 auStack_140 [4];
  undefined1 auStack_13c [4];
  undefined4 local_138;
  int local_134;
  int local_130;
  undefined4 local_124;
  undefined4 local_118 [12];
  undefined1 auStack_e8 [200];
  int local_20;
  
  local_1e0 = 0;
  (*(code *)PTR_memcpy_004235a4)(local_118,&PTR_DAT_004233c8,0x30);
  iVar2 = (*(code *)PTR_apmib_init_0042347c)();
  if (iVar2 != 0) {
    (*(code *)PTR_set_timeZone_00423580)();
    pcVar3 = (char *)(*(code *)PTR_fopen_004234e0)("/proc/version","r");
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "Read /proc/version failed!";
      pcVar8 = (code *)PTR_puts_00423594;
    }
    else {
      (*(code *)PTR_fgets_004235ac)(auStack_e8,200,pcVar3);
      pcVar8 = (code *)PTR_fclose_004234cc;
    }
    (*pcVar8)(pcVar3);
    iVar2 = (*(code *)PTR_regcomp_004234e8)(auStack_164,"#[0-9][0-9]* \\(.*\\)$",0);
    if (iVar2 == 0) {
      local_20 = (*(code *)PTR_regexec_004234c0)(auStack_164,auStack_e8,2,auStack_1d8,0);
      (*(code *)PTR_regfree_00423478)(auStack_164);
      if ((local_20 == 0) && (-1 < local_1d0)) {
        auStack_e8[local_1cc] = 0;
      }
    }
    (*(code *)PTR_memset_004234dc)(auStack_144,0,0x2c);
    (*(code *)PTR_sscanf_004234f4)
              (auStack_e8 + local_1d0,"%s %s %s %d:%d:%d %s %s",auStack_1c8,auStack_1b4,auStack_1a0,
               auStack_13c,auStack_140,auStack_144,auStack_178,auStack_18c);
    local_124 = 0xffffffff;
    puVar7 = local_118;
    iVar2 = 0;
    do {
      uVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar4 = (*(code *)PTR_strcmp_004234bc)(uVar5,auStack_1b4);
      iVar6 = iVar2 + 1;
      iVar1 = iVar2;
      if (iVar4 == 0) break;
      iVar2 = iVar6;
      iVar1 = local_134;
    } while (iVar6 != 0xc);
    local_134 = iVar1;
    local_130 = (*(code *)PTR_atoi_00423488)(auStack_18c);
    local_130 = local_130 + -0x76c;
    local_138 = (*(code *)PTR_atoi_00423488)(auStack_1a0);
    local_1dc = (*(code *)PTR_mktime_00423524)(auStack_144);
    if (local_1dc < 0) {
      (*(code *)PTR_fputs_00423470)("set Time Error for tm!",*(undefined4 *)PTR_stderr_004234ac);
    }
    iVar2 = (*(code *)PTR_stime_0042348c)(&local_1dc);
    if (iVar2 < 0) {
      (*(code *)PTR_fputs_00423470)("set system Time Error",*(undefined4 *)PTR_stderr_004234ac);
    }
    iVar2 = (*(code *)PTR_apmib_init_0042347c)();
    if (iVar2 != 0) {
      (*(code *)PTR_apmib_get_0042357c)(0x141,&local_1e0);
      if (local_1e0 != 0) {
        local_130 = local_1e0 + -0x76c;
        (*(code *)PTR_apmib_get_0042357c)(0x142,&local_134);
        (*(code *)PTR_apmib_get_0042357c)(0x143,&local_138);
        (*(code *)PTR_apmib_get_0042357c)(0x144,auStack_13c);
        (*(code *)PTR_apmib_get_0042357c)(0x145,auStack_140);
        (*(code *)PTR_apmib_get_0042357c)(0x146,auStack_144);
        local_1dc = (*(code *)PTR_mktime_00423524)(auStack_144);
        if (local_1dc < 0) {
          (*(code *)PTR_fputs_00423470)("make Time Error!\n",*(undefined4 *)PTR_stderr_004234ac);
        }
        iVar2 = (*(code *)PTR_stime_0042348c)(&local_1dc);
        if (iVar2 < 0) {
          (*(code *)PTR_fputs_00423470)
                    ("set system Time Error\n",*(undefined4 *)PTR_stderr_004234ac);
        }
      }
      (*(code *)PTR_system_0042358c)("echo done > /var/system/set_time");
      return 0;
    }
  }
  (*(code *)PTR_puts_00423594)("Initialize AP MIB failed in setSystemTime_flash!");
  return 0xffffffff;
}

