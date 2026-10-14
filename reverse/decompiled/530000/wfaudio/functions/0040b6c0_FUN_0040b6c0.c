/* FUN_0040b6c0 @ 0040b6c0 */

void FUN_0040b6c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_1e8;
  char acStack_1e4 [32];
  char acStack_1c4 [32];
  char acStack_1a4 [32];
  char local_184 [32];
  char local_164 [32];
  undefined1 auStack_144 [128];
  undefined1 auStack_c4 [132];
  int local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  int local_2c;
  
  (*(code *)PTR_memset_00423490)(local_184,0,0x40);
  (*(code *)PTR_memset_00423490)(auStack_144,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_c4,0,0x80);
  (*(code *)PTR_memset_00423490)(acStack_1e4,0,0x20);
  (*(code *)PTR_memset_00423490)(acStack_1c4,0,0x20);
  (*(code *)PTR_memset_00423490)(acStack_1a4,0,0x20);
  local_1e8 = 0;
  iVar1 = (*(code *)PTR_strcmp_00423464)(param_1,&DAT_00410768);
  if (iVar1 == 0) {
    (*(code *)PTR_strcpy_004235e0)(auStack_144,param_2);
    iVar1 = (*(code *)PTR_strtok_r_004235c8)(auStack_144," ",&local_1e8);
    if (iVar1 != 0) {
      iVar5 = 1;
      local_3c = acStack_1a4;
      local_38 = acStack_1c4;
      local_34 = acStack_1e4;
      do {
        pcVar6 = local_34;
        if (((iVar5 == 2) || (pcVar6 = local_38, iVar5 == 3)) || (pcVar6 = local_3c, iVar5 == 4)) {
LAB_0040b914:
          (*(code *)PTR_strcpy_004235e0)(pcVar6,iVar1);
        }
        else if ((((4 < iVar5) &&
                  ((local_40 = (int)local_184[0], local_40 == 0 ||
                   (local_2c = iVar1, iVar2 = (*(code *)PTR_strcmp_00423464)(local_184,iVar1),
                   iVar1 = local_2c, iVar2 != 0)))) &&
                 ((iVar2 = (int)local_164[0], iVar2 == 0 ||
                  (local_30 = iVar2, local_2c = iVar1,
                  iVar3 = (*(code *)PTR_strcmp_00423464)(local_164,iVar1), iVar1 = local_2c,
                  iVar2 = local_30, iVar3 != 0)))) &&
                ((iVar3 = 0, local_40 == 0 || (iVar3 = 1, iVar2 == 0)))) {
          pcVar6 = local_184 + iVar3 * 0x20;
          goto LAB_0040b914;
        }
        iVar1 = (*(code *)PTR_strtok_r_004235c8)(0," ",&local_1e8);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    (*(code *)PTR_RunSystemCmd_00423428)(0,"ifconfig",param_1,acStack_1e4,"netmask",acStack_1c4,"");
    (*(code *)PTR_RunSystemCmd_00423428)
              (0,"route",&DAT_00411f00,&DAT_00411f04,"default",&DAT_00411f14,acStack_1a4,
               &DAT_00411f18,param_1,"");
    pcVar6 = local_184;
    iVar1 = 0;
    do {
      if (*pcVar6 != '\0') {
        (*(code *)PTR_sprintf_0042344c)(auStack_c4,"nameserver %s\n",pcVar6);
        uVar4 = 1;
        if (iVar1 != 0) {
          uVar4 = 2;
        }
        (*(code *)PTR_write_line_to_file_00423554)("/var/resolv.conf",uVar4,auStack_c4);
      }
      iVar1 = iVar1 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (iVar1 != 2);
  }
  return;
}

