/* FUN_00405e90 @ 00405e90 */

void FUN_00405e90(void)

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
  
  uVar1 = (*(code *)PTR_getpid_00423594)();
  (*(code *)PTR_sprintf_0042344c)(auStack_58,&DAT_00411140,uVar1);
  iVar2 = (*(code *)PTR_fopen_00423498)(PTR_s__var_run_wfaudio_nl_pid_004224f8,&DAT_00411144);
  if (iVar2 != 0) {
    uVar1 = (*(code *)PTR_strlen_004233e8)(auStack_58);
    (*(code *)PTR_fwrite_0042341c)(auStack_58,uVar1,1,iVar2);
    (*(code *)PTR_fclose_00423480)(iVar2);
  }
  iVar2 = FUN_00405dac();
  if (-1 < iVar2) {
    local_64 = 1;
    local_62 = 0xc;
    local_60 = (*(code *)PTR_getpid_00423594)();
    local_5c = 0;
    FUN_004058ac(&local_64);
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    iVar2 = (*(code *)PTR_calloc_0042351c)(0x210,1);
    while( true ) {
      (*(code *)PTR_memset_00423490)(iVar2,0,0x210);
      local_78[1] = 0x210;
      local_40 = 0xc;
      local_38 = 1;
      local_78[0] = iVar2;
      local_44 = local_78 + 2;
      local_3c = local_78;
      iVar3 = (*(code *)PTR_recvmsg_004233b8)(DAT_00422520,&local_44,0);
      if (iVar3 < 1) break;
      FUN_004059ec(iVar2 + 0x10);
    }
    (*(code *)PTR_printf_004235c0)("<<\n\nWFAudio User Rcv NL Err(%d)>>\n\n",iVar3);
    (*(code *)PTR_free_004233a8)(iVar2);
  }
  return;
}

