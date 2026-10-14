/* mdnsPhytrex_HomekitRemove @ 0042e740 */

void mdnsPhytrex_HomekitRemove(void)

{
  int iVar1;
  code *pcVar2;
  
  if (*(int *)PTR_g_isWACConfigured_00612528 != 0) {
    iVar1 = (*(code *)PTR_dlopen_00612650)("libdns_sd.so",1);
    if (iVar1 == 0) {
      (*(code *)PTR_fputs_006132bc)("Load libdns_so error.\n",*(undefined4 *)PTR_stderr_006137c8);
    }
    (*(code *)PTR_dlerror_00613b68)();
    pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"TXTRecordDeallocate");
    (*(code *)PTR_dlerror_00613b68)();
    (*pcVar2)(&DAT_006156c4);
    (*(code *)PTR_dlerror_00613b68)();
    if (DAT_006156c0 != 0) {
      pcVar2 = (code *)(*(code *)PTR_dlsym_0061400c)(iVar1,"DNSServiceRefDeallocate");
      (*pcVar2)(DAT_006156c0);
      DAT_006156c0 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0042e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_dlclose_0061246c)(iVar1);
    return;
  }
  return;
}

