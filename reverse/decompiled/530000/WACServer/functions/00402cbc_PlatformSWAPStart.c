/* PlatformSWAPStart @ 00402cbc */

undefined4 PlatformSWAPStart(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_2 != 0) {
    (*(code *)PTR_printf_004332e4)("[WAC-Server] PlatformSWAPStart : inIELen=[%d] \n");
    if (param_1 == (undefined1 *)0x0) {
      pcVar1 = "[WAC-Server] inIE is NULL ";
      pcVar4 = (code *)PTR_puts_00433294;
    }
    else {
      pcVar1 = (char *)(*(code *)PTR_fopen_00433194)("/tmp/net/apple_ie.txt",&DAT_0041cdd0);
      if (pcVar1 == (char *)0x0) {
        (*(code *)PTR_printf_004332e4)
                  ("[WAC-Server] PlatformSWAPStart can not open file : %s \n",
                   "/tmp/net/apple_ie.txt");
        goto LAB_00402e24;
      }
      uVar2 = (*(code *)PTR_fileno_004330d8)(pcVar1);
      iVar3 = (*(code *)PTR_flock_004331dc)(uVar2,2);
      pcVar4 = (code *)PTR_fclose_00433178;
      if (iVar3 == 0) {
        (*(code *)PTR_printf_004332e4)
                  ("[WAC-Server] PlatformSWAPStart open file : %s \n","/tmp/net/apple_ie.txt");
        for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
          (*(code *)PTR_fprintf_00433214)(pcVar1,&DAT_0041d05c,*param_1);
          param_1 = param_1 + 1;
        }
        uVar2 = (*(code *)PTR_fileno_004330d8)(pcVar1);
        (*(code *)PTR_flock_004331dc)(uVar2,8);
        pcVar4 = (code *)PTR_fclose_00433178;
      }
    }
    (*pcVar4)(pcVar1);
  }
LAB_00402e24:
  (*(code *)PTR_system_00433284)("ls /var/tmp/net");
  return 0;
}

