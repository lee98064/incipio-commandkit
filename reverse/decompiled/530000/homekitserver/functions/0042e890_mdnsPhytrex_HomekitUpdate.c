/* mdnsPhytrex_HomekitUpdate @ 0042e890 */

void mdnsPhytrex_HomekitUpdate(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar9;
  code *pcVar4;
  int iVar5;
  code *pcVar6;
  undefined2 uVar8;
  undefined4 uVar7;
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar2 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar2 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordSetValue");
    (*(code *)PTR_dlerror_00613b68)();
    uVar9 = (*(code *)PTR_strlen_00613f4c)(param_2);
    (*pcVar3)(&DAT_006156c4,param_1,uVar9,param_2);
    (*(code *)PTR_dlerror_00613b68)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"DNSServiceUpdateRecord");
    (*(code *)PTR_dlerror_00613b68)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar2,"TXTRecordGetBytesPtr");
    (*(code *)PTR_dlerror_00613b68)();
    iVar5 = (*(code *)PTR_dlerror_00613b68)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_00612f5c)(*(undefined4 *)PTR_stderr_006137c8,"dlsym error: %s\n",iVar5);
    }
    uVar1 = DAT_006156c0;
    uVar8 = (*pcVar4)(&DAT_006156c4);
    uVar7 = (*pcVar6)(&DAT_006156c4);
    (*pcVar3)(uVar1,0,0,uVar8,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x0042eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar2);
    return;
  }
  return;
}

