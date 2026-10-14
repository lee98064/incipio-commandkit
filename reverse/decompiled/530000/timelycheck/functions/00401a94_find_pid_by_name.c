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
              iVar3 = (*(code *)PTR_strcmp_0042b0fc)(iVar5,&DAT_00417874);
            } while ((iVar3 == 0) ||
                    ((*(ushort *)(*(int *)PTR___ctype_b_0042b1dc + *(char *)(iVar1 + 0xb) * 2) & 8)
                     == 0));
            (*(code *)PTR_sprintf_0042b0e8)(auStack_c8,"/proc/%s/status",iVar5);
            iVar1 = (*(code *)PTR_fopen_0042b118)(auStack_c8,&DAT_00418704);
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

