/* Check_Wlan_isConnected @ 004087a8 */

bool Check_Wlan_isConnected(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  char *pcVar7;
  bool bVar8;
  char local_148 [12];
  byte local_13c [44];
  char local_110 [100];
  undefined1 auStack_ac [132];
  
  if (param_1 == 1) {
    (*(code *)PTR_sprintf_00423164)(auStack_ac,"/proc/%s/sta_info");
    iVar2 = (*(code *)PTR_fopen_004231b0)(auStack_ac,&DAT_00411d04);
    if (iVar2 == 0) {
      bVar6 = false;
    }
    else {
      bVar8 = false;
      bVar6 = false;
      do {
        iVar4 = (*(code *)PTR_fgets_0042329c)(local_110,100,iVar2);
        pcVar1 = local_110;
        if (iVar4 == 0) goto LAB_00408960;
        do {
          pcVar7 = pcVar1;
          pcVar1 = pcVar7 + 1;
        } while (*pcVar7 == ' ');
        iVar4 = (*(code *)PTR_strstr_00423210)(pcVar7,"active");
        if (iVar4 != 0) {
          (*(code *)PTR_sscanf_004231cc)(pcVar7,"%*[^:]:%[^)]",local_148);
          pcVar1 = local_148;
          do {
            pcVar5 = pcVar1;
            pcVar1 = pcVar5 + 1;
          } while (*pcVar5 == ' ');
          iVar4 = (*(code *)PTR_strcmp_0042317c)(pcVar5,&DAT_00411ca0);
          bVar8 = iVar4 != 0;
          bVar6 = bVar8;
        }
        iVar4 = (*(code *)PTR_strstr_00423210)(pcVar7,"hwaddr");
      } while (iVar4 == 0);
      uVar3 = (*(code *)PTR_strlen_00423108)(local_110);
      iVar4 = (*(code *)PTR_memcmp_004231dc)(local_110,param_2,uVar3);
      if (iVar4 != 0) {
        (*(code *)PTR_memcpy_00423294)(param_2,local_110,uVar3);
      }
LAB_00408960:
      (*(code *)PTR_fclose_00423198)(iVar2);
      if ((bVar6 != false) && (bVar8 == bVar6)) {
        FUN_004086c0(param_3,local_13c);
        if (local_13c[0] == 4) {
          *(undefined4 *)PTR_ClientBSSConnectionSTATE_004232f8 = 4;
        }
        else {
          if ((*(int *)PTR_LastClientBSSConnectionSTATE_004230d4 != 4) ||
             (*(uint *)PTR_ClientBSSConnectionSTATEChange_004230e8 < 0xb)) {
            *(int *)PTR_ClientBSSConnectionSTATEChange_004230e8 =
                 *(int *)PTR_ClientBSSConnectionSTATEChange_004230e8 + 1;
            return bVar6;
          }
          *(undefined4 *)PTR_ClientBSSConnectionSTATEChange_004230e8 = 0;
          bVar6 = false;
        }
        *(uint *)PTR_LastClientBSSConnectionSTATE_004230d4 = (uint)local_13c[0];
      }
    }
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

