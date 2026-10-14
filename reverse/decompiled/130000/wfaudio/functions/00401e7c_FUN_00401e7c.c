/* FUN_00401e7c @ 00401e7c */

bool FUN_00401e7c(void)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char local_120 [128];
  undefined1 auStack_a0 [128];
  
  (*(code *)PTR_memset_004231a8)(local_120,0,0x80);
  (*(code *)PTR_memset_004231a8)(auStack_a0,0,0x80);
  bVar4 = false;
  iVar2 = (*(code *)PTR_access_00423138)("/tmp/net/wac_wifi_info_ready.txt",4);
  puVar1 = PTR_stderr_00423160;
  bVar3 = false;
  if (iVar2 == 0) {
    (*(code *)PTR_fprintf_00423224)
              (*(undefined4 *)PTR_stderr_00423160,
               "\nFILE %s FUNCTION %s LINE %d: --- file ready : %s --- \n\n","wfaudio.c",
               "getWACWifiInfo",0x369,"/tmp/net/wac_wifi_info_ready.txt");
    iVar2 = (*(code *)PTR_access_00423138)("/tmp/net/wac_applyName_info.txt",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_004231b0)("/tmp/net/wac_applyName_info.txt",&DAT_00411d04);
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_00423224)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n",
                   "wfaudio.c","getWACWifiInfo",0x36e,"/tmp/net/wac_applyName_info.txt");
        (*(code *)PTR_fread_004231c4)(local_120,0x80,1,iVar2);
        (*(code *)PTR_fprintf_00423224)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get NAME=[%s]\n\n",
                   "wfaudio.c","getWACWifiInfo",0x370,local_120);
        bVar4 = local_120[0] != '\0';
        if (bVar4) {
          (*(code *)PTR_apmib_set_0042323c)(0x2b1,local_120);
          FUN_00401ce4();
        }
        (*(code *)PTR_fclose_00423198)(iVar2);
      }
      (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_applyName_info.txt");
    }
    iVar2 = (*(code *)PTR_access_00423138)("/tmp/net/wac_password_info.txt",4);
    bVar3 = bVar4;
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_004231b0)("/tmp/net/wac_password_info.txt",&DAT_00411d04);
      puVar1 = PTR_stderr_00423160;
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_00423224)
                  (*(undefined4 *)PTR_stderr_00423160,
                   "\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n","wfaudio.c",
                   "getWACWifiInfo",0x382,"/tmp/net/wac_password_info.txt");
        (*(code *)PTR_fread_004231c4)(auStack_a0,0x80,1,iVar2);
        (*(code *)PTR_fprintf_00423224)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get PASS=[%s]\n\n\n",
                   "wfaudio.c","getWACWifiInfo",900,auStack_a0);
        bVar4 = true;
        (*(code *)PTR_apmib_set_0042323c)(0x2b2,auStack_a0);
        (*(code *)PTR_fclose_00423198)(iVar2);
      }
      (*(code *)PTR_unlink_004231f0)("/tmp/net/wac_password_info.txt");
      bVar3 = bVar4;
    }
  }
  return bVar3;
}

