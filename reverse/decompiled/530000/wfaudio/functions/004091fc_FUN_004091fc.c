/* FUN_004091fc @ 004091fc */

undefined4 FUN_004091fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_120 [13];
  undefined1 auStack_113 [243];
  
  (*(code *)PTR_memcpy_0042357c)(auStack_120,"/etc/udhcpc/",0xd);
  (*(code *)PTR_memset_00423490)(auStack_113,0,0xf3);
  iVar1 = (*(code *)PTR_opendir_00423470)("/etc/udhcpc");
  if (iVar1 == 0) {
    (*(code *)PTR_printf_004235c0)("Cannot open /etc/udhcpc");
    uVar2 = 0xffffffff;
  }
  else {
    while( true ) {
      iVar4 = (*(code *)PTR_readdir_00423544)(iVar1);
      iVar5 = iVar4 + 0xb;
      if (iVar4 == 0) break;
      iVar3 = (*(code *)PTR_strncmp_004234e4)("udhcpc-",iVar5,7);
      if (iVar3 == 0) {
        iVar3 = (*(code *)PTR_strlen_004233e8)(iVar5);
        iVar4 = (*(code *)PTR_strncmp_004234e4)(".pid",iVar4 + iVar3 + 7,4);
        if (iVar4 == 0) {
          (*(code *)PTR_strcpy_004235e0)(auStack_120,"/etc/udhcpc/");
          (*(code *)PTR_strcat_00423508)(auStack_120,iVar5);
          (*(code *)PTR_killDaemonByPidFile_004234b0)(auStack_120);
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

