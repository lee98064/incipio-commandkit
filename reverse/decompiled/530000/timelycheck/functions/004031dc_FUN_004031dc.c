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

