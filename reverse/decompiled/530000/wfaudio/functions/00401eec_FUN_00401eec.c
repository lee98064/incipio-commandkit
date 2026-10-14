/* FUN_00401eec @ 00401eec */

bool FUN_00401eec(void)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char local_120 [128];
  undefined1 auStack_a0 [128];
  
  (*(code *)PTR_memset_00423490)(local_120,0,0x80);
  (*(code *)PTR_memset_00423490)(auStack_a0,0,0x80);
  bVar4 = false;
  iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_wifi_info_ready.txt",4);
  puVar1 = PTR_stderr_00423444;
  bVar3 = false;
  if (iVar2 == 0) {
    (*(code *)PTR_fprintf_0042350c)
              (*(undefined4 *)PTR_stderr_00423444,
               "\nFILE %s FUNCTION %s LINE %d: --- file ready : %s --- \n\n","wfaudio.c",
               "getWACWifiInfo",0x38d,"/tmp/net/wac_wifi_info_ready.txt");
    iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_applyName_info.txt",4);
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_applyName_info.txt",&DAT_00411fe4);
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n",
                   "wfaudio.c","getWACWifiInfo",0x392,"/tmp/net/wac_applyName_info.txt");
        (*(code *)PTR_fread_004234ac)(local_120,0x80,1,iVar2);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get NAME=[%s]\n\n",
                   "wfaudio.c","getWACWifiInfo",0x394,local_120);
        bVar4 = local_120[0] != '\0';
        if (bVar4) {
          (*(code *)PTR_apmib_set_00423524)(0x2b1,local_120);
          FUN_00401d54();
        }
        (*(code *)PTR_fclose_00423480)(iVar2);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_applyName_info.txt");
    }
    iVar2 = (*(code *)PTR_access_00423418)("/tmp/net/wac_password_info.txt",4);
    bVar3 = bVar4;
    if (iVar2 == 0) {
      iVar2 = (*(code *)PTR_fopen_00423498)("/tmp/net/wac_password_info.txt",&DAT_00411fe4);
      puVar1 = PTR_stderr_00423444;
      if (iVar2 != 0) {
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)PTR_stderr_00423444,
                   "\nFILE %s FUNCTION %s LINE %d: --- read : %s --- \n\n","wfaudio.c",
                   "getWACWifiInfo",0x3a6,"/tmp/net/wac_password_info.txt");
        (*(code *)PTR_fread_004234ac)(auStack_a0,0x80,1,iVar2);
        (*(code *)PTR_fprintf_0042350c)
                  (*(undefined4 *)puVar1,"\nFILE %s FUNCTION %s LINE %d: => get PASS=[%s]\n\n\n",
                   "wfaudio.c","getWACWifiInfo",0x3a8,auStack_a0);
        bVar4 = true;
        (*(code *)PTR_apmib_set_00423524)(0x2b2,auStack_a0);
        (*(code *)PTR_fclose_00423480)(iVar2);
      }
      (*(code *)PTR_unlink_004234d8)("/tmp/net/wac_password_info.txt");
      bVar3 = bVar4;
    }
  }
  return bVar3;
}

