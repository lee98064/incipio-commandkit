/* mdnsPhytrex_HomekitRemove @ 0042df30 */

void mdnsPhytrex_HomekitRemove(void)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)PTR_g_isWACConfigured_00611698 != 0) {
    iVar1 = (*(code *)PTR_dlopen_006117c4)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_00612428)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_0061292c);
    }
    (*(code *)PTR_dlerror_00612cd0)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_00613170)(iVar1,"TXTRecordDeallocate");
    (*(code *)PTR_dlerror_00612cd0)();
    (*pcVar2)(&DAT_00614824);
    (*(code *)PTR_dlerror_00612cd0)();
    if (DAT_00614820 != 0) {
      pcVar2 = (code *)(*(code *)PTR_dlsym_00613170)(iVar1,"DNSServiceRefDeallocate");
      (*pcVar2)(DAT_00614820);
      DAT_00614820 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0042e060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_006115d8)(iVar1);
    return;
  }
  return;
}

