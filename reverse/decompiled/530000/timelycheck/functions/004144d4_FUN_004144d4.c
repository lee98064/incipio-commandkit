/* FUN_004144d4 @ 004144d4 */

void FUN_004144d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar4;
  int iVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 auStack_278 [4];
  undefined4 local_274;
  char acStack_270 [32];
  char acStack_250 [32];
  undefined1 auStack_230 [32];
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [64];
  char local_1b0 [32];
  char local_190;
  char local_170;
  char local_150;
  char local_130;
  char acStack_110 [200];
  char *local_48;
  char *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  char *local_38;
  undefined4 *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0042b114)(acStack_270,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_250,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_230,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_210,0,0x20);
  local_274 = 0;
  (*(code *)PTR_printf_0042b1f0)("option = %s\n",param_2);
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_004179f0);
  pcVar6 = local_1b0;
  if (iVar1 == 0) {
    pcVar2 = pcVar6;
    do {
      pcVar7 = pcVar2 + 0x20;
      (*(code *)PTR_memset_0042b114)(pcVar2,0,0x20);
      pcVar2 = pcVar7;
    } while (pcVar7 != acStack_110);
    local_274 = 0;
    (*(code *)PTR_strcpy_0042b208)(acStack_110,param_2);
    pcVar2 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(acStack_110,&DAT_00417a44,&local_274);
    iVar1 = 1;
    if (pcVar2 != (char *)0x0) {
      local_44 = acStack_270;
      local_40 = auStack_210;
      local_3c = auStack_230;
      local_34 = &local_274;
      local_38 = acStack_250;
      do {
        if (iVar1 == 3) {
          pcVar7 = local_44;
          pcVar2 = pcVar2 + 2;
LAB_004148b0:
          (*(code *)PTR_strcpy_0042b208)(pcVar7,pcVar2);
        }
        else {
          if (iVar1 == 4) {
            pcVar7 = local_38;
            pcVar2 = pcVar2 + 2;
            goto LAB_004148b0;
          }
          if (iVar1 == 5) {
            cVar4 = *pcVar2;
            if (cVar4 == 'r') {
              local_2c = pcVar2;
              (*(code *)PTR_strcpy_0042b208)(local_3c,pcVar2 + 2);
              cVar4 = *local_2c;
              pcVar2 = local_2c;
            }
            if (cVar4 == 's') {
              local_2c = pcVar2;
              (*(code *)PTR_strcpy_0042b208)(local_40,pcVar2 + 2);
              pcVar2 = local_2c;
            }
            if (*pcVar2 == 'd') {
              local_48 = pcVar2 + 2;
              local_2c = local_1b0;
              (*(code *)PTR_printf_0042b1f0)("Index ==4, but parse dns ipaddress token=%s\n",pcVar2)
              ;
              pcVar2 = local_2c;
              do {
                pcVar7 = pcVar2 + 0x20;
                if (*pcVar2 != '\0') {
                  local_2c = pcVar2 + 0x20;
                  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar2,local_48);
                  pcVar7 = local_2c;
                  if (iVar3 == 0) goto LAB_004148c0;
                }
                pcVar2 = pcVar7;
              } while (pcVar7 != acStack_110);
              iVar3 = 0;
              if (((local_1b0[0] == '\0') || (iVar3 = 1, local_190 == '\0')) ||
                 ((iVar3 = 2, local_170 == '\0' ||
                  ((iVar3 = 3, local_150 == '\0' || (iVar3 = 4, local_130 == '\0')))))) {
                pcVar7 = local_1b0 + iVar3 * 0x20;
                pcVar2 = local_48;
                goto LAB_004148b0;
              }
            }
          }
          else if (5 < iVar1) {
            pcVar7 = local_1b0;
            if (*pcVar2 == 'd') {
              pcVar2 = pcVar2 + 2;
            }
            do {
              pcVar5 = pcVar7 + 0x20;
              if (*pcVar7 != '\0') {
                local_30 = pcVar7 + 0x20;
                local_2c = pcVar2;
                iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar7,pcVar2);
                pcVar2 = local_2c;
                pcVar5 = local_30;
                if (iVar3 == 0) goto LAB_004148c0;
              }
              pcVar7 = pcVar5;
            } while (pcVar5 != acStack_110);
            iVar3 = 0;
            if ((((local_1b0[0] == '\0') || (iVar3 = 1, local_190 == '\0')) ||
                (iVar3 = 2, local_170 == '\0')) ||
               ((iVar3 = 3, local_150 == '\0' || (iVar3 = 4, local_130 == '\0')))) {
              pcVar7 = local_1b0 + iVar3 * 0x20;
              goto LAB_004148b0;
            }
          }
        }
LAB_004148c0:
        pcVar2 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417a44,local_34);
        if (pcVar2 == (char *)0x0) break;
        iVar1 = iVar1 + 1;
      } while( true );
    }
    iVar1 = 0;
    do {
      (*(code *)PTR_printf_0042b1f0)("DNS[%d] = %s\n",iVar1,pcVar6);
      if (*pcVar6 != '\0') {
        pcVar2 = "echo \"nameserver %s\n\" > /var/resolv.conf";
        if (iVar1 != 0) {
          pcVar2 = "echo \"nameserver %s\n\" >> /var/resolv.conf";
        }
        (*(code *)PTR_sprintf_0042b0e8)(auStack_1f0,pcVar2,pcVar6);
        (*(code *)PTR_system_0042b1ac)(auStack_1f0);
      }
      iVar1 = iVar1 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (iVar1 != 5);
    local_30 = acStack_270;
    (*(code *)PTR_inet_aton_0042b120)(local_30,auStack_278);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,local_30,"netmask",acStack_250,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_00417f5c,"default",&DAT_00417f6c,param_1,"")
    ;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00417f60,&DAT_00417f64,"default",&DAT_00417e58,auStack_230,
               &DAT_00417f6c,param_1,"");
    (*(code *)PTR_system_0042b1ac)("killall -9 haier_ota 2> /dev/null");
    (*(code *)PTR_sleep_0042b1a4)(1);
  }
  return;
}

