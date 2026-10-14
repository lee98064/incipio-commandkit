/* Ghidra-generated pseudo-C; not original source or a buildable project. */
/* _init @ 0040114c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  FUN_00401348();
  iVar1 = FUN_004173f0();
  return iVar1;
}


/* entry @ 004011e0 */

void processEntry entry(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  local_8 = auStack_20;
  local_10 = PTR__fini_0042b0ec;
  local_c = param_1;
  (*(code *)PTR___uClibc_main_0042b124)
            (PTR_main_0042b110,param_2,&stack0x00000004,PTR__init_0042b194);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* FUN_00401240 @ 00401240 */

void FUN_00401240(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  code *pcVar6;
  
  if (PTR_DAT_0042b078[-0x4de0] == '\0') {
    if (PTR___cxa_finalize_0042b1b4 != (undefined *)0x0) {
      (*(code *)PTR___cxa_finalize_0042b1b4)(*(undefined4 *)PTR_LOOP_0042b07c);
    }
    puVar1 = PTR_DAT_0042b078;
    puVar4 = PTR_DAT_0042b078 + -0x5ff8;
    iVar5 = (int)PTR___DTOR_END___0042b080 - (int)puVar4;
    while( true ) {
      uVar2 = *(uint *)(puVar1 + -0x4ddc);
      iVar3 = uVar2 + 1;
      if ((iVar5 >> 2) - 1U <= uVar2) break;
      pcVar6 = *(code **)(puVar4 + iVar3 * 4);
      *(int *)(puVar1 + -0x4ddc) = iVar3;
      (*pcVar6)();
    }
    if (PTR___deregister_frame_info_0042b180 != (undefined *)0x0) {
      (*(code *)PTR___deregister_frame_info_0042b180)(PTR_DAT_0042b084 + -0x63b0);
    }
    PTR_DAT_0042b078[-0x4de0] = 1;
  }
  return;
}


/* FUN_00401348 @ 00401348 */

void FUN_00401348(void)

{
  if (PTR___register_frame_info_0042b1d8 != (undefined *)0x0) {
    (*(code *)PTR___register_frame_info_0042b1d8)
              (PTR_DAT_0042b084 + -0x63b0,PTR_DAT_0042b078 + -0x4dd8);
  }
  if (*(int *)(PTR_DAT_0042b078 + -0x5ff0) != 0) {
    if (PTR__Jv_RegisterClasses_0042b0a0 != (undefined *)0x0) {
      (*(code *)PTR__Jv_RegisterClasses_0042b0a0)(PTR_DAT_0042b078 + -0x5ff0);
      return;
    }
  }
  return;
}


/* main @ 00401408 */

undefined4 main(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = (*(code *)PTR_apmib_init_0042b0b0)();
  if (iVar1 == 0) {
    (*(code *)PTR_puts_0042b1b8)("Initialize AP MIB failed !");
    return 0xffffffff;
  }
  (*(code *)PTR_signal_0042b158)(0xe,&LAB_004013e0);
  pcVar2 = (code *)PTR_alarm_0042b190;
  do {
    (*pcVar2)(1);
    (*(code *)PTR_checkWanStatus_0042b100)();
    pcVar2 = (code *)PTR_sleep_0042b1a4;
  } while( true );
}


/* FUN_004014b0 @ 004014b0 */

char * FUN_004014b0(char *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  puVar2 = PTR___ctype_b_0042b1dc;
  do {
    pcVar3 = param_2;
    param_2 = pcVar3 + 1;
  } while ((*(ushort *)(*(int *)PTR___ctype_b_0042b1dc + *pcVar3 * 2) & 0x20) != 0);
  while( true ) {
    iVar7 = (int)*pcVar3;
    pcVar4 = pcVar3 + 1;
    pcVar5 = param_1 + 1;
    if ((iVar7 == 0) || ((*(ushort *)(*(int *)puVar2 + iVar7 * 2) & 0x20) != 0)) goto LAB_004015ac;
    if (iVar7 == 0x3a) break;
    *param_1 = *pcVar3;
    pcVar3 = pcVar4;
    param_1 = pcVar5;
  }
  *param_1 = ':';
  puVar2 = PTR___ctype_b_0042b1dc;
  while( true ) {
    cVar1 = *pcVar4;
    if ((*(ushort *)(*(int *)puVar2 + cVar1 * 2) & 8) == 0) break;
    *pcVar5 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar6 = (int)cVar1 ^ 0x3a;
  if (uVar6 != 0) {
    pcVar4 = pcVar3;
  }
  if (uVar6 != 0) {
    pcVar5 = param_1;
  }
  param_1 = pcVar5;
  pcVar3 = (char *)0x0;
  if (*pcVar4 != '\0') {
    pcVar3 = pcVar4 + 1;
LAB_004015ac:
    *param_1 = '\0';
  }
  return pcVar3;
}


/* FUN_004015b8 @ 004015b8 */

undefined4 FUN_004015b8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_5f0;
  undefined1 auStack_5ec [4];
  undefined1 auStack_5e8 [4];
  undefined1 auStack_5e4 [4];
  undefined1 auStack_5e0 [4];
  undefined1 auStack_5dc [4];
  undefined1 auStack_5d8 [4];
  undefined4 local_5d4;
  undefined1 auStack_5d0 [16];
  undefined1 auStack_5c0 [128];
  undefined1 auStack_540 [128];
  undefined1 auStack_4c0 [128];
  undefined1 auStack_440 [1024];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  
  iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/net/route",&DAT_004187f4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("Open %s file error.\n","/proc/net/route");
    uVar3 = 0;
  }
  else {
    local_40 = auStack_5ec;
    local_3c = auStack_4c0;
    local_38 = auStack_5e0;
    local_34 = auStack_5dc;
    local_30 = auStack_5d8;
    do {
      do {
        iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_440,0x3ff,iVar1);
        if (iVar2 == 0) {
          uVar3 = 0;
          goto LAB_00401760;
        }
        iVar2 = (*(code *)PTR_sscanf_0042b130)
                          (auStack_440,"%16s %128s %128s %X %d %d %d %128s %d %d %d",auStack_5d0,
                           auStack_540,auStack_5c0,&local_5f0,auStack_5e8,auStack_5e4,local_40,
                           local_3c,local_38,local_34,local_30);
      } while ((iVar2 < 10) || ((local_5f0 & 3) != 3));
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(auStack_5d0,param_1);
    } while (iVar2 != 0);
    (*(code *)PTR_sscanf_0042b130)(auStack_5c0,&DAT_004178e0,&local_5d4);
    uVar3 = 1;
    *param_2 = local_5d4;
LAB_00401760:
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return uVar3;
}


/* FUN_004017a4 @ 004017a4 */

undefined4 FUN_004017a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  undefined1 auStack_a8 [128];
  
  (*(code *)PTR_memset_0042b114)(auStack_a8,0,0x80);
  (*(code *)PTR_memset_0042b114)(auStack_128,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_e8,0,0x40);
  iVar1 = (*(code *)PTR_fopen_0042b118)(param_1,&DAT_004187f4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("Open %s file error.\n",param_1);
LAB_00401914:
    uVar3 = 0;
  }
  else {
    iVar4 = 0;
    do {
      iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_a8,0x7f,iVar1);
      if (iVar2 == 0) {
        (*(code *)PTR_fclose_0042b10c)(iVar1);
        goto LAB_00401914;
      }
      (*(code *)PTR_sscanf_0042b130)(auStack_a8,"%s %s",auStack_128,auStack_e8);
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(param_2,auStack_128);
    } while ((iVar2 != 0) ||
            ((iVar4 = (iVar4 + 1) * 0x1000000 >> 0x18, param_4 != 0 && (iVar4 != param_4))));
    (*(code *)PTR_strcpy_0042b208)(param_3,auStack_e8);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
    uVar3 = 1;
  }
  return uVar3;
}


/* FUN_00401978 @ 00401978 */

void FUN_00401978(void)

{
  int iVar1;
  int local_28;
  undefined1 auStack_24 [24];
  
  local_28 = 0;
  iVar1 = (*(code *)PTR_fopen_0042b118)("/var/run/webs.pid",&DAT_004187f4);
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0042b1d0)(auStack_24,0x14,iVar1);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
    iVar1 = (*(code *)PTR_sscanf_0042b130)(auStack_24,&DAT_00417aa4,&local_28);
    if ((iVar1 != 0) && (1 < local_28)) {
      (*(code *)PTR_puts_0042b1b8)("reinit boa ");
      (*(code *)PTR_system_0042b1ac)("killall -9 boa > /dev/null");
      (*(code *)PTR_system_0042b1ac)("rm -rf /var/run/webs.pid");
      (*(code *)PTR_system_0042b1ac)(&DAT_0041793c);
    }
  }
  return;
}


/* find_pid_by_name @ 00401a94 */

undefined4 find_pid_by_name(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 auStack_c8 [52];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [56];
  
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"init");
  uVar4 = 1;
  if (iVar1 != 0) {
    pcVar2 = (char *)(*(code *)PTR_opendir_0042b104)("/proc");
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "Cannot open /proc";
      uVar4 = 0;
      pcVar6 = (code *)PTR_printf_0042b1f0;
    }
    else {
      do {
        while( true ) {
          do {
            do {
              iVar1 = (*(code *)PTR_readdir_0042b198)(pcVar2);
              iVar5 = iVar1 + 0xb;
              if (iVar1 == 0) {
                uVar4 = 0;
                pcVar6 = (code *)PTR_closedir_0042b0a4;
                goto LAB_00401c94;
              }
              iVar3 = (*(code *)PTR_strcmp_0042b0fc)(iVar5,&DAT_00417954);
            } while ((iVar3 == 0) ||
                    ((*(ushort *)(*(int *)PTR___ctype_b_0042b1dc + *(char *)(iVar1 + 0xb) * 2) & 8)
                     == 0));
            (*(code *)PTR_sprintf_0042b0e8)(auStack_c8,"/proc/%s/status",iVar5);
            iVar1 = (*(code *)PTR_fopen_0042b118)(auStack_c8,&DAT_004187f4);
          } while (iVar1 == 0);
          iVar3 = (*(code *)PTR_fgets_0042b1d0)(auStack_94,0x31,iVar1);
          if (iVar3 != 0) break;
          (*(code *)PTR_fclose_0042b10c)();
        }
        (*(code *)PTR_fclose_0042b10c)(iVar1);
        (*(code *)PTR_sscanf_0042b130)(auStack_94,"%*s %s",auStack_60);
        iVar1 = (*(code *)PTR_strcmp_0042b0fc)(auStack_60,param_1);
      } while (iVar1 != 0);
      uVar4 = (*(code *)PTR_strtol_0042b18c)(iVar5,0,0);
      pcVar6 = (code *)PTR_closedir_0042b0a4;
    }
LAB_00401c94:
    (*pcVar6)(pcVar2);
  }
  return uVar4;
}


/* Create_script @ 00401cd0 */

void Create_script(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [108];
  
  iVar1 = (*(code *)PTR_open_0042b0b4)(param_1,0x302,0x3f);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042b174)
              (*(undefined4 *)PTR_stderr_0042b0e4,"Create %s file error!\n",param_1);
  }
  else {
    if (param_3 == 0) {
      (*(code *)PTR_strcpy_0042b208)(auStack_80,"#!/bin/sh\n");
      uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_80);
      (*(code *)PTR_write_0042b178)(iVar1,auStack_80,uVar2);
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_80,
                 "echo \"Enter Deconfig Script From BOA Since DONOT Get IP address for  %s\"\n",
                 param_2);
      uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_80);
      (*(code *)PTR_write_0042b178)(iVar1,auStack_80,uVar2);
    }
    (*(code *)PTR_close_0042b098)(iVar1);
  }
  return;
}


/* write_line_to_file @ 00401e14 */

undefined4 write_line_to_file(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_210 [512];
  
  if (param_2 == 1) {
    uVar2 = 0x302;
  }
  else {
    iVar1 = 0;
    if (param_2 != 2) goto LAB_00401e9c;
    uVar2 = 10;
  }
  iVar1 = (*(code *)PTR_open_0042b0b4)(param_1,uVar2);
  if (iVar1 < 0) {
    (*(code *)PTR_fprintf_0042b174)(*(undefined4 *)PTR_stderr_0042b0e4,"Create %s error!\n",param_1)
    ;
    return 0;
  }
LAB_00401e9c:
  (*(code *)PTR_strcpy_0042b208)(auStack_210,param_3);
  uVar2 = (*(code *)PTR_strlen_0042b0bc)(auStack_210);
  (*(code *)PTR_write_0042b178)(iVar1,auStack_210,uVar2);
  (*(code *)PTR_close_0042b098)(iVar1);
  return 1;
}


/* if_readlist_proc @ 00401f18 */

int if_readlist_proc(char *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [516];
  
  iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/net/dev",&DAT_004187f4);
  iVar4 = 0;
  if (iVar1 != 0) {
    (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1);
    (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1);
    iVar4 = 0;
    while (iVar2 = (*(code *)PTR_fgets_0042b1d0)(auStack_228,0x200,iVar1), iVar2 != 0) {
      FUN_004014b0(auStack_248,auStack_228);
      iVar2 = (*(code *)PTR_strstr_0042b160)(auStack_248,param_2);
      if (iVar2 != 0) {
        puVar3 = auStack_248;
        pcVar5 = (code *)PTR_strcpy_0042b208;
        if (*param_1 != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_238," %s",auStack_248);
          puVar3 = auStack_238;
          pcVar5 = (code *)PTR_strcat_0042b170;
        }
        iVar4 = iVar4 + 1;
        (*pcVar5)(param_1,puVar3);
      }
    }
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return iVar4;
}


/* FUN_004020b0 @ 004020b0 */

void FUN_004020b0(char *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 auStack_30 [32];
  
  (*(code *)PTR_memset_0042b114)(auStack_30,0,0x1e);
  pcVar1 = (code *)PTR_strcpy_0042b208;
  if (*param_1 != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_30," %s",param_2);
    param_2 = auStack_30;
    pcVar1 = (code *)PTR_strcat_0042b170;
  }
  (*pcVar1)(param_1,param_2);
  return;
}


/* getInAddr @ 00402158 */

undefined4 getInAddr(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  uVar1 = (*(code *)PTR_socket_0042b19c)(2,1,0);
  (*(code *)PTR_strcpy_0042b208)(auStack_38,param_1);
  iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8913,auStack_38);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_004022b4;
  }
  if (param_2 == 8) {
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8927,auStack_38);
    if (-1 < iVar2) {
      (*(code *)PTR_memcpy_0042b1c8)(param_3,auStack_28,0x10);
      uVar3 = 1;
      goto LAB_004022b4;
    }
  }
  else if (param_2 == 2) {
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,0x8915,auStack_38);
    if (iVar2 == 0) {
LAB_00402298:
      uVar3 = 1;
      *param_3 = local_24;
      goto LAB_004022b4;
    }
  }
  else {
    if (param_2 == 4) {
      uVar3 = 0x891b;
    }
    else {
      uVar3 = 0x8917;
    }
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(uVar1,uVar3,auStack_38);
    if (-1 < iVar2) goto LAB_00402298;
  }
  uVar3 = 0;
LAB_004022b4:
  (*(code *)PTR_close_0042b098)(uVar1);
  return uVar3;
}


/* setInAddr @ 004022dc */

undefined4 setInAddr(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint local_60;
  uint local_5c;
  undefined2 local_58;
  undefined1 auStack_56 [14];
  undefined1 auStack_48 [16];
  undefined2 local_38 [2];
  uint local_34;
  
  iVar1 = (*(code *)PTR_socket_0042b19c)(2,1,0);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_48,param_1);
  iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8913,auStack_48);
  if (iVar2 < 0) {
    (*(code *)PTR_close_0042b098)(iVar1);
    return 0xffffffff;
  }
  if ((param_5 & 0xf) == 1) {
    return 0;
  }
  local_38[0] = 0x1043;
  if (((param_5 & 2) != 0) && (param_2 != 0)) {
    (*(code *)PTR_inet_aton_0042b120)(param_2,&local_60);
    local_34 = local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8916,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
  }
  if ((((param_5 & 4) != 0) && (param_2 != 0)) && (param_3 != 0)) {
    (*(code *)PTR_inet_aton_0042b120)(param_3,&local_5c);
    local_34 = local_5c;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x891c,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
    local_34 = ~local_5c | local_5c & local_60;
    local_38[0] = 2;
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x891a,auStack_48);
    if (iVar2 < 0) goto LAB_0040252c;
  }
  if (((param_5 & 8) != 0) && (param_4 != 0)) {
    local_58 = 1;
    (*(code *)PTR_memcpy_0042b1c8)(auStack_56,param_4,6);
    (*(code *)PTR_memcpy_0042b1c8)(local_38,&local_58,0x10);
    iVar2 = (*(code *)PTR_ioctl_0042b1fc)(iVar1,0x8924,auStack_48);
    if (iVar2 < 0) {
LAB_0040252c:
      (*(code *)PTR_close_0042b098)(iVar1);
      (*(code *)PTR_perror_0042b1c0)(param_1);
      return 0xffffffff;
    }
  }
  (*(code *)PTR_close_0042b098)(iVar1);
  return 0;
}


/* getPid_fromFile @ 00402584 */

undefined4 getPid_fromFile(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18 [3];
  
  local_18[0] = 0xffffffff;
  iVar1 = (*(code *)PTR_fopen_0042b118)(param_1,&DAT_004187f4);
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("can not open:%s\n",param_1);
    local_18[0] = 0xffffffff;
  }
  else {
    (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_00417aa4,local_18);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  return local_18[0];
}


/* isFileExist @ 0040262c */

uint isFileExist(undefined4 param_1)

{
  uint uVar1;
  undefined1 auStack_a0 [156];
  
  uVar1 = (*(code *)PTR_stat_0042b0d8)(param_1,auStack_a0);
  return ~uVar1 >> 0x1f;
}


/* DoCmd @ 00402664 */

uint DoCmd(int *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint local_40;
  undefined1 auStack_3c [40];
  
  iVar1 = (*(code *)PTR_fork_0042b134)();
  if (iVar1 == -1) {
    (*(code *)PTR_perror_0042b1c0)(&DAT_00417a18);
    puVar2 = (uint *)(*(code *)PTR___errno_location_0042b0d0)();
    return *puVar2;
  }
  if (iVar1 != 0) {
    (*(code *)PTR_waitpid_0042b200)(iVar1,&local_40,0);
    if ((local_40 & 0x7f) != 0) {
      return local_40;
    }
    return (int)(local_40 & 0xff00) >> 8;
  }
  (*(code *)PTR_signal_0042b158)(2,1);
  iVar1 = 2;
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_open_0042b0b4)(param_2,0x102);
    if (iVar1 == -1) {
      puVar5 = auStack_3c;
      (*(code *)PTR_sprintf_0042b0e8)(puVar5,"open %s",param_2);
      goto LAB_004027e8;
    }
    (*(code *)PTR_dup2_0042b1b0)(iVar1,1);
    (*(code *)PTR_dup2_0042b1b0)(iVar1,2);
  }
  (*(code *)PTR_close_0042b098)(iVar1);
  (*(code *)PTR_setenv_0042b144)(&DAT_00417a28,"/sbin:/bin:/usr/sbin:/usr/bin",1);
  (*(code *)PTR_execvp_0042b0a8)(*param_1,param_1);
  puVar5 = (undefined1 *)*param_1;
LAB_004027e8:
  (*(code *)PTR_perror_0042b1c0)(puVar5);
  puVar3 = (undefined4 *)(*(code *)PTR___errno_location_0042b0d0)();
  uVar4 = (*(code *)PTR_exit_0042b0cc)(*puVar3);
  return uVar4;
}


/* RunSystemCmd @ 00402868 */

void RunSystemCmd(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStackX_0 [4];
  undefined4 local_res4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 *local_78;
  undefined4 local_74 [26];
  
  puVar2 = local_74;
  local_res4 = param_2;
  local_res8 = param_3;
  local_resc = param_4;
  (*(code *)PTR_memset_0042b114)(puVar2,0,0x60);
  iVar1 = 0;
  local_78 = (undefined4 *)register0x00000074;
  while( true ) {
    local_78 = local_78 + 1;
    iVar1 = iVar1 + 1;
    if (*(char *)*local_78 == '\0') break;
    *puVar2 = (char *)*local_78;
    puVar2 = puVar2 + 1;
  }
  local_74[iVar1] = 0;
  DoCmd(local_74,param_1);
  return;
}


/* killDaemonByPidFile @ 00402918 */

undefined4 killDaemonByPidFile(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  undefined1 *local_10;
  
  if (param_1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("%s : input file name is null!\n","killDaemonByPidFile");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = isFileExist();
    uVar2 = 0xffffffff;
    if (iVar1 != 0) {
      iVar1 = getPid_fromFile(param_1);
      if (iVar1 != 0) {
        local_10 = auStack_20;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_20,&DAT_00417aa4,iVar1);
        RunSystemCmd(0,&DAT_00417a70,&DAT_00417a78,local_10,"");
      }
      (*(code *)PTR_unlink_0042b148)(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


/* getWispRptIfaceName @ 004029f0 */

/* WARNING: Type propagation algorithm not settling */

undefined4 getWispRptIfaceName(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int local_30;
  int local_2c;
  int local_28 [6];
  
  local_30 = 0;
  local_2c = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  if (param_2 == 0) {
    uVar3 = 0xfa;
  }
  else {
    if (param_2 != 1) {
      return 0xffffffff;
    }
    uVar3 = 0xfc;
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar3,&local_30);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,local_28);
  uVar3 = 0xffffffff;
  if (local_28[0] == 2) {
    (*(code *)PTR_apmib_save_wlanIdx_0042b13c)();
    (*(code *)PTR_sprintf_0042b0e8)(local_28 + 1,&DAT_00417aa0,param_2);
    (*(code *)PTR_SetWlan_idx_0042b1cc)(local_28 + 1);
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_2c);
    if (((((local_2c == 0) || (local_2c == 3)) || (local_2c == 4)) || (local_2c == 5)) &&
       (local_30 != 0)) {
      iVar1 = (*(code *)PTR_strstr_0042b160)(param_1,&DAT_00417aa8);
      if (iVar1 == 0) {
        (*(code *)PTR_strcat_0042b170)(param_1,&DAT_00417aa8);
      }
    }
    else {
      puVar2 = (undefined1 *)(*(code *)PTR_strstr_0042b160)(param_1,&DAT_00417aa8);
      if (puVar2 != (undefined1 *)0x0) {
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
    }
    (*(code *)PTR_apmib_recov_wlanIdx_0042b17c)();
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_00402bb4 @ 00402bb4 */

void FUN_00402bb4(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [3];
  
  local_18 = 0;
  local_14 = 0;
  local_10[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,local_10);
  if (local_10[0] != 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_18);
    (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_14);
    (*(code *)PTR_set_QoS_0042b12c)(local_10[0],local_14,local_18);
  }
  return;
}


/* FUN_00402c4c @ 00402c4c */

/* WARNING: Type propagation algorithm not settling */

void FUN_00402c4c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_50;
  int local_4c [13];
  int *local_18;
  int *local_14;
  
  if (3 < param_1) {
    local_4c[9] = 0;
    local_4c[10] = 0;
    local_4c[0xb] = 0;
    local_4c[0xc] = 0;
    local_4c[5] = 0;
    local_4c[6] = 0;
    local_4c[7] = 0;
    local_4c[8] = 0;
    local_4c[1] = 0;
    local_4c[2] = 0;
    local_4c[3] = 0;
    local_4c[4] = 0;
    local_4c[0] = 0;
    local_50 = 0;
    (*(code *)PTR_apmib_get_0042b1a0)(0xc0,local_4c);
    if (local_4c[0] != 1) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_50);
      piVar1 = local_4c + 9;
      (*(code *)PTR_strcpy_0042b208)(piVar1,*(undefined4 *)(param_2 + 4));
      iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,"pppoe");
      if (iVar2 == 0) {
        uVar3 = 3;
      }
      else {
        iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,&DAT_004194bc);
        uVar3 = 4;
        if (iVar2 != 0) {
          iVar2 = (*(code *)PTR_strcmp_0042b0fc)(piVar1,"l2tp");
          uVar3 = 6;
          if (iVar2 != 0) {
            (*(code *)PTR_puts_0042b1b8)("Un-support wan type for init");
            return;
          }
        }
      }
      local_14 = local_4c + 1;
      (*(code *)PTR_strcpy_0042b208)(local_14,&DAT_00417ad0);
      local_18 = local_4c + 5;
      (*(code *)PTR_strcpy_0042b208)(local_18,*(undefined4 *)(param_2 + 0xc));
      (*(code *)PTR_start_wan_0042b20c)(uVar3,local_4c[0],local_18,local_14,local_50,0);
    }
  }
  return;
}


/* FUN_00402dfc @ 00402dfc */

void FUN_00402dfc(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_18;
  int local_14 [2];
  
  local_18 = 0;
  local_14[0] = 0;
  iVar1 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
  if (iVar1 != 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_18);
  }
  if ((param_1 == 1) && (param_2 != 1)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x8e,local_14);
  }
  else {
    local_14[0] = 0;
  }
  if (local_18 == 0) {
    if (local_14[0] != 0) {
      if (local_14[0] != 1) {
        return;
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"mini_upnpd",&DAT_00417ae8,"/tmp/wscd_config",&DAT_00417b0c,"/tmp/igd_config",
                 "-daemon","");
      return;
    }
    puVar2 = &DAT_00417ae8;
    pcVar3 = "/tmp/wscd_config";
  }
  else {
    if (local_18 != 1) {
      return;
    }
    if (local_14[0] != 1) {
      return;
    }
    puVar2 = &DAT_00417b0c;
    pcVar3 = "/tmp/igd_config";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"mini_upnpd",puVar2,pcVar3,"-daemon","");
  return;
}


/* FUN_00402fa4 @ 00402fa4 */

void FUN_00402fa4(undefined4 param_1)

{
  int local_218;
  undefined1 auStack_214 [516];
  
  local_218 = -1;
  (*(code *)PTR_memset_0042b114)(auStack_214,0,0x200);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_218);
  if (DAT_0042b29c != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b29c);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
  }
  if (DAT_0042b518._0_1_ != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b518);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
  }
  if (DAT_0042b4bc != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b4bc);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
  }
  if (DAT_0042b528 != '\0') {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b528);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
  }
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b25c);
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
  (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b26c);
  if (local_218 - 1U < 2) {
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_00417b24);
    (*(code *)PTR_strcat_0042b170)(auStack_214,&DAT_0042b27c);
  }
  (*(code *)PTR_memcpy_0042b1c8)(param_1,auStack_214,0x200);
  return;
}


/* FUN_004031dc @ 004031dc */

undefined4 FUN_004031dc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_120 [13];
  undefined1 auStack_113 [243];
  
  (*(code *)PTR_memcpy_0042b1c8)(auStack_120,"/etc/udhcpc/",0xd);
  (*(code *)PTR_memset_0042b114)(auStack_113,0,0xf3);
  iVar1 = (*(code *)PTR_opendir_0042b104)("/etc/udhcpc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("Cannot open /etc/udhcpc");
    uVar2 = 0xffffffff;
  }
  else {
    while( true ) {
      iVar4 = (*(code *)PTR_readdir_0042b198)(iVar1);
      iVar5 = iVar4 + 0xb;
      if (iVar4 == 0) break;
      iVar3 = (*(code *)PTR_strncmp_0042b154)("udhcpc-",iVar5,7);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_strlen_0042b0bc)(iVar5);
        iVar4 = (*(code *)PTR_strncmp_0042b154)(".pid",iVar4 + iVar3 + 7,4);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_0042b208)(auStack_120,"/etc/udhcpc/");
          (*(code *)PTR_strcat_0042b170)(auStack_120,iVar5);
          (*(code *)PTR_killDaemonByPidFile_0042b128)(auStack_120);
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


/* FUN_0040338c @ 0040338c */

void FUN_0040338c(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [204];
  undefined1 *local_18;
  
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/sw_nat");
    if (iVar1 == 0) goto LAB_00403540;
    if (param_1 == 0) {
      if (param_2 == 0x10) {
        pcVar2 = "/proc/sw_nat";
        pcVar3 = "1";
      }
      else {
        pcVar2 = "/proc/sw_nat";
        pcVar3 = "0";
      }
    }
    else {
      if (param_1 == 1) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004034b4;
      }
      if (param_1 == 2) {
        pcVar2 = "/proc/sw_nat";
        goto LAB_004034d8;
      }
      pcVar2 = "/proc/sw_nat";
      if (param_1 == 3) goto LAB_004034f8;
      if (param_1 != 4) goto LAB_00403540;
      pcVar2 = "/proc/sw_nat";
      pcVar3 = "4";
    }
  }
  else if (param_1 == 0) {
    pcVar2 = "/proc/hw_nat";
LAB_004034b4:
    pcVar3 = "1";
  }
  else if (param_1 == 1) {
    pcVar2 = "/proc/hw_nat";
LAB_004034d8:
    pcVar3 = "2";
  }
  else if (param_1 == 2) {
    pcVar2 = "/proc/hw_nat";
LAB_004034f8:
    pcVar3 = "3";
  }
  else if (param_1 == 3) {
    pcVar2 = "/proc/hw_nat";
    pcVar3 = "4";
  }
  else {
    pcVar2 = "/proc/hw_nat";
    pcVar3 = "5";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar2,&DAT_00417b58,pcVar3,"");
LAB_00403540:
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"miniigd","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/miniupnpd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/miniupnpd.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"routed","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/routed.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/routed.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/first","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstpptp","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstl2tp","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstdemand","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"timelycheck","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_00417c20,"");
  (*(code *)PTR_wan_disconnect_0042b11c)("all");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ntp_inet","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ddns.sh","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"syslogd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"klogd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"mini_upnpd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"reload","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/l2tpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/l2tpd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/l2tpd.pid");
  }
  FUN_004031dc();
  (*(code *)PTR_sprintf_0042b0e8)(auStack_e4,"/etc/udhcpc/udhcpc-%s.pid",&DAT_00417ad0);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_e4);
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)(auStack_e4);
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/dnrd.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/igmp_pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(local_18,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/igmp_pid");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417b58,&DAT_00417cc0,"");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/lld2d-br0.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/lld2d-br0.pid");
    if (iVar1 != 0) {
      local_18 = auStack_f0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_18,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/lld2d-br0.pid");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/udhcpd.pid");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/udhcpd.pid");
    if (iVar1 != 0) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_f0,&DAT_00417aa4,iVar1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417cf0,auStack_f0,"");
      (*(code *)PTR_sleep_0042b1a4)(1);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,auStack_f0,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/udhcpd.pid");
  }
  return;
}


/* FUN_00403bf4 @ 00403bf4 */

void FUN_00403bf4(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined1 local_ec [20];
  uint local_d8;
  uint local_d4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [104];
  
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_d0,0,0x40);
  puVar2 = PTR_apmib_get_0042b1a0;
  puVar1 = PTR_vwlan_idx_0042b16c;
  *(int *)PTR_wlan_idx_0042b15c = param_1;
  uVar6 = *(undefined4 *)puVar1;
  *(undefined4 *)puVar1 = 0;
  (*(code *)puVar2)(0x16,&local_f8);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_d0,"/var/wlsch.conf%d",param_1);
  (*(code *)PTR_unlink_0042b148)(auStack_d0);
  if (local_f8 == 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x1f7,&local_f4);
    (*(code *)PTR_apmib_get_0042b1a0)(0x1f8,&local_f0);
    if (local_f4 == 1) {
      iVar5 = 1;
      if (0 < local_f0) {
        for (iVar4 = 1; iVar4 <= local_f0; iVar4 = iVar4 + 1) {
          local_ec[0] = (undefined1)iVar4;
          (*(code *)PTR_apmib_get_0042b1a0)(0x81f9,local_ec);
          (*(code *)PTR_memset_0042b114)(auStack_90,0,100);
          if (local_d8 >> 0x10 == 1) {
            if (((local_d8 & 0xffff) != 0) || (local_d4._0_2_ != 0)) {
              (*(code *)PTR_sprintf_0042b0e8)
                        (auStack_90,"%d,%d,%d,%d\n",iVar4,local_d4 & 0xffff,local_d8 & 0xffff,
                         local_d4 >> 0x10);
              (*(code *)PTR_sprintf_0042b0e8)(auStack_d0,"/var/wlsch.conf%d",param_1);
              uVar3 = 2;
              if (iVar5 == 1) {
                uVar3 = 1;
              }
              (*(code *)PTR_write_line_to_file_0042b1a8)(auStack_d0,uVar3,auStack_90);
              iVar5 = 2;
            }
          }
        }
      }
    }
    if (param_1 != 0) goto LAB_00403e78;
    (*(code *)PTR_sprintf_0042b0e8)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  else {
    if (param_1 != 0) goto LAB_00403e78;
    (*(code *)PTR_sprintf_0042b0e8)(auStack_d0,"reload -k %s &","/var/wlsch.conf");
  }
  (*(code *)PTR_system_0042b1ac)(auStack_d0);
LAB_00403e78:
  *(undefined4 *)PTR_vwlan_idx_0042b16c = 0;
  *(undefined4 *)PTR_wlan_idx_0042b15c = uVar6;
  return;
}


/* FUN_00403ec0 @ 00403ec0 */

void FUN_00403ec0(int param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char local_90 [132];
  
  (*(code *)PTR_memset_0042b114)(local_90,0,0x80);
  if (param_1 == 1) {
    if (DAT_0042b518._0_1_ == '\0') goto LAB_00404058;
    if (DAT_0042b4bc == '\0') {
      if (DAT_0042b528 == '\0') goto joined_r0x0040402c;
      if (DAT_0042b25c == '\0') goto LAB_00404058;
      puVar3 = &DAT_0042b25c;
      pcVar1 = "%s %s %s";
      puVar2 = &DAT_0042b528;
    }
    else {
      if (DAT_0042b528 == '\0') {
        if (DAT_0042b25c == '\0') goto LAB_00404058;
        puVar3 = &DAT_0042b25c;
        pcVar1 = "%s %s %s";
      }
      else {
        if (DAT_0042b25c == '\0') goto LAB_00404058;
        puVar3 = &DAT_0042b528;
        pcVar1 = "%s %s %s %s";
      }
      puVar2 = &DAT_0042b4bc;
    }
    (*(code *)PTR_sprintf_0042b0e8)(local_90,pcVar1,&DAT_0042b518,puVar2,puVar3);
  }
  else {
    if (DAT_0042b518._0_1_ == '\0') goto LAB_00404058;
joined_r0x0040402c:
    if (DAT_0042b25c != '\0') {
      (*(code *)PTR_sprintf_0042b0e8)(local_90,"%s %s",&DAT_0042b518,&DAT_0042b25c);
    }
  }
LAB_00404058:
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/gpio",&DAT_00417b58,&DAT_00417d5c,"");
  if (local_90[0] != '\0') {
    (*(code *)PTR_setWlan_Applications_0042b1f4)("start",local_90);
  }
  (*(code *)PTR_system_0042b1ac)("rm -f  /var/system/start_init 2> /dev/null");
  return;
}


/* FUN_004040d0 @ 004040d0 */

void FUN_004040d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_80;
  int local_7c;
  undefined4 local_78 [8];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [36];
  
  local_80 = 0;
  local_7c = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xb8,&local_80);
  if (((((local_80 != 0) && (local_80 != 2)) && (local_80 != 4)) &&
      ((local_80 != 6 && (local_80 != 8)))) &&
     ((local_80 != 10 && ((local_80 != 0xc && (local_80 != 0xe)))))) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xe3,&local_7c);
    if (local_7c == 0) {
      (*(code *)PTR_system_0042b1ac)("rm /var/log/log_split >/dev/null 2>&1");
      (*(code *)PTR_sprintf_0042b0e8)(local_78,"echo %d > /var/log/log_split",7);
      (*(code *)PTR_system_0042b1ac)(local_78);
      (*(code *)PTR_sprintf_0042b0e8)(local_78,&DAT_00417aa4,8);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_58,&DAT_00417aa4,7);
      (*(code *)PTR_fprintf_0042b174)
                (*(undefined4 *)PTR_stderr_0042b0e4,
                 "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"syslogd",&DAT_00417e20,&DAT_00417e28,local_78,&DAT_00417e2c,auStack_58,"");
    }
    else {
      (*(code *)PTR_apmib_get_0042b1a0)(0xe4,local_78);
      iVar1 = (*(code *)PTR_memcmp_0042b138)(local_78,&DAT_004185a0,4);
      if (iVar1 != 0) {
        uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_78[0]);
        (*(code *)PTR_strcpy_0042b208)(auStack_38,uVar2);
        (*(code *)PTR_system_0042b1ac)("rm /var/log/log_split >/dev/null 2>&1");
        (*(code *)PTR_sprintf_0042b0e8)(local_78,"echo %d > /var/log/log_split",7);
        (*(code *)PTR_system_0042b1ac)(local_78);
        (*(code *)PTR_sprintf_0042b0e8)(local_78,&DAT_00417aa4,8);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_58,&DAT_00417aa4,7);
        (*(code *)PTR_fprintf_0042b174)
                  (*(undefined4 *)PTR_stderr_0042b0e4,
                   "syslog will use %dKB for log(%d rotate, 1 original, %dKB for each)\n",0x40,7,8);
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"syslogd",&DAT_00417e20,&DAT_00417e24,auStack_38,&DAT_00417e28,local_78,
                   &DAT_00417e2c,auStack_58,"");
      }
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"klogd","");
  }
  return;
}


/* FUN_0040441c @ 0040441c */

undefined4 FUN_0040441c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_28 [2];
  
  local_28[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x28f,local_28);
  iVar1 = (*(code *)PTR_atoi_0042b0c4)(&DAT_0042a0b4);
  uVar3 = 0xffffffff;
  if (local_28[0] != iVar1) {
    piVar4 = &DAT_0042a954;
    (*(code *)PTR_puts_0042b1b8)("MIB Version update");
    iVar1 = 0;
    while( true ) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x41;
      if (iVar2 == 0) break;
      iVar2 = iVar1 * 0x104;
      iVar1 = iVar1 + 1;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"flash",&DAT_00417e4c,s_MFI_WAC_DEVICE_NAME_0042a958 + iVar2,
                 s_USER_DEF_WACNAME_0042a9d8 + iVar2,"");
    }
    piVar4 = &DAT_0042a030;
    iVar1 = 0;
    while( true ) {
      iVar2 = *piVar4;
      piVar4 = piVar4 + 0x41;
      if (iVar2 == 0) break;
      iVar2 = iVar1 * 0x104;
      iVar1 = iVar1 + 1;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"flash",&DAT_00417e4c,s_MIB_VER_0042a034 + iVar2,&DAT_0042a0b4 + iVar2,"");
    }
    uVar3 = 0;
  }
  return uVar3;
}


/* FUN_004045bc @ 004045bc */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_004045bc(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined4 uVar12;
  code *pcVar13;
  char *local_3f0;
  uint local_3ec;
  int local_3e8 [3];
  undefined *local_3dc;
  uint local_3d8;
  int local_3d4;
  int local_3d0 [6];
  undefined4 *local_3b8;
  undefined4 auStack_3b4 [4];
  undefined1 auStack_3a4 [32];
  undefined1 auStack_384 [32];
  char local_364 [32];
  char acStack_344 [32];
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined2 local_2dc;
  char acStack_294 [100];
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  char *local_30;
  
  local_3f0 = (char *)0xffffffff;
  local_3ec = 0;
  local_3e8[0] = 0;
  local_3e8[1] = 0;
  local_3e8[2] = 0;
  local_3dc = (undefined *)0x0;
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0[0] = 0;
  local_3d0[1] = 0;
  local_3d0[3] = 0;
  iVar2 = (*(code *)PTR_strcmp_0042b0fc)(*(undefined4 *)(param_2 + 8),"ap");
  if ((iVar2 != 0) ||
     (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(*(undefined4 *)(param_2 + 0xc),"wlan_app"), iVar2 != 0)
     ) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_00417e68,&DAT_00417e70,"");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/set_time");
  if (iVar2 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","settime","");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/reinit");
  if (iVar2 == 0) {
    FUN_0040441c();
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/reinit",&DAT_00417b58,"1","");
  }
  (*(code *)PTR_system_0042b1ac)("echo 1 > /var/system/start_init");
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_check");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_check");
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_dhcp_info");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_dhcp_info");
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp/manual_connect_now");
  }
  (*(code *)PTR_puts_0042b1b8)("Init Start...");
  (*(code *)PTR_memset_0042b114)(&local_324,0,0x40);
  (*(code *)PTR_memset_0042b114)(&local_2e4,0,0x50);
  (*(code *)PTR_apmib_get_0042b1a0)(0x2b1,&local_324);
  if (local_324._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(&local_2e4,"hostname \'%s\'",&local_324);
    (*(code *)PTR_system_0042b1ac)(&local_2e4);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_3f0);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_3dc);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_3d8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_3d4);
  DAT_0042b288 = 0;
  _DAT_0042b27c = 0;
  DAT_0042b280 = 0;
  DAT_0042b284 = 0;
  (*(code *)PTR_memset_0042b114)(&DAT_0042b29c,0,0x20);
  if (local_3f0 == (char *)0x0) {
    pcVar5 = "0";
LAB_00404990:
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/sys_op",&DAT_00417b58,pcVar5,"");
  }
  else {
    if (local_3f0 == (char *)0x1) {
      pcVar5 = "1";
      goto LAB_00404990;
    }
    if (local_3f0 == (char *)0x2) {
      pcVar5 = "2";
      goto LAB_00404990;
    }
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_3b4,*(undefined4 *)(param_2 + 8));
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"ap");
  if (iVar3 == 0) {
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b25c,&DAT_00417ad0);
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b26c,&DAT_00417e68);
    DAT_0042b250 = 0;
  }
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,&DAT_00417f38);
  if (iVar3 == 0) {
    DAT_0042b250 = 1;
    if (local_3f0 == (char *)0x2) {
      (*(code *)PTR_sprintf_0042b0e8)(&DAT_0042b28c,&DAT_00417aa0,local_3dc);
      getWispRptIfaceName(&DAT_0042b28c,local_3dc);
    }
    else {
      (*(code *)PTR_strcpy_0042b208)(&DAT_0042b28c,&DAT_00417f3c);
    }
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b25c,&DAT_00417ad0);
    (*(code *)PTR_strcpy_0042b208)(&DAT_0042b26c,&DAT_00417e68);
    if (local_3f0 + -1 < (char *)0x2) {
      (*(code *)PTR_strcpy_0042b208)(&DAT_0042b27c,&DAT_00417f3c);
    }
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpProxy",&DAT_00417b58,&DAT_00418d58,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x268,&local_3ec);
  if (local_3ec == 0) {
    (*(code *)PTR_memset_0042b114)(&DAT_0042b29c,0,0x20);
  }
  else {
    (*(code *)PTR_sprintf_0042b0e8)
              (&DAT_0042b29c,"%s %s %s",&DAT_00417f58,&DAT_00417f60,&DAT_00417f68);
  }
  DAT_0042b518 = 0;
  DAT_0042b51c = 0;
  DAT_0042b520 = 0;
  DAT_0042b524 = 0;
  (*(code *)PTR_memset_0042b114)(&DAT_0042b4bc,0,0x50);
  (*(code *)PTR_memset_0042b114)(&DAT_0042b528,0,0x20);
  (*(code *)PTR_memset_0042b114)(&DAT_0042b2bc,0,0x200);
  if (DAT_0042b518._0_1_ == '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(&DAT_0042b518,&DAT_00417aa0,0);
  }
  else {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," wlan%d",0);
    (*(code *)PTR_strcat_0042b170)(&DAT_0042b518,auStack_3b4);
  }
  DAT_0042b50c = 1;
  DAT_0042b510 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b4bc,&DAT_00417f78,0);
  DAT_0042b514 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b528,&DAT_00417f7c,0);
  iVar3 = (*(code *)PTR_if_readlist_proc_0042b09c)(&DAT_0042b2bc,&DAT_00417f80,0);
  if (iVar3 == 0) {
    DAT_0042b524 = 0;
    DAT_0042b518 = 0;
    DAT_0042b51c = 0;
    DAT_0042b520 = 0;
  }
  (*(code *)PTR_strcpy_0042b208)(auStack_3b4,*(undefined4 *)(param_2 + 0xc));
  iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"all");
  if (((iVar4 == 0) ||
      (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,&DAT_00417f88), iVar4 == 0)) ||
     (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"bridge"), iVar4 == 0)) {
    DAT_0042b258 = 1;
    DAT_0042b254 = 1;
  }
  else {
    iVar4 = (*(code *)PTR_strcmp_0042b0fc)(auStack_3b4,"wlan_app");
    if (iVar4 == 0) {
      FUN_00403ec0(0);
      return 0;
    }
  }
  if (iVar2 == 0) {
    iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/sw_nat");
      if (iVar2 == 0) goto LAB_00404fb8;
      if (local_3f0 == (char *)0x0) {
        if (local_3d4 == 0x10) {
          pcVar5 = "/proc/sw_nat";
          pcVar6 = "1";
        }
        else {
          pcVar5 = "/proc/sw_nat";
          pcVar6 = "0";
        }
      }
      else {
        if (local_3f0 == (char *)0x1) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f30;
        }
        if (local_3f0 == (char *)0x2) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f50;
        }
        if (local_3f0 == (char *)0x3) {
          pcVar5 = "/proc/sw_nat";
          goto LAB_00404f74;
        }
        if (local_3f0 != (char *)0x4) goto LAB_00404fb8;
        pcVar5 = "/proc/sw_nat";
        pcVar6 = "4";
      }
    }
    else {
      pcVar5 = "/proc/hw_nat";
      if (local_3f0 == (char *)0x0) {
LAB_00404f30:
        pcVar6 = "1";
      }
      else if (local_3f0 == (char *)0x1) {
        pcVar5 = "/proc/hw_nat";
LAB_00404f50:
        pcVar6 = "2";
      }
      else if (local_3f0 == (char *)0x2) {
        pcVar5 = "/proc/hw_nat";
LAB_00404f74:
        pcVar6 = "3";
      }
      else if (local_3f0 == (char *)0x3) {
        pcVar5 = "/proc/hw_nat";
        pcVar6 = "4";
      }
      else {
        pcVar5 = "/proc/hw_nat";
        pcVar6 = "5";
      }
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar5,&DAT_00417b58,pcVar6,"");
  }
  else {
    FUN_0040338c(local_3f0,local_3d4,DAT_0042b250,DAT_0042b254,&DAT_0042b25c,&DAT_0042b518,
                 &DAT_0042b28c);
  }
LAB_00404fb8:
  (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4,&DAT_00417aa4,local_3d4);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/system/last_wan",&DAT_00417b58,auStack_3b4,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0xfa,local_3e8);
  (*(code *)PTR_apmib_get_0042b1a0)(0xfc,local_3e8 + 1);
  iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
  if (iVar2 != 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b,local_3d0);
    (*(code *)PTR_apmib_get_0042b1a0)(0x16,local_3d0 + 1);
  }
  bVar11 = true;
  if ((local_3d0[0] != 0) && (local_3d0[0] != 3)) {
    bVar11 = local_3e8[0] == 1;
  }
  (*(code *)PTR_memset_0042b114)(&DAT_0042b528,0,0x20);
  if ((local_3e8[0] == 1) &&
     (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(&DAT_0042b28c,"wlan0-vxd"), iVar2 != 0)) {
    if (DAT_0042b528 != '\0') {
      (*(code *)PTR_strcat_0042b170)(&DAT_0042b528,&DAT_00417b24);
    }
    (*(code *)PTR_strcat_0042b170)(&DAT_0042b528,"wlan0-vxd");
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0x17,&local_230);
  iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004185a8,6);
  if (iVar2 == 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_230);
  }
  pcVar5 = (char *)(local_230 & 0xff);
  pcVar6 = acStack_294;
  (*(code *)PTR_sprintf_0042b0e8)
            (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,local_230 >> 8 & 0xff
             ,pcVar5,local_22c,local_22b);
  if (DAT_0042b26c != '\0') {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b26c,&DAT_00417fa0,"ether",pcVar6,"")
    ;
    pcVar5 = pcVar6;
  }
  if (local_3f0 + -1 < (char *)0x2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x17,&local_230);
    iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004185a8,6);
    if (iVar2 == 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xca,&local_230);
    }
    pcVar5 = (char *)(local_230 & 0xff);
    pcVar6 = acStack_294;
    (*(code *)PTR_sprintf_0042b0e8)
              (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,pcVar5,local_22c,local_22b);
    if (DAT_0042b27c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"ifconfig",&DAT_0042b27c,&DAT_00417fa0,"ether",pcVar6,"");
      pcVar5 = pcVar6;
    }
  }
  if ((DAT_0042b250 == 1) && (local_3f0 != (char *)0x1)) {
    (*(code *)PTR_apmib_get_0042b1a0)(100,&local_230);
    iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004185a8,6);
    puVar10 = PTR_wlan_idx_0042b15c;
    if (iVar2 == 0) {
      if (local_3f0 == (char *)0x2) {
        (*(code *)PTR_apmib_get_0042b1a0)(0xc1,local_3d0 + 2);
        puVar9 = PTR_apmib_get_0042b1a0;
        uVar12 = *(undefined4 *)puVar10;
        *(int *)puVar10 = local_3d0[2];
        (*(code *)puVar9)(0xcb,&local_230);
        *(undefined4 *)puVar10 = uVar12;
      }
      else {
        (*(code *)PTR_apmib_get_0042b1a0)(0xca,&local_230);
      }
    }
    pcVar5 = (char *)(local_230 & 0xff);
    pcVar6 = acStack_294;
    (*(code *)PTR_sprintf_0042b0e8)
              (pcVar6,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
               local_230 >> 8 & 0xff,pcVar5,local_22c,local_22b);
    if (DAT_0042b28c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"ifconfig",&DAT_0042b28c,&DAT_00417fa0,"ether",pcVar6,"");
      pcVar5 = pcVar6;
    }
    if (local_3f0 == (char *)0x2) {
      if (local_3d0[2] == 0) {
        pcVar6 = "wlan0";
      }
      else {
        if (local_3d0[2] != 1) goto LAB_00405504;
        pcVar6 = "wlan1";
      }
      pcVar5 = acStack_294;
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",pcVar6,&DAT_00417fa0,"ether",pcVar5,"");
    }
  }
LAB_00405504:
  if (iVar3 != 0) {
    puVar7 = &local_2e4;
    DAT_0042b518 = 0;
    DAT_0042b51c = 0;
    DAT_0042b520 = 0;
    DAT_0042b524 = 0;
    local_3d0[4] = 1;
    local_3d0[5] = 0;
    local_3b8 = (undefined4 *)0x0;
    local_2e4 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    (*(code *)PTR_sprintf_0042b0e8)(puVar7,&DAT_00417aa0,0);
    (*(code *)PTR_apmib_save_wlanIdx_0042b13c)();
    iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(puVar7);
    if (iVar2 == 0) {
LAB_004057dc:
      bVar1 = false;
LAB_004057e0:
      (*(code *)PTR_apmib_recov_wlanIdx_0042b17c)();
      if (!bVar1) goto LAB_00405818;
      pcVar5 = "1";
    }
    else {
      (*(code *)PTR_apmib_get_0042b1a0)(0x16,local_3d0 + 4);
      if (local_3d0[4] == 1) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",puVar7,&DAT_00417e70,"");
        pcVar6 = "";
        pcVar8 = "radio_off";
LAB_004057a8:
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iwpriv",&local_2e4,pcVar8,pcVar6,pcVar5);
        bVar1 = true;
        (*(code *)PTR_apmib_get_0042b1a0)(0x4c,local_3d0 + 5);
        if (local_3d0[5] == 0) goto LAB_004057dc;
        goto LAB_004057e0;
      }
      pcVar13 = (code *)PTR_strcpy_0042b208;
      if (DAT_0042b518._0_1_ != '\0') {
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," %s",puVar7);
        puVar7 = auStack_3b4;
        pcVar13 = (code *)PTR_strcat_0042b170;
      }
      (*pcVar13)(&DAT_0042b518,puVar7);
      local_324 = 0;
      local_320 = 0;
      local_31c = 0;
      local_318 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(&local_324,"%s-vxd",&local_2e4);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_324,"0.0.0.0","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_324,&DAT_00417e70,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&local_2e4,&DAT_00417e70,"");
      iVar2 = (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",&local_2e4,"");
      if (iVar2 == 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x298,&local_3b8);
        if (local_3b8 == (undefined4 *)0x0) {
          pcVar6 = "mc2u_disable=0";
        }
        else {
          pcVar6 = "mc2u_disable=1";
        }
        pcVar5 = "";
        pcVar8 = "set_mib";
        goto LAB_004057a8;
      }
      (*(code *)PTR_printf_0042b1f0)("[%s %d]init %s failed!\n","setinit",0x5dc,&local_2e4);
LAB_00405818:
      pcVar5 = "0";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_wlanblock",&DAT_00417b58,pcVar5,"");
  }
  if (DAT_0042b518._0_1_ != '\0') {
    if (DAT_0042b528 != '\0') {
      (*(code *)PTR_memcpy_0042b1c8)(&local_230,&DAT_0042b528,0x20);
      local_3b8 = &local_230;
      iVar2 = (*(code *)PTR_strsep_0042b0e0)(&local_3b8,&DAT_00417b24);
      pcVar5 = "ifconfig";
      while (iVar2 != 0) {
        local_30 = pcVar5;
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,pcVar5,iVar2,&DAT_00417e70,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",iVar2,"");
        iVar2 = (*(code *)PTR_strsep_0042b0e0)(&local_3b8,&DAT_00417b24);
        pcVar5 = local_30;
      }
    }
    if (DAT_0042b4bc != '\0') {
      local_3e8[2] = 0;
      (*(code *)PTR_strcpy_0042b208)(&local_230,&DAT_0042b4bc);
      iVar2 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417b24,local_3e8 + 2);
      if (iVar2 != 0) {
        local_30 = "ifconfig";
        do {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,local_30,iVar2,&DAT_00417e70,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",iVar2,"");
          iVar2 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,local_3e8 + 2);
        } while (iVar2 != 0);
      }
    }
    iVar2 = (*(code *)PTR_strstr_0042b160)(&DAT_0042b28c,&DAT_00417aa8);
    if (iVar2 != 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_00417e70,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash","set_mib",&DAT_0042b28c,"");
    }
  }
  if (DAT_0042b250 == 1) {
    if (DAT_0042b258 == 1) {
      FUN_00402fa4(&local_230);
      (*(code *)PTR_setbridge_0042b0b8)(&local_230);
      FUN_004040d0();
      if (local_3d8 == 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_230);
        uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
        (*(code *)PTR_strcpy_0042b208)(auStack_3a4,uVar12);
        (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_230);
        uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
        (*(code *)PTR_strcpy_0042b208)(auStack_384,uVar12);
        (*(code *)PTR_apmib_get_0042b1a0)(0xac,&local_230);
        iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004185a0,4);
        if (iVar2 == 0) {
          (*(code *)PTR_memset_0042b114)(local_364,0,0x20);
        }
        else {
          uVar12 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
          (*(code *)PTR_strcpy_0042b208)(local_364,uVar12);
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"ifconfig",&DAT_0042b25c,auStack_3a4,"netmask",auStack_384,"");
        if (local_364[0] != '\0') {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",&DAT_0042b25c,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,local_364,
                     &DAT_0041804c,&DAT_0042b25c,"");
        }
      }
      else {
        if (local_3d8 != 2) goto LAB_00405d88;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3b4," wlan%d",0);
        iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(auStack_3b4);
        uVar12 = 0;
        if (iVar2 != 0) {
          (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_3ec);
          uVar12 = 5;
          if (local_3ec == 0) {
            uVar12 = 1;
          }
        }
        (*(code *)PTR_sleep_0042b1a4)(uVar12);
        (*(code *)PTR_set_lan_dhcpd_0042b0f4)(&DAT_0042b25c,2);
      }
      FUN_00403ec0(bVar11);
    }
LAB_00405d88:
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iptables",&DAT_0041805c,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"iptables",&DAT_0041805c,&DAT_00418060,&DAT_00418064,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"iptables",&DAT_00418068,"INPUT",&DAT_00418074,"ACCEPT","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/var/eth1_ip","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/var/ntp_run","");
    if (DAT_0042b28c != '\0') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_00417e70,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_0042b28c,&DAT_004180a0,"");
    }
    if (DAT_0042b254 == 1) {
      if (local_3f0 == (char *)0x0) {
LAB_00405f78:
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417b58,"1","");
        if (local_3d4 == 4) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_pptp",&DAT_00417b58,"1","");
          (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_3ec);
          if (local_3ec != 1) {
            pcVar5 = "/proc/pptp_conn_ck";
            goto LAB_0040601c;
          }
          pcVar5 = "/proc/pptp_conn_ck";
          pcVar6 = "3";
        }
        else {
          pcVar5 = "/proc/fast_pptp";
LAB_0040601c:
          pcVar6 = "0";
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)(pcVar5,&DAT_00417b58,pcVar6,"");
        if (local_3d4 == 6) {
          pcVar5 = "1";
        }
        else {
          pcVar5 = "0";
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_l2tp",&DAT_00417b58,pcVar5,"");
        if ((local_3d4 == 2) || (((6 < local_3d4 && (local_3d4 != 0x10)) && (local_3d4 != 99)))) {
          (*(code *)PTR_printf_0042b1f0)("Invalid wan type:wan_dhcp_mode=%d\n");
          goto LAB_00406148;
        }
        pcVar6 = (char *)0x1;
        puVar9 = &DAT_0042b25c;
        iVar2 = local_3d4;
        pcVar5 = local_3f0;
        pcVar13 = (code *)PTR_start_wan_0042b20c;
        puVar10 = local_3dc;
      }
      else {
        if (local_3f0 == (char *)0x2) {
          iVar2 = (*(code *)PTR_SetWlan_idx_0042b1cc)(&DAT_0042b28c);
          if ((iVar2 != 0) && ((*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_3ec), local_3ec != 0))
          {
            (*(code *)PTR_RunSystemCmd_0042b0dc)
                      (0,"iwpriv",&DAT_0042b28c,"set_mib","keep_rsnie=1","");
          }
          goto LAB_00405f78;
        }
        if ((local_3f0 != (char *)0x1) || (DAT_0042b28c == '\0')) goto LAB_00406148;
        puVar10 = &DAT_00418110;
        pcVar6 = "";
        pcVar5 = "ifconfig";
        puVar9 = &DAT_0041810c;
        iVar2 = 0;
        pcVar13 = (code *)PTR_RunSystemCmd_0042b0dc;
      }
      (*pcVar13)(iVar2,pcVar5,&DAT_0042b28c,puVar9,puVar10,pcVar6);
    }
LAB_00406148:
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice -20 2","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice -20 3","");
    iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/webs.pid");
    if (iVar2 != 0) {
      iVar2 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/webs.pid");
      if (iVar2 != 0) {
        local_30 = acStack_344;
        (*(code *)PTR_sprintf_0042b0e8)(acStack_344,&DAT_00417aa4,iVar2);
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"renice",&DAT_00418140,local_30,"");
      }
    }
  }
  else {
    FUN_00402fa4(&local_230);
    (*(code *)PTR_setbridge_0042b0b8)(&local_230);
    FUN_004040d0();
    if (local_3d8 == 2) {
      (*(code *)PTR_sleep_0042b1a4)(1);
      (*(code *)PTR_set_lan_dhcpd_0042b0f4)(&DAT_0042b25c,1);
    }
    if ((local_3d8 == 2) || (local_3d8 == 0)) {
      FUN_00403ec0(bVar11);
    }
    if (local_3d8 < 2) {
      (*(code *)PTR_system_0042b1ac)("ifconfig br0 0.0.0.0");
    }
  }
  if (((DAT_0042b250 == 1) && (local_3f0 != (char *)0x1)) &&
     (iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/lld2d"), iVar2 != 0)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"lld2d",&DAT_0042b25c,"");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/snmpd");
  if (iVar2 != 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"snmpd.sh","restart","");
  }
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/nmsd");
  if (iVar2 != 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_0041819c,"");
  }
  for (local_3d0[2] = 0; local_3d0[2] < 1; local_3d0[2] = local_3d0[2] + 1) {
    FUN_00403bf4(local_3d0[2]);
  }
  if (local_3f0 == (char *)0x0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x182,&local_3ec);
  }
  else {
    local_3ec = 0;
  }
  if ((local_3ec & 1) == 0) {
    pcVar5 = "0";
  }
  else {
    pcVar5 = "1";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/custom_Passthru",&DAT_00417b58,pcVar5,"");
  if (local_3ec == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,"peth0","");
    puVar10 = &DAT_00417e70;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_00417ad0,"peth0","");
    puVar10 = &DAT_004180a0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","peth0",puVar10,"");
  if (local_3f0 == (char *)0x2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xfa,local_3d0 + 3);
    (*(code *)PTR_apmib_get_0042b1a0)(0x182,&local_3ec);
    if (local_3ec != 0) {
      if (local_3d0[3] == 1) {
        local_3ec = local_3ec | 8;
      }
      puVar7 = &local_324;
      local_324 = 0;
      local_320 = 0;
      local_31c = 0;
      local_318 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(puVar7,&DAT_00417aa4,local_3ec);
      goto LAB_004065c8;
    }
  }
  else {
    local_3ec = 0;
  }
  puVar7 = (undefined4 *)&DAT_00418d58;
LAB_004065c8:
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/custom_Passthru_wlan",&DAT_00417b58,puVar7,"");
  if (local_3ec == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,"pwlan0","");
    puVar10 = &DAT_00417e70;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_00417ad0,"pwlan0","");
    puVar10 = &DAT_004180a0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","pwlan0",puVar10,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpVersion",&DAT_00417b58,"2","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpsnoop",&DAT_00417b58,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_igmpquery",&DAT_00417b58,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mldsnoop",&DAT_00417b58,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mldquery",&DAT_00417b58,"1","");
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_3ec);
  if ((local_3f0 == (char *)0x0) && (local_3ec == 0x10)) {
    (*(code *)PTR_system_0042b1ac)("echo \"/sbin/hotplug\" > /proc/sys/kernel/hotplug");
    (*(code *)PTR_system_0042b1ac)("mount -t sysfs none /sys           >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mount -t usbfs none /proc/bus/usb  >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mount -t tmpfs none /dev           >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("mdev -s                            >/dev/null 2>&1");
    (*(code *)PTR_system_0042b1ac)("echo \"remove\" > /var/usb3g.stat");
    (*(code *)PTR_system_0042b1ac)("mnet -d &");
  }
  (*(code *)PTR_system_0042b1ac)("rm -f  /var/system/start_init 2> /dev/null");
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/mdnsd_started");
  if (iVar2 == 0) {
    (*(code *)PTR_system_0042b1ac)("mdnsd");
    (*(code *)PTR_system_0042b1ac)("echo 1 > /var/system/mdnsd_started");
  }
  (*(code *)PTR_system_0042b1ac)("fwd &");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/conf/eth1/arp_ignore",&DAT_00417b58,"1","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/rt_cache_rebuild_count",&DAT_00417b58,&DAT_00418438,"");
  (*(code *)PTR_system_0042b1ac)("timelycheck &");
  iVar2 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/rtk_eventd.pid");
  if (iVar2 != 0) {
    (*(code *)PTR_system_0042b1ac)("killall rtk_eventd > /dev/null 2>&1");
  }
  (*(code *)PTR_system_0042b1ac)("rtk_eventd");
  return 0;
}


/* FUN_00406970 @ 00406970 */

void FUN_00406970(undefined4 param_1,undefined4 param_2)

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
  
  (*(code *)PTR_memset_0042b114)(local_184,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_144,0,0x80);
  (*(code *)PTR_memset_0042b114)(auStack_c4,0,0x80);
  (*(code *)PTR_memset_0042b114)(acStack_1e4,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_1c4,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_1a4,0,0x20);
  local_1e8 = 0;
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
  if (iVar1 == 0) {
    (*(code *)PTR_strcpy_0042b208)(auStack_144,param_2);
    iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_144,&DAT_00417b24,&local_1e8);
    if (iVar1 != 0) {
      iVar5 = 1;
      local_3c = acStack_1a4;
      local_38 = acStack_1c4;
      local_34 = acStack_1e4;
      do {
        pcVar6 = local_34;
        if (((iVar5 == 2) || (pcVar6 = local_38, iVar5 == 3)) || (pcVar6 = local_3c, iVar5 == 4)) {
LAB_00406bc4:
          (*(code *)PTR_strcpy_0042b208)(pcVar6,iVar1);
        }
        else if ((((4 < iVar5) &&
                  ((local_40 = (int)local_184[0], local_40 == 0 ||
                   (local_2c = iVar1, iVar2 = (*(code *)PTR_strcmp_0042b0fc)(local_184,iVar1),
                   iVar1 = local_2c, iVar2 != 0)))) &&
                 ((iVar2 = (int)local_164[0], iVar2 == 0 ||
                  (local_30 = iVar2, local_2c = iVar1,
                  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(local_164,iVar1), iVar1 = local_2c,
                  iVar2 = local_30, iVar3 != 0)))) &&
                ((iVar3 = 0, local_40 == 0 || (iVar3 = 1, iVar2 == 0)))) {
          pcVar6 = local_184 + iVar3 * 0x20;
          goto LAB_00406bc4;
        }
        iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_1e8);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,acStack_1e4,"netmask",acStack_1c4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_1a4,
               &DAT_0041804c,param_1,"");
    pcVar6 = local_184;
    iVar1 = 0;
    do {
      if (*pcVar6 != '\0') {
        (*(code *)PTR_sprintf_0042b0e8)(auStack_c4,"nameserver %s\n",pcVar6);
        uVar4 = 1;
        if (iVar1 != 0) {
          uVar4 = 2;
        }
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",uVar4,auStack_c4);
      }
      iVar1 = iVar1 + 1;
      pcVar6 = pcVar6 + 0x20;
    } while (iVar1 != 2);
  }
  return;
}


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


/* set_lan_dhcpd @ 00406f4c */

void set_lan_dhcpd(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int local_218;
  int local_214;
  int local_210;
  undefined4 local_20c [8];
  undefined4 local_1ec [8];
  undefined4 local_1cc [8];
  undefined4 local_1ac;
  byte local_1a8;
  byte local_1a7;
  byte local_1a6;
  byte local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined4 local_180 [16];
  undefined4 local_140 [16];
  undefined1 auStack_100 [100];
  undefined1 auStack_9c [100];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  (*(code *)PTR_memset_0042b114)(local_20c,0,0x20);
  (*(code *)PTR_memset_0042b114)(local_1ec,0,0x20);
  local_218 = 0;
  local_214 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_100,0,100);
  (*(code *)PTR_memset_0042b114)(local_180,0,0x40);
  (*(code *)PTR_memset_0042b114)(local_140,0,0x40);
  local_210 = 0;
  (*(code *)PTR_memset_0042b114)(local_1cc,0,0x20);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"interface %s\n",param_1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",1,auStack_100);
  (*(code *)PTR_apmib_get_0042b1a0)(0xae,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_180[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"start %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaf,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_180[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"end %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_180[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt subnet %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  (*(code *)PTR_apmib_get_0042b1a0)(0x3b1,&local_218);
  if (0x275f < local_218 - 1U) {
    local_218 = 0x1e0;
    iVar4 = (*(code *)PTR_apmib_set_0042b184)(0x3b1,&local_218);
    if (iVar4 == 0) {
      (*(code *)PTR_puts_0042b1b8)("set MIB_DHCP_LEASE_TIME error");
    }
    (*(code *)PTR_apmib_update_0042b188)(4);
  }
  local_218 = local_218 * 0x3c;
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt lease %ld\n",local_218);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_0042b138)(local_140,&DAT_004188e0,4);
    uVar3 = local_140[0];
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_180);
      uVar3 = local_180[0];
    }
    uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(uVar3);
    pcVar5 = "opt router %s\n";
LAB_00407394:
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,pcVar5,uVar3);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_180);
    uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_180[0]);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt router %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
    (*(code *)PTR_apmib_get_0042b1a0)(0x69,&local_214);
    if (local_214 == 0) {
      pcVar5 = "opt dns %s\n";
      goto LAB_00407394;
    }
  }
  local_218 = 0;
  if ((param_2 != 1) && ((param_2 != 2 || (local_214 != 1)))) goto LAB_004076c0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xb0,local_20c);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb1,local_1ec);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb2,local_1cc);
  iVar4 = (*(code *)PTR_memcmp_0042b138)(local_20c,&DAT_004188e0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_20c[0]);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_0042b138)(local_1ec,&DAT_004188e0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ec[0]);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  iVar4 = (*(code *)PTR_memcmp_0042b138)(local_1cc,&DAT_004188e0,4);
  if (iVar4 != 0) {
    uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_1cc[0]);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt dns %s\n",uVar3);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
    local_218 = local_218 + 1;
  }
  if (local_218 != 0) goto LAB_004076c0;
  if (param_2 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xac,local_140);
    iVar4 = (*(code *)PTR_memcmp_0042b138)(local_140,&DAT_004188e0,4);
    if (iVar4 == 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_140);
      iVar4 = (*(code *)PTR_memcmp_0042b138)(local_140,&DAT_004188e0,4);
      goto joined_r0x00407664;
    }
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_140);
    iVar4 = (*(code *)PTR_memcmp_0042b138)(local_140,&DAT_004188e0,4);
joined_r0x00407664:
    if (iVar4 == 0) goto LAB_004076c0;
  }
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_140[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt dns %s\n",uVar3);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
LAB_004076c0:
  (*(code *)PTR_memset_0042b114)(local_180,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc6,local_180);
  if (local_180[0]._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_100,"opt domain %s\n",local_180);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
  }
  local_218 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x124,&local_218);
  if ((local_218 == 1) && ((*(code *)PTR_apmib_get_0042b1a0)(0x125,&local_210), 0 < local_210)) {
    for (iVar4 = 1; iVar4 <= local_210; iVar4 = iVar4 + 1) {
      local_1ac = CONCAT13((char)iVar4,local_1ac._1_3_);
      (*(code *)PTR_apmib_get_0042b1a0)(0x8126,&local_1ac);
      uVar2 = local_1a3;
      uVar1 = local_1a4;
      local_2c = (uint)local_1a8;
      local_30 = (uint)local_1a7;
      local_34 = (uint)local_1a6;
      local_38 = (uint)local_1a5;
      uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ac);
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_100,"static_lease %02x%02x%02x%02x%02x%02x %s\n",local_2c,local_30,local_34
                 ,local_38,uVar1,uVar2,uVar3);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_100);
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_180);
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_180[0]);
  (*(code *)PTR_strcpy_0042b208)(local_20c,uVar3);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_140);
  uVar3 = (*(code *)PTR_inet_ntoa_0042b108)(local_140[0]);
  (*(code *)PTR_strcpy_0042b208)(local_1ec,uVar3);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,local_20c,"netmask",local_1ec,"");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_9c,"udhcpd %s\n","/var/udhcpd.conf");
  (*(code *)PTR_system_0042b1ac)(auStack_9c);
  return;
}


/* SetWlan_idx @ 00407984 */

undefined4 SetWlan_idx(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  
  iVar8 = param_1 + 4;
  iVar4 = (*(code *)PTR_atoi_0042b0c4)(iVar8);
  puVar3 = PTR_vwlan_idx_0042b16c;
  puVar2 = PTR_wlan_idx_0042b15c;
  puVar1 = PTR_strlen_0042b0bc;
  if (0 < iVar4) {
    pcVar7 = "invalid wlan interface index number!";
LAB_00407a5c:
    (*(code *)PTR_puts_0042b1b8)(pcVar7);
    return 0;
  }
  *(int *)PTR_wlan_idx_0042b15c = iVar4;
  *(undefined4 *)puVar3 = 0;
  uVar5 = (*(code *)puVar1)(param_1);
  if ((((8 < uVar5) && (*(char *)(param_1 + 5) == '-')) && (*(char *)(param_1 + 6) == 'v')) &&
     (*(char *)(param_1 + 7) == 'a')) {
    iVar4 = (*(code *)PTR_atoi_0042b0c4)(param_1 + 8);
    puVar1 = PTR_atoi_0042b0c4;
    if (4 < iVar4) {
      pcVar7 = "invalid virtual wlan interface index number!";
      goto LAB_00407a5c;
    }
    *(int *)puVar3 = iVar4 + 1;
    uVar6 = (*(code *)puVar1)(iVar8);
    *(undefined4 *)puVar2 = uVar6;
  }
  uVar5 = (*(code *)PTR_strlen_0042b0bc)(param_1);
  if (8 < uVar5) {
    if (*(char *)(param_1 + 5) != '-') {
      return 1;
    }
    iVar4 = (*(code *)PTR_memcmp_0042b138)(param_1 + 6,&DAT_00417f7c,3);
    puVar1 = PTR_atoi_0042b0c4;
    if (iVar4 == 0) {
      *(undefined4 *)PTR_vwlan_idx_0042b16c = 5;
      uVar6 = (*(code *)puVar1)(iVar8);
      *(undefined4 *)PTR_wlan_idx_0042b15c = uVar6;
      return 1;
    }
  }
  return 1;
}


/* setbridge @ 00407b24 */

undefined4 setbridge(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  uint uVar7;
  code *pcVar8;
  char *pcVar9;
  int local_388;
  undefined4 local_384;
  int local_380;
  int local_37c;
  int local_378;
  uint local_374;
  int local_370;
  int local_36c;
  int local_368;
  int local_364;
  int local_360;
  uint local_35c;
  uint local_358;
  int local_354;
  int local_350;
  undefined4 uStack_34c;
  char local_347;
  char local_346;
  char local_345;
  undefined1 auStack_33c [16];
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined1 local_30c;
  undefined1 auStack_30b [16];
  undefined1 local_2fb;
  undefined1 local_2fa;
  undefined1 local_2f9;
  uint local_2f8;
  undefined1 auStack_2f4 [32];
  undefined1 auStack_2d4 [32];
  undefined1 auStack_2b4 [32];
  undefined1 auStack_294 [100];
  undefined4 local_230;
  undefined1 local_22c;
  undefined1 local_22b;
  char local_168 [304];
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  
  local_388 = -1;
  local_384 = 0;
  local_380 = 0;
  local_37c = 0;
  local_378 = 0;
  local_374 = 0;
  local_370 = 0;
  local_36c = 0;
  local_368 = 0;
  local_364 = 0;
  local_360 = 0;
  local_354 = 0;
  local_350 = 0;
  local_32c = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  (*(code *)PTR_puts_0042b1b8)("Init bridge interface...");
  (*(code *)PTR_apmib_get_0042b1a0)(0xfa,&local_350);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_388);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_374);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_360);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/br_iface");
  if (iVar1 == 0) {
    iVar1 = (*(code *)PTR_setInAddr_0042b150)(&DAT_00417ad0,0,0,0,1);
    if (iVar1 == 0) {
      local_384 = 0;
      (*(code *)PTR_strcpy_0042b208)(local_168,param_1);
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(local_168,&DAT_00417b24,&local_384);
      while (iVar1 != 0) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar1,&DAT_00417e70,"");
        iVar3 = (*(code *)PTR_memcmp_0042b138)(iVar1,&DAT_00417ad0,3);
        if (iVar3 != 0) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,iVar1,"");
        }
        iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_384);
      }
    }
  }
  else {
    (*(code *)PTR_memset_0042b114)(local_168,0,300);
    iVar1 = (*(code *)PTR_fopen_0042b118)("/var/system/br_iface",&DAT_004187f4);
    if (iVar1 != 0) {
      (*(code *)PTR_fgets_0042b1d0)(local_168,300,iVar1);
      uVar7 = 0;
      pcVar9 = local_168;
      while (uVar2 = (*(code *)PTR_strlen_0042b0bc)(local_168), uVar7 < uVar2) {
        uVar7 = uVar7 + 1;
        if (*pcVar9 == '\n') {
          *pcVar9 = '\0';
        }
        pcVar9 = pcVar9 + 1;
      }
      local_168[uVar2] = '\0';
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(local_168,&DAT_0041878c,&local_384);
      if (iVar3 != 0) {
        do {
          puVar6 = &DAT_00417ad0;
          if (local_350 == 2) {
            iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va0");
            if ((iVar4 == 0) ||
               (iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va2"), iVar4 == 0)) {
              puVar6 = &DAT_004187a8;
            }
            else {
              iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0");
              if (iVar4 == 0) {
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar3,&DAT_00417e70,"");
              }
              else {
                iVar4 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,"wlan0-va1");
                if (iVar4 != 0) goto LAB_00407e88;
              }
            }
LAB_00407e78:
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",puVar6,iVar3,"");
          }
          else {
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",iVar3,&DAT_00417e70,"");
            iVar4 = (*(code *)PTR_memcmp_0042b138)(iVar3,&DAT_00417ad0,3);
            if (iVar4 != 0) goto LAB_00407e78;
          }
LAB_00407e88:
          iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_0041878c,&local_384);
        } while (iVar3 != 0);
      }
      (*(code *)PTR_fclose_0042b10c)(iVar1);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/pathsel");
  if (iVar1 != 0) {
    SetWlan_idx("wlan0");
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
    (*(code *)PTR_apmib_get_0042b1a0)(0x284,&local_368);
    if (1 < local_378 - 4U) {
      local_368 = 0;
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig","wlan-msh",&DAT_00417e70,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,"wlan-msh","");
  }
  iVar1 = (*(code *)PTR_setInAddr_0042b150)(&DAT_00417ad0,0,0,0,1);
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,&DAT_00417f3c,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delif",&DAT_00417ad0,"wlan0","");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delbr",&DAT_00417ad0,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_004187f0,&DAT_00417ad0,"");
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","delbr",&DAT_004187a8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_004187f0,&DAT_004187a8,"");
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xb3,&local_364);
  if (local_364 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","setfd",&DAT_00417ad0,"4","");
    pcVar9 = "1";
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","setfd",&DAT_00417ad0,&DAT_00418d58,"");
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl",&DAT_00418800,&DAT_00417ad0,pcVar9,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x268,&local_37c);
  if (local_37c == 1) {
    pcVar9 = "1";
  }
  else {
    pcVar9 = "0";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/rtk_vlan_support",&DAT_00417b58,pcVar9,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x269,&local_354);
  for (iVar1 = 1; iVar1 <= local_354; iVar1 = iVar1 + 1) {
    local_30c = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042b1a0)(0x826a,&local_30c);
    (*(code *)PTR_sprintf_0042b0e8)(&local_230,"/proc/%s/mib_vlan",auStack_30b);
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(&local_230);
    if (iVar3 != 0) {
      iVar3 = (*(code *)PTR_strncmp_0042b154)(auStack_30b,&DAT_00417f3c,4);
      if (iVar3 == 0) {
        uVar5 = 1;
        if (1 < local_388 - 1U) {
LAB_004084c4:
          uVar5 = 0;
        }
      }
      else {
        (*(code *)PTR_sprintf_0042b0e8)(&local_32c,&DAT_00417aa0,local_374);
        (*(code *)PTR_getWispRptIfaceName_0042b1e8)(&local_32c,local_374);
        uVar5 = (*(code *)PTR_strlen_0042b0bc)(auStack_30b);
        iVar3 = (*(code *)PTR_strncmp_0042b154)(&local_32c,auStack_30b,uVar5);
        uVar5 = 1;
        if (((iVar3 == 0) && (local_388 == 2)) && (local_374 < 2)) goto LAB_004084c4;
      }
      pcVar9 = "echo \"1 %d %d %d %d %d %d\" > %s";
      if (local_37c != 1) {
        pcVar9 = "echo \"0 %d %d %d %d %d %d\" > %s";
      }
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_294,pcVar9,uVar5,local_30c,local_2fb,local_2f8 >> 0x10,local_2fa,local_2f9,
                 &local_230);
      (*(code *)PTR_system_0042b1ac)(auStack_294);
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/br_iface");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/system/br_iface");
  }
  (*(code *)PTR_memset_0042b114)(local_168,0,300);
  local_384 = 0;
  (*(code *)PTR_strcpy_0042b208)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417b24,&local_384);
  if (iVar1 != 0) {
    local_34 = &local_384;
    do {
      (*(code *)PTR_strcpy_0042b208)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_0042b154)(&uStack_34c,&DAT_00418870,3);
      if (iVar1 == 0) {
        local_380 = 1;
        if ((local_37c == 0) && ((byte)((char)uStack_34c - 0x32U) < 3)) {
          local_380 = 0;
        }
        if (local_380 == 1) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",&DAT_00417ad0,&uStack_34c,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
          pcVar8 = (code *)PTR_strcpy_0042b208;
          if (local_168[0] != '\0') {
            pcVar8 = (code *)PTR_strcat_0042b170;
          }
          (*pcVar8)(local_168,&uStack_34c);
          (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041878c);
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,local_34);
    } while (iVar1 != 0);
  }
  local_384 = 0;
  (*(code *)PTR_strcpy_0042b208)(&local_230,param_1);
  iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(&local_230,&DAT_00417b24,&local_384);
  if (iVar1 != 0) {
    local_38 = 0;
    do {
      (*(code *)PTR_strcpy_0042b208)(&uStack_34c,iVar1);
      iVar1 = (*(code *)PTR_strncmp_0042b154)(&uStack_34c,&DAT_00417f80,4);
      if (iVar1 == 0) {
        uVar7 = (*(code *)PTR_strlen_0042b0bc)(&uStack_34c);
        if (((uVar7 < 9) || (local_347 != '-')) || ((local_346 != 'v' || (local_345 != 'a')))) {
          iVar1 = (*(code *)PTR_strstr_0042b160)(&uStack_34c,&DAT_00418874);
          if (iVar1 == 0) {
LAB_00408920:
            iVar1 = SetWlan_idx(&uStack_34c);
            if ((iVar1 != 0) && ((*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_380), local_380 == 0)
               ) {
LAB_00408954:
              (*(code *)PTR_sprintf_0042b0e8)(PTR_wlan_wan_iface_0042b204,&DAT_00417aa0,local_374);
              (*(code *)PTR_getWispRptIfaceName_0042b1e8)(PTR_wlan_wan_iface_0042b204,local_374);
              uVar7 = (*(code *)PTR_strlen_0042b0bc)(&uStack_34c);
              if ((((uVar7 < 9) || (local_347 != '-')) || (local_346 != 'v')) || (local_345 != 'a'))
              {
                if (((local_38 != 0) || (local_388 != 2)) ||
                   (local_30 = &uStack_34c,
                   iVar1 = (*(code *)PTR_strcmp_0042b0fc)(PTR_wlan_wan_iface_0042b204,&uStack_34c),
                   iVar1 != 0)) goto LAB_00408a28;
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",local_30,&DAT_004180a0,"");
              }
              else {
                local_38 = 1;
LAB_00408a28:
                if (local_350 == 2) {
                  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(&uStack_34c,"wlan0-va0");
                  if ((iVar1 != 0) &&
                     (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(&uStack_34c,"wlan0-va2"), iVar1 != 0))
                  goto LAB_00408a9c;
                  puVar6 = &DAT_004187a8;
                }
                else {
LAB_00408a9c:
                  puVar6 = &DAT_00417ad0;
                }
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"brctl","addif",puVar6,&uStack_34c,"");
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&uStack_34c,"0.0.0.0","");
                pcVar8 = (code *)PTR_strcpy_0042b208;
                if (local_168[0] != '\0') {
                  pcVar8 = (code *)PTR_strcat_0042b170;
                }
                (*pcVar8)(local_168,&uStack_34c);
                (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041878c);
              }
              iVar1 = SetWlan_idx(&uStack_34c);
              if (iVar1 != 0) {
                (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_370);
                (*(code *)PTR_apmib_get_0042b1a0)(0x40,&local_36c);
                (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
                if (((local_370 != 0) && (local_36c != 0)) && (local_378 - 2U < 2)) {
                  local_34 = &uStack_34c;
                  for (iVar1 = 0; iVar1 < local_36c; iVar1 = iVar1 + 1) {
                    (*(code *)PTR_sprintf_0042b0e8)(auStack_33c,"%s-wds%d",local_34,iVar1);
                    (*(code *)PTR_RunSystemCmd_0042b0dc)
                              (0,"brctl","addif",&DAT_00417ad0,auStack_33c,"");
                    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",auStack_33c,"0.0.0.0","");
                    pcVar8 = (code *)PTR_strcpy_0042b208;
                    if (local_168[0] != '\0') {
                      pcVar8 = (code *)PTR_strcat_0042b170;
                    }
                    (*pcVar8)(local_168,auStack_33c);
                    (*(code *)PTR_strcat_0042b170)(local_168,&DAT_0041878c);
                  }
                }
              }
            }
          }
          else if (local_368 != 0) goto LAB_00408954;
        }
        else {
          local_31c = 0;
          local_318 = 0;
          local_314 = 0;
          local_310 = 0;
          (*(code *)PTR_strncpy_0042b14c)(&local_31c,&uStack_34c,5);
          iVar1 = SetWlan_idx(&local_31c);
          if (iVar1 != 0) {
            (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_380);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_378);
            if ((local_380 == 0) && ((local_378 == 0 || (local_378 == 3)))) goto LAB_00408920;
          }
        }
      }
      iVar1 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_384);
    } while (iVar1 != 0);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/system/br_iface",&DAT_00417b58,local_168,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x17,&local_230);
  iVar1 = (*(code *)PTR_memcmp_0042b138)(&local_230,&DAT_004188e8,6);
  if (iVar1 == 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_230);
  }
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_294,"%02x%02x%02x%02x%02x%02x",local_230._0_1_,local_230._1_1_,
             local_230 >> 8 & 0xff,local_230 & 0xff,local_22c,local_22b);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ifconfig",&DAT_00417ad0,&DAT_00417fa0,"ether",auStack_294,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/tmp/bridge_init");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_00417ad0,"0.0.0.0","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/tmp/bridge_init",&DAT_00417b58,"1","");
  }
  if ((local_360 == 0) || (local_360 == 2)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2f4,uVar5);
    (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2d4,uVar5);
    (*(code *)PTR_apmib_get_0042b1a0)(0xac,&local_230);
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_230);
    (*(code *)PTR_strcpy_0042b208)(auStack_2b4,uVar5);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ifconfig",&DAT_00417ad0,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_35c);
    (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_358);
    local_35c = local_35c & local_358;
    uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_35c);
    (*(code *)PTR_strcpy_0042b208)(auStack_2f4,uVar5);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,&DAT_00418044,auStack_2f4,"netmask",auStack_2d4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,auStack_2f4,"netmask",auStack_2d4,&DAT_0041804c
               ,&DAT_00417ad0,"");
    iVar1 = (*(code *)PTR_strcmp_0042b0fc)(auStack_2b4,"0.0.0.0");
    if (iVar1 != 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_0041803c,"default",&DAT_0041804c,&DAT_00417ad0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,auStack_2b4,
                 &DAT_0041804c,&DAT_00417ad0,"");
    }
  }
  else if (local_360 == 1) {
    (*(code *)PTR_puts_0042b1b8)("wait for bridge initialization...");
    local_380 = 10;
    do {
      local_380 = local_380 + -1;
      (*(code *)PTR_sleep_0042b1a4)(1);
    } while (local_380 != 0);
    FUN_00406d44(&DAT_00417ad0);
  }
  if (local_350 == 2) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_004187a8,&DAT_004180a0,"");
  }
  return 0;
}


/* FUN_0040919c @ 0040919c */

void FUN_0040919c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_148;
  undefined1 auStack_144 [32];
  undefined1 auStack_124 [32];
  undefined4 local_104 [16];
  undefined4 local_c4 [16];
  undefined1 auStack_84 [104];
  
  (*(code *)PTR_memset_0042b114)(auStack_144,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_124,0,0x20);
  local_148 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_84,0,100);
  (*(code *)PTR_memset_0042b114)(local_104,0,0x40);
  (*(code *)PTR_memset_0042b114)(local_c4,0,0x40);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"interface %s\n",param_1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",1,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xae,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"start %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaf,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"end %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt subnet %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0x3b1,&local_148);
  if (0x275e < local_148 - 2U) {
    (*(code *)PTR_printf_0042b1f0)
              ("===%s(%d), read MIB_DHCP_LEASE_TIME is %d\n","start_lan_dhcpd",0x4a);
    iVar2 = (*(code *)PTR_apmib_set_0042b184)(0x3b1,&local_148);
    if (iVar2 == 0) {
      (*(code *)PTR_puts_0042b1b8)("set MIB_DHCP_LEASE_TIME error");
    }
    (*(code *)PTR_apmib_update_0042b188)(4);
  }
  local_148 = local_148 * 0x3c;
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt lease %ld\n",local_148);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt router %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt dns %s\n",uVar1);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  (*(code *)PTR_memset_0042b114)(local_104,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc6,local_104);
  if (local_104[0]._0_1_ != '\0') {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_84,"opt domain %s\n",local_104);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_84);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xaa,local_104);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_104[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_144,uVar1);
  (*(code *)PTR_apmib_get_0042b1a0)(0xab,local_c4);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_c4[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_124,uVar1);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,auStack_144,"netmask",auStack_124,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"udhcpd","/var/udhcpd.conf","");
  return;
}


/* setWlan_Applications @ 004096e0 */

undefined4 setWlan_Applications(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char cVar10;
  int iVar9;
  bool bVar11;
  char cVar13;
  uint uVar12;
  code *pcVar14;
  bool bVar15;
  int local_5d8;
  undefined4 local_5d4;
  int local_5d0;
  int local_5cc;
  int local_5c8;
  undefined4 local_5c4;
  int local_5c0;
  uint local_5bc;
  uint local_5b8;
  int local_5b4;
  int local_5b0;
  int local_5ac;
  int local_5a8;
  int local_5a4;
  int local_5a0;
  int local_59c;
  int local_598;
  int local_594;
  int local_590;
  int local_58c;
  int local_588;
  undefined4 local_584;
  int local_580;
  char acStack_57c [12];
  char acStack_570 [6];
  char local_56a;
  char local_569;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_544;
  char acStack_540 [32];
  undefined1 auStack_520 [32];
  char local_500 [32];
  char acStack_4e0 [32];
  char acStack_4c0 [40];
  char acStack_498 [40];
  char *local_470 [8];
  char *local_450 [8];
  char local_430 [100];
  undefined1 auStack_3cc [100];
  undefined1 auStack_368 [200];
  char local_2a0 [200];
  char local_1d8 [200];
  char local_110 [200];
  int *local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0042b114)(local_2a0,0,200);
  local_5d8 = 0;
  local_5d4 = 0;
  local_5d0 = 0;
  local_5cc = 0;
  local_5c8 = 0;
  local_5c4 = 0;
  local_5c0 = 0;
  local_5bc = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_5b0 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_5a0 = 0;
  local_59c = 0;
  local_598 = 0;
  local_594 = 0;
  local_590 = 0;
  local_58c = 0;
  local_588 = 0;
  (*(code *)PTR_memset_0042b114)(acStack_540,0,0x1e);
  (*(code *)PTR_memset_0042b114)(auStack_520,0,0x1e);
  (*(code *)PTR_memset_0042b114)(local_500,0,0x1e);
  (*(code *)PTR_memset_0042b114)(local_1d8,0,200);
  (*(code *)PTR_memset_0042b114)(local_110,0,200);
  (*(code *)PTR_memset_0042b114)(acStack_4e0,0,0x1e);
  local_580 = 0;
  local_560 = 0;
  local_55c = 0;
  local_558 = 0;
  local_554 = 0;
  local_550 = 0;
  local_54c = 0;
  local_548 = 0;
  local_544 = 0;
  (*(code *)PTR_memset_0042b114)(local_470,0,0x40);
  local_584 = 0;
  (*(code *)PTR_strcpy_0042b208)(auStack_368,param_2);
  iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417b24,&local_584);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
      iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417f80,4);
      pcVar6 = acStack_4e0;
      pcVar8 = acStack_570;
      pcVar14 = (code *)PTR_strcpy_0042b208;
      if ((iVar3 == 0) && (pcVar6 = local_110, local_110[0] != '\0')) {
        (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",acStack_570);
        pcVar8 = acStack_540;
        pcVar14 = (code *)PTR_strcat_0042b170;
      }
      (*pcVar14)(pcVar6,pcVar8);
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_584);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/iwcontrol.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/iwcontrol.pid");
    if (iVar3 != -1) {
      local_34 = acStack_57c;
      (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_34,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/iwcontrol.pid");
  }
  local_584 = 0;
  (*(code *)PTR_strcpy_0042b208)(auStack_368,local_110);
  iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417b24,&local_584);
  if (iVar3 != 0) {
    do {
      (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
      iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417f80,4);
      if (iVar3 == 0) {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"/var/run/auth-%s.pid",acStack_570);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(local_430);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(local_430);
          if (iVar3 != -1) {
            local_34 = acStack_57c;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_34,"");
          }
          (*(code *)PTR_unlink_0042b148)(local_430);
          (*(code *)PTR_sprintf_0042b0e8)(auStack_3cc,"/var/run/auth-%s-vxd.pid",acStack_570);
          iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_3cc);
          if (iVar3 != 0) {
            iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(auStack_3cc);
            if (iVar3 != -1) {
              local_34 = acStack_57c;
              (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_34,"");
            }
            (*(code *)PTR_unlink_0042b148)(auStack_3cc);
          }
        }
        (*(code *)PTR_sprintf_0042b0e8)(auStack_3cc,"/var/run/wscd-%s.pid",acStack_570);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)(auStack_3cc);
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)(auStack_3cc);
          if (iVar3 != -1) {
            local_34 = acStack_57c;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_34,"");
          }
          (*(code *)PTR_unlink_0042b148)(auStack_3cc);
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/gpio",&DAT_00417b58,&DAT_00418d58,"");
      }
      do {
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan0.pid");
        if (iVar3 == 0) {
          iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan1.pid");
          if (iVar3 == 0) {
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/wscd-wlan0-wlan1.pid");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan0-wlan1.pid"),
               iVar3 == -1)) break;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,acStack_57c,"");
            pcVar6 = "/var/run/wscd-wlan0-wlan1.pid";
          }
          else {
            iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan1.pid");
            if (iVar3 == -1) break;
            (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
            (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,acStack_57c,"");
            pcVar6 = "/var/run/wscd-wlan1.pid";
          }
        }
        else {
          iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/wscd-wlan0.pid");
          if (iVar3 == -1) break;
          (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
          (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,acStack_57c,"");
          pcVar6 = "/var/run/wscd-wlan0.pid";
        }
        (*(code *)PTR_unlink_0042b148)(pcVar6);
        (*(code *)PTR_sleep_0042b1a4)(1);
        iVar3 = (*(code *)PTR_find_pid_by_name_0042b1bc)(&DAT_004189b4);
      } while (0 < iVar3);
      iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_584);
    } while (iVar3 != 0);
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/iapp.pid");
  if (iVar3 != 0) {
    iVar3 = (*(code *)PTR_getPid_fromFile_0042b1e0)("/var/run/iapp.pid");
    if (iVar3 != -1) {
      local_34 = acStack_57c;
      (*(code *)PTR_sprintf_0042b0e8)(acStack_57c,&DAT_00417aa4,iVar3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417a70,&DAT_00417a78,local_34,"");
    }
    (*(code *)PTR_unlink_0042b148)("/var/run/iapp.pid");
  }
  (*(code *)PTR_system_0042b1ac)("rm -f /var/*.fifo");
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417a70);
  if (iVar3 != 0) {
    (*(code *)PTR_puts_0042b1b8)("Init Wlan application...");
    iVar3 = (*(code *)PTR_SetWlan_idx_0042b1cc)("wlan0");
    if (iVar3 != 0) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_5d4);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5d8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_5cc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_5c8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_5c0);
      (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5bc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_5b8);
      (*(code *)PTR_apmib_get_0042b1a0)(0x3c,&local_5c4);
      (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_5d0);
      (*(code *)PTR_apmib_get_0042b1a0)(0x117,&local_580);
    }
    local_584 = 0;
    (*(code *)PTR_strcpy_0042b208)(auStack_368,local_110);
    bVar2 = false;
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417b24,&local_584);
    if (iVar3 != 0) {
      cVar10 = '\0';
      local_48 = (int *)0x0;
      bVar15 = false;
      bVar11 = false;
      local_40 = 0;
      local_38 = 0;
      local_3c = 0;
      do {
        (*(code *)PTR_strcpy_0042b208)(acStack_570,iVar3);
        iVar3 = (*(code *)PTR_strncmp_0042b154)(acStack_570,&DAT_00417f80,4);
        if (iVar3 == 0) {
          uVar4 = (*(code *)PTR_strlen_0042b0bc)(acStack_570);
          cVar13 = '\0';
          if (8 < uVar4) {
            cVar13 = local_56a;
            cVar10 = local_569;
          }
          iVar3 = (*(code *)PTR_SetWlan_idx_0042b1cc)(acStack_570);
          if (iVar3 != 0) {
            (*(code *)PTR_apmib_get_0042b1a0)(0x16,&local_5b4);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5b0);
            (*(code *)PTR_apmib_get_0042b1a0)(0x3f,&local_5ac);
            (*(code *)PTR_apmib_get_0042b1a0)(0x40,&local_5a8);
            (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5a4);
            (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_59c);
            if ((((local_5b4 == 0) && (local_5b0 - 2U < 2)) && (local_5ac != 0)) && (local_5a8 != 0)
               ) {
              (*(code *)PTR_apmib_get_0042b1a0)(0x45,&local_5a0);
              if (local_5a0 - 3U < 2) {
                local_44 = local_430;
                (*(code *)PTR_sprintf_0042b0e8)(local_430,"/var/wpa-wds-%s.conf",acStack_570);
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,"flash",&DAT_00418a18,acStack_570,local_44,&DAT_00418a1c,"");
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00418a20,acStack_570,acStack_4e0,&DAT_00418a1c,local_44,"");
                local_44 = auStack_3cc;
                (*(code *)PTR_sprintf_0042b0e8)(local_44,"/var/run/auth-%s.pid",acStack_570);
                iVar3 = 0;
                do {
                  iVar3 = iVar3 + 1;
                  iVar5 = (*(code *)PTR_isFileExist_0042b0ac)(local_44);
                  if (iVar5 != 0) break;
                  (*(code *)PTR_sleep_0042b1a4)(1);
                } while (iVar3 != 10);
              }
            }
            if (local_5a4 < 2) {
              (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_598);
              (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_594);
              bVar1 = true;
              if ((local_598 == 0) && (local_594 == 0)) {
                bVar1 = false;
                goto LAB_0040a614;
              }
LAB_0040a488:
              if (local_5b4 != 0) goto LAB_0040a614;
              local_2c = local_430;
              local_34 = acStack_570;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,"/var/wpa-%s.conf",local_34);
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"flash",&DAT_00418a18,local_34,local_2c,"");
              pcVar6 = "auth";
              if (local_5b0 == 1) {
                (*(code *)PTR_apmib_get_0042b1a0)(0x3c,&local_590);
                if (local_590 == 0) {
                  pcVar6 = "client-infra";
                }
                else {
                  pcVar6 = "client-adhoc";
                }
              }
              (*(code *)PTR_strcpy_0042b208)(auStack_520,pcVar6);
              if (((cVar13 == 'v') && (cVar10 == 'a')) && ((local_5d8 != 0 && (local_5d8 != 3)))) {
                local_40 = 1;
              }
              if (((local_5b0 == 2) || (local_40 != 0)) || ((local_59c == 2 && (!bVar1))))
              goto LAB_0040a614;
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00418a20,acStack_570,acStack_4e0,auStack_520,local_430,"");
              bVar2 = true;
              if (cVar13 == 'v') {
                if (cVar10 != 'a') {
                  local_3c = 1;
                  goto LAB_0040a61c;
                }
                local_38 = 1;
                goto LAB_0040a6a4;
              }
              local_3c = 1;
            }
            else {
              if (local_5a4 != 7) {
                bVar1 = false;
                if (local_59c == 1) {
                  bVar1 = true;
                }
                goto LAB_0040a488;
              }
              bVar1 = false;
LAB_0040a614:
              if (cVar13 == 'v') {
LAB_0040a61c:
                if (cVar10 == 'x') {
                  if ((local_5b4 == 0) &&
                     ((iVar3 = (*(code *)PTR_strcmp_0042b0fc)(auStack_520,&DAT_00418a20), iVar3 != 0
                      || (bVar1)))) {
                    pcVar8 = local_500;
                    (*(code *)PTR_strcat_0042b170)(pcVar8,&DAT_00417b24);
                    pcVar6 = acStack_570;
                    pcVar14 = (code *)PTR_strcat_0042b170;
LAB_0040a6ec:
                    (*pcVar14)(pcVar8,pcVar6);
                  }
                }
                else if (cVar10 == 'a') {
LAB_0040a6a4:
                  if ((local_5b4 == 0) && ((local_5cc == 0 || (local_38 != 0)))) {
                    pcVar8 = local_1d8;
                    pcVar6 = acStack_570;
                    pcVar14 = (code *)PTR_strcpy_0042b208;
                    if (local_1d8[0] != '\0') {
                      (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",pcVar6);
                      pcVar6 = acStack_540;
                      pcVar14 = (code *)PTR_strcat_0042b170;
                    }
                    goto LAB_0040a6ec;
                  }
                }
                goto LAB_0040a830;
              }
            }
            if (cVar10 != 'x') {
              (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_588);
              (*(code *)PTR_apmib_get_0042b1a0)(0x10e,&local_58c);
              if (((local_3c != 0) || (local_588 == 0)) || (local_58c == 0)) {
                pcVar6 = acStack_570;
                pcVar14 = (code *)PTR_strcpy_0042b208;
                if (local_1d8[0] != '\0') {
                  (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s",pcVar6);
                  pcVar6 = acStack_540;
                  pcVar14 = (code *)PTR_strcat_0042b170;
                }
                (*pcVar14)(local_1d8,pcVar6);
              }
              if (cVar10 != 'a') {
                if (local_5b4 == 0) {
                  bVar11 = true;
                }
                if (((local_5b0 == 0) || (local_5b0 == 3)) || ((local_5b0 == 4 || (local_5b0 == 6)))
                   ) {
                  bVar15 = true;
                }
                if (local_588 == 0) {
                  local_48 = (int *)0x1;
                }
              }
            }
          }
        }
LAB_0040a830:
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_584);
      } while (iVar3 != 0);
      if (((bVar11) && (bVar15)) && (local_48 == (int *)0x1)) {
        local_584 = 0;
        (*(code *)PTR_strcpy_0042b208)(auStack_368,local_1d8);
        pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417b24,&local_584);
        if (pcVar6 != (char *)0x0) {
          local_48 = &local_5d8;
          do {
            local_34 = pcVar6;
            iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
            if ((iVar3 == 0) ||
               (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(local_34,"wlan1"), iVar3 == 0)) {
              (*(code *)PTR_SetWlan_idx_0042b1cc)(local_34);
              (*(code *)PTR_apmib_get_0042b1a0)(0x3b,local_48);
              (*(code *)PTR_apmib_get_0042b1a0)(0x3e,&local_5cc);
              if (((local_5d8 == 0) || (((local_5d8 == 3 || (local_5d8 == 4)) || (local_5d8 == 6))))
                 && (local_5cc == 0)) goto LAB_0040a9a4;
            }
            else {
LAB_0040a9a4:
              pcVar6 = local_34;
              pcVar14 = (code *)PTR_strcpy_0042b208;
              if (local_2a0[0] != '\0') {
                (*(code *)PTR_sprintf_0042b0e8)(acStack_540," %s");
                pcVar6 = acStack_540;
                pcVar14 = (code *)PTR_strcat_0042b170;
              }
              (*pcVar14)(local_2a0,pcVar6);
            }
            pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_584);
          } while (pcVar6 != (char *)0x0);
        }
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iapp %s %s",acStack_4e0,local_2a0);
        (*(code *)PTR_system_0042b1ac)(local_430);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/restart_iapp");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_0042b148)("/var/restart_iapp");
        }
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/restart_iapp",&DAT_00417b58,local_430,"");
        bVar2 = true;
      }
    }
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/wscd");
    if (iVar3 != 0) {
      (*(code *)PTR_memset_0042b114)(local_430,0,100);
      (*(code *)PTR_memset_0042b114)(auStack_3cc,0,100);
      local_584 = 0;
      (*(code *)PTR_strcpy_0042b208)(auStack_368,local_1d8);
      pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(auStack_368,&DAT_00417b24,&local_584);
      while (pcVar6 != (char *)0x0) {
        (*(code *)PTR_memset_0042b114)(acStack_4c0,0,0x28);
        (*(code *)PTR_memset_0042b114)(acStack_498,0,0x28);
        iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
        if ((iVar3 == 0) || (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan1"), iVar3 == 0)) {
          (*(code *)PTR_SetWlan_idx_0042b1cc)(pcVar6);
          (*(code *)PTR_apmib_get_0042b1a0)(0x3b,&local_5d8);
          (*(code *)PTR_apmib_get_0042b1a0)(0x23,&local_5c0);
          (*(code *)PTR_apmib_get_0042b1a0)(0x19,&local_5bc);
          (*(code *)PTR_apmib_get_0042b1a0)(0x2d,&local_5b8);
          (*(code *)PTR_apmib_get_0042b1a0)(0x1c,&local_5d0);
          (*(code *)PTR_apmib_get_0042b1a0)(0x117,&local_580);
          uVar4 = local_5bc;
          local_5d4 = 0;
          local_5c4 = 0;
          uVar12 = local_5bc ^ 7;
          if ((1 < (int)local_5bc) || (bVar11 = true, uVar12 = local_5b8, local_5c0 == 0)) {
            bVar11 = uVar12 != 0;
          }
          iVar3 = (*(code *)PTR_strcmp_0042b0fc)(pcVar6,"wlan0");
          if ((iVar3 == 0) && ((local_5c8 != 0 || (local_5d8 == 2)))) goto LAB_0040b200;
          if (local_5d8 == 0) {
            if ((int)uVar4 < 2) {
              if (!bVar11) goto LAB_0040ad24;
            }
            else if ((uVar4 == 7) || (local_5d0 != 1)) goto LAB_0040ad24;
          }
          else {
LAB_0040ad24:
            local_470[3] = (char *)0x0;
            local_470[1] = (char *)0x0;
            local_470[2] = (char *)0x0;
            local_470[0] = "wscd";
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps/simplecfgservice.xml");
            if (iVar3 == 0) {
              iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps");
              if (iVar3 != 0) {
                (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,"/var/wps",&DAT_00418ab4,"");
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"mkdir","/var/wps","");
              (*(code *)PTR_system_0042b1ac)("cp /etc/simplecfg*.xml /var/wps");
            }
            if (local_5d8 == 1) {
              local_470[1] = "-mode";
              local_470[2] = "2";
              local_580 = 0;
              iVar3 = 3;
            }
            else {
              local_470[1] = "-start";
              iVar3 = 2;
            }
            if (local_580 == 1) {
              local_2c = "255.255.255.255";
              local_30 = "netmask";
              local_34 = "239.255.255.250";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,"route",&DAT_0041803c,&DAT_00418044,"239.255.255.250","netmask",
                         "255.255.255.255",acStack_4e0,"");
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,"route",&DAT_00418040,&DAT_00418044,local_34,local_30,local_2c,
                         acStack_4e0,"");
            }
            (*(code *)PTR_sprintf_0042b0e8)(acStack_4c0,"/var/wsc-%s.conf",pcVar6);
            (*(code *)PTR_RunSystemCmd_0042b0dc)
                      (0,"flash","upd-wsc-conf","/etc/wscd.conf",acStack_4c0,pcVar6,"");
            local_470[iVar3] = "-c";
            local_470[iVar3 + 1] = acStack_4c0;
            local_470[iVar3 + 2] = "-w";
            local_470[iVar3 + 3] = pcVar6;
            local_470[iVar3 + 4] = "-fi";
            (*(code *)PTR_sprintf_0042b0e8)(acStack_498,"/var/wscd-%s.fifo",pcVar6);
            local_470[iVar3 + 5] = acStack_498;
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_start_pbc");
            iVar9 = iVar3 + 6;
            if (iVar5 != 0) {
              local_470[iVar9] = "-start_pbc";
              (*(code *)PTR_unlink_0042b148)("/var/wps_start_pbc");
              iVar9 = iVar3 + 7;
            }
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_start_pin");
            if (iVar3 != 0) {
              local_470[iVar9] = "-start";
              (*(code *)PTR_unlink_0042b148)("/var/wps_start_pin");
              iVar9 = iVar9 + 1;
            }
            iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_local_pin");
            if (iVar3 != 0) {
              iVar3 = (*(code *)PTR_fopen_0042b118)("/var/wps_local_pin",&DAT_004187f4);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042b1d4)(iVar3,"%s",auStack_3cc);
                (*(code *)PTR_fclose_0042b10c)(iVar3);
              }
              (*(code *)PTR_strcpy_0042b208)(&local_560,auStack_3cc);
              local_470[iVar9] = "-local_pin";
              local_470[iVar9 + 1] = (char *)&local_560;
              (*(code *)PTR_unlink_0042b148)("/var/wps_local_pin");
              iVar9 = iVar9 + 2;
            }
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)("/var/wps_peer_pin");
            iVar7 = iVar9 + 1;
            iVar3 = iVar9;
            if (iVar5 != 0) {
              iVar3 = (*(code *)PTR_fopen_0042b118)("/var/wps_peer_pin",&DAT_004187f4);
              if (iVar3 != 0) {
                (*(code *)PTR_fscanf_0042b1d4)(iVar3,"%s",auStack_3cc);
                (*(code *)PTR_fclose_0042b10c)(iVar3);
              }
              (*(code *)PTR_strcpy_0042b208)(&local_550,auStack_3cc);
              local_470[iVar9] = "-peer_pin";
              local_470[iVar9 + 1] = (char *)&local_550;
              (*(code *)PTR_unlink_0042b148)("/var/wps_peer_pin");
              iVar3 = iVar9 + 2;
              iVar7 = iVar9 + 3;
            }
            local_470[iVar3] = "-daemon";
            local_470[iVar7] = (char *)0x0;
            (*(code *)PTR_DoCmd_0042b0d4)(local_470,0);
            bVar2 = true;
          }
LAB_0040b200:
          iVar3 = 5;
          do {
            iVar5 = (*(code *)PTR_isFileExist_0042b0ac)(acStack_498);
            if (iVar5 != 0) break;
            iVar3 = iVar3 + -1;
            (*(code *)PTR_sleep_0042b1a4)(1);
          } while (iVar3 != 0);
        }
        pcVar6 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_584);
      }
    }
    if (bVar2) {
      if (local_500[0] == '\0') {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iwcontrol %s",local_1d8);
      }
      else {
        (*(code *)PTR_sprintf_0042b0e8)(local_430,"iwcontrol %s %s",local_1d8,local_500);
      }
      (*(code *)PTR_system_0042b1ac)(local_430);
    }
  }
  return 0;
}


/* FUN_0040b310 @ 0040b310 */

undefined4 FUN_0040b310(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int local_100;
  undefined1 auStack_fc [32];
  undefined1 auStack_dc [60];
  undefined4 local_a0;
  uint local_9c;
  char local_98;
  int local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined *local_48;
  char *local_44;
  undefined1 *local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  char *local_30;
  
  local_100 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x6f,&local_100);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  for (local_60 = 1; local_60 <= local_100; local_60 = local_60 + 1) {
    local_30 = (char *)&local_a0;
    (*(code *)PTR_memset_0042b114)(local_30,0,0x3d);
    local_a0 = CONCAT13((char)local_60,local_a0._1_3_);
    (*(code *)PTR_apmib_get_0042b1a0)(0x8070,local_30);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_a0);
    (*(code *)PTR_strcpy_0042b208)(auStack_fc,uVar2);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_dc,"%d:%d",local_9c >> 0x10,local_9c & 0xffff);
    if ((local_9c >> 0x10 < 0x50) && (0x50 < (local_9c & 0xffff))) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef8,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,"80:80",&DAT_0042af18,param_1,&DAT_0042af14,param_2,
                 &DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_98 == '\x01') {
      local_40 = auStack_dc;
      local_38 = auStack_fc;
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,local_40,&DAT_0042af14
                 ,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418c08,local_38,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af18,param_1,&DAT_0042af14,local_38,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,local_40,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (local_98 == '\x02') {
      local_48 = auStack_dc;
      local_40 = auStack_fc;
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      local_38 = &DAT_0042afc8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,local_48,&DAT_0042af14
                 ,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418c08,local_40,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af18,param_1,&DAT_0042af14,local_40,&DAT_0042af28,local_38,
                 s___dport_0042af6c,local_48,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (local_98 == '\x03') {
      local_58 = auStack_fc;
      local_30 = &DAT_0042af34;
      local_34 = &DAT_0042af88;
      local_38 = &DAT_00418c08;
      local_40 = &DAT_00430000;
      local_5c = auStack_dc;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,auStack_dc,
                 &DAT_0042af14,param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418c08,local_58,"");
      local_44 = s_ACCEPT_0042aeb8;
      local_3c = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,param_1,
                 &DAT_0042af14,local_58,&DAT_0042af28,&DAT_0042afcc,s___dport_0042af6c,local_5c,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      local_48 = &DAT_0042afc8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_40 + -0x5160,&DAT_0042af30,local_30,
                 &DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,local_5c,&DAT_0042af14,param_2,
                 &DAT_0042af1c,local_34,local_38,local_58,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_3c + -0x5168,&DAT_0042af18,param_1,
                 &DAT_0042af14,local_58,&DAT_0042af28,local_48,s___dport_0042af6c,local_5c,
                 &DAT_0042af1c,local_44,"");
    }
    if ((((local_50 == 0) && (local_9c >> 0x10 < 0x6bc)) && (0x6ba < (local_9c & 0xffff))) &&
       ((local_98 == '\x03' || (local_98 == '\x01')))) {
      local_30 = &DAT_00430000;
      local_34 = &DAT_00430000;
      local_38 = &DAT_00418c10;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af18,param_1,&DAT_0042af28,&DAT_00418c10,&DAT_0042af14,
                 param_2,&DAT_0042af1c,&DAT_0042af88,&DAT_00418c08,auStack_fc,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_34 + -0x5190,(undefined4 *)((int)local_30 + -0x510c),s_FORWARD_0042ae98,
                 &DAT_0042af28,local_38,&DAT_0042af18,param_1,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    }
    if (((local_4c == 0) && (local_9c >> 0x10 < 0x6a6)) &&
       ((0x6a4 < (local_9c & 0xffff) && ((byte)(local_98 - 2U) < 2)))) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/nat_l2tp",&DAT_00417b58,&DAT_00418d58,"");
    }
    if ((((local_54 == 0) && (local_9c >> 0x10 < 0x1f5)) && (499 < (local_9c & 0xffff))) &&
       ((byte)(local_98 - 2U) < 2)) {
      local_48 = auStack_fc;
      local_3c = &DAT_00418c24;
      local_30 = &DAT_0042af34;
      local_34 = &DAT_0042af88;
      local_38 = &DAT_00418c08;
      local_40 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                 &DAT_0042af34,&DAT_0042af28,&DAT_00418c24,&DAT_0042af14,param_2,&DAT_0042af1c,
                 &DAT_0042af88,&DAT_00418c08,local_48,"");
      puVar1 = local_48;
      local_48 = &DAT_0042afc8;
      local_44 = "4500";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_40 + -0x5160,&DAT_0042af30,local_30,
                 &DAT_0042af28,&DAT_0042afc8,s___dport_0042af6c,&DAT_00418c28,&DAT_0042af14,param_2,
                 &DAT_0042af1c,local_34,local_38,puVar1,"");
      local_30 = s_ACCEPT_0042aeb8;
      local_34 = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,local_48,
                 s___dport_0042af6c,local_44,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_34 + -0x5168,&DAT_0042af28,local_3c,
                 &DAT_0042af18,param_1,&DAT_0042af1c,local_30,"");
    }
    local_4c = 1;
    local_50 = 1;
    local_54 = 1;
  }
  return 0;
}


/* FUN_0040bd04 @ 0040bd04 */

undefined4 FUN_0040bd04(void)

{
  int iVar1;
  int local_80;
  undefined1 auStack_7c [12];
  uint local_70;
  char local_6c;
  undefined1 auStack_54 [36];
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_80 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x81,&local_80);
  for (iVar1 = 1; iVar1 <= local_80; iVar1 = iVar1 + 1) {
    (*(code *)PTR_memset_0042b114)(&local_70,0,0x1b);
    local_70 = CONCAT13((char)iVar1,local_70._1_3_);
    (*(code *)PTR_apmib_get_0042b1a0)(0x8082,&local_70);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_54,"%d:%d",local_70 >> 0x10,local_70 & 0xffff);
    local_2c = auStack_7c;
    (*(code *)PTR_strcpy_0042b208)(local_2c,s_iptables_0042ae70);
    if (local_6c == '\x01') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,local_2c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,auStack_54,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_6c == '\x02') {
      if ((local_70 >> 0x10 < 0x35) && (0x34 < (local_70 & 0xffff))) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,auStack_7c,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                   s___dport_0042af6c,"53:53",&DAT_0042af1c,&DAT_0042aec0,"");
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,auStack_54,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_6c == '\x03') {
      local_30 = auStack_54;
      local_2c = &DAT_00430000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 s___dport_0042af6c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,auStack_7c,&DAT_0042aef4,local_2c + -0x5168,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      if ((local_70 >> 0x10 < 0x35) && (0x34 < (local_70 & 0xffff))) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,auStack_7c,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                   s___dport_0042af6c,"53:53",&DAT_0042af1c,&DAT_0042aec0,"");
      }
    }
  }
  return 0;
}


/* FUN_0040c060 @ 0040c060 */

undefined4 FUN_0040c060(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 auStack_50 [32];
  undefined1 *local_30;
  undefined1 *local_2c;
  
  local_70 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x75,&local_70);
  for (iVar2 = 1; iVar2 <= local_70; iVar2 = iVar2 + 1) {
    local_68 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_6c = iVar2 << 0x18;
    (*(code *)PTR_apmib_get_0042b1a0)(0x8076,&local_6c);
    local_30 = auStack_50;
    uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_6c);
    (*(code *)PTR_strcpy_0042b208)(local_30,uVar1);
    if (local_68._0_1_ == '\x01') {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 &DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_68._0_1_ == '\x02') {
      local_2c = auStack_50;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
                 &DAT_0042af2c,auStack_50,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,"53:53",&DAT_0042af2c,local_2c,&DAT_0042af1c,&DAT_0042aec0,"");
    }
    if (local_68._0_1_ == '\x03') {
      local_2c = &DAT_00430000;
      local_30 = auStack_50;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
                 &DAT_0042af2c,auStack_50,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,local_2c + -0x5168,&DAT_0042af28,&DAT_0042afc8,
                 &DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
                 s___dport_0042af6c,"53:53",&DAT_0042af2c,local_30,&DAT_0042af1c,&DAT_0042aec0,"");
    }
  }
  return 0;
}


/* FUN_0040c3a0 @ 0040c3a0 */

undefined4 FUN_0040c3a0(void)

{
  int iVar1;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [80];
  undefined1 *local_30;
  
  local_c0 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x7b,&local_c0);
  iVar1 = 1;
  while( true ) {
    local_30 = &local_bc;
    if (local_c0 < iVar1) break;
    (*(code *)PTR_memset_0042b114)(local_30,0,0x1b);
    local_bc = (undefined1)iVar1;
    (*(code *)PTR_apmib_get_0042b1a0)(0x807c,local_30);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_a0,"%02X:%02X:%02X:%02X:%02X:%02X",local_bc,local_bb,local_ba,local_b9,
               local_b8,local_b7);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af20,&DAT_00418c38,
               s___mac_source_0042af48,auStack_a0,&DAT_0042af1c,&DAT_0042aec0,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af20,&DAT_00418c38,
               s___mac_source_0042af48,auStack_a0,&DAT_0042af1c,&DAT_0042aec0,"");
    iVar1 = iVar1 + 1;
    (*(code *)PTR_memset_0042b114)(auStack_80,0,0x50);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_80,"rtk_cmd igmp_delete %02X:%02X:%02X:%02X:%02X:%02X",local_bc,local_bb,
               local_ba,local_b9,local_b8,local_b7);
    (*(code *)PTR_system_0042b1ac)(auStack_80);
  }
  return 0;
}


/* FUN_0040c5f8 @ 0040c5f8 */

undefined4 FUN_0040c5f8(undefined4 param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  undefined1 auStack_204 [500];
  
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xe6,&local_230);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe7,&local_22c);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe8,&local_228);
  (*(code *)PTR_apmib_get_0042b1a0)(0xe9,&local_224);
  (*(code *)PTR_apmib_get_0042b1a0)(0xea,&local_220);
  (*(code *)PTR_apmib_get_0042b1a0)(0xeb,&local_21c);
  (*(code *)PTR_apmib_get_0042b1a0)(0xec,&local_218);
  (*(code *)PTR_apmib_get_0042b1a0)(0xed,&local_214);
  (*(code *)PTR_apmib_get_0042b1a0)(0xee,&local_210);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_20c);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_208);
  if (param_2 == 2) {
    pcVar1 = "echo \" 2 %X %X %ld %d %d %d %d %d %d %d %d %d\" >  /proc/enable_dos";
    uVar2 = local_20c;
  }
  else {
    uVar2 = local_20c & 0xffffff00;
    pcVar1 = "echo \" 0 %X %X %ld %d %d %d %d %d %d %d %d %d\" >  /proc/enable_dos";
  }
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_204,pcVar1,uVar2,local_208,param_1,local_230,local_22c,local_228,local_224,
             local_220,local_21c,local_218,local_214,local_210);
  (*(code *)PTR_system_0042b1ac)(auStack_204);
  return 0;
}


/* set_QoS @ 0040c83c */

undefined4 set_QoS(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  undefined1 auStack_3a0 [4];
  undefined4 auStack_39c [5];
  char acStack_388 [32];
  char acStack_368 [32];
  char acStack_348 [32];
  char acStack_328 [32];
  char acStack_308 [64];
  undefined1 auStack_2c8 [128];
  char acStack_248 [128];
  undefined1 local_1c8 [16];
  char local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined1 local_1b5;
  undefined1 local_1b4;
  undefined1 local_1b3;
  undefined1 local_1b2;
  byte local_1b1;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  char local_1a0 [108];
  undefined1 auStack_134 [204];
  char *local_68;
  int local_64;
  int local_60;
  int local_5c;
  char *local_58;
  int local_54;
  char *local_50;
  char *local_4c;
  undefined1 *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  
  (*(code *)PTR_memset_0042b114)(acStack_388,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_368,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_348,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_308,0,0x40);
  (*(code *)PTR_memset_0042b114)(acStack_328,0,0x20);
  local_3b8 = 0;
  local_3b4 = 0;
  local_3b0 = 0;
  local_3ac = 0;
  local_3a8 = 0;
  local_3a4 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_2c8,0,0x80);
  (*(code *)PTR_memset_0042b114)(acStack_248,0,0x80);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aefc,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af0c,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af10,&DAT_0042af30,s_mangle_0042af38,"");
  puVar9 = auStack_39c;
  if (param_1 == 2) {
    (*(code *)PTR_sprintf_0042b0e8)(puVar9,&DAT_00417aa0,param_3);
    (*(code *)PTR_getWispRptIfaceName_0042b1e8)(puVar9,param_3);
    if (1 < param_2 - 3U) goto LAB_0040ca5c;
LAB_0040ca4c:
    puVar9 = (undefined4 *)&DAT_00418cf8;
  }
  else {
    if ((param_1 == 0) && ((param_2 - 3U < 2 || (param_2 == 0x10)))) goto LAB_0040ca4c;
    puVar9 = &DAT_00417f3c;
LAB_0040ca5c:
    if (param_2 == 6) {
      puVar10 = &DAT_00418cf8;
      goto LAB_0040ca70;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_0040ca70:
  iVar2 = (*(code *)PTR_getInAddr_0042b1c4)(puVar9,2,auStack_3a0);
  if (iVar2 == 0) {
    (*(code *)PTR_puts_0042b1b8)("No wan ip currently!");
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0x133,&local_3b8);
    (*(code *)PTR_apmib_get_0042b1a0)(0x134,&local_3b4);
    (*(code *)PTR_apmib_get_0042b1a0)(0x135,&local_3b0);
    (*(code *)PTR_apmib_get_0042b1a0)(0x28c,&local_3a8);
    (*(code *)PTR_apmib_get_0042b1a0)(0x28b,&local_3ac);
    (*(code *)PTR_apmib_get_0042b1a0)(0x136,&local_3a4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,&DAT_00417ad0,&DAT_00418d24,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,puVar9,&DAT_00418d24,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,&DAT_00418cf8,&DAT_00418d24,"");
    iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar9,&DAT_00417f3c);
    if ((iVar2 != 0) && (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar9,&DAT_00418cf8), iVar2 != 0))
    {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00418d18,"qdisc",&DAT_0041803c,&DAT_0041804c,puVar9,&DAT_00418d24,"");
    }
    (*(code *)PTR_strcpy_0042b208)(auStack_2c8,&DAT_00418d2c);
    if (local_3b8 == 1) {
      (*(code *)PTR_strcpy_0042b208)(auStack_2c8,&DAT_00418d30);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/qos",&DAT_00417b58,auStack_2c8,"");
    if (local_3b8 == 1) {
      if (local_3b4 == 0) {
        local_64 = local_3b0;
        if (local_3b0 < 100) {
          local_64 = 100;
        }
      }
      else {
        local_64 = 0x19000;
      }
      if (local_3ac == 0) {
        local_60 = local_3a8;
        if (local_3a8 < 100) {
          local_60 = 100;
        }
      }
      else {
        local_60 = 0x19000;
      }
      local_2c = "2:0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,&DAT_00419024,"handle",
                 &DAT_00418d40,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,"");
      (*(code *)PTR_sprintf_0042b0e8)(acStack_388,"%dkbit",local_64);
      local_30 = "2:1";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_2c,
                 "classid",&DAT_00418d50,&DAT_00419034,&DAT_0041905c,acStack_388,&DAT_00419064,
                 acStack_388,"quantum",&DAT_00418d54,"");
      local_2c = "2:2";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_30,
                 "classid",&DAT_00418d5c,&DAT_00419034,&DAT_0041905c,"1kbit",&DAT_00419064,
                 acStack_388,&DAT_00419074,&DAT_00418d68,"quantum",&DAT_00418d54,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,"parent",local_2c,
                 "handle",&DAT_00418d6c,&DAT_0041907c,"perturb","10","");
      if ((puVar10 != (undefined *)0x0) &&
         (iVar2 = (*(code *)PTR_strcmp_0042b0fc)(puVar10,&DAT_00418cf8), iVar2 == 0)) {
        local_2c = "3:0";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,&DAT_00419024,
                   "handle",&DAT_00418d74,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,""
                  );
        (*(code *)PTR_sprintf_0042b0e8)(acStack_388,"%dkbit",local_64);
        local_30 = "3:1";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_2c,
                   "classid",&DAT_00418d78,&DAT_00419034,&DAT_0041905c,acStack_388,&DAT_00419064,
                   acStack_388,"quantum",&DAT_00418d54,"");
        local_2c = "3:2";
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_30,
                   "classid",&DAT_00418d7c,&DAT_00419034,&DAT_0041905c,"1kbit",&DAT_00419064,
                   acStack_388,&DAT_00419074,&DAT_00418d68,"quantum",&DAT_00418d54,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,"parent",local_2c,
                   "handle",&DAT_00418d80,&DAT_0041907c,"perturb","10","");
      }
      local_40 = "handle";
      local_3c = &DAT_00420000;
      local_38 = "2";
      local_30 = "5:0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,&DAT_00419024,
                 "handle",&DAT_00418d88,&DAT_00419034,"default","2",&DAT_00419040,&DAT_00418d44,"");
      local_2c = acStack_388;
      (*(code *)PTR_sprintf_0042b0e8)(local_2c,"%dkbit",local_60);
      local_34 = "ceil";
      local_44 = "quantum";
      local_50 = "5:1";
      local_4c = "30000";
      local_48 = &DAT_00420000;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",local_30
                 ,"classid",&DAT_00418d8c,&DAT_00419034,&DAT_0041905c,local_2c,&DAT_00419064,
                 local_2c,"quantum",&DAT_00418d54,"");
      local_30 = "5:2";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,local_48 + -0x6fbc,&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                 "parent",local_50,"classid",&DAT_00418d90,&DAT_00419034,&DAT_0041905c,"1kbit",
                 local_34,local_2c,&DAT_00419074,&DAT_00418d68,local_44,local_4c,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,&DAT_00419010,local_3c + -0x6fec,&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                 "parent",local_30,local_40,&DAT_00418d94,&DAT_0041907c,"perturb","10","");
      pcVar1 = local_34;
      if (0 < local_3a4) {
        local_5c = 0x35;
        iVar2 = 0xd;
        for (local_54 = 1; local_54 <= local_3a4; local_54 = local_54 + 1) {
          (*(code *)PTR_memset_0042b114)(auStack_134,0,200);
          local_1c8[0] = (undefined1)local_54;
          (*(code *)PTR_apmib_get_0042b1a0)(0x8137,local_1c8);
          if (local_1b8 != '\0') {
            if (local_1a8 != 0) {
              (*(code *)PTR_sprintf_0042b0e8)(acStack_388,&DAT_00417aa4,iVar2);
              if ((local_1a0[0] == '\0') ||
                 (local_4c = local_1a0, iVar3 = (*(code *)PTR_strcmp_0042b0fc)(local_1a0,"Disable"),
                 iVar3 == 0)) {
                (*(code *)PTR_strcpy_0042b208)(acStack_248,"");
              }
              else {
                (*(code *)PTR_sprintf_0042b0e8)(acStack_248,"%s %s","-m layer7 --l7proto ",local_4c)
                ;
              }
              if ((local_1b1 & 4) == 0) {
                local_68 = acStack_388;
                if ((local_1b1 & 8) != 0) {
                  local_38 = acStack_308;
                  local_2c = &DAT_0042af1c;
                  local_30 = s_mangle_0042af38;
                  local_34 = &DAT_0042af30;
                  local_44 = &DAT_0042aeec;
                  local_50 = s___set_mark_0042b048;
                  local_4c = &DAT_00430000;
                  local_48 = &DAT_00430000;
                  local_3c = s_PREROUTING_0042aea0;
                  local_40 = acStack_248;
                  (*(code *)PTR_sprintf_0042b0e8)
                            (local_38,"%02x:%02x:%02x:%02x:%02x:%02x",local_1b7,local_1b6,local_1b5,
                             local_1b4,local_1b3,local_1b2);
                  pcVar13 = &DAT_0042af44;
                  pcVar14 = s___mac_source_0042af48;
                  pcVar6 = local_4c + -0x5190;
                  puVar8 = local_48 + -0x510c;
                  pcVar5 = local_3c;
                  pcVar11 = local_34;
                  pcVar12 = local_30;
                  pcVar15 = local_38;
                  pcVar16 = local_40;
                  pcVar17 = local_2c;
                  pcVar18 = local_44;
                  pcVar19 = local_50;
                  pcVar7 = local_68;
                  goto LAB_0040d868;
                }
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s",s_iptables_0042ae70,
                           &DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,s_mangle_0042af38,
                           acStack_248,&DAT_0042af1c,&DAT_0042aeec,s___set_mark_0042b048,local_68,""
                          );
              }
              else {
                local_4c = acStack_348;
                local_50 = acStack_368;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1b0);
                (*(code *)PTR_strcpy_0042b208)(local_50,uVar4);
                local_68 = acStack_308;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ac);
                (*(code *)PTR_strcpy_0042b208)(local_4c,uVar4);
                (*(code *)PTR_sprintf_0042b0e8)(local_68,"%s-%s",local_50,local_4c);
                pcVar13 = s_iprange_0042b028;
                pcVar14 = s___src_range_0042b030;
                pcVar6 = s_iptables_0042ae70;
                puVar8 = &DAT_0042aef4;
                pcVar5 = s_PREROUTING_0042aea0;
                pcVar11 = &DAT_0042af30;
                pcVar12 = s_mangle_0042af38;
                pcVar15 = local_68;
                pcVar16 = acStack_248;
                pcVar17 = &DAT_0042af1c;
                pcVar18 = &DAT_0042aeec;
                pcVar19 = s___set_mark_0042b048;
                pcVar7 = acStack_388;
LAB_0040d868:
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s",pcVar6,puVar8,
                           pcVar5,pcVar11,pcVar12,&DAT_0042af20,pcVar13,pcVar14,pcVar15,pcVar16,
                           pcVar17,pcVar18,pcVar19,pcVar7,"");
              }
              (*(code *)PTR_system_0042b1ac)(auStack_134);
              local_2c = acStack_368;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,&DAT_00418e10,iVar2);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_348,"%ldkbit",local_1a8);
              local_30 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_30,"%dkbit",local_64);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_328,&DAT_00418e20,iVar2);
              pcVar5 = acStack_348;
              pcVar11 = local_30;
              if ((local_1b1 & 1) == 0) {
                pcVar5 = "1kbit";
                pcVar11 = acStack_348;
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         &DAT_00418d50,"classid",local_2c,&DAT_00419034,&DAT_0041905c,pcVar5,pcVar1,
                         pcVar11,&DAT_00419074,"2","quantum",&DAT_00418d54,"");
              local_34 = acStack_328;
              local_30 = "handle";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         acStack_368,"handle",local_34,&DAT_0041907c,"perturb","10","");
              local_2c = "prio";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"filter",&DAT_0041901c,&DAT_00419020,puVar9,"parent",
                         &DAT_00418d40,&DAT_00419074,&DAT_00418e28,local_30,acStack_388,
                         &DAT_00419090,"classid",acStack_368,"");
              (*(code *)PTR_sprintf_0042b0e8)(acStack_368,&DAT_00418e2c,iVar2);
              local_68 = acStack_348;
              (*(code *)PTR_sprintf_0042b0e8)(local_68,"%ldkbit",local_1a8);
              local_58 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_58,"%dkbit",local_64);
              (*(code *)PTR_sprintf_0042b0e8)(local_34,&DAT_00418e34,iVar2);
              if ((puVar10 != (undefined *)0x0) &&
                 (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(puVar10,&DAT_00418cf8), iVar3 == 0)) {
                pcVar5 = local_58;
                pcVar11 = local_68;
                if ((local_1b1 & 1) == 0) {
                  pcVar5 = local_68;
                  pcVar11 = "1kbit";
                }
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,puVar10,"parent",
                           &DAT_00418d78,"classid",acStack_368,&DAT_00419034,&DAT_0041905c,pcVar11,
                           pcVar1,pcVar5,local_2c,"2","quantum",&DAT_00418d54,"");
                local_30 = acStack_368;
                local_2c = &DAT_00420000;
                local_34 = "handle";
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,puVar10,"parent",
                           local_30,"handle",acStack_328,&DAT_0041907c,"perturb","10","");
                (*(code *)PTR_RunSystemCmd_0042b0dc)
                          (0,local_2c + -0x6ff0,"filter",&DAT_0041901c,&DAT_00419020,puVar10,
                           "parent",&DAT_00418d74,&DAT_00419074,&DAT_00418e28,local_34,acStack_388,
                           &DAT_00419090,"classid",local_30,"");
              }
              iVar2 = iVar2 + 1;
            }
            if (local_1a4 != 0) {
              local_68 = acStack_388;
              (*(code *)PTR_sprintf_0042b0e8)(acStack_388,&DAT_00417aa4,local_5c);
              if ((local_1b1 & 4) == 0) {
                if ((local_1b1 & 8) != 0) {
                  local_38 = acStack_308;
                  local_2c = &DAT_0042af1c;
                  local_30 = s_mangle_0042af38;
                  local_34 = &DAT_0042af30;
                  local_44 = &DAT_0042aeec;
                  local_50 = s___set_mark_0042b048;
                  local_4c = &DAT_00430000;
                  local_48 = &DAT_00430000;
                  local_3c = s_POSTROUTING_0042aeac;
                  local_40 = acStack_248;
                  (*(code *)PTR_sprintf_0042b0e8)
                            (local_38,"%02x:%02x:%02x:%02x:%02x:%02x",local_1b7,local_1b6,local_1b5,
                             local_1b4,local_1b3,local_1b2);
                  pcVar6 = &DAT_0042af44;
                  pcVar13 = s___mac_destination_0042af58;
                  pcVar7 = local_4c + -0x5190;
                  puVar8 = local_48 + -0x510c;
                  pcVar5 = local_3c;
                  pcVar11 = local_34;
                  pcVar12 = local_30;
                  pcVar15 = local_38;
                  pcVar16 = local_40;
                  pcVar17 = local_2c;
                  pcVar18 = local_44;
                  pcVar19 = local_50;
                  goto LAB_0040e0a4;
                }
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s",s_iptables_0042ae70,
                           &DAT_0042aef4,s_POSTROUTING_0042aeac,&DAT_0042af30,s_mangle_0042af38,
                           acStack_248,&DAT_0042af1c,&DAT_0042aeec,s___set_mark_0042b048,local_68,""
                          );
              }
              else {
                local_4c = acStack_348;
                local_50 = acStack_368;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1b0);
                (*(code *)PTR_strcpy_0042b208)(local_50,uVar4);
                local_58 = acStack_308;
                uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ac);
                (*(code *)PTR_strcpy_0042b208)(local_4c,uVar4);
                (*(code *)PTR_sprintf_0042b0e8)(local_58,"%s-%s",local_50,local_4c);
                pcVar6 = s_iprange_0042b028;
                pcVar13 = s___dst_range_0042b03c;
                pcVar7 = s_iptables_0042ae70;
                puVar8 = &DAT_0042aef4;
                pcVar5 = s_POSTROUTING_0042aeac;
                pcVar11 = &DAT_0042af30;
                pcVar12 = s_mangle_0042af38;
                pcVar15 = local_58;
                pcVar16 = acStack_248;
                pcVar17 = &DAT_0042af1c;
                pcVar18 = &DAT_0042aeec;
                pcVar19 = s___set_mark_0042b048;
LAB_0040e0a4:
                (*(code *)PTR_sprintf_0042b0e8)
                          (auStack_134,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s",pcVar7,puVar8,
                           pcVar5,pcVar11,pcVar12,&DAT_0042af20,pcVar6,pcVar13,pcVar15,pcVar16,
                           pcVar17,pcVar18,pcVar19,local_68,"");
              }
              (*(code *)PTR_system_0042b1ac)(auStack_134);
              local_2c = acStack_368;
              (*(code *)PTR_sprintf_0042b0e8)(local_2c,&DAT_00418e3c,local_5c);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_348,"%ldkbit",local_1a4);
              local_30 = acStack_308;
              (*(code *)PTR_sprintf_0042b0e8)(local_30,"%dkbit",local_60);
              (*(code *)PTR_sprintf_0042b0e8)(acStack_328,&DAT_00418e44,local_5c);
              pcVar5 = acStack_348;
              pcVar11 = local_30;
              if ((local_1b1 & 1) == 0) {
                pcVar5 = "1kbit";
                pcVar11 = acStack_348;
              }
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"class",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",
                         &DAT_00418d8c,"classid",local_2c,&DAT_00419034,&DAT_0041905c,pcVar5,pcVar1,
                         pcVar11,&DAT_00419074,"2","quantum",&DAT_00418d54,"");
              local_30 = acStack_368;
              local_2c = &DAT_00420000;
              local_34 = "handle";
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,&DAT_00419010,"qdisc",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,"parent",
                         local_30,"handle",acStack_328,&DAT_0041907c,"perturb","10","");
              local_5c = local_5c + 1;
              (*(code *)PTR_RunSystemCmd_0042b0dc)
                        (0,local_2c + -0x6ff0,"filter",&DAT_0041901c,&DAT_00419020,&DAT_00417ad0,
                         "parent",&DAT_00418d88,&DAT_00419074,&DAT_00418e28,local_34,acStack_388,
                         &DAT_00419090,"classid",local_30,"");
            }
          }
        }
      }
    }
  }
  return 0;
}


/* FUN_0040e43c @ 0040e43c */

undefined4 FUN_0040e43c(void)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int local_458;
  uint local_454;
  undefined1 local_450 [7];
  undefined1 auStack_449 [24];
  byte local_431;
  undefined1 auStack_430 [40];
  undefined1 auStack_408 [500];
  undefined1 auStack_214 [500];
  
  local_458 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xff,&local_454);
  (*(code *)PTR_apmib_get_0042b1a0)(0xf0,&local_458);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_408,&DAT_00418e4c,local_458);
  for (iVar4 = 1; iVar4 <= local_458; iVar4 = iVar4 + 1) {
    (*(code *)PTR_memset_0042b114)(local_450,0,0x20);
    local_450[0] = (undefined1)iVar4;
    (*(code *)PTR_apmib_get_0042b1a0)(0x80f1,local_450);
    if (local_454 == local_431) {
      iVar1 = (*(code *)PTR_strncmp_0042b154)(local_450,"http://",7);
      puVar2 = auStack_449;
      if (iVar1 != 0) {
        puVar2 = local_450;
      }
      (*(code *)PTR_sprintf_0042b0e8)(auStack_430,&DAT_00418e58,puVar2);
      (*(code *)PTR_strcat_0042b170)(auStack_408,auStack_430);
    }
  }
  if (local_454 == 0) {
    pcVar3 = "black";
  }
  else {
    pcVar3 = "white";
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,pcVar3,"");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_214,"add:0%c3 3 %s",0x16,auStack_408);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,auStack_214,"");
  return 0;
}


/* FUN_0040e64c @ 0040e64c */

void FUN_0040e64c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48 [2];
  undefined *local_40;
  char *local_3c;
  undefined *local_38;
  char *local_34;
  char *local_30;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48[0] = 0;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            ("/proc/sys/net/ipv4/ip_forward",&DAT_00417b58,&DAT_00418d58,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417b58,"2","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aefc,s_POSTROUTING_0042aeac,
             "");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aefc,s_PREROUTING_0042aea0,
             "");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aefc,&DAT_0042af30,s_mangle_0042af38,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_INPUT_0042ae88,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_OUTPUT_0042ae90,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,s_iptables_0042ae70,&DAT_0042aefc,s_FORWARD_0042ae98,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af08,s_OUTPUT_0042ae90,s_ACCEPT_0042aeb8,"");
  if (param_1 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,s_ACCEPT_0042aeb8,"");
LAB_0040e8c0:
    pcVar2 = &DAT_0042aec0;
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,&DAT_0042aec0,"");
    if (param_1 != 3) goto LAB_0040e8c0;
    pcVar2 = s_ACCEPT_0042aeb8;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af08,s_FORWARD_0042ae98,pcVar2,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/bin/routed");
  (*(code *)PTR_isFileExist_0042b0ac)("/proc/hw_nat");
  if (iVar1 == 0) {
    if (param_1 == 1) {
      return;
    }
  }
  else {
    if (param_1 == 1) {
      return;
    }
    (*(code *)PTR_apmib_get_0042b1a0)(0x285,&local_54);
    if (local_54 == 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af08,s_INPUT_0042ae88,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af08,s_FORWARD_0042ae98,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/fast_nat",&DAT_00417b58,&DAT_00418d58,"");
      return;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xef,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0xf0,&local_4c);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"flush","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"init","3","");
  if ((local_58 == 0) || (local_4c < 1)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/filter_table",&DAT_00417b58,"flush","");
  }
  else {
    FUN_0040e43c();
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/sw_nat",&DAT_00417b58,&DAT_00418ec4,"");
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x74,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x75,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040c060();
  }
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x7a,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x7b,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040c3a0();
  }
  local_58 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x80,&local_58);
  (*(code *)PTR_apmib_get_0042b1a0)(0x81,&local_4c);
  if ((local_58 == 1) && (0 < local_4c)) {
    FUN_0040bd04();
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xf7,&local_58);
  if (local_58 == 0) {
    pcVar4 = &DAT_0042aec0;
    pcVar2 = &DAT_0042af28;
    pcVar3 = &DAT_0042afc8;
  }
  else {
    if (local_58 != 1) goto LAB_0040eda0;
    local_30 = &DAT_0042afc8;
    local_34 = &DAT_0042af28;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___sport_0042af74,&DAT_00418ec8,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    pcVar4 = s_ACCEPT_0042aeb8;
    pcVar2 = local_34;
    pcVar3 = local_30;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,pcVar2,pcVar3,s___dport_0042af6c
             ,&DAT_00418ec8,&DAT_0042af1c,pcVar4,"");
LAB_0040eda0:
  (*(code *)PTR_apmib_get_0042b1a0)(0xf6,&local_50);
  if (local_50 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
               s___dport_0042af6c,&DAT_00418ed0,&DAT_0042af1c,&DAT_0042aec0,"");
  }
  else if (local_50 == 1) {
    local_30 = "1723";
    local_34 = &DAT_0042afcc;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afcc,
               s___dport_0042af6c,&DAT_00418ed0,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,local_34,
               s___sport_0042af74,local_30,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_00418ed8,
               &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  local_38 = &DAT_0042af18;
  local_40 = &DAT_0042af28;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
             &DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,param_4,"--destination","224.0.0.0/4",
             &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  local_3c = s_RELATED_ESTABLISHED_0042afd8;
  local_30 = s___state_0042afc0;
  local_34 = s_state_0042afb8;
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af20,s_state_0042afb8,
             s___state_0042afc0,s_RELATED_ESTABLISHED_0042afd8,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042af00,s_FORWARD_0042ae98,local_40,&DAT_0042afcc,
             s___tcp_flags_0042aff4,s_SYN_RST_0042b000,&DAT_0042b008,&DAT_0042af1c,s_TCPMSS_0042b020
             ,s___clamp_mss_to_pmtu_0042b00c,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af20,local_34,local_30,
             s_INVALID_0042afec,&DAT_0042af1c,&DAT_0042aec0,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_38,&DAT_00417ad0,
             &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  if (param_2 == 4) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_38,param_3,&DAT_0042af20
               ,local_34,local_30,local_3c,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/tmp/firewall_igd",&DAT_00417b58,"1","");
  (*(code *)PTR_apmib_get_0042b1a0)(0xe5,local_48);
  FUN_0040c5f8(local_48[0],param_1);
  if ((param_2 == 4) || (param_2 == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aef4,
               s_POSTROUTING_0042aeac,&DAT_0042af24,param_3,&DAT_0042af1c,s_MASQUERADE_0042aed4,"");
  }
  return;
}


/* setFirewallIptablesRules @ 0040f2ec */

undefined4 setFirewallIptablesRules(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  int local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  undefined1 auStack_1cc [12];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_1a0 [16];
  undefined4 auStack_190 [5];
  undefined4 local_17c;
  undefined1 local_178;
  undefined1 auStack_177 [15];
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined4 local_108 [8];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [128];
  undefined1 *local_48;
  undefined *local_44;
  undefined *local_40;
  char *local_3c;
  undefined *local_38;
  char *local_34;
  char *local_30;
  
  puVar6 = &DAT_00417f3c;
  local_178 = DAT_00417f40;
  local_17c = DAT_00417f3c;
  local_1f4 = -1;
  local_1f8 = -1;
  (*(code *)PTR_memset_0042b114)(auStack_177,0,0xf);
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  (*(code *)PTR_puts_0042b1b8)("Init Firewall Rules....");
  (*(code *)PTR_memset_0042b114)(auStack_128,0,0x1e);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_1f8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1f4);
  if (local_1f8 == 2) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_1f0);
    puVar6 = auStack_190;
    (*(code *)PTR_sprintf_0042b0e8)(puVar6,&DAT_00417aa0,local_1f0);
    (*(code *)PTR_getWispRptIfaceName_0042b1e8)(puVar6,local_1f0);
    if ((local_1f4 - 3U < 2) || (puVar5 = puVar6, local_1f4 == 6)) {
      puVar6 = auStack_190;
      puVar5 = (undefined4 *)&DAT_00418cf8;
    }
  }
  else {
    puVar5 = &DAT_00417f3c;
    if ((local_1f8 == 0) &&
       (((local_1f4 - 3U < 2 || (local_1f4 == 6)) || (puVar5 = puVar6, local_1f4 == 0x10)))) {
      puVar6 = &DAT_00417f3c;
      puVar5 = (undefined4 *)&DAT_00418cf8;
    }
  }
  iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(puVar5,2,&local_1ec);
  if (iVar1 == 0) {
    pcVar3 = "No wan ip currently!";
    pcVar7 = (code *)PTR_puts_0042b1b8;
    goto LAB_00410484;
  }
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1ec);
  (*(code *)PTR_strcpy_0042b208)(auStack_148,uVar2);
  FUN_0040e64c(local_1f8,local_1f4,puVar6,&local_17c);
  local_1e8 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0xc2,&local_1e8);
  if (local_1e8 == 1) {
    pcVar3 = s_ACCEPT_0042aeb8;
  }
  else {
    pcVar3 = &DAT_0042aec0;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afcc,
             s___dport_0042af6c,"80:80",&DAT_0042af18,puVar5,&DAT_0042af14,auStack_148,&DAT_0042af1c
             ,pcVar3,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
             s___dport_0042af6c,"1900:1900",&DAT_0042af18,puVar5,&DAT_0042af14,auStack_148,
             &DAT_0042af1c,&DAT_0042aec0,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0x6e,&local_1e8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x6f,&local_1e4);
  if ((local_1e8 == 1) && (0 < local_1e4)) {
    FUN_0040b310(puVar5,auStack_148);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1e0);
  if (local_1e0 == 4) {
    local_30 = &DAT_0042af28;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_00418ed8,
               &DAT_0042af18,puVar6,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
    puVar8 = &DAT_0042afcc;
    puVar9 = &DAT_00418ed0;
    pcVar3 = local_30;
LAB_0040f87c:
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,pcVar3,puVar8,s___sport_0042af74
               ,puVar9,&DAT_0042af18,puVar6,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  else if (local_1e0 == 6) {
    pcVar3 = &DAT_0042af28;
    puVar8 = &DAT_0042afc8;
    puVar9 = &DAT_00418ec8;
    goto LAB_0040f87c;
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0xf5,&local_1e8);
  if (local_1e8 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f30,&DAT_0042af1c,&DAT_0042aec0,"");
  }
  else {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f30,&DAT_0042af18,puVar5,&DAT_0042af24,&DAT_00417ad0,
               &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
  }
  if (((local_1f4 == 1) || (local_1f4 == 4)) || (local_1f4 == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afc8,
               s___dport_0042af6c,&DAT_00418f34,&DAT_0042af18,puVar5,&DAT_0042af1c,s_ACCEPT_0042aeb8
               ,"");
  }
  iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_1dc);
  if (iVar1 == 0) {
    pcVar3 = "No ip currently!";
    pcVar7 = (code *)PTR_puts_0042b1b8;
  }
  else {
    iVar1 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_1d8);
    iVar4 = 0;
    if (iVar1 == 0) {
      pcVar3 = "No MASK currently!";
      pcVar7 = (code *)PTR_puts_0042b1b8;
    }
    else {
      local_1dc = local_1dc & local_1d8;
      for (; local_1d8 != 0; local_1d8 = local_1d8 & local_1d8 - 1) {
        iVar4 = iVar4 + 1;
      }
      local_1d8 = 0;
      (*(code *)PTR_sprintf_0042b0e8)(auStack_1cc,&DAT_00417aa4,iVar4);
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1dc);
      (*(code *)PTR_strcpy_0042b208)(auStack_e8,uVar2);
      (*(code *)PTR_strcat_0042b170)(auStack_e8,&DAT_00418f60);
      (*(code *)PTR_strcat_0042b170)(auStack_e8,auStack_1cc);
      (*(code *)PTR_apmib_get_0042b1a0)(0x8c,&local_1e8);
      if (local_1e8 == 1) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x8d,local_108);
        uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_108[0]);
        iVar1 = (*(code *)PTR_strcmp_0042b0fc)(uVar2,"0.0.0.0");
        if (iVar1 != 0) {
          (*(code *)PTR_strcpy_0042b208)(auStack_168,uVar2);
          local_48 = auStack_148;
          local_34 = &DAT_0042af30;
          local_40 = &DAT_0042af34;
          local_38 = &DAT_00418c08;
          local_3c = &DAT_0042af84;
          local_30 = &DAT_0042af28;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_PREROUTING_0042aea0,&DAT_0042af30,
                     &DAT_0042af34,&DAT_0042af28,&DAT_0042af84,&DAT_0042af14,local_48,&DAT_0042af1c,
                     &DAT_0042af88,&DAT_00418c08,auStack_168,"");
          local_44 = &DAT_0042af18;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef8,s_INPUT_0042ae88,local_30,&DAT_0042afcc,
                     s___dport_0042af6c,"80:80",&DAT_0042af18,puVar5,&DAT_0042af14,local_48,
                     &DAT_0042af1c,&DAT_0042aec0,"");
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_44,puVar5,
                     &DAT_0042af14,auStack_168,local_30,local_3c,&DAT_0042af1c,s_ACCEPT_0042aeb8,"")
          ;
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_POSTROUTING_0042aeac,local_34,local_40,
                     &DAT_0042af2c,auStack_e8,&DAT_0042af14,auStack_168,&DAT_0042af1c,&DAT_00418f64,
                     local_38,local_48,"");
        }
      }
      local_1e8 = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0xc3,&local_1e8);
      if (local_1e8 == 1) {
        pcVar3 = s_ACCEPT_0042aeb8;
      }
      else {
        pcVar3 = &DAT_0042aec0;
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,&DAT_0042afd0,
                 s___icmp_type_0042af90,s_echo_request_0042af9c,&DAT_0042af18,puVar5,&DAT_0042af14,
                 auStack_148,&DAT_0042af1c,pcVar3,"");
      local_1e8 = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0x11b,&local_1e8);
      if (local_1e8 == 0) {
        local_30 = &DAT_0042af28;
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af28,"2",
                   &DAT_0042af18,puVar5,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,local_30,&DAT_0042afc8,
                   &DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,puVar5,"--destination","224.0.0.0/4",
                   &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_1e8);
        if ((local_1e8 == 4) || (local_1e8 == 6)) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,
                     &DAT_0042afc8,&DAT_0042af20,&DAT_0042afc8,&DAT_0042af18,&local_17c,
                     "--destination","224.0.0.0/4",&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
        }
      }
      local_30 = "br0";
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af18,&DAT_00417ad0,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_INPUT_0042ae88,&DAT_0042af18,&DAT_00418f6c,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af28,&DAT_00418f70,
                 &DAT_0042af18,puVar5,&DAT_0042af24,local_30,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      local_30 = s___state_0042afc0;
      local_3c = s_state_0042afb8;
      local_44 = &DAT_0042af20;
      local_34 = s_RELATED_ESTABLISHED_0042afd8;
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,puVar5,
                 &DAT_0042af20,s_state_0042afb8,s___state_0042afc0,s_RELATED_ESTABLISHED_0042afd8,
                 &DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      if (local_1f4 == 6) {
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,s_iptables_0042ae70,&DAT_0042aef4,s_FORWARD_0042ae98,&DAT_0042af18,puVar6,
                   local_44,local_3c,local_30,local_34,&DAT_0042af1c,s_ACCEPT_0042aeb8,"");
      }
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,s_iptables_0042ae70,&DAT_0042af30,&DAT_0042af34,&DAT_0042aef4,
                 s_POSTROUTING_0042aeac,&DAT_0042af24,puVar5,&DAT_0042af1c,s_MASQUERADE_0042aed4,"")
      ;
      if ((local_1f8 == 2) && (local_1f4 == 3)) {
        iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link");
        if (iVar1 != 0) {
          (*(code *)PTR_apmib_get_0042b1a0)(0xaa,&local_1d4);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d4);
          (*(code *)PTR_strcpy_0042b208)(auStack_1a0,uVar2);
          (*(code *)PTR_apmib_get_0042b1a0)(0xab,&local_1d0);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d0);
          (*(code *)PTR_strcpy_0042b208)(auStack_1b0,uVar2);
          uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1d0 & local_1d4);
          (*(code *)PTR_strcpy_0042b208)(auStack_1c0,uVar2);
          (*(code *)PTR_sprintf_0042b0e8)
                    (auStack_c8,"route del -net %s netmask %s dev br0 > /dev/null 2>&1",auStack_1c0,
                     auStack_1b0);
          (*(code *)PTR_system_0042b1ac)(auStack_c8);
          (*(code *)PTR_sprintf_0042b0e8)
                    (auStack_c8,"route add -net %s netmask %s dev br0",auStack_1c0,auStack_1b0);
          (*(code *)PTR_system_0042b1ac)(auStack_c8);
        }
      }
      set_QoS(local_1f8,local_1f4,local_1f0);
      pcVar3 = "echo 1 > /etc/ppp/firewall_lock";
      pcVar7 = (code *)PTR_system_0042b1ac;
    }
  }
LAB_00410484:
  (*pcVar7)(pcVar3);
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/sys/net/ipv4/ip_forward",&DAT_00417b58,"1","");
  return 0;
}


/* FUN_004104f0 @ 004104f0 */

void FUN_004104f0(undefined4 param_1,undefined4 param_2)

{
  int local_28 [3];
  
  local_28[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x11b,local_28);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"igmpproxy","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417b58,&DAT_00417cc0,"");
  if (local_28[0] == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"igmpproxy",param_1,param_2,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              ("/proc/sys/net/ipv4/igmp_max_memberships",&DAT_00417b58,&DAT_004190d4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417b58,&DAT_004190d8,"");
  }
  return;
}


/* FUN_00410624 @ 00410624 */

void FUN_00410624(void)

{
  char *pcVar1;
  int local_c8;
  int local_c4;
  undefined1 auStack_c0 [52];
  undefined1 auStack_8c [52];
  undefined1 auStack_58 [60];
  
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ddns_inet","");
  (*(code *)PTR_apmib_get_0042b1a0)(0xbb,&local_c8);
  if (local_c8 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xbc,&local_c4);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbd,auStack_c0);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbe,auStack_8c);
    (*(code *)PTR_apmib_get_0042b1a0)(0xbf,auStack_58);
    if (local_c4 == 0) {
      pcVar1 = "dyndns";
    }
    else {
      if (local_c4 != 1) {
        return;
      }
      pcVar1 = "tzo";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ddns_inet",&DAT_004190e8,pcVar1,auStack_8c,auStack_58,auStack_c0,"");
  }
  return;
}


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


/* FUN_00410904 @ 00410904 */

void FUN_00410904(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  char local_270 [100];
  undefined1 auStack_20c [100];
  undefined1 auStack_1a8 [100];
  undefined1 auStack_144 [100];
  undefined1 auStack_e0 [200];
  
  (*(code *)PTR_sprintf_0042b0e8)(auStack_20c,"/usr/share/udhcpc/%s.sh",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_1a8,"/usr/share/udhcpc/%s.deconfig",param_1);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_144,"/etc/udhcpc/udhcpc-%s.pid",param_1);
  (*(code *)PTR_killDaemonByPidFile_0042b128)(auStack_144);
  pcVar2 = (char *)0x0;
  (*(code *)PTR_Create_script_0042b168)(auStack_1a8,param_1,1,0,0,0);
  (*(code *)PTR_memset_0042b114)(local_270,0,100);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc5,local_270);
  if (local_270[0] == '\0') {
    pcVar1 = "udhcpc -i %s -p %s -s %s -a 30 &";
  }
  else {
    pcVar1 = "udhcpc -i %s -p %s -s %s -h %s -a 30 &";
    pcVar2 = local_270;
  }
  (*(code *)PTR_sprintf_0042b0e8)(auStack_e0,pcVar1,param_1,auStack_144,auStack_20c,pcVar2);
  (*(code *)PTR_system_0042b1ac)(auStack_e0);
  return;
}


/* FUN_00410a74 @ 00410a74 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00410a74(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int local_58 [10];
  int *local_30;
  
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x8e,local_58);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"miniigd","");
  if (local_58[0] == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,&DAT_00418044,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"239.255.255.250","netmask","255.255.255.255",
               param_4,"");
    local_30 = local_58 + 1;
    (*(code *)PTR_sprintf_0042b0e8)(local_30,&DAT_00417aa4,param_1);
    piVar1 = local_58 + 5;
    (*(code *)PTR_sprintf_0042b0e8)(piVar1,&DAT_00417aa0,param_3);
    if (param_2 == 2) {
      (*(code *)PTR_getWispRptIfaceName_0042b1e8)(piVar1,param_3);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419174,local_30,&DAT_00419178,param_4,&DAT_00418b48,piVar1,"");
    }
    else {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"miniigd",&DAT_00419174,local_30,&DAT_00419178,param_4,"");
    }
  }
  return;
}


/* FUN_00410cbc @ 00410cbc */

void FUN_00410cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_298;
  int local_294;
  undefined4 local_290;
  int local_28c;
  int local_288;
  undefined4 local_284;
  uint local_280 [8];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  uint local_1a0 [16];
  undefined1 auStack_160 [100];
  undefined1 auStack_fc [100];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  uint *local_30;
  uint local_2c;
  
  local_298 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_160,0,100);
  (*(code *)PTR_memset_0042b114)(local_1a0,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_260,0,0x20);
  local_294 = 0;
  local_290 = 0;
  local_28c = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x1f5,&local_28c);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14d,local_1a0);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_200,uVar2);
  uVar1 = local_1a0[0];
  if (local_28c == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x153,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_1e0,uVar2);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14b,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_240,uVar2);
    local_30 = (uint *)local_1a0[0];
    (*(code *)PTR_apmib_get_0042b1a0)(0x14c,local_1a0);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_1a0[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_220,uVar2);
    local_2c = local_1a0[0];
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_240,"netmask",auStack_220,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,"default",&DAT_00417f38,"0.0.0.0","");
    if ((((uint)local_30 ^ uVar1) & local_2c) != 0) {
      local_1a0[0] = local_2c & uVar1;
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)();
      (*(code *)PTR_strcpy_0042b208)(auStack_1c0,uVar2);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,auStack_1c0,"netmask",auStack_220,
                 &DAT_00417f38,auStack_1e0,"");
    }
  }
  local_288 = 0;
  local_284 = 0;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_280[3] = 0;
  local_280[4] = 0;
  local_280[5] = 0;
  local_280[6] = 0;
  local_280[7] = 0;
  (*(code *)PTR_memset_0042b114)(&local_98,0,100);
  (*(code *)PTR_apmib_get_0042b1a0)(0x3af,&local_288);
  if (0 < local_288) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x3b0,&local_284);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14b,local_280);
    (*(code *)PTR_apmib_get_0042b1a0)(0x14d,local_280 + 4);
    (*(code *)PTR_apmib_get_0042b1a0)(0x3ae,&local_98);
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_fc,
               "flash clearl2tp %d %d %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x"
               ,local_284,local_288,local_280[0] >> 0x18,local_280[0] >> 0x10 & 0xff,
               local_280[0] >> 8 & 0xff,local_280[0] & 0xff,local_280[4] >> 0x18,
               local_280[4] >> 0x10 & 0xff,local_280[4] >> 8 & 0xff,local_280[4] & 0xff,local_98,
               local_97,local_96,local_95,local_94,local_93,local_92,local_91,local_90,local_8f,
               local_8e,local_8d,local_8c,local_8b,local_8a,local_89,local_88,local_87,local_86,
               local_85,local_84,local_83,local_82,local_81,local_80,local_7f,local_7e,local_7d,
               local_7c,local_7b,local_7a,local_79,local_78,local_77,local_76,local_75,local_74,
               local_73);
    (*(code *)PTR_system_0042b1ac)(auStack_fc);
  }
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_1a0);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14f,auStack_260);
  local_2c = (*(code *)PTR_strlen_0042b0bc)(auStack_260);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"user \"%s\"\n",local_1a0);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_160,"%s\n","#################################################");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/pap-secrets",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"\"%s\"\t*\t\"%s\"\n",local_1a0,auStack_260);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/pap-secrets",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)
            (auStack_160,"%s\n","#################################################");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/chap-secrets",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"\"%s\"\t*\t\"%s\"\n",local_1a0,auStack_260);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/chap-secrets",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_004192e4);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noauth");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","defaultroute");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","usepeerdns");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","lcp-echo-interval 0");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","wantype 6");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_apmib_get_0042b1a0)(0x150,&local_298);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"mtu %d\n",local_298);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_1a0);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"name %s\n",local_1a0);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nodeflate");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nobsdcomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nodetach");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_00419368);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","default-asyncmap");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","nopcomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noaccomp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","noccp");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n",&DAT_00419368);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","refuse-eap");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  if (0x23 < (int)local_2c) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","-mschap");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","-mschap-v2");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  }
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","[global]");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",1,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","port = 1701");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"auth file = %s\n","/etc/ppp/chap-secrets");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","[lac client]");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"lns=%s\n",auStack_200);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","require chap = yes");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  local_30 = local_1a0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x14e,local_30);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"name = %s\n",local_30);
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","pppoptfile = /etc/ppp/options");
  (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/l2tpd.conf",2,auStack_160);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","l2tpd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","ppp_inet","");
  (*(code *)PTR_sleep_0042b1a4)(1);
  (*(code *)PTR_system_0042b1ac)("l2tpd&");
  (*(code *)PTR_sleep_0042b1a4)(3);
  (*(code *)PTR_apmib_get_0042b1a0)(0x151,&local_294);
  if (local_294 == 1) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,"default",&DAT_00417f38,"10.112.112.112",param_2,"");
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","connect /etc/ppp/true");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"%s\n","demand");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
    (*(code *)PTR_apmib_get_0042b1a0)(0x152,&local_290);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_160,"idle %d\n",local_290);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_160);
  }
  else if (((local_294 == 2) && (param_5 == 1)) &&
          (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now"), iVar3 == 0))
  {
    return;
  }
  iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
  if (iVar3 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp");
  }
  local_30 = local_1a0;
  (*(code *)PTR_strcpy_0042b208)(local_30,"6");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_260,&DAT_00417aa4,local_294);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ppp_inet",&DAT_00418060,local_30,&DAT_00418b44,auStack_260,&DAT_004190e8,"");
  FUN_00410a74(6,param_1,param_4,param_3);
  return;
}


/* FUN_00411d44 @ 00411d44 */

void FUN_00411d44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined1 auStack_194 [32];
  undefined1 auStack_174 [32];
  undefined1 auStack_154 [32];
  undefined1 auStack_134 [32];
  undefined1 auStack_114 [32];
  undefined1 auStack_f4 [32];
  uint local_d4 [16];
  undefined1 auStack_94 [100];
  uint local_30;
  uint local_2c;
  
  local_1a8 = 0;
  local_1a4 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_94,0,100);
  (*(code *)PTR_memset_0042b114)(local_d4,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_194,0,0x20);
  local_1a0 = 0;
  local_19c = 0;
  local_198 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x155,&local_198);
  (*(code *)PTR_apmib_get_0042b1a0)(0x93,local_d4);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_134,uVar2);
  uVar1 = local_d4[0];
  if (local_198 == 1) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x154,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_114,uVar2);
    (*(code *)PTR_apmib_get_0042b1a0)(0x91,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_174,uVar2);
    local_2c = local_d4[0];
    (*(code *)PTR_apmib_get_0042b1a0)(0x92,local_d4);
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_d4[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_154,uVar2);
    local_30 = local_d4[0];
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_174,"netmask",auStack_154,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_0041803c,"default",&DAT_00417f38,"0.0.0.0","");
    if (((local_2c ^ uVar1) & local_30) != 0) {
      local_d4[0] = local_30 & uVar1;
      uVar2 = (*(code *)PTR_inet_ntoa_0042b108)();
      (*(code *)PTR_strcpy_0042b208)(auStack_f4,uVar2);
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,auStack_f4,"netmask",auStack_154,
                 &DAT_00417f38,auStack_114,"");
    }
  }
  iVar3 = (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"flash",&DAT_004194b8,"/etc/ppp/options","/etc/ppp/pap-secrets",
                     "/etc/ppp/chap-secrets","");
  if (iVar3 == 0) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_004192e4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nopcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noaccomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nobsdcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodeflate");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","usepeerdns");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-interval 20");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-failure 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","wantype 4");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x96,&local_1a8);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mtu %d\n",local_1a8);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","holdoff 2");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","refuse-eap");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","remotename PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",1,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","linkname PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipparam PPTP");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(local_d4,"pty \"pptp %s --nolaunchpppd\"",auStack_134);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",local_d4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x94,local_d4);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"name %s\n",local_d4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x9c,&local_1a8);
    if (local_1a8 == 1) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","+mppe required,stateless");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    }
    (*(code *)PTR_apmib_get_0042b1a0)(0x9f,&local_1a4);
    if (local_1a4 == 1) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_0041958c);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
      pcVar4 = "stateless";
    }
    else {
      pcVar4 = "nomppc";
    }
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",pcVar4);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    if ((local_1a8 == 0) && (local_1a4 == 0)) {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noccp");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    }
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","file /etc/ppp/options");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nobsdcomp");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n",&DAT_00419368);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/peers/rpptp",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_1a0);
    if (local_1a0 == 1) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,"default",&DAT_00417f38,"10.112.112.112",param_2,"");
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","connect /etc/ppp/true");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","demand");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_apmib_get_0042b1a0)(0x1fe,&local_19c);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"idle %d\n",local_19c);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ktune");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-remote");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-local");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noipdefault");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","hide-password");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","defaultroute");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    }
    else if (((local_1a0 == 2) && (param_5 == 1)) &&
            (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp/manual_connect_now"), iVar3 == 0)
            ) {
      return;
    }
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/var/ppp");
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004194bc,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall","ppp_inet","");
    (*(code *)PTR_sleep_0042b1a4)(2);
    (*(code *)PTR_strcpy_0042b208)(local_d4,"4");
    (*(code *)PTR_sprintf_0042b0e8)(auStack_194,&DAT_00417aa4,local_1a0);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"ppp_inet",&DAT_00418060,local_d4,&DAT_00418b44,auStack_194,&DAT_004190e8,"");
  }
  FUN_00410a74(4,param_1,param_4,param_3);
  return;
}


/* FUN_00412c2c @ 00412c2c */

void FUN_00412c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  undefined4 local_100;
  int local_fc;
  undefined4 local_f8;
  undefined1 auStack_f4 [32];
  char local_d4 [64];
  undefined1 auStack_94 [100];
  char *local_30;
  
  local_100 = 0;
  (*(code *)PTR_memset_0042b114)(auStack_94,0,100);
  (*(code *)PTR_memset_0042b114)(local_d4,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_f4,0,0x20);
  local_fc = 0;
  local_f8 = 0;
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,"0.0.0.0","");
  iVar1 = (*(code *)PTR_RunSystemCmd_0042b0dc)
                    (0,"flash","gen-pppoe","/etc/ppp/options","/etc/ppp/pap-secrets",
                     "/etc/ppp/chap-secrets","");
  if (iVar1 == 0) {
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noauth");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nomppc");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","noipdefault");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","hide-password");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","defaultroute");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","persist");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-remote");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","ipcp-accept-local");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","nodetach");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","usepeerdns");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x90,&local_100);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mtu %d\n",local_100);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"mru %d\n",local_100);
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-interval 20");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","lcp-echo-failure 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","wantype 3");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","holdoff 10");
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x105,local_d4);
    if (local_d4[0] == '\0') {
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"plugin /etc/ppp/plubins/libplugin.a %s\n",param_2)
      ;
    }
    else {
      (*(code *)PTR_sprintf_0042b0e8)
                (auStack_94,"plugin /etc/ppp/plubins/libplugin.a rp_pppoe_service %s %s\n",local_d4,
                 param_2);
    }
    (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    (*(code *)PTR_apmib_get_0042b1a0)(0x6d,&local_fc);
    if (local_fc == 1) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x6c,&local_f8);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"%s\n","demand");
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_94,"idle %d\n",local_f8);
      (*(code *)PTR_write_line_to_file_0042b1a8)("/etc/ppp/options",2,auStack_94);
    }
    else if ((local_fc == 2) && (param_5 == 1)) {
      return;
    }
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ppp");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ppp");
  }
  local_30 = local_d4;
  (*(code *)PTR_strcpy_0042b208)(local_30,"3");
  (*(code *)PTR_sprintf_0042b0e8)(auStack_f4,&DAT_00417aa4,local_fc);
  (*(code *)PTR_RunSystemCmd_0042b0dc)
            (0,"ppp_inet",&DAT_00418060,local_30,&DAT_00418b44,auStack_f4,&DAT_004190e8,"");
  FUN_00410a74(3,param_1,param_4,param_3);
  return;
}


/* FUN_00413328 @ 00413328 */

void FUN_00413328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_30;
  undefined1 auStack_2c [20];
  
  local_30 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x9e,&local_30);
  (*(code *)PTR_sprintf_0042b0e8)(auStack_2c,&DAT_00417aa4,local_30);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,&DAT_0041810c,auStack_2c,"");
  FUN_00410904(param_2);
  FUN_00410a74(1,param_1,param_4,param_3);
  return;
}


/* FUN_00413404 @ 00413404 */

void FUN_00413404(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 local_198 [8];
  undefined4 local_178 [8];
  undefined4 local_158 [8];
  undefined1 auStack_138 [32];
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  char *local_d4;
  undefined *local_d0;
  undefined1 *local_cc;
  undefined *local_c8;
  undefined1 *local_c4;
  undefined *local_c0;
  undefined1 *local_bc;
  undefined4 local_b8;
  undefined1 auStack_98 [104];
  undefined4 local_30;
  
  (*(code *)PTR_memset_0042b114)(local_198,0,0x20);
  (*(code *)PTR_memset_0042b114)(local_178,0,0x20);
  (*(code *)PTR_memset_0042b114)(local_158,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_98,0,100);
  (*(code *)PTR_memset_0042b114)(auStack_138,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_118,0,0x20);
  (*(code *)PTR_memset_0042b114)(auStack_f8,0,0x20);
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_004196a4,"");
  (*(code *)PTR_apmib_get_0042b1a0)(0xb0,local_198);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb1,local_178);
  (*(code *)PTR_apmib_get_0042b1a0)(0xb2,local_158);
  iVar1 = (*(code *)PTR_memcmp_0042b138)(local_198,&DAT_00419c30,4);
  iVar2 = (*(code *)PTR_memcmp_0042b138)(local_178,&DAT_00419c30,4);
  iVar3 = (*(code *)PTR_memcmp_0042b138)(local_158,&DAT_00419c30,4);
  cVar4 = (iVar1 != 0) + (iVar2 != 0) + (iVar3 != 0);
  local_d4 = "--cache=off";
  local_d8 = &DAT_004196a4;
  local_cc = auStack_138;
  if (cVar4 == '\x01') {
    local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
    (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
    local_d0 = &DAT_00417e28;
    (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
    local_c8 = (undefined *)0x0;
  }
  else {
    local_c4 = auStack_118;
    if (cVar4 == '\x02') {
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_d0 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_178[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_118,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c8 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_c0 = (undefined *)0x0;
    }
    else {
      if (cVar4 != '\x03') {
        (*(code *)PTR_puts_0042b1b8)("Invalid DNS server setting");
        return;
      }
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_198[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_138,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_d0 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",1,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_178[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_118,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c8 = &DAT_00417e28;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_30 = (*(code *)PTR_inet_ntoa_0042b108)(local_158[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_f8,local_30);
      (*(code *)PTR_sprintf_0042b0e8)(auStack_98,"nameserver %s\n",local_30);
      local_c0 = &DAT_00417e28;
      local_bc = auStack_f8;
      (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",2,auStack_98);
      local_b8 = 0;
    }
  }
  (*(code *)PTR_DoCmd_0042b0d4)(&local_d8,0);
  return;
}


/* FUN_00413934 @ 00413934 */

void FUN_00413934(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_160;
  int local_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  char local_108 [32];
  undefined4 local_e8 [50];
  
  local_160 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_15c);
  if (local_15c == 4) {
    uVar2 = 0x91;
  }
  else {
    uVar2 = 0x14b;
    if (local_15c != 6) {
      uVar2 = 0x65;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_148,uVar2);
  if (local_15c == 4) {
    uVar2 = 0x92;
  }
  else {
    uVar2 = 0x14c;
    if (local_15c != 6) {
      uVar2 = 0x66;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
  (*(code *)PTR_strcpy_0042b208)(auStack_128,uVar2);
  if (local_15c == 4) {
    uVar2 = 0x154;
  }
  else {
    uVar2 = 0x153;
    if (local_15c != 6) {
      uVar2 = 0x67;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,local_e8);
  iVar1 = (*(code *)PTR_memcmp_0042b138)(local_e8,&DAT_00419c30,4);
  if (iVar1 == 0) {
    (*(code *)PTR_memset_0042b114)(local_108,0,0x20);
  }
  else {
    uVar2 = (*(code *)PTR_inet_ntoa_0042b108)(local_e8[0]);
    (*(code *)PTR_strcpy_0042b208)(local_108,uVar2);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,auStack_148,"netmask",auStack_128,"");
  if (local_108[0] != '\0') {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",param_2,"");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,local_108,&DAT_0041804c
               ,param_2,"");
  }
  if ((local_15c != 4) && (local_15c != 6)) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x9d,&local_160);
    (*(code *)PTR_sprintf_0042b0e8)(auStack_158,&DAT_00417aa4,local_160);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_2,&DAT_0041810c,auStack_158,"");
  }
  FUN_00413404();
  if ((local_15c != 4) && (local_15c != 6)) {
    FUN_00410a74(0,param_1,param_4,param_3);
    (*(code *)PTR_setFirewallIptablesRules_0042b0c0)(0,0);
    FUN_00410798();
    FUN_00410624();
    FUN_004104f0(param_2,param_3);
    (*(code *)PTR_snprintf_0042b1e4)
              (local_e8,0x80,"%s/%s %s",&DAT_004196e0,"firewall.sh","Send_GARP");
    (*(code *)PTR_system_0042b1ac)(local_e8);
  }
  return;
}


/* wan_disconnect @ 00413d38 */

void wan_disconnect(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  int local_28;
  int local_24;
  int local_20 [3];
  
  local_28 = 0;
  local_24 = 0;
  local_20[0] = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,&local_24);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/system/last_wan");
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_fopen_0042b118)("/var/system/last_wan",&DAT_004187f4);
    if (iVar1 == 0) {
      (*(code *)PTR_puts_0042b1b8)("can not /var/system/last_wan");
      return;
    }
    (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_00417aa4,local_20);
    (*(code *)PTR_fclose_0042b10c)(iVar1);
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/var/disc",&DAT_00417b58,"enter","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"routed","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ntp_inet","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/ntp_run");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/ntp_run");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417b7c,"ddns_inet","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"updatedd","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ntpclient","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_004196a4,"");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"igmpproxy","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/igmp_pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/igmp_pid");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/br_mCastFastFwd",&DAT_00417b58,&DAT_00417cc0,"");
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"all");
  if (iVar1 == 0) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"ppp_inet","");
  }
  if (local_20[0] == 3) {
    puVar2 = &DAT_00417b7c;
  }
  else {
    puVar2 = &DAT_00417a78;
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",puVar2,&DAT_0041974c,"");
  if (local_24 == 6) {
    (*(code *)PTR_system_0042b1ac)("echo 0 >/proc/fast_l2tp");
    (*(code *)PTR_system_0042b1ac)("echo 1 >/proc/fast_l2tp");
  }
  (*(code *)PTR_sleep_0042b1a4)(3);
  if ((local_24 != 6) && (local_20[0] == 6)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"l2tpd","");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,&DAT_004194bc,"");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_00417a78,"pppoe","");
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/ppp0.pid");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/run/ppp0.pid");
  }
  if ((((local_24 == 6) && (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option"), iVar1 == 0))
      && (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link"), iVar1 != 0)) &&
     (((*(code *)PTR_apmib_get_0042b1a0)(0x151,&local_28), local_28 == 1 &&
      (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/disc_l2tp"), iVar1 != 0)))) {
    (*(code *)PTR_system_0042b1ac)("echo\"d client\" > /var/run/l2tp-control &");
    (*(code *)PTR_system_0042b1ac)("echo \"l2tpdisc\" > /var/disc_l2tp");
  }
  if (local_24 == 4) {
    (*(code *)PTR_system_0042b1ac)("echo 1 > /proc/fast_pptp");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/firstddns");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/var/firstddns");
  }
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option");
  if ((iVar1 == 0) && (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link"), iVar1 != 0)) {
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/first","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstpptp","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstl2tp","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/ppp/firstdemand","");
  }
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/link");
  if (iVar1 != 0) {
    (*(code *)PTR_unlink_0042b148)("/etc/ppp/link");
  }
  if (((local_24 != 3) || (iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,"option"), iVar1 != 0)) &&
     (iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/connectfile"), iVar1 != 0)) {
    (*(code *)PTR_unlink_0042b148)("/etc/ppp/connectfile");
  }
  if (local_24 == 4) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,&local_28);
    if (local_28 == 1) {
      pcVar3 = "3";
    }
    else {
      pcVar3 = "0";
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/pptp_conn_ck",&DAT_00417b58,pcVar3,"");
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/var/disc","");
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/var/disc_l2tp","");
  return;
}


/* FUN_00414574 @ 00414574 */

void FUN_00414574(undefined4 param_1,undefined4 param_2)

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
  iVar1 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
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
    pcVar2 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(acStack_110,&DAT_00417b24,&local_274);
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
LAB_00414950:
          (*(code *)PTR_strcpy_0042b208)(pcVar7,pcVar2);
        }
        else {
          if (iVar1 == 4) {
            pcVar7 = local_38;
            pcVar2 = pcVar2 + 2;
            goto LAB_00414950;
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
                  if (iVar3 == 0) goto LAB_00414960;
                }
                pcVar2 = pcVar7;
              } while (pcVar7 != acStack_110);
              iVar3 = 0;
              if (((local_1b0[0] == '\0') || (iVar3 = 1, local_190 == '\0')) ||
                 ((iVar3 = 2, local_170 == '\0' ||
                  ((iVar3 = 3, local_150 == '\0' || (iVar3 = 4, local_130 == '\0')))))) {
                pcVar7 = local_1b0 + iVar3 * 0x20;
                pcVar2 = local_48;
                goto LAB_00414950;
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
                if (iVar3 == 0) goto LAB_00414960;
              }
              pcVar7 = pcVar5;
            } while (pcVar5 != acStack_110);
            iVar3 = 0;
            if ((((local_1b0[0] == '\0') || (iVar3 = 1, local_190 == '\0')) ||
                (iVar3 = 2, local_170 == '\0')) ||
               ((iVar3 = 3, local_150 == '\0' || (iVar3 = 4, local_130 == '\0')))) {
              pcVar7 = local_1b0 + iVar3 * 0x20;
              goto LAB_00414950;
            }
          }
        }
LAB_00414960:
        pcVar2 = (char *)(*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,local_34);
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
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",&DAT_0041804c,param_1,"")
    ;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,auStack_230,
               &DAT_0041804c,param_1,"");
    (*(code *)PTR_system_0042b1ac)("killall -9 haier_ota 2> /dev/null");
    (*(code *)PTR_sleep_0042b1a4)(1);
  }
  return;
}


/* FUN_00414b38 @ 00414b38 */

undefined4 FUN_00414b38(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  iVar3 = 0;
  do {
    iVar3 = iVar3 + 1;
    iVar1 = (*(code *)PTR_gethostbyname_0042b0f0)(param_1);
    if (iVar1 != 0) {
      uVar2 = (*(code *)PTR_inet_ntop_0042b0c8)
                        (*(undefined4 *)(iVar1 + 8),**(undefined4 **)(iVar1 + 0x10),auStack_38,0x20)
      ;
      (*(code *)PTR_strcpy_0042b208)(auStack_58,uVar2);
      (*(code *)PTR_inet_aton_0042b120)(auStack_58,param_2);
      return 0;
    }
    (*(code *)PTR_printf_0042b1f0)(" gethostbyname error for host:%s try again!\n",param_1);
  } while (iVar3 != 4);
  return 0xffffffff;
}


/* FUN_00414c28 @ 00414c28 */

void FUN_00414c28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [4];
  int local_34;
  undefined1 auStack_30 [32];
  
  local_34 = 0;
  if (param_1 == 4) {
    uVar2 = 0x157;
  }
  else {
    uVar2 = 499;
    if (param_1 != 6) {
      return;
    }
  }
  (*(code *)PTR_apmib_get_0042b1a0)(uVar2,&local_34);
  if (local_34 == 0) {
    return;
  }
  if (param_1 == 4) {
    uVar2 = 0x156;
LAB_00414cbc:
    (*(code *)PTR_apmib_get_0042b1a0)(uVar2,auStack_30);
  }
  else if (param_1 == 6) {
    uVar2 = 500;
    goto LAB_00414cbc;
  }
  iVar1 = FUN_00414b38(auStack_30,auStack_38);
  if (iVar1 != 0) {
    (*(code *)PTR_printf_0042b1f0)("can\'t get ServerDomain:%s \'s IP",auStack_30);
    return;
  }
  if (param_1 == 4) {
    uVar2 = 0x93;
  }
  else {
    uVar2 = 0x14d;
    if (param_1 != 6) goto LAB_00414d1c;
  }
  (*(code *)PTR_apmib_set_0042b184)(uVar2,auStack_38);
LAB_00414d1c:
  (*(code *)PTR_apmib_update_0042b188)(4);
  return;
}


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


/* FUN_004150f0 @ 004150f0 */

undefined4 FUN_004150f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  int local_140;
  uint local_13c [16];
  undefined1 auStack_fc [64];
  undefined1 auStack_bc [64];
  undefined1 auStack_7c [104];
  
  (*(code *)PTR_memset_0042b114)(auStack_7c,0,100);
  (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_fc,0,0x40);
  (*(code *)PTR_memset_0042b114)(auStack_bc,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_140);
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/udhcpd.pid");
  if ((iVar1 == 0) || (local_140 == 2)) {
    iVar1 = (*(code *)PTR_inet_aton_0042b120)(param_1,&local_15c);
    if (iVar1 == 0) {
      uVar5 = 0xba;
    }
    else {
      iVar1 = (*(code *)PTR_inet_aton_0042b120)(param_2,&local_158);
      if (iVar1 != 0) {
        local_14c = local_158;
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_154);
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,4,&local_150);
        local_144 = local_150;
        puVar2 = &local_144;
        if (local_14c < local_150) {
          puVar2 = &local_14c;
        }
        uVar3 = *puVar2;
        uVar4 = 0;
        if ((uVar3 & (local_154 ^ local_15c)) != 0) {
          return 0;
        }
        uVar6 = 1;
        do {
          if ((uVar6 & uVar3) != 0) break;
          uVar4 = uVar4 + 1;
          uVar6 = 1 << (uVar4 & 0x1f);
        } while (uVar4 != 0x20);
        uVar4 = 1 << (uVar4 & 0x1f);
        if ((uVar4 & local_154) != 0) {
          uVar4 = -uVar4;
        }
        local_154 = uVar4 + local_154;
        uVar4 = 0;
        do {
          if ((1 << (uVar4 & 0x1f) & uVar3) != 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 0x20);
        local_148 = local_154;
        (*(code *)PTR_system_0042b1ac)("killall -9 udhcpd 2> /dev/null");
        (*(code *)PTR_system_0042b1ac)("rm -f /var/run/udhcpd.pid 2> /dev/null");
        (*(code *)PTR_system_0042b1ac)("rm -f /var/udhcpd.conf");
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"interface %s\n",&DAT_00417ad0);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",1,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0xae,local_13c);
        uVar3 = 1 << (uVar4 & 0x1f);
        local_13c[0] = local_13c[0] ^ uVar3;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_13c[0]);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"start %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0xaf,local_13c);
        local_13c[0] = local_13c[0] ^ uVar3;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_13c[0]);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"end %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_150);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt subnet %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_apmib_get_0042b1a0)(0x3b1,&local_160);
        if (0x275f < local_160 - 1U) {
          local_160 = 0x1e0;
          iVar1 = (*(code *)PTR_apmib_set_0042b184)(0x3b1,&local_160);
          if (iVar1 == 0) {
            (*(code *)PTR_puts_0042b1b8)("set MIB_DHCP_LEASE_TIME error");
          }
          (*(code *)PTR_apmib_update_0042b188)(4);
        }
        local_160 = local_160 * 0x3c;
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt lease %ld\n",local_160);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_154);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt router %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_154);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt dns %s\n",uVar5);
        (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        (*(code *)PTR_apmib_get_0042b1a0)(0xc6,local_13c);
        if (local_13c[0]._0_1_ != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"opt domain %s\n",local_13c);
          (*(code *)PTR_write_line_to_file_0042b1a8)("/var/udhcpd.conf",2,auStack_7c);
        }
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        local_13c[0] = local_148;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_148);
        (*(code *)PTR_strcpy_0042b208)(auStack_fc,uVar5);
        (*(code *)PTR_memset_0042b114)(local_13c,0,0x40);
        local_13c[0] = local_144;
        uVar5 = (*(code *)PTR_inet_ntoa_0042b108)(local_144);
        (*(code *)PTR_strcpy_0042b208)(auStack_bc,uVar5);
        (*(code *)PTR_memset_0042b114)(auStack_7c,0,100);
        (*(code *)PTR_sprintf_0042b0e8)
                  (auStack_7c,"ifconfig br0 %s netmask %s",auStack_fc,auStack_bc);
        (*(code *)PTR_system_0042b1ac)(auStack_7c);
        (*(code *)PTR_sprintf_0042b0e8)(auStack_7c,"udhcpd %s","/var/udhcpd.conf");
        (*(code *)PTR_system_0042b1ac)(auStack_7c);
        return 1;
      }
      uVar5 = 0xbf;
    }
    (*(code *)PTR_printf_0042b1f0)("\r\n Invalid IP-address value!__[%s-%u]\r\n","set_wan.c",uVar5);
  }
  return 0;
}


/* FUN_00415828 @ 00415828 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00415828(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  char *pcVar9;
  int local_4d0;
  int local_4cc;
  int local_4c8 [3];
  undefined4 local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  undefined4 local_4a8;
  uint local_4a4;
  undefined1 auStack_4a0 [4];
  int local_49c [5];
  char local_488 [32];
  char acStack_468 [32];
  char acStack_448 [32];
  char acStack_428 [32];
  undefined1 auStack_408 [32];
  undefined1 auStack_3e8 [32];
  undefined1 auStack_3c8 [32];
  undefined1 auStack_3a8 [32];
  undefined1 auStack_388 [32];
  char *local_368 [16];
  uint local_328 [16];
  undefined1 auStack_2e8 [100];
  undefined1 auStack_284 [100];
  undefined1 auStack_220 [128];
  char local_1a0 [160];
  char acStack_100 [200];
  undefined4 *local_38;
  int local_34;
  char *local_30;
  
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8[0] = 0;
  local_4c8[1] = 0;
  (*(code *)PTR_memset_0042b114)(acStack_468,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_448,0,0x20);
  (*(code *)PTR_memset_0042b114)(acStack_428,0,0x20);
  local_49c[1] = 0;
  local_49c[2] = 0;
  local_49c[3] = 0;
  local_49c[4] = 0;
  local_4b8 = 0;
  (*(code *)PTR_memset_0042b114)(local_488,0,0x1f);
  (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
  (*(code *)PTR_memset_0042b114)(auStack_3c8,0,0x20);
  local_4b4 = 0;
  local_4b0 = 0;
  local_4ac = 0;
  local_4a8 = 0;
  (*(code *)PTR_memset_0042b114)(local_328,0,0x40);
  (*(code *)PTR_apmib_get_0042b1a0)(0x68,local_4c8);
  (*(code *)PTR_apmib_get_0042b1a0)(0x69,&local_4cc);
  (*(code *)PTR_apmib_get_0042b1a0)(0xad,&local_4b4);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_4b0);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc0,&local_4ac);
  (*(code *)PTR_apmib_get_0042b1a0)(0xc1,&local_4a8);
  if ((local_4b4 == 1) &&
     (iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0), iVar3 != 0)) {
    return;
  }
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00418cf8);
  if (iVar3 != 0) {
    pcVar7 = local_1a0;
    do {
      pcVar9 = pcVar7 + 0x20;
      (*(code *)PTR_memset_0042b114)(pcVar7,0,0x20);
      pcVar7 = pcVar9;
    } while (pcVar9 != acStack_100);
    local_4b8 = 0;
    (*(code *)PTR_strcpy_0042b208)(acStack_100,param_2);
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(acStack_100,&DAT_00417b24,&local_4b8);
    if (iVar3 != 0) {
      local_38 = &local_4b8;
      iVar5 = 1;
      do {
        pcVar7 = acStack_468;
        if (((iVar5 == 2) || (pcVar7 = acStack_448, iVar5 == 3)) ||
           (pcVar7 = acStack_428, iVar5 == 4)) {
LAB_00416450:
          (*(code *)PTR_strcpy_0042b208)(pcVar7,iVar3);
        }
        else {
          pcVar7 = local_1a0;
          if (4 < iVar5) {
            do {
              pcVar9 = pcVar7 + 0x20;
              if ((*pcVar7 != '\0') &&
                 (local_34 = iVar3, local_30 = pcVar7 + 0x20,
                 iVar6 = (*(code *)PTR_strcmp_0042b0fc)(pcVar7,iVar3), iVar3 = local_34,
                 pcVar9 = local_30, iVar6 == 0)) goto LAB_00416460;
              pcVar7 = pcVar9;
            } while (pcVar9 != acStack_100);
            iVar6 = 0;
            if (((local_1a0[0] == '\0') || (iVar6 = 1, local_1a0[0x20] == '\0')) ||
               ((iVar6 = 2, local_1a0[0x40] == '\0' ||
                ((iVar6 = 3, local_1a0[0x60] == '\0' || (iVar6 = 4, local_1a0[0x80] == '\0')))))) {
              pcVar7 = local_1a0 + iVar6 * 0x20;
              goto LAB_00416450;
            }
          }
        }
LAB_00416460:
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,local_38);
        if (iVar3 == 0) break;
        iVar5 = iVar5 + 1;
      } while( true );
    }
    iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = FUN_004150f0(acStack_468,acStack_448);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",param_1,acStack_468,"netmask",acStack_448,"");
    if ((local_4c8[0] != 4) && (local_4c8[0] != 6)) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
                 &DAT_0041804c,param_1,"");
      if (local_4cc == 1) {
        FUN_00413404();
      }
      else {
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004196a4,"");
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
        if (iVar3 != 0) {
          (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
        }
        pcVar7 = local_488;
        (*(code *)PTR_apmib_get_0042b1a0)(0xc6,pcVar7);
        (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_4bc);
        uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4bc);
        (*(code *)PTR_strcpy_0042b208)(auStack_3c8,uVar4);
        (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/hosts","");
        (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
        if (local_488[0] == '\0') {
          pcVar7 = "realtek";
        }
        (*(code *)PTR_sprintf_0042b0e8)
                  (auStack_2e8,"%s\\%s%s%s%s",auStack_3c8,pcVar7,"AP.com|",pcVar7,"AP.net");
        (*(code *)PTR_RunSystemCmd_0042b0dc)("/etc/hosts",&DAT_00417b58,auStack_2e8,"");
        local_368[0] = "dnrd";
        local_368[1] = "--cache=off";
        pcVar7 = local_1a0;
        iVar6 = 0;
        iVar3 = 2;
        do {
          if (*pcVar7 != '\0') {
            local_368[iVar3] = "-s";
            local_368[iVar3 + 1] = pcVar7;
            (*(code *)PTR_sprintf_0042b0e8)(auStack_220,"nameserver %s\n",pcVar7);
            uVar4 = 1;
            iVar3 = iVar3 + 2;
            if (iVar6 != 0) {
              uVar4 = 2;
            }
            (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",uVar4,auStack_220);
          }
          iVar6 = iVar6 + 1;
          pcVar7 = pcVar7 + 0x20;
        } while (iVar6 != 5);
        local_368[iVar3] = (char *)0x0;
        iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
        if (iVar3 != 0) {
          (*(code *)PTR_DoCmd_0042b0d4)(local_368,0);
        }
      }
      iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
      if (iVar3 == 0) {
        (*(code *)PTR_memset_0042b114)(auStack_284,0,100);
        iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/restart_iapp");
        if (iVar3 != 0) {
          iVar3 = (*(code *)PTR_fopen_0042b118)("/var/restart_iapp",&DAT_004187f4);
          if (iVar3 == 0) {
            (*(code *)PTR_puts_0042b1b8)("can not open /var/restart_iapp");
            return;
          }
          (*(code *)PTR_fgets_0042b1d0)(auStack_284,100,iVar3);
          (*(code *)PTR_fclose_0042b10c)(iVar3);
          (*(code *)PTR_system_0042b1ac)(auStack_284);
        }
      }
      else {
        (*(code *)PTR_setFirewallIptablesRules_0042b0c0)(0,0);
      }
    }
    if ((local_4c8[0] != 4) && (local_4c8[0] != 6)) goto LAB_00416e38;
    pcVar7 = local_1a0;
    if (local_4cc == 1) {
      FUN_00413404();
    }
    else {
      iVar3 = 0;
      do {
        if (*pcVar7 != '\0') {
          (*(code *)PTR_sprintf_0042b0e8)(auStack_220,"nameserver %s\n",pcVar7);
          uVar4 = 1;
          if (iVar3 != 0) {
            uVar4 = 2;
          }
          (*(code *)PTR_write_line_to_file_0042b1a8)("/var/resolv.conf",uVar4,auStack_220);
        }
        iVar3 = iVar3 + 1;
        pcVar7 = pcVar7 + 0x20;
      } while (iVar3 != 5);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default",&DAT_0041804c,param_1,"")
    ;
    (*(code *)PTR_strcpy_0042b208)(PTR_tmp_default_gw_0042b0f8,acStack_428);
    (*(code *)PTR_strcpy_0042b208)(PTR_tmp_wan_if_0042b1ec,param_1);
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
               &DAT_0041804c,param_1,"");
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_check");
    if ((iVar3 == 0) ||
       (iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/tmp_wan_dhcp_info"), iVar3 == 0))
    goto LAB_00416da8;
    if (local_4c8[0] == 4) {
      local_49c[0] = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(0x157,local_49c);
      if (local_49c[0] != 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(0x156,auStack_284);
        iVar3 = FUN_00414b38(auStack_284,auStack_4a0);
        if (iVar3 != 0) {
          pcVar7 = "can\'t get pptpServerDomain:%s \'s IP";
LAB_00416c38:
          (*(code *)PTR_printf_0042b1f0)(pcVar7,auStack_284);
          return;
        }
        (*(code *)PTR_apmib_set_0042b184)(0x93,auStack_4a0);
        (*(code *)PTR_apmib_update_0042b188)(4);
      }
      uVar4 = 0x93;
LAB_00416c54:
      (*(code *)PTR_apmib_get_0042b1a0)(uVar4,local_328);
      uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_328[0]);
      (*(code *)PTR_strcpy_0042b208)(auStack_3a8,uVar4);
      uVar2 = local_328[0];
      (*(code *)PTR_inet_aton_0042b120)(acStack_468,&local_4a4);
      uVar1 = local_4a4;
      (*(code *)PTR_inet_aton_0042b120)(acStack_448,&local_4a4);
      (*(code *)PTR_inet_aton_0042b120)(acStack_428,&local_4a4);
      if (((uVar1 ^ uVar2) & local_4a4) != 0) {
        local_328[0] = local_4a4 & uVar2;
        uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_328[0]);
        (*(code *)PTR_strcpy_0042b208)(auStack_388,uVar4);
        (*(code *)PTR_RunSystemCmd_0042b0dc)
                  (0,"route",&DAT_00418040,&DAT_00418044,auStack_388,"netmask",acStack_448,
                   &DAT_00417f38,acStack_428,"");
      }
    }
    else if (local_4c8[0] == 6) {
      local_49c[0] = 0;
      (*(code *)PTR_apmib_get_0042b1a0)(499,local_49c);
      if (local_49c[0] != 0) {
        (*(code *)PTR_apmib_get_0042b1a0)(500,auStack_284);
        iVar3 = FUN_00414b38(auStack_284,auStack_4a0);
        if (iVar3 != 0) {
          pcVar7 = "can\'t get l2tpServerDomain:%s \'s IP";
          goto LAB_00416c38;
        }
        (*(code *)PTR_apmib_set_0042b184)(0x14d,auStack_4a0);
        (*(code *)PTR_apmib_update_0042b188)(4);
      }
      uVar4 = 0x14d;
      goto LAB_00416c54;
    }
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_check");
    (*(code *)PTR_unlink_0042b148)("/var/tmp_wan_dhcp_info");
LAB_00416da8:
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/etc/ppp/connectfile");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/etc/ppp/connectfile");
    }
    if (local_4c8[0] == 4) {
      FUN_00411d44(local_4ac,param_1,&DAT_00417ad0,local_4a8,1);
    }
    if (local_4c8[0] != 6) {
      return;
    }
    FUN_00410cbc(local_4ac,param_1,&DAT_00417ad0,local_4a8,1);
    return;
  }
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,2,local_4c8 + 2);
  uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
  (*(code *)PTR_strcpy_0042b208)(acStack_468,uVar4);
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,4,local_4c8 + 2);
  uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
  (*(code *)PTR_strcpy_0042b208)(acStack_448,uVar4);
  iVar5 = FUN_004150f0(acStack_468,acStack_448);
  if ((local_4c8[0] == 4) || (local_4c8[0] == 6)) {
    if (local_4ac == 0) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_0041803c,"default",&DAT_0041804c,&DAT_00417f3c,"");
    }
    if (local_4ac == 2) {
      (*(code *)PTR_RunSystemCmd_0042b0dc)
                (0,"route",&DAT_0041803c,"default",&DAT_0041804c,"wlan0","");
    }
  }
  if (local_4c8[0] == 4) {
    (*(code *)PTR_apmib_get_0042b1a0)(0x1fd,local_4c8 + 1);
    if (local_4d0 == 1) {
      puVar8 = &DAT_00417b60;
    }
    else {
      puVar8 = &DAT_00418d58;
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/pptp_conn_ck",&DAT_00417b58,puVar8,"");
  }
  if (((local_4c8[0] - 3U < 2) || (local_4c8[0] == 6)) &&
     (local_4d0 = (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00418cf8,0,local_4c8 + 2), local_4d0 == 1))
  {
    uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4c8[2]);
    (*(code *)PTR_strcpy_0042b208)(acStack_428,uVar4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"route",&DAT_0041803c,"default","");
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,"route",&DAT_00418040,&DAT_00418044,"default",&DAT_00417f38,acStack_428,
               &DAT_0041804c,&DAT_00418cf8,"");
  }
  if ((local_4c8[0] == 4) || (local_4c8[0] == 6)) {
    local_4b8 = 0;
    (*(code *)PTR_strcpy_0042b208)(acStack_100,param_2);
    iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(acStack_100,&DAT_00417b24,&local_4b8);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      do {
        iVar6 = (*(code *)PTR_strcmp_0042b0fc)(iVar3,&DAT_0041810c);
        iVar3 = (*(code *)PTR_strtok_r_0042b1f8)(0,&DAT_00417b24,&local_4b8);
        if (iVar3 == 0) goto LAB_00415ddc;
      } while (iVar6 != 0);
      iVar3 = (*(code *)PTR_atoi_0042b0c4)(iVar3);
    }
  }
  else {
LAB_00415ddc:
    iVar3 = 0;
  }
  if (local_4c8[0] == 4) {
    uVar4 = 0x96;
LAB_00415e0c:
    (*(code *)PTR_apmib_get_0042b1a0)(uVar4,&local_4d0);
    if ((0 < iVar3) && (iVar3 < local_4d0)) {
      local_4d0 = iVar3;
    }
LAB_00415e70:
    (*(code *)PTR_sprintf_0042b0e8)(local_49c + 1,&DAT_00417aa4,local_4d0);
  }
  else {
    if (local_4c8[0] == 6) {
      uVar4 = 0x150;
      goto LAB_00415e0c;
    }
    if (local_4c8[0] == 3) {
      (*(code *)PTR_apmib_get_0042b1a0)(0x90,&local_4d0);
      goto LAB_00415e70;
    }
  }
  (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"ifconfig",&DAT_00418cf8,"txqueuelen",&DAT_00419aa0,"");
  if (local_4cc == 1) {
    FUN_00413404();
  }
  else {
    iVar3 = (*(code *)PTR_fopen_0042b118)("/etc/ppp/resolv.conf",&DAT_004187f4);
    if (iVar3 == 0) {
      (*(code *)PTR_strcpy_0042b208)(local_1a0,"168.95.1.1");
    }
    else {
      pcVar7 = local_1a0;
      do {
        pcVar9 = pcVar7 + 0x20;
        (*(code *)PTR_memset_0042b114)(pcVar7,0,0x20);
        pcVar7 = pcVar9;
      } while (pcVar9 != acStack_100);
LAB_0041601c:
      iVar6 = (*(code *)PTR_fgets_0042b1d0)(auStack_220,0x80,iVar3);
      if (iVar6 != 0) {
        (*(code *)PTR_memset_0042b114)(auStack_3e8,0,0x20);
        (*(code *)PTR_sscanf_0042b130)(auStack_220,"%s %s",auStack_408,auStack_3e8);
        pcVar7 = local_1a0;
        do {
          pcVar9 = pcVar7 + 0x20;
          if ((*pcVar7 != '\0') &&
             (iVar6 = (*(code *)PTR_strcmp_0042b0fc)(pcVar7,auStack_3e8), iVar6 == 0))
          goto LAB_0041601c;
          pcVar7 = pcVar9;
        } while (pcVar9 != acStack_100);
        iVar6 = 0;
        if ((((local_1a0[0] == '\0') || (iVar6 = 1, local_1a0[0x20] == '\0')) ||
            (iVar6 = 2, local_1a0[0x40] == '\0')) ||
           ((iVar6 = 3, local_1a0[0x60] == '\0' || (iVar6 = 4, local_1a0[0x80] == '\0')))) {
          (*(code *)PTR_strcpy_0042b208)(local_1a0 + iVar6 * 0x20,auStack_3e8);
        }
        goto LAB_0041601c;
      }
      (*(code *)PTR_fclose_0042b10c)(iVar3);
    }
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,"killall",&DAT_004196a4,"");
    iVar3 = (*(code *)PTR_isFileExist_0042b0ac)("/var/run/dnrd.pid");
    if (iVar3 != 0) {
      (*(code *)PTR_unlink_0042b148)("/var/run/dnrd.pid");
    }
    pcVar7 = local_488;
    (*(code *)PTR_apmib_get_0042b1a0)(0xc6,pcVar7);
    (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417ad0,2,&local_4bc);
    uVar4 = (*(code *)PTR_inet_ntoa_0042b108)(local_4bc);
    (*(code *)PTR_strcpy_0042b208)(auStack_3c8,uVar4);
    (*(code *)PTR_RunSystemCmd_0042b0dc)(0,&DAT_00417bbc,&DAT_00417bc0,"/etc/hosts","");
    (*(code *)PTR_memset_0042b114)(auStack_2e8,0,100);
    if (local_488[0] == '\0') {
      pcVar7 = "realtek";
    }
    (*(code *)PTR_sprintf_0042b0e8)
              (auStack_2e8,"%s\\%s%s%s%s",auStack_3c8,pcVar7,"AP.com|",pcVar7,"AP.net");
    (*(code *)PTR_RunSystemCmd_0042b0dc)("/etc/hosts",&DAT_00417b58,auStack_2e8,"");
    local_368[0] = "dnrd";
    local_368[1] = "--cache=off";
    pcVar7 = local_1a0;
    iVar3 = 2;
    do {
      iVar6 = iVar3 + 1;
      if (*pcVar7 != '\0') {
        local_368[iVar3] = "-s";
        iVar3 = iVar3 + 2;
        local_368[iVar6] = pcVar7;
      }
      pcVar7 = pcVar7 + 0x20;
    } while (pcVar7 != acStack_100);
    local_368[iVar3] = (char *)0x0;
    (*(code *)PTR_RunSystemCmd_0042b0dc)
              (0,&DAT_00419af8,"/etc/ppp/resolv.conf","/var/resolv.conf","");
    (*(code *)PTR_DoCmd_0042b0d4)(local_368,0);
  }
LAB_00416e38:
  iVar3 = (*(code *)PTR_strcmp_0042b0fc)(param_1,&DAT_00417ad0);
  if (iVar3 != 0) {
    if (iVar5 == 1) {
      if (local_4b0 != 2) {
        (*(code *)PTR_system_0042b1ac)("ifconfig wlan0 down");
        (*(code *)PTR_apmib_get_0042b1a0)(0x517,&local_4d0);
        if (local_4d0 == 2) {
          (*(code *)PTR_system_0042b1ac)("ifconfig wlan1 down");
        }
      }
      (*(code *)PTR_system_0042b1ac)("ifconfig eth0 down");
      (*(code *)PTR_sleep_0042b1a4)(10);
      (*(code *)PTR_system_0042b1ac)("ifconfig eth0 up");
      if ((local_4b0 != 2) && ((*(code *)PTR_system_0042b1ac)("ifconfig wlan0 up"), local_4d0 == 2))
      {
        (*(code *)PTR_system_0042b1ac)("ifconfig wlan1 up");
      }
    }
    (*(code *)PTR_puts_0042b1b8)("WAN Connected");
    FUN_00410798();
    FUN_00410624();
    FUN_004104f0(param_1,&DAT_00417ad0);
  }
  return;
}


/* FUN_00416fa8 @ 00416fa8 */

uint FUN_00416fa8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [6];
  undefined1 auStack_5e [6];
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined2 local_50;
  undefined1 auStack_4e [6];
  undefined4 local_48;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined4 local_28;
  
  local_78 = 1;
  iVar1 = (*(code *)PTR_socket_0042b19c)(0x11,10,0x806);
  uVar3 = 0xffffffff;
  if (iVar1 != -1) {
    iVar2 = (*(code *)PTR_setsockopt_0042b164)(iVar1,0xffff,0x20,&local_78,4);
    if (iVar2 == -1) {
      uVar3 = 0xffffffff;
    }
    else {
      (*(code *)PTR_memset_0042b114)(auStack_64,0,0x3c);
      (*(code *)PTR_memcpy_0042b1c8)(auStack_64,&DAT_00419bec,6);
      (*(code *)PTR_memcpy_0042b1c8)(auStack_5e,param_1,6);
      local_58 = 0x806;
      local_54 = 0x800;
      local_51 = 4;
      local_50 = 1;
      local_56 = 1;
      local_52 = 6;
      local_48 = param_2;
      local_28 = param_2;
      (*(code *)PTR_memcpy_0042b1c8)(auStack_4e,param_1,6);
      local_3e = (undefined2)((uint)param_3 >> 0x10);
      local_3c = (undefined2)param_3;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_28 = param_3;
      (*(code *)PTR_strcpy_0042b208)((int)&local_74 + 2,&DAT_00417f3c);
      uVar3 = (*(code *)PTR_sendto_0042b140)(iVar1,auStack_64,0x3c,0,&local_74,0x10);
      uVar3 = ~uVar3 >> 0x1f;
    }
    (*(code *)PTR_close_0042b098)(iVar1);
  }
  return uVar3;
}


/* FUN_0041718c @ 0041718c */

void FUN_0041718c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_48;
  undefined1 auStack_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  (*(code *)PTR_getInAddr_0042b1c4)(&DAT_00417f3c,2,&local_48);
  uVar1 = (*(code *)PTR_inet_ntoa_0042b108)(local_48);
  (*(code *)PTR_strcpy_0042b208)(auStack_44,uVar1);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  (*(code *)PTR_apmib_get_0042b1a0)(0x17,&local_2c);
  iVar2 = (*(code *)PTR_memcmp_0042b138)(&local_2c,&DAT_00419c38,6);
  if (iVar2 == 0) {
    (*(code *)PTR_apmib_get_0042b1a0)(0xc9,&local_2c);
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_00416fa8(&local_2c,local_48,local_48);
    (*(code *)PTR_sleep_0042b1a4)(1);
  } while (iVar2 != 3);
  return;
}


/* checkWanStatus @ 004172b0 */

undefined4 checkWanStatus(void)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int local_14 [2];
  
  local_14[0] = -1;
  local_18 = -1;
  iVar1 = (*(code *)PTR_isFileExist_0042b0ac)("/proc/eth1/up_event");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0042b1f0)("%s: %s is not exist!!\n","checkWanStatus","/proc/eth1/up_event")
    ;
    uVar2 = 0xffffffff;
  }
  else {
    (*(code *)PTR_apmib_get_0042b1a0)(0x68,local_14);
    uVar2 = 0xffffffff;
    if (local_14[0] == 0) {
      iVar1 = (*(code *)PTR_fopen_0042b118)("/proc/eth1/up_event",&DAT_00419c20);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        (*(code *)PTR_fscanf_0042b1d4)(iVar1,&DAT_00417aa4,&local_18);
        if (local_18 == 1) {
          (*(code *)PTR_RunSystemCmd_0042b0dc)("/proc/eth1/up_event",&DAT_00417b58,&DAT_00418d58,"")
          ;
          FUN_0041718c();
        }
        (*(code *)PTR_fclose_0042b10c)(iVar1);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}


/* FUN_004173f0 @ 004173f0 */

void FUN_004173f0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined4 *)(PTR_DAT_0042b078 + -0x6000);
  while( true ) {
    pcVar2 = (code *)*puVar1;
    puVar1 = puVar1 + -1;
    if (pcVar2 == (code *)0xffffffff) break;
    (*pcVar2)();
  }
  return;
}


/* _fini @ 00417810 */

void _fini(void)

{
  FUN_00401240();
  return;
}


