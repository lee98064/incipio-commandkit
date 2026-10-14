/* FUN_00420d64 @ 00420d64 */

uint FUN_00420d64(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [52];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [56];
  
  iVar1 = (*(code *)PTR_opendir_0046a848)("/proc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_0046ac28)("Cannot open /proc");
    uVar2 = 0;
  }
  else {
    do {
      while( true ) {
        do {
          do {
            iVar4 = (*(code *)PTR_readdir_0046aac8)(iVar1);
            iVar5 = iVar4 + 0xb;
            if (iVar4 == 0) {
              iVar1 = (*(code *)PTR_strcmp_0046a824)(param_1,&DAT_00450940);
              return (uint)(iVar1 == 0);
            }
            iVar3 = (*(code *)PTR_strcmp_0046a824)(iVar5,"..");
          } while ((iVar3 == 0) ||
                  ((*(ushort *)(*(int *)PTR___ctype_b_0046abc0 + *(char *)(iVar4 + 0xb) * 2) & 8) ==
                   0));
          (*(code *)PTR_sprintf_0046a808)(auStack_c8,"/proc/%s/status",iVar5);
          iVar4 = (*(code *)PTR_fopen_0046a894)(auStack_c8,"r");
        } while (iVar4 == 0);
        iVar3 = (*(code *)PTR_fgets_0046ab78)(auStack_94,0x31,iVar4);
        if (iVar3 != 0) break;
        (*(code *)PTR_fclose_0046a85c)();
      }
      (*(code *)PTR_fclose_0046a85c)(iVar4);
      (*(code *)PTR_sscanf_0046a8c4)(auStack_94,&DAT_00450938,auStack_60);
      iVar4 = (*(code *)PTR_strcmp_0046a824)(auStack_60,param_1);
    } while (iVar4 != 0);
    uVar2 = (*(code *)PTR_strtol_0046aa48)(iVar5,0,0);
  }
  return uVar2;
}

