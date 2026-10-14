/* mdnsPhytrex_HomekitUpdate @ 0042e080 */

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
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    iVar2 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar2 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_0061292c);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordSetValue");
    (*(code *)PTR_dlerror_00612cd0)();
    uVar9 = (*(code *)PTR_strlen_006130b4)(param_2);
    (*pcVar3)(&DAT_00614824,param_1,uVar9,param_2);
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar3 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"DNSServiceUpdateRecord");
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar4 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordGetLength");
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar6 = (code *)(*(code *)PTR_dlsym_00613170)(iVar2,"TXTRecordGetBytesPtr");
    (*(code *)PTR_dlerror_00612cd0)();
    iVar5 = (*(code *)PTR_dlerror_00612cd0)();
    if (iVar5 != 0) {
      (*(code *)PTR_fprintf_006120cc)(*(undefined4 *)PTR_stderr_0061292c,"dlsym error: %s\n",iVar5);
    }
    uVar1 = DAT_00614820;
    uVar8 = (*pcVar4)(&DAT_00614824);
    uVar7 = (*pcVar6)(&DAT_00614824);
    (*pcVar3)(uVar1,0,0,uVar8,uVar7,0);
                    /* WARNING: Could not recover jumptable at 0x0042e318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_006115d8)(iVar2);
    return;
  }
  return;
}

