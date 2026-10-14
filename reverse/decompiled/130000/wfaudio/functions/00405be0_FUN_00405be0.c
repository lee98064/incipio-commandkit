/* FUN_00405be0 @ 00405be0 */

void FUN_00405be0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_78 [5];
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [20];
  int *local_44;
  undefined4 local_40;
  int *local_3c;
  undefined4 local_38;
  
  uVar1 = (*(code *)PTR_getpid_004232a8)();
  (*(code *)PTR_sprintf_00423164)(auStack_58,&DAT_00410e60,uVar1);
  iVar2 = (*(code *)PTR_fopen_004231b0)(PTR_s__var_run_wfaudio_nl_pid_00422218,&DAT_00410e64);
  if (iVar2 != 0) {
    uVar1 = (*(code *)PTR_strlen_00423108)(auStack_58);
    (*(code *)PTR_fwrite_0042313c)(auStack_58,uVar1,1,iVar2);
    (*(code *)PTR_fclose_00423198)(iVar2);
  }
  iVar2 = FUN_00405afc();
  if (-1 < iVar2) {
    local_64 = 1;
    local_62 = 0xc;
    local_60 = (*(code *)PTR_getpid_004232a8)();
    local_5c = 0;
    FUN_004055fc(&local_64);
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    iVar2 = (*(code *)PTR_calloc_00423234)(0x210,1);
    while( true ) {
      (*(code *)PTR_memset_004231a8)(iVar2,0,0x210);
      local_78[1] = 0x210;
      local_40 = 0xc;
      local_38 = 1;
      local_78[0] = iVar2;
      local_44 = local_78 + 2;
      local_3c = local_78;
      iVar3 = (*(code *)PTR_recvmsg_004230d8)(DAT_00422240,&local_44,0);
      if (iVar3 < 1) break;
      FUN_0040573c(iVar2 + 0x10);
    }
    (*(code *)PTR_printf_004232d4)("<<\n\nWFAudio User Rcv NL Err(%d)>>\n\n",iVar3);
    (*(code *)PTR_free_004230c8)(iVar2);
  }
  return;
}

