/* find_pid_by_name @ 004069b4 */

uint find_pid_by_name(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [52];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [56];
  
  iVar1 = (*(code *)PTR_opendir_00423470)("/proc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("Cannot open /proc");
    uVar2 = 0;
  }
  else {
    do {
      while( true ) {
        do {
          do {
            iVar4 = (*(code *)PTR_readdir_00423544)(iVar1);
            iVar5 = iVar4 + 0xb;
            if (iVar4 == 0) {
              iVar1 = (*(code *)PTR_strcmp_00423464)(param_1,"init");
              return (uint)(iVar1 == 0);
            }
            iVar3 = (*(code *)PTR_strcmp_00423464)(iVar5,&DAT_0041122c);
          } while ((iVar3 == 0) ||
                  ((*(ushort *)(*(int *)PTR___ctype_b_004235a4 + *(char *)(iVar4 + 0xb) * 2) & 8) ==
                   0));
          (*(code *)PTR_sprintf_0042344c)(auStack_c8,"/proc/%s/status",iVar5);
          iVar4 = (*(code *)PTR_fopen_00423498)(auStack_c8,&DAT_00411fe4);
        } while (iVar4 == 0);
        iVar3 = (*(code *)PTR_fgets_00423588)(auStack_94,0x31,iVar4);
        if (iVar3 != 0) break;
        (*(code *)PTR_fclose_00423480)();
      }
      (*(code *)PTR_fclose_00423480)(iVar4);
      (*(code *)PTR_sscanf_004234b4)(auStack_94,"%*s %s",auStack_60);
      iVar4 = (*(code *)PTR_strcmp_00423464)(auStack_60,param_1);
    } while (iVar4 != 0);
    uVar2 = (*(code *)PTR_strtol_00423534)(iVar5,0,0);
  }
  return uVar2;
}

