/* FUN_00408f4c @ 00408f4c */

undefined4 FUN_00408f4c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_120 [13];
  undefined1 auStack_113 [243];
  
  (*(code *)PTR_memcpy_00423294)(auStack_120,"/etc/udhcpc/",0xd);
  (*(code *)PTR_memset_004231a8)(auStack_113,0,0xf3);
  iVar1 = (*(code *)PTR_opendir_00423188)("/etc/udhcpc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004232d4)("Cannot open /etc/udhcpc");
    uVar2 = 0xffffffff;
  }
  else {
    while( true ) {
      iVar4 = (*(code *)PTR_readdir_0042325c)(iVar1);
      iVar5 = iVar4 + 0xb;
      if (iVar4 == 0) break;
      iVar3 = (*(code *)PTR_strncmp_004231fc)("udhcpc-",iVar5,7);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_strlen_00423108)(iVar5);
        iVar4 = (*(code *)PTR_strncmp_004231fc)(".pid",iVar4 + iVar3 + 7,4);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_004232f4)(auStack_120,"/etc/udhcpc/");
          (*(code *)PTR_strcat_00423220)(auStack_120,iVar5);
          (*(code *)PTR_killDaemonByPidFile_004231c8)(auStack_120);
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

